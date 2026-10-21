// ONEDJCACCGM$$AEEDECMFCBI @ RVA 0x31DCEFC

System_String_o * ONEDJCACCGM__AEEDECMFCBI(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t MNPKIDDPNBM;
  int32_t n;
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *MMAOCCAGLCH;
  int32_t *piVar3;
  System_String_o *NEADDGBNOKK;
  SimpleJSON_JSONObject_o *pSVar4;
  SimpleJSON_JSONNode_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  undefined1 auVar6 [16];
  
  if ((DAT_04566d22 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&ONEDJCACCGM_PECKMDDGEMA_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20125);
    FUN_01bab630(&StringLiteral_20461);
    FUN_01bab630(&StringLiteral_20565);
    FUN_01bab630(&StringLiteral_20566);
    FUN_01bab630(&StringLiteral_21227);
    DAT_04566d22 = 1;
  }
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_032dd180;
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20125,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) goto LAB_032dd180;
  pSVar2 = (System_String_o *)
           (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20461,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) {
LAB_032dd010:
    MMAOCCAGLCH = string_TypeInfo->static_fields->Empty;
  }
  else {
    MMAOCCAGLCH = (System_String_o *)
                  (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    if (MMAOCCAGLCH == (System_String_o *)0x0) goto LAB_032dd010;
  }
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_21227,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    if ((pIVar1->klass->_1).element_class != (ONEDJCACCGM_PECKMDDGEMA_TypeInfo->_1).element_class) {
LAB_032dd184:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    piVar3 = (int32_t *)thunk_FUN_01bda96c();
    MNPKIDDPNBM = *piVar3;
    pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        StringLiteral_20565,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((pIVar1->klass->_1).element_class != (int_TypeInfo->_1).element_class) goto LAB_032dd184;
      auVar6 = thunk_FUN_01bda96c();
      n = *auVar6._0_8_;
      NEADDGBNOKK = ONEDJCACCGM__AIHHFFMBFEL(0x10,auVar6._8_8_);
      pSVar4 = ONEDJCACCGM__FBMNAFFOAFL(NEADDGBNOKK,pSVar2,MMAOCCAGLCH,in_x3);
      pSVar2 = ONEDJCACCGM__EFMHCCPKGMG(MNPKIDDPNBM,method_00);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      pSVar5 = SimpleJSON_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
      if (pSVar4 != (SimpleJSON_JSONObject_o *)0x0) {
        (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar4,StringLiteral_21227,pSVar5,(pSVar4->klass->vtable)._8_set_Item.method);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
        (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar4,StringLiteral_20566,pSVar5,(pSVar4->klass->vtable)._8_set_Item.method);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(MMAOCCAGLCH,(MethodInfo *)0x0);
        (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar4,StringLiteral_20461,pSVar5,(pSVar4->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032dd17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar2 = (System_String_o *)
                 (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
        return pSVar2;
      }
    }
  }
LAB_032dd180:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

