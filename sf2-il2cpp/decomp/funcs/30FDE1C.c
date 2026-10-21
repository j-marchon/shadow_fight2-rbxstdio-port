// AGILEPNENOH$$MEAECAEGGOD @ RVA 0x30FDE1C

void AGILEPNENOH__MEAECAEGGOD(AGILEPNENOH_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  ACHLOMELAJE_o *pAVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  AFFHKININGD_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PAMEPBLOLPB_o *CJNHFNHJHPE;
  undefined1 auVar2 [16];
  
  if ((DAT_045664af & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045664af = 1;
  }
  auVar2 = (*(__this->klass->vtable)._12_FKALJBOIAHP.methodPtr)
                     (__this,(__this->klass->vtable)._12_FKALJBOIAHP.method);
  method_00 = auVar2._8_8_;
  __this_01 = auVar2._0_8_;
  if (__this_01 == (AFFHKININGD_o *)0x0) {
    if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1;
    }
    AGILEPNENOH__DGLJCGNHLIG(true,method_00);
    __this_00 = (__this->fields).super.HDDNEKLMLMF;
    if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) goto LAB_031fdfe8;
    if (((__this_00->fields)._size < 1) ||
       (__this_01 = (AFFHKININGD_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,0,
                               Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__),
       __this_01 == (AFFHKININGD_o *)0x0)) {
      return;
    }
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 == (AFFHKININGD_o *)0x0) goto LAB_031fdfe8;
  CJNHFNHJHPE = (__this_01->fields).JPBIBBBMCCD;
  if (CJNHFNHJHPE == (PAMEPBLOLPB_o *)0x0) {
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 == (ACHLOMELAJE_o *)0x0) goto LAB_031fdfe8;
    CJNHFNHJHPE = ACHLOMELAJE__CNEIEMLJKNB(pAVar1,(__this_01->fields).KOILJHHCIEE,(MethodInfo *)0x0)
    ;
    AFFHKININGD__HKBKHKMMBFG(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (CJNHFNHJHPE == (PAMEPBLOLPB_o *)0x0) goto LAB_031fdfe8;
  }
  PAMEPBLOLPB__DKLPJPMNILO(CJNHFNHJHPE,LFJGFLNMBMC,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
    return;
  }
LAB_031fdfe8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

