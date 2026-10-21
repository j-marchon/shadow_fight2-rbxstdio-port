// ONEDJCACCGM$$KDGOOENFCNG @ RVA 0x31DF680

System_String_o * ONEDJCACCGM__KDGOOENFCNG(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  SimpleJSON_JSONObject_o *pSVar3;
  MethodInfo *in_x3;
  undefined1 auVar4 [16];
  
  if ((DAT_04566d34 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&StringLiteral_20125);
    DAT_04566d34 = 1;
  }
  if ((BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) &&
     (pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          StringLiteral_20125,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__),
     pIVar1 != (Il2CppObject *)0x0)) {
    auVar4 = (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    pSVar2 = ONEDJCACCGM__AIHHFFMBFEL(0x16,auVar4._8_8_);
    pSVar3 = ONEDJCACCGM__FBMNAFFOAFL(pSVar2,auVar4._0_8_,(System_String_o *)0x0,in_x3);
    if (pSVar3 != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032df718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

