// ONEDJCACCGM$$MADPMFNKNJK @ RVA 0x31DE290

System_String_o * ONEDJCACCGM__MADPMFNKNJK(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *MMAOCCAGLCH;
  System_String_o *pSVar3;
  SimpleJSON_JSONObject_o *pSVar4;
  MethodInfo *in_x3;
  undefined1 auVar5 [16];
  
  if ((DAT_04566d28 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&ONEDJCACCGM_JOBKOFBMHLM_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20177);
    FUN_01bab630(&StringLiteral_20125);
    FUN_01bab630(&StringLiteral_20461);
    FUN_01bab630(&StringLiteral_21227);
    DAT_04566d28 = 1;
  }
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_032de410;
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20125,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) goto LAB_032de410;
  pSVar2 = (System_String_o *)
           (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20461,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) {
LAB_032de378:
    MMAOCCAGLCH = string_TypeInfo->static_fields->Empty;
  }
  else {
    MMAOCCAGLCH = (System_String_o *)
                  (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    if (MMAOCCAGLCH == (System_String_o *)0x0) goto LAB_032de378;
  }
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_21227,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    if ((pIVar1->klass->_1).element_class != (ONEDJCACCGM_JOBKOFBMHLM_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    auVar5 = thunk_FUN_01bda96c();
    pSVar3 = ONEDJCACCGM__EFMHCCPKGMG(*auVar5._0_8_,auVar5._8_8_);
    pSVar3 = System_String__Format(StringLiteral_20177,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    pSVar4 = ONEDJCACCGM__FBMNAFFOAFL(pSVar3,pSVar2,MMAOCCAGLCH,in_x3);
    if (pSVar4 != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032de40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
LAB_032de410:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

