// FAFFHLJEDAN$$EPBENPDCBFE @ RVA 0x3594124

bool FAFFHLJEDAN__EPBENPDCBFE(FAFFHLJEDAN_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      ((__this->fields).NPFMOEOIEKM,(AHEFOIOKDOK->fields).GHNIAGEHGEP,
                       (MethodInfo *)0x0);
  }
  return (bool)(bVar1 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

