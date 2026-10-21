// ONEDJCACCGM$$MHALNMAEOCF @ RVA 0x31DE82C

System_String_o * ONEDJCACCGM__MHALNMAEOCF(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *MMAOCCAGLCH;
  int64_t *piVar3;
  System_String_o *NEADDGBNOKK;
  SimpleJSON_JSONObject_o *pSVar4;
  SimpleJSON_JSONNode_o *pSVar5;
  MethodInfo *in_x3;
  int64_t n;
  int64_t n_00;
  undefined1 auVar6 [16];
  
  if ((DAT_04566d29 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
                    /* try { // try from 032de860 to 033de977 has its CatchHandler @ 032de860
                       catch() { ... } // from try @ 032de860 with catch @ 032de860
                       catch() { ... } // from try @ 032de9bc with catch @ 032de860
                       catch() { ... } // from try @ 032deaa0 with catch @ 032de860
                       catch() { ... } // from try @ 032deacc with catch @ 032de860
                       catch() { ... } // from try @ 032deb00 with catch @ 032de860 */
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20125);
    FUN_01bab630(&StringLiteral_18395);
    FUN_01bab630(&StringLiteral_20461);
    FUN_01bab630(&StringLiteral_18396);
    FUN_01bab630(&StringLiteral_19740);
    FUN_01bab630(&StringLiteral_19739);
    DAT_04566d29 = 1;
  }
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_032dea78;
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20125,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) goto LAB_032dea78;
  pSVar2 = (System_String_o *)
           (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20461,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) {
LAB_032de93c:
    MMAOCCAGLCH = string_TypeInfo->static_fields->Empty;
  }
  else {
    MMAOCCAGLCH = (System_String_o *)
                  (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    if (MMAOCCAGLCH == (System_String_o *)0x0) goto LAB_032de93c;
  }
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_19740,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* try { // try from 032de978 to 033de97f has its CatchHandler @ 032deab4 */
    if ((pIVar1->klass->_1).element_class != (long_TypeInfo->_1).element_class) {
LAB_032dea7c:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
                    /* try { // try from 032de98c to 033de997 has its CatchHandler @ 032deaa8 */
    piVar3 = (int64_t *)thunk_FUN_01bda96c();
    n = *piVar3;
                    /* try { // try from 032de99c to 033de9ab has its CatchHandler @ 032deaa4 */
    pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        StringLiteral_18396,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
                    /* try { // try from 032de9ac to 033de9bb has its CatchHandler @ 032deab0 */
                    /* try { // try from 032de9bc to 033dea9b has its CatchHandler @ 032de860 */
      if ((pIVar1->klass->_1).element_class != (long_TypeInfo->_1).element_class) goto LAB_032dea7c;
      auVar6 = thunk_FUN_01bda96c();
      n_00 = *auVar6._0_8_;
      NEADDGBNOKK = ONEDJCACCGM__AIHHFFMBFEL(0x12,auVar6._8_8_);
      pSVar4 = ONEDJCACCGM__FBMNAFFOAFL(NEADDGBNOKK,pSVar2,MMAOCCAGLCH,in_x3);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      pSVar5 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
      if (pSVar4 != (SimpleJSON_JSONObject_o *)0x0) {
        (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar4,StringLiteral_19739,pSVar5,(pSVar4->klass->vtable)._8_set_Item.method);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(n_00,(MethodInfo *)0x0);
        (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar4,StringLiteral_18395,pSVar5,(pSVar4->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032dea74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar2 = (System_String_o *)
                 (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
        return pSVar2;
      }
    }
  }
LAB_032dea78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

