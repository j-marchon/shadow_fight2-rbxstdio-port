// MatchingDialog$$OnClose @ RVA 0x342C784

void MatchingDialog__OnClose(MatchingDialog_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  CHDGOFBHAFI_o *__this_00;
  Il2CppObject *extraout_x1;
  
  if ((DAT_04568144 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568144 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,IMMNELPBGIF);
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
    CHDGOFBHAFI__GMHKJNAIEAG(__this_00,true,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0352c7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

