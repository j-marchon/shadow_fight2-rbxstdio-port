// ONEDJCACCGM$$NHOHBBHHEFE @ RVA 0x31E0990

System_String_o * ONEDJCACCGM__NHOHBBHHEFE(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *NEADDGBNOKK;
  SimpleJSON_JSONObject_o *pSVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  MethodInfo *in_x3;
  undefined1 auVar5 [16];
  
  if ((DAT_04566d41 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20125);
    FUN_01bab630(&StringLiteral_20461);
    DAT_04566d41 = 1;
  }
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_032e0a88;
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20125,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) goto LAB_032e0a88;
  pSVar2 = (System_String_o *)
           (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20461,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  uVar4 = extraout_x1;
  if (pIVar1 == (Il2CppObject *)0x0) {
LAB_032e0a48:
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = string_TypeInfo->static_fields->Empty;
  }
  else {
    auVar5 = (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    uVar4 = auVar5._8_8_;
    if (auVar5._0_8_ == 0) goto LAB_032e0a48;
  }
  NEADDGBNOKK = ONEDJCACCGM__AIHHFFMBFEL(0x13,auVar5._8_8_);
  pSVar3 = ONEDJCACCGM__FBMNAFFOAFL(NEADDGBNOKK,pSVar2,auVar5._0_8_,in_x3);
  if (pSVar3 != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032e0a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
    return pSVar2;
  }
LAB_032e0a88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

