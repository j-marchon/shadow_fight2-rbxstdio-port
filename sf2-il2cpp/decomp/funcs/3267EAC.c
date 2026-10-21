// BDGDJDGHMJI$$OGFEANAJGHH @ RVA 0x3267EAC

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__OGFEANAJGHH(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  MethodInfo *str0;
  MethodInfo *method_00;
  System_String_o *pSVar4;
  System_RuntimeFieldHandle_Fields *pSVar5;
  undefined1 auVar6 [16];
  System_Nullable_bool__Fields local_24 [2];
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = BFPCMHPBAGL;
  if ((DAT_045671d3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5678);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5679);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5680);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5681);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5682);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5683);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    auVar6 = FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_045671d3 = 1;
  }
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
    if ((int)BFPCMHPBAGL->max_length < 2) {
      local_24[0] = (System_Nullable_bool__Fields)
                    AJAMDCEKAFE__FAEBPLENEGK(0,BFPCMHPBAGL,(MethodInfo *)0x0);
      if (((ushort)local_24[0] & 0xff) == 0) {
        System_Nullable<bool>___ctor
                  ((System_Nullable_bool__o)SUB82(local_24,0),false,
                   Method_System_Nullable<bool>__ctor__);
      }
      bVar1 = System_Nullable<bool>__get_Value
                        ((System_Nullable_bool__o)SUB82(local_24,0),
                         Method_System_Nullable<bool>_get_Value__);
      if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(KDDOKHLOKMI_TypeInfo);
      }
      KDDOKHLOKMI_TypeInfo->static_fields->MANGIHDNLPM = bVar1;
      bVar1 = System_Nullable<bool>__get_Value
                        ((System_Nullable_bool__o)SUB82(local_24,0),
                         Method_System_Nullable<bool>_get_Value__);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      if (bVar1) {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5682,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar5 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5683;
      }
      else {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5680,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar5 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5681;
      }
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,(System_RuntimeFieldHandle_o)pSVar5->value,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    }
    else {
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5678,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5679,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      method_00 = str0;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
      }
      pSVar4 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
      pSVar4 = System_String__Concat((System_String_o *)str0,pSVar4,(MethodInfo *)0x0);
    }
    return pSVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}

