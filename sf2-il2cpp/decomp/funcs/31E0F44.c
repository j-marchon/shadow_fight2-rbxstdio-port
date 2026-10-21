// ONEDJCACCGM$$DLIKOBJAJGD @ RVA 0x31E0F44

System_String_o * ONEDJCACCGM__DLIKOBJAJGD(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  SimpleJSON_JSONObject_o *pSVar1;
  System_String_o *pSVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  
  if ((DAT_04566d39 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_19347);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_16291);
    DAT_04566d39 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    return StringLiteral_1;
  }
  pSVar1 = ONEDJCACCGM__OGNMJNOFPPP(0xe,method);
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) {
LAB_032e1138:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar2 = (System_String_o *)
           System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_16291,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  if ((pSVar2 == (System_String_o *)0x0) || (pSVar2->klass == string_TypeInfo)) {
    pSVar3 = SimpleJSON_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
    if (pSVar1 == (SimpleJSON_JSONObject_o *)0x0) goto LAB_032e1138;
    (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
              (pSVar1,StringLiteral_16291,pSVar3,(pSVar1->klass->vtable)._8_set_Item.method);
    pSVar2 = (System_String_o *)
             System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        StringLiteral_19347,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if ((pSVar2 == (System_String_o *)0x0) || (pSVar2->klass == string_TypeInfo)) {
      pSVar3 = SimpleJSON_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
      (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
                (pSVar1,StringLiteral_19347,pSVar3,(pSVar1->klass->vtable)._8_set_Item.method);
                    /* try { // try from 032e1110 to 033e11a7 has its CatchHandler @ 032e1110
                       catch() { ... } // from try @ 032e1110 with catch @ 032e1110
                       catch() { ... } // from try @ 032e11e0 with catch @ 032e1110
                       catch() { ... } // from try @ 032e1210 with catch @ 032e1110
                       catch() { ... } // from try @ 032e1238 with catch @ 032e1110
                       catch() { ... } // from try @ 032e1268 with catch @ 032e1110 */
                    /* WARNING: Could not recover jumptable at 0x032e1114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

