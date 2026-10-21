// JHHBFBCJOOB$$HMNGMOOOKBA @ RVA 0x34CAAA8

bool JHHBFBCJOOB__HMNGMOOOKBA(JHHBFBCJOOB_o *__this,MethodInfo *method)

{
  bool bVar1;
  DNELIPCHKLK_o *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar3;
  int index;
  System_Collections_Generic_List_PAMEPBLOLPB__o *__this_01;
  bool bVar4;
  
  if ((DAT_04568664 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568664 = 1;
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
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    __this_01 = (pAVar3->fields).HDDNEKLMLMF;
    __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
    DNELIPCHKLK___ctor(__this_00,(MethodInfo *)0x0);
    if ((__this_00 != (DNELIPCHKLK_o *)0x0) &&
       (DNELIPCHKLK__LGOFNFEIKFB(__this_00,(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0),
       __this_01 != (System_Collections_Generic_List_PAMEPBLOLPB__o *)0x0)) {
      if ((__this_01->fields)._size < 1) {
        bVar4 = false;
      }
      else {
        index = 0;
        bVar4 = false;
        do {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              Method_System_Collections_Generic_List<PAMEPBLOLPB>_get_Item__);
          if (pIVar2 == (Il2CppObject *)0x0) goto LAB_035cabfc;
          bVar1 = DNELIPCHKLK__LFHPFJOAJIO
                            (__this_00,(System_String_o *)pIVar2[7].klass,(MethodInfo *)0x0);
          index = index + 1;
          bVar4 = (bool)(bVar4 | bVar1);
        } while (index < (__this_01->fields)._size);
      }
      return bVar4;
    }
  }
LAB_035cabfc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

