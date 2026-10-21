// PCEDNFLCPPF$$GPGEBGLFJIA @ RVA 0x3329538

void PCEDNFLCPPF__GPGEBGLFJIA(PCEDNFLCPPF_o *__this,MethodInfo *method)

{
  Nekki_Utils_GlobalTimer_o *__this_00;
  int64_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  long lVar2;
  
  if ((DAT_045678bb & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045678bb = 1;
    method = extraout_x1;
  }
  lVar2 = (__this->fields).LMBEJLLKCEO;
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) {
    iVar1 = Nekki_Utils_GlobalTimer__GetTime(__this_00,(MethodInfo *)0x0);
    if (lVar2 + 900 <= iVar1) {
      PCEDNFLCPPF__FEEHAMMFHLI(__this,method_00);
    }
    (__this->fields).LMBEJLLKCEO = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

