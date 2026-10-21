// Nekki.Utils.RaidBetaLogger$$OnDestroy @ RVA 0x35A35EC

void Nekki_Utils_RaidBetaLogger__OnDestroy(Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  UnityEngine_Application_LogCallback_o *CJNHFNHJHPE;
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  GCIFMNHADDF_o *__this_01;
  System_Action_BaseDialog__o *CJNHFNHJHPE_01;
  System_Action_o *CJNHFNHJHPE_02;
  Nekki_Utils_RaidBetaLogger_o **ppNVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04568dec & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_LogCallback_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_Utils_RaidBetaLogger_EEHHDNEENIJ__);
    FUN_01bab630(&Method_Nekki_Utils_RaidBetaLogger_FAENACIILOH__);
    FUN_01bab630(&Method_Nekki_Utils_RaidBetaLogger_JAACKPFKECL__);
    FUN_01bab630(&Method_Nekki_Utils_RaidBetaLogger_JKKLLBNOIAH__);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568dec = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (UnityEngine_Application_LogCallback_o *)
                thunk_FUN_01bda818(UnityEngine_Application_LogCallback_TypeInfo,method);
  UnityEngine_Application_LogCallback___ctor();
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  KOKJOMBFNCD__BIGBBPBIECF(CJNHFNHJHPE,(MethodInfo *)0x0);
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE_00 =
       (System_Action_DBMPKPJGIPI__o *)thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__NJBAKIMLGHB(__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    __this_01 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE_01 =
         (System_Action_BaseDialog__o *)thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (GCIFMNHADDF_o *)0x0) {
      GCIFMNHADDF__JNDNMPDMDGB(__this_01,CJNHFNHJHPE_01,(MethodInfo *)0x0);
      CJNHFNHJHPE_02 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__FFCNJENGBFI(CJNHFNHJHPE_02,(MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StopAllCoroutines
                ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      Nekki_Utils_RaidBetaLogger__EAJCNKFOGFF(__this,method_00);
      if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ppNVar1 = &Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->CBDMFFMCJBK;
      *ppNVar1 = (Nekki_Utils_RaidBetaLogger_o *)0x0;
      thunk_FUN_01c20e04(ppNVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

