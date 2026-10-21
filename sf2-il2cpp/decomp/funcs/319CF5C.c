// RaidInfoTimeLeft$$OnEnable @ RVA 0x319CF5C

void RaidInfoTimeLeft__OnEnable(RaidInfoTimeLeft_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ab5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_RaidInfoTimeLeft_IAKHIFOFLGO__);
    DAT_04566ab5 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

