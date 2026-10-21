// Nekki.Utils.RaidBetaLogger.BPOIDCPBLEF$$FCOFCHFGHAB @ RVA 0x35A5754

void Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF__FCOFCHFGHAB
               (Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_o *__this,System_String_o *error,
               MethodInfo *method)

{
  Nekki_Utils_RaidBetaLogger_o *pNVar1;
  System_Threading_CancellationTokenSource_o **ppSVar2;
  System_String_o *message;
  System_Threading_CancellationTokenSource_o *__this_00;
  
  if ((DAT_04568e05 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10802);
    DAT_04568e05 = 1;
  }
  pNVar1 = (__this->fields).__4__this;
  if (pNVar1 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
    __this_00 = (pNVar1->fields).NCLFCOGENLF;
    if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
      System_Threading_CancellationTokenSource__Dispose(__this_00,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).__4__this;
      if (pNVar1 == (Nekki_Utils_RaidBetaLogger_o *)0x0) goto LAB_036a583c;
    }
    ppSVar2 = &(pNVar1->fields).NCLFCOGENLF;
    *ppSVar2 = (System_Threading_CancellationTokenSource_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
    pNVar1 = (__this->fields).__4__this;
    if (pNVar1 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
      (pNVar1->fields)._NOEPHKDKPNJ_k__BackingField = false;
      message = System_String__Concat(StringLiteral_10802,error,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).__4__this;
      if (pNVar1 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
        if ((pNVar1->fields).AJAMJHHLMFM != false) {
          Nekki_SF2_Core_ApplicationController__Quit((MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_036a583c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

