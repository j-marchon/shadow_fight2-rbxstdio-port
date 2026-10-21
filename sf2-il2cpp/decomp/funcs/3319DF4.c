// PCEDNFLCPPF$$DHKBHGNCAMC @ RVA 0x3319DF4

void PCEDNFLCPPF__DHKBHGNCAMC(PCEDNFLCPPF_o *__this,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  SimpleJSON_JSONNode_o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)DFIBGGDJPLM;
  if ((DAT_045678c5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3159);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3160);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3161);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3162);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_045678c5 = 1;
    method_00 = extraout_x1;
  }
  pSVar2 = PCEDNFLCPPF__GAIEEOLGFKA(__this,method_00);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3159,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3160,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (pSVar2 != (SimpleJSON_JSONNode_o *)0x0) {
    pSVar6 = (SimpleJSON_JSONNode_o *)
             (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar2,pSVar5,(pSVar2->klass->vtable)._7_get_Item.method);
    iVar1 = OGMFFOMHGIA__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3161,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3162,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar6 = SimpleJSON_JSONNode__op_Implicit(iVar1 + DFIBGGDJPLM,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03419fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
              (pSVar2,pSVar5,pSVar6,(pSVar2->klass->vtable)._8_set_Item.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

