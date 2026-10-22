param([string]$InDir, [string]$OutDir)
# base64 text -> AES-256-CBC (PKCS7) -> UTF-8 XML, with the key from sf2-data\keys (never printed)
$k = Get-Content -Raw 'D:\SF2-Port\sf2-data\keys\content_aes.json' | ConvertFrom-Json
$aes = [System.Security.Cryptography.Aes]::Create()
$aes.Key = [Convert]::FromBase64String($k.key_b64)
$aes.IV = [Convert]::FromBase64String($k.iv_b64)
$aes.Mode = 'CBC'; $aes.Padding = 'PKCS7'
New-Item -ItemType Directory -Force $OutDir | Out-Null
foreach ($f in Get-ChildItem $InDir -File) {
    $text = [IO.File]::ReadAllText($f.FullName).Trim()
    try {
        $bytes = [Convert]::FromBase64String($text)
        $plain = $aes.CreateDecryptor().TransformFinalBlock($bytes, 0, $bytes.Length)
        [IO.File]::WriteAllBytes((Join-Path $OutDir ($f.Name + '.xml')), $plain)
        "$($f.Name) ok $($plain.Length)"
    } catch {
        Copy-Item $f.FullName (Join-Path $OutDir ($f.Name + '.raw'))
        "$($f.Name) plain/failed"
    }
}
