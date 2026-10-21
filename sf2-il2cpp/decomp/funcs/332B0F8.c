// PCEDNFLCPPF$$EHANNHIKALE @ RVA 0x332B0F8

void PCEDNFLCPPF__EHANNHIKALE
               (PCEDNFLCPPF_o *__this,int32_t BPCMPECIOLF,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  SimpleJSON_JSONNode_o *pSVar1;
  long *plVar2;
  SimpleJSON_JSONObject_o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)BPCMPECIOLF;
  if ((DAT_045678be & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3127);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3128);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3129);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3130);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    DAT_045678be = 1;
    method_00 = extraout_x1;
  }
  pSVar1 = PCEDNFLCPPF__EEMOFEAONLO(__this,method_00);
  if (pSVar1 != (SimpleJSON_JSONNode_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._41_get_AsArray.methodPtr)
                               (pSVar1,(pSVar1->klass->vtable)._41_get_AsArray.method);
    __this_00 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
    SimpleJSON_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x288))(plVar2,__this_00,*(undefined8 *)(*plVar2 + 0x290));
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3127,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3128,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      pSVar1 = SimpleJSON_JSONNode__op_Implicit(BPCMPECIOLF,(MethodInfo *)0x0);
      if (__this_00 != (SimpleJSON_JSONObject_o *)0x0) {
        (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                  (__this_00,pSVar5,pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3129,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3130,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar1 = SimpleJSON_JSONNode__op_Implicit(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0342b314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                  (__this_00,pSVar5,pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

