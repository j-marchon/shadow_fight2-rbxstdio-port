// AFFHKININGD$$HKNMJCKPHHC @ RVA 0x333E4A4

System_Collections_Generic_List_AJNNHGGLGIF__o *
AFFHKININGD__HKNMJCKPHHC(AFFHKININGD_o *__this,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar2;
  
  if ((DAT_045679a1 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045679a1 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    lVar1 = 0x158;
    if ((pAVar2->fields).IOHEOKOOJFA != false) {
      lVar1 = 0x160;
    }
    return *(System_Collections_Generic_List_AJNNHGGLGIF__o **)((long)&__this->klass + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

