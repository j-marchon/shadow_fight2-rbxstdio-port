// Nekki.Utils.RaidBetaLogger.EPPOBDNMIFL$$FDEMGKIKLKL @ RVA 0x35A5954

void Nekki_Utils_RaidBetaLogger_EPPOBDNMIFL__FDEMGKIKLKL
               (Nekki_Utils_RaidBetaLogger_EPPOBDNMIFL_o *__this,System_String_o *error,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Threading_CancellationTokenSource_o *pSVar2;
  System_Action_o *AENHHCABJBP;
  System_Action_string__o *KMLNNMBIHLB;
  System_Threading_CancellationToken_o NPAAFDINGAB;
  Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_o *pNVar3;
  Nekki_Utils_RaidBetaLogger_o *pNVar4;
  System_Threading_CancellationTokenSource_o **ppSVar5;
  UnityEngine_WWWForm_o *OFOIILMAIPG;
  System_TimeSpan_o MINHPKOPAIE;
  
  if ((DAT_04568e07 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_FCOFCHFGHAB__);
    FUN_01bab630(&Method_Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_IPHCGIAMOAL__);
    FUN_01bab630(&System_Threading_CancellationTokenSource_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&StringLiteral_10801);
    DAT_04568e07 = 1;
  }
  pSVar1 = System_String__Concat(StringLiteral_10801,error,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  pNVar3 = (__this->fields).CS___8__locals1;
  if ((pNVar3 != (Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_o *)0x0) &&
     (pNVar4 = (pNVar3->fields).__4__this, pNVar4 != (Nekki_Utils_RaidBetaLogger_o *)0x0)) {
    pSVar2 = (pNVar4->fields).NCLFCOGENLF;
    if (pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0) {
      System_Threading_CancellationTokenSource__Dispose(pSVar2,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).CS___8__locals1;
      if (pNVar3 == (Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_o *)0x0) goto LAB_036a5b9c;
    }
    pNVar4 = (pNVar3->fields).__4__this;
    pSVar2 = (System_Threading_CancellationTokenSource_o *)
             thunk_FUN_01bda818(System_Threading_CancellationTokenSource_TypeInfo);
    System_Threading_CancellationTokenSource___ctor(pSVar2,(MethodInfo *)0x0);
    if (pNVar4 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
      ppSVar5 = &(pNVar4->fields).NCLFCOGENLF;
      *ppSVar5 = pSVar2;
      thunk_FUN_01c20e04(ppSVar5,pSVar2);
      if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar1 = Nekki_Utils_RaidBetaLogger__FPMIAHBFFNM((MethodInfo *)0x0);
      OFOIILMAIPG = (__this->fields).form;
      if (DAT_04568ee9 == '\0') {
        FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
        DAT_04568ee9 = '\x01';
      }
      if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MINHPKOPAIE.fields._ticks =
           (System_TimeSpan_Fields)
           (Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->_LHFHJAHDOOA_k__BackingField).fields
           ._ticks;
      AENHHCABJBP = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      KMLNNMBIHLB = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
      System_Action<object>___ctor();
      pNVar3 = (__this->fields).CS___8__locals1;
      if (((pNVar3 != (Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_o *)0x0) &&
          (pNVar4 = (pNVar3->fields).__4__this, pNVar4 != (Nekki_Utils_RaidBetaLogger_o *)0x0)) &&
         (pSVar2 = (pNVar4->fields).NCLFCOGENLF,
         pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0)) {
        NPAAFDINGAB = System_Threading_CancellationTokenSource__get_Token(pSVar2,(MethodInfo *)0x0);
        DNFILNINCDI__JDJHKOMMHKP
                  (pSVar1,OFOIILMAIPG,MINHPKOPAIE,AENHHCABJBP,KMLNNMBIHLB,NPAAFDINGAB,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_036a5b9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

