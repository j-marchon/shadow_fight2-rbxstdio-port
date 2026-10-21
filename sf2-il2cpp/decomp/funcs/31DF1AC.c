// ONEDJCACCGM$$NMJFIAFGBLA @ RVA 0x31DF1AC

System_String_o * ONEDJCACCGM__NMJFIAFGBLA(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *NEADDGBNOKK;
  SimpleJSON_JSONObject_o *pSVar3;
  SimpleJSON_JSONNode_o *pSVar4;
  MethodInfo *in_x3;
  undefined1 auVar5 [16];
  
  if ((DAT_04566d30 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_20125);
    FUN_01bab630(&StringLiteral_19658);
    DAT_04566d30 = 1;
  }
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        StringLiteral_20125,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pSVar2 = (System_String_o *)
               (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
      pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          StringLiteral_19658,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        auVar5 = (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
        NEADDGBNOKK = ONEDJCACCGM__AIHHFFMBFEL(0x15,auVar5._8_8_);
        pSVar3 = ONEDJCACCGM__FBMNAFFOAFL(NEADDGBNOKK,pSVar2,(System_String_o *)0x0,in_x3);
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
        }
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(auVar5._0_8_,(MethodInfo *)0x0);
        if (pSVar3 != (SimpleJSON_JSONObject_o *)0x0) {
          (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
                    (pSVar3,StringLiteral_19658,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032df2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pSVar2 = (System_String_o *)
                   (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
          return pSVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

