// AGILEPNENOH$$GOLLEBBHEHE @ RVA 0x30FDB20

void AGILEPNENOH__GOLLEBBHEHE
               (AGILEPNENOH_o *__this,AFFHKININGD_o *FBFPLEFCDOK,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  Nekki_Utils_GlobalTimer_o *__this_00;
  int64_t iVar1;
  
  if ((DAT_045664a7 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045664a7 = 1;
  }
  OOMHDDBCBJP__GOLLEBBHEHE((OOMHDDBCBJP_o *)__this,FBFPLEFCDOK,DPJIDNBJIBG,(MethodInfo *)0x0);
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) {
    iVar1 = Nekki_Utils_GlobalTimer__GetTime(__this_00,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x031fdbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._18_NCENBOMEPBN.methodPtr)
              (__this,iVar1,(__this->klass->vtable)._18_NCENBOMEPBN.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

