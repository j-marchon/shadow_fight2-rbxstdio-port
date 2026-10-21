// HBDABDKPGJC.<>c$$GNLDILNGKHG @ RVA 0x3230C08

bool HBDABDKPGJC_<>c__GNLDILNGKHG
               (HBDABDKPGJC___c_o *__this,Core_Configs_Models_PackSettings_o *pack,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Core_Configs_Models_PackSettingsExtension__IsDownloaded(pack,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  bVar1 = Core_Configs_Models_PackSettingsExtension__CheckDownloadConditions(pack,(MethodInfo *)0x0)
  ;
  return bVar1;
}

