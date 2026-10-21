// BDGDJDGHMJI$$IFIMMEKBCOD @ RVA 0x32658C8

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__IFIMMEKBCOD(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  int32_t OGPGLGPMEPD;
  System_Nullable_int__Fields SVar2;
  System_Nullable_float__Fields SVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  MethodInfo *str0;
  MethodInfo *method_00;
  System_String_o *pSVar6;
  System_RuntimeFieldHandle_Fields *pSVar7;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *x;
  LJNJDFEAIOH_o *__this;
  float LFJGFLNMBMC;
  System_Nullable_float__Fields local_28;
  System_Nullable_int__Fields local_18;
  
  if ((DAT_045671c7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5600);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5601);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5602);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5603);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5604);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5605);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671c7 = 1;
  }
  if (BFPCMHPBAGL == (System_String_array *)0x0) goto LAB_03365c18;
  if ((int)BFPCMHPBAGL->max_length - 1U < 2) {
    SVar2 = (System_Nullable_int__Fields)AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
    local_18 = SVar2;
    SVar3 = (System_Nullable_float__Fields)AJAMDCEKAFE__FOKFAIPDIMB(1,BFPCMHPBAGL,(MethodInfo *)0x0)
    ;
    local_28 = SVar3;
    if (((ulong)SVar2 & 0xff) == 0) {
      System_Nullable<int>___ctor
                ((System_Nullable_int__o)&local_18,0,Method_System_Nullable<int>__ctor__);
      SVar3 = (System_Nullable_float__Fields)((ulong)local_28 & 0xff);
    }
    if (((ulong)SVar3 & 0xff) == 0) {
      System_Nullable<float>___ctor
                ((System_Nullable_float__o)&local_28,0.0,Method_System_Nullable<float>__ctor__);
    }
    if (DAT_045660f3 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
      DAT_045660f3 = '\x01';
    }
    x = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5602,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar7 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5603;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
LAB_03365c18:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this = (x->fields).Controller;
      OGPGLGPMEPD = System_Nullable<int>__get_Value
                              ((System_Nullable_int__o)&local_18,
                               Method_System_Nullable<int>_get_Value__);
      LFJGFLNMBMC = System_Nullable<float>__get_Value
                              ((System_Nullable_float__o)&local_28,
                               Method_System_Nullable<float>_get_Value__);
      if (__this == (LJNJDFEAIOH_o *)0x0) goto LAB_03365c18;
      LJNJDFEAIOH__DNGIFOCGGCN(__this,OGPGLGPMEPD,LFJGFLNMBMC,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5604,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar7 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5605;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar7->value,(MethodInfo *)0x0
              );
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5600,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5601,(MethodInfo *)0x0)
    ;
    str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    method_00 = str0;
    if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
    }
    pSVar6 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
    pSVar6 = System_String__Concat((System_String_o *)str0,pSVar6,(MethodInfo *)0x0);
  }
  return pSVar6;
}

