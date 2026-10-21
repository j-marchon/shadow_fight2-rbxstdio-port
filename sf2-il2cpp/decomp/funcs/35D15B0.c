// GGLDGAAPKCF$$JMNCGJLMAIM @ RVA 0x35D15B0

/* WARNING: Type propagation algorithm not settling */

void GGLDGAAPKCF__JMNCGJLMAIM
               (GGLDGAAPKCF_o *__this,bool HPACPFLKHPK,System_String_o *IMMNELPBGIF,
               Il2CppObject *OKECKCEAHNA,MethodInfo *method)

{
  System_RuntimeFieldHandle_Fields *pSVar1;
  System_RuntimeFieldHandle_Fields *pSVar2;
  int iVar3;
  int32_t item;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str1;
  System_String_o *str2;
  SimpleJSON_JSONNode_o *pSVar7;
  long *plVar8;
  ACHLOMELAJE_o *__this_00;
  System_Action_o *pSVar9;
  uint uVar10;
  System_Collections_Generic_List_int__o *__this_01;
  
  if ((DAT_04568fe7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_726);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_727);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_728);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_729);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_730);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_731);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_732);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_733);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Remove__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568fe7 = 1;
  }
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_726,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_727,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  pSVar1 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_730;
  if (!HPACPFLKHPK) {
    pSVar1 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_728;
  }
  pSVar2 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_731;
  if (!HPACPFLKHPK) {
    pSVar2 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_729;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,(System_RuntimeFieldHandle_o)pSVar1->value,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar2->value,(MethodInfo *)0x0);
  str1 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_732,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_733,(MethodInfo *)0x0);
  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat(pSVar6,str1,str2,IMMNELPBGIF,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  if (!HPACPFLKHPK) {
LAB_036d18f0:
    pSVar9 = (__this->fields).JDABHAFPPOL;
    if (pSVar9 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036d191c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar9->fields).super.super.invoke_impl)
                ((pSVar9->fields).super.super.method_code,(pSVar9->fields).super.super.method);
      return;
    }
    return;
  }
  pSVar7 = SimpleJSON_JSON__Parse(IMMNELPBGIF,(MethodInfo *)0x0);
  if (pSVar7 != (SimpleJSON_JSONNode_o *)0x0) {
    iVar3 = (*(pSVar7->klass->vtable)._11_get_Count.methodPtr)
                      (pSVar7,(pSVar7->klass->vtable)._11_get_Count.method);
    if (0 < iVar3) {
      uVar10 = 0;
      do {
        __this_01 = (__this->fields).KNKAAIDGBJL;
        plVar8 = (long *)(*(pSVar7->klass->vtable)._5_get_Item.methodPtr)
                                   (pSVar7,(ulong)uVar10,(pSVar7->klass->vtable)._5_get_Item.method)
        ;
        if (plVar8 == (long *)0x0) goto LAB_036d193c;
        item = (**(code **)(*plVar8 + 0x348))(plVar8,*(undefined8 *)(*plVar8 + 0x350));
        if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_036d193c;
        System_Collections_Generic_List<int>__Remove
                  (__this_01,item,Method_System_Collections_Generic_List<int>_Remove__);
        uVar10 = uVar10 + 1;
        iVar3 = (*(pSVar7->klass->vtable)._11_get_Count.methodPtr)
                          (pSVar7,(pSVar7->klass->vtable)._11_get_Count.method);
      } while ((int)uVar10 < iVar3);
    }
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
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__EEIICBEOCOE(__this_00,(__this->fields).KNKAAIDGBJL,(MethodInfo *)0x0);
      goto LAB_036d18f0;
    }
  }
LAB_036d193c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

