// OLKKAIFGGAK$$AHNAGGGOLBK @ RVA 0x34F798C

void OLKKAIFGGAK__AHNAGGGOLBK(OLKKAIFGGAK_o *__this,HMKNNONIOGK_o *CPECAEHDDDB,MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_045687f5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_5582);
    DAT_045687f5 = 1;
  }
  if (CPECAEHDDDB == (HMKNNONIOGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = *(int *)&(CPECAEHDDDB->fields).super.field_0x34;
  if (iVar1 == 1) {
    OLKKAIFGGAK__GMAAOIKBIHO(__this,(CPECAEHDDDB->fields).JBNGADJBDHB,method);
    OLKKAIFGGAK__CJMEKBIFENJ(__this,method_01);
    return;
  }
  if (iVar1 == 0) {
    OLKKAIFGGAK__EHHDKBLFKAE(__this,(CPECAEHDDDB->fields).JBNGADJBDHB,method);
    OLKKAIFGGAK__JPFGODGJKNP(__this,method_00);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_5582,(MethodInfo *)0x0);
  return;
}

