// ONEDJCACCGM$$KLAPKGPEHKC @ RVA 0x31DFE04

System_String_o * ONEDJCACCGM__KLAPKGPEHKC(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  int32_t n;
  SimpleJSON_JSONObject_o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  SimpleJSON_JSONNode_o *pSVar5;
  ACHLOMELAJE_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d43 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21888);
    FUN_01bab630(&StringLiteral_19787);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566d43 = 1;
    method = extraout_x1;
  }
  pSVar2 = ONEDJCACCGM__OGNMJNOFPPP(3,method);
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                       StringLiteral_19787,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    pSVar4 = StringLiteral_1;
    if (bVar1) {
      pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          StringLiteral_19787,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_032dffc8;
      pSVar4 = (System_String_o *)
               (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method);
    }
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = SimpleJSON_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    if (pSVar2 != (SimpleJSON_JSONObject_o *)0x0) {
      (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                (pSVar2,StringLiteral_19787,pSVar5,(pSVar2->klass->vtable)._8_set_Item.method);
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
      __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this != (ACHLOMELAJE_o *)0x0) {
        n = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
        (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar2,StringLiteral_21888,pSVar5,(pSVar2->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032dffc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar4 = (System_String_o *)
                 (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
        return pSVar4;
      }
    }
  }
LAB_032dffc8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

