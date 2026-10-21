// PJJCPEELONC$$AJJLBBCJAAL @ RVA 0x3091D04

System_String_o *
PJJCPEELONC__AJJLBBCJAAL(PJJCPEELONC_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  uint uVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_String_o *__this_00;
  float fVar13;
  undefined4 extraout_var;
  System_Nullable_int__Fields local_50;
  System_Nullable_float__Fields local_48;
  
  if ((DAT_045660ab & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4936);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4937);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4938);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4939);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    DAT_045660ab = 1;
  }
  local_50.hasValue = false;
  local_50._1_3_ = 0;
  local_50.value = 0;
  local_48 = (System_Nullable_float__Fields)
             AJAMDCEKAFE__FOKFAIPDIMB(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  if (((ulong)local_48 & 0xff) == 0) {
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_48,1.0,Method_System_Nullable<float>__ctor__);
  }
  local_50 = (System_Nullable_int__Fields)AJAMDCEKAFE__NANCFCIGNEE(1,OPAEPDIIOEB,(MethodInfo *)0x0);
  if (((ulong)local_50 & 0xff) == 0) {
    if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_03192028;
    if ((int)OPAEPDIIOEB->max_length < 2) {
LAB_03191ed4:
      iVar3 = 1;
    }
    else {
      __this_00 = OPAEPDIIOEB->m_Items[1];
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4936,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4937,
                 (MethodInfo *)0x0);
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if (__this_00 == (System_String_o *)0x0) goto LAB_03192028;
      bVar2 = System_String__Equals(__this_00,pSVar7,(MethodInfo *)0x0);
      iVar3 = 1000000;
      if (!bVar2) goto LAB_03191ed4;
    }
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_50,iVar3,Method_System_Nullable<int>__ctor__);
  }
  iVar3 = System_Nullable<int>__get_Value
                    ((System_Nullable_int__o)&local_50,Method_System_Nullable<int>_get_Value__);
  if (999999 < iVar3) {
    iVar3 = 1000000;
  }
  System_Nullable<int>___ctor
            ((System_Nullable_int__o)&local_50,iVar3,Method_System_Nullable<int>__ctor__);
  pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  fVar13 = System_Nullable<float>__get_Value
                     ((System_Nullable_float__o)&local_48,Method_System_Nullable<float>_get_Value__)
  ;
  uVar4 = System_Nullable<int>__get_Value
                    ((System_Nullable_int__o)&local_50,Method_System_Nullable<int>_get_Value__);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar10 = pIVar8->klass;
    uVar1._0_1_ = (pIVar10->_2).rank;
    uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    if (uVar11 != 0) {
      piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar9 = pIVar10->vtable + *piVar12;
          goto LAB_03191fb0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0);
LAB_03191fb0:
    (*pVVar9->methodPtr)(CONCAT44(extraout_var,fVar13),pIVar8,(ulong)uVar4,pVVar9->method);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4938,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4939,(MethodInfo *)0x0)
    ;
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    return pSVar7;
  }
LAB_03192028:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

