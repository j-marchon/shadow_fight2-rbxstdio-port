// TypeDefIndex 1399
// Namespace: 
// public class LIEDABKCNJM : AGKAPHHMGKD
// Fields:
//   private readonly string[] LNONGJEDIFI; // 0x20
//   private readonly KALOJBMDHLA CHONKEHLFNF; // 0x28
//   private readonly KALOJBMDHLA OLPFCBOJCHF; // 0x30

// ===== protected override bool MGBDOBDPOGB()  [RVA 0x3178C78]
// LIEDABKCNJM$$MGBDOBDPOGB @ RVA 0x3178C78

bool LIEDABKCNJM__MGBDOBDPOGB(LIEDABKCNJM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456696d & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_0456696d = 1;
    method = extraout_x1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
  }
  iVar1 = EOAOCPLIKOI__FLAEIMOEDKO((MethodInfo *)0x0);
  return iVar1 < 0x1d;
}


// ===== public void .ctor()  [RVA 0x3178CD4]
// LIEDABKCNJM$$.ctor @ RVA 0x3178CD4

void LIEDABKCNJM___ctor(LIEDABKCNJM_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  KALOJBMDHLA_o *pKVar3;
  
  if ((DAT_0456696e & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_10338/*"Please confirm this permissions since they are needed to run the game"*/);
    FUN_01bab630(&StringLiteral_10619/*"QUIT"*/);
    FUN_01bab630(&StringLiteral_10247/*"Permissions Error"*/);
    FUN_01bab630(&StringLiteral_11512/*"SETTINGS"*/);
    FUN_01bab630(&StringLiteral_16426/*"android.permission.READ_PHONE_STATE"*/);
    FUN_01bab630(&StringLiteral_10248/*"Permissions Request"*/);
    FUN_01bab630(&StringLiteral_5218/*"Dear player, in the following screen you will be asked to grant access to Phone Calls. This permission is used ONLY t..."*/);
    FUN_01bab630(&StringLiteral_10750/*"RETRY"*/);
    DAT_0456696e = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 03278dc0 to 03378e63 has its CatchHandler @ 03278dc0
                       catch() { ... } // from try @ 03278dc0 with catch @ 03278dc0
                       catch() { ... } // from try @ 03278e6c with catch @ 03278dc0
                       catch() { ... } // from try @ 03278ed4 with catch @ 03278dc0
                       catch() { ... } // from try @ 03278f04 with catch @ 03278dc0 */
      pSVar1->m_Items[0] = StringLiteral_16426/*"android.permission.READ_PHONE_STATE"*/;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).LNONGJEDIFI;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pKVar3 = KALOJBMDHLA__GEBNENADLLM
                         (StringLiteral_10248/*"Permissions Request"*/,StringLiteral_5218/*"Dear player, in the following screen you will be asked to grant access to Phone Calls. This permission is used ONLY t..."*/,StringLiteral_9679/*"OK"*/,
                          (MethodInfo *)0x0);
      (__this->fields).CHONKEHLFNF = pKVar3;
      thunk_FUN_01c20e04();
      pKVar3 = KALOJBMDHLA__AGEMKIGEALG
                         (StringLiteral_10247/*"Permissions Error"*/,StringLiteral_10338/*"Please confirm this permissions since they are needed to run the game"*/,StringLiteral_10750/*"RETRY"*/,
                          StringLiteral_10619/*"QUIT"*/,StringLiteral_11512/*"SETTINGS"*/,(MethodInfo *)0x0);
      (__this->fields).OLPFCBOJCHF = pKVar3;
      thunk_FUN_01c20e04();
                    /* try { // try from 03278e64 to 03378e6b has its CatchHandler @ 03278eb8 */
                    /* try { // try from 03278e6c to 03378ecf has its CatchHandler @ 03278dc0 */
      AGKAPHHMGKD___ctor((AGKAPHHMGKD_o *)__this,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void PNCAOHDJNCD()  [RVA 0x3178E84]
// LIEDABKCNJM$$PNCAOHDJNCD @ RVA 0x3178E84

void LIEDABKCNJM__PNCAOHDJNCD(LIEDABKCNJM_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_ApplicationController__Quit((MethodInfo *)0x0);
  return;
}


// ===== protected override KALOJBMDHLA IIPGLABFDFO()  [RVA 0x3178E8C]
// LIEDABKCNJM$$IIPGLABFDFO @ RVA 0x3178E8C

KALOJBMDHLA_o * LIEDABKCNJM__IIPGLABFDFO(LIEDABKCNJM_o *__this,MethodInfo *method)

{
  return (__this->fields).CHONKEHLFNF;
}


// ===== protected override bool MPHCABMLJIL()  [RVA 0x3178E94]
// LIEDABKCNJM$$MPHCABMLJIL @ RVA 0x3178E94

bool LIEDABKCNJM__MPHCABMLJIL(LIEDABKCNJM_o *__this,MethodInfo *method)

{
  return true;
}


// ===== protected override string[] AANEEALGDAK()  [RVA 0x3178E9C]
// LIEDABKCNJM$$AANEEALGDAK @ RVA 0x3178E9C

System_String_array * LIEDABKCNJM__AANEEALGDAK(LIEDABKCNJM_o *__this,MethodInfo *method)

{
  return (__this->fields).LNONGJEDIFI;
}


// ===== protected override KALOJBMDHLA CMHPNBBKBBJ()  [RVA 0x3178EA4]
// LIEDABKCNJM$$CMHPNBBKBBJ @ RVA 0x3178EA4

KALOJBMDHLA_o * LIEDABKCNJM__CMHPNBBKBBJ(LIEDABKCNJM_o *__this,MethodInfo *method)

{
  return (__this->fields).OLPFCBOJCHF;
}


// ===== protected override void DAIBFBJJEKI()  [RVA 0x3178EAC]
// LIEDABKCNJM$$DAIBFBJJEKI @ RVA 0x3178EAC

void LIEDABKCNJM__DAIBFBJJEKI(LIEDABKCNJM_o *__this,MethodInfo *method)

{
  (__this->fields).super.super._DGMNNLJEMIB_k__BackingField = true;
  return;
}

