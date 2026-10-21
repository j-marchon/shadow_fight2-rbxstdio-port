// Nekki.Utils.RaidBetaLogger.BPOIDCPBLEF$$IPHCGIAMOAL @ RVA 0x35A5868

void Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF__IPHCGIAMOAL
               (Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_o *__this,MethodInfo *method)

{
  Nekki_Utils_RaidBetaLogger_o *pNVar1;
  System_Threading_CancellationTokenSource_o **ppSVar2;
  System_Threading_CancellationTokenSource_o *__this_00;
  
  if ((DAT_04568e06 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10803);
    DAT_04568e06 = 1;
  }
  pNVar1 = (__this->fields).__4__this;
  if (pNVar1 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
    __this_00 = (pNVar1->fields).NCLFCOGENLF;
    if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
      System_Threading_CancellationTokenSource__Dispose(__this_00,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).__4__this;
      if (pNVar1 == (Nekki_Utils_RaidBetaLogger_o *)0x0) goto LAB_036a5950;
    }
    ppSVar2 = &(pNVar1->fields).NCLFCOGENLF;
    *ppSVar2 = (System_Threading_CancellationTokenSource_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
    pNVar1 = (__this->fields).__4__this;
    if (pNVar1 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
      (pNVar1->fields)._JHDKPABDGEL_k__BackingField = true;
      (pNVar1->fields)._NOEPHKDKPNJ_k__BackingField = false;
      (pNVar1->fields)._GCJCDAIIAJF_k__BackingField = (__this->fields).hasExceptions;
      (pNVar1->fields).LastSendDumpFileName = (__this->fields).filePath;
      thunk_FUN_01c20e04();
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_10803,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).__4__this;
      if (pNVar1 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
        (pNVar1->fields).NHEHAJAKGAD = 0;
        if ((pNVar1->fields).AJAMJHHLMFM != false) {
          Nekki_SF2_Core_ApplicationController__Quit((MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_036a5950:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

