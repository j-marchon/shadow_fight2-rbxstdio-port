// PCEDNFLCPPF$$EEMOFEAONLO @ RVA 0x332AF74

SimpleJSON_JSONNode_o * PCEDNFLCPPF__EEMOFEAONLO(PCEDNFLCPPF_o *__this,MethodInfo *method)

{
  bool bVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  SimpleJSON_JSONArray_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045678bc & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_19479);
    DAT_045678bc = 1;
    method = extraout_x1;
  }
  pSVar2 = PCEDNFLCPPF__FEIKCODPEFC(__this,method);
  if (pSVar2 != (SimpleJSON_JSONNode_o *)0x0) {
    __this_00 = (SimpleJSON_JSONArray_o *)
                (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar2,StringLiteral_19479,(pSVar2->klass->vtable)._7_get_Item.method);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    bVar1 = SimpleJSON_JSONNode__op_Equality
                      ((SimpleJSON_JSONNode_o *)__this_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
      SimpleJSON_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
      (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                (pSVar2,StringLiteral_19479,__this_00,(pSVar2->klass->vtable)._8_set_Item.method);
    }
    return (SimpleJSON_JSONNode_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

