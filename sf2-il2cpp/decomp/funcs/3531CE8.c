// JJPNLEPEAFM$$AGMHOCPINKD @ RVA 0x3531CE8

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__AGMHOCPINKD(MethodInfo *method)

{
  System_String_o *NDNGGHKKMEJ;
  System_String_o *AOJIIDGCBEC;
  System_Action_o **ppSVar1;
  ONDBPECEKAJ_o *__this;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  System_Action_o *CGLKNMPIAJF;
  
  if ((DAT_04568a63 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&ONDBPECEKAJ_TypeInfo);
    FUN_01bab630(&Method_JJPNLEPEAFM_<>c_AIDODMPPAEO__);
    FUN_01bab630(&JJPNLEPEAFM_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_17790);
    FUN_01bab630(&StringLiteral_6041);
    DAT_04568a63 = 1;
  }
  if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AOJIIDGCBEC = StringLiteral_17790;
  NDNGGHKKMEJ = StringLiteral_6041;
  CGLKNMPIAJF = JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__19_0;
  if (CGLKNMPIAJF == (System_Action_o *)0x0) {
    if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CGLKNMPIAJF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__19_0;
    *ppSVar1 = CGLKNMPIAJF;
    thunk_FUN_01c20e04(ppSVar1,CGLKNMPIAJF);
  }
  __this = (ONDBPECEKAJ_o *)thunk_FUN_01bda818(ONDBPECEKAJ_TypeInfo);
  ONDBPECEKAJ___ctor(__this,NDNGGHKKMEJ,AOJIIDGCBEC,true,CGLKNMPIAJF,-1,(MethodInfo *)0x0);
  pNVar2 = GCIFMNHADDF__ACDDKABEBAP(0x28,(Il2CppObject *)__this,(MethodInfo *)0x0);
  return pNVar2;
}

