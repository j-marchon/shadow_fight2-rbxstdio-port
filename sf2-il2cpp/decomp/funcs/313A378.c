// NJNCPNBIPCD$$.ctor @ RVA 0x313A378

void NJNCPNBIPCD___ctor(NJNCPNBIPCD_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04566721 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_NJNCPNBIPCD_LLCONNGHGKD__);
    DAT_04566721 = 1;
  }
  (__this->fields).ICOPCAKPPCJ = 1;
  (__this->fields).BJEIJEJKHJO = -1;
  (__this->fields).FJKKGKCJMGB = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnUpdate(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

