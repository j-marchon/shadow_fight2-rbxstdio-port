// BDGDJDGHMJI$$AOCDCCLEBGM @ RVA 0x326463C

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__AOCDCCLEBGM(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Nullable_int__Fields SVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str1;
  MethodInfo *str0;
  MethodInfo *pMVar7;
  System_RuntimeFieldHandle_Fields *pSVar8;
  undefined1 auVar9 [16];
  int local_54;
  System_Nullable_int__Fields local_50;
  System_Nullable_int__Fields local_48;
  
  auVar9._8_8_ = method;
  auVar9._0_8_ = BFPCMHPBAGL;
  if ((DAT_045671bf & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5558);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5559);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5560);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5561);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5562);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5563);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5564);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5565);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    auVar9 = FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    DAT_045671bf = 1;
  }
  local_54 = 0;
  if (BFPCMHPBAGL == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar9._0_8_,auVar9._8_8_);
  }
  if ((int)BFPCMHPBAGL->max_length - 1U < 2) {
    SVar3 = (System_Nullable_int__Fields)AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
    local_48 = SVar3;
    local_50 = (System_Nullable_int__Fields)
               AJAMDCEKAFE__NANCFCIGNEE(1,BFPCMHPBAGL,(MethodInfo *)0x0);
    if (((ulong)local_50 & 0xff) == 0) {
      System_Nullable<int>___ctor
                ((System_Nullable_int__o)&local_50,0,Method_System_Nullable<int>__ctor__);
      SVar3 = (System_Nullable_int__Fields)((ulong)local_48 & 0xff);
    }
    if (((ulong)SVar3 & 0xff) == 0) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5560,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar8 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5561;
    }
    else {
      iVar2 = System_Nullable<int>__get_Value
                        ((System_Nullable_int__o)&local_48,Method_System_Nullable<int>_get_Value__);
      if (6 < iVar2) {
        System_Nullable<int>___ctor
                  ((System_Nullable_int__o)&local_48,6,Method_System_Nullable<int>__ctor__);
      }
      local_54 = 0;
      iVar2 = System_Nullable<int>__get_Value
                        ((System_Nullable_int__o)&local_48,Method_System_Nullable<int>_get_Value__);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      if (-1 < iVar2) {
        do {
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5562,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5563,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          str1 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
          pMVar7 = (MethodInfo *)0x0;
          pSVar6 = System_String__Concat(pSVar6,str1,(MethodInfo *)0x0);
          iVar2 = System_Nullable<int>__get_Value
                            ((System_Nullable_int__o)&local_50,
                             Method_System_Nullable<int>_get_Value__);
          if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
          }
          BDGDJDGHMJI__KLKBNDHGCGC(pSVar6,iVar2,pMVar7);
          iVar1 = local_54 + 1;
          local_54 = iVar1;
          iVar2 = System_Nullable<int>__get_Value
                            ((System_Nullable_int__o)&local_48,
                             Method_System_Nullable<int>_get_Value__);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        } while (iVar1 <= iVar2);
      }
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5564,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar8 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5565;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar8->value,(MethodInfo *)0x0
              );
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5558,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5559,(MethodInfo *)0x0)
    ;
    str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pMVar7 = str0;
    if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
      pMVar7 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
    }
    pSVar6 = BDGDJDGHMJI__HDDPPDKDAKG(pMVar7);
    pSVar6 = System_String__Concat((System_String_o *)str0,pSVar6,(MethodInfo *)0x0);
  }
  return pSVar6;
}

