// LHOMEBJDFLD$$AHFNACKMNAH @ RVA 0x3023148

void LHOMEBJDFLD__AHFNACKMNAH(LHOMEBJDFLD_o *__this,MethodInfo *method)

{
  System_Action_bool__o *CJNHFNHJHPE;
  System_Action_o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c6c & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_LHOMEBJDFLD_OONAFIABOCC__);
    FUN_01bab630(&Method_LHOMEBJDFLD_PJEOKMGNMNF__);
    DAT_04565c6c = 1;
    method = extraout_x1;
  }
  LHOMEBJDFLD__MBFCKLGGNFE(__this,method);
  CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  Nekki_SF2_Core_ApplicationController__add_OnPause(CJNHFNHJHPE,(MethodInfo *)0x0);
  CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnUpdate(CJNHFNHJHPE_00,(MethodInfo *)0x0);
  return;
}

