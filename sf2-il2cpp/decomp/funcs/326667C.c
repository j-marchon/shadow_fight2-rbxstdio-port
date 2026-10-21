// BDGDJDGHMJI$$KDLOHPGJKDG @ RVA 0x326667C

System_String_o * BDGDJDGHMJI__KDLOHPGJKDG(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  int32_t CJNHFNHJHPE;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  MethodInfo *str0;
  System_String_o *str0_00;
  System_String_o *str2;
  System_String_o *str3;
  MethodInfo *pMVar5;
  undefined1 auVar6 [16];
  int32_t local_3c;
  System_Nullable_int__Fields local_38;
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = BFPCMHPBAGL;
  if ((DAT_045671cc & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5624);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5625);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5626);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5627);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5628);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5629);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5630);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5631);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    auVar6 = FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    DAT_045671cc = 1;
  }
  local_3c = 0;
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
    if ((int)BFPCMHPBAGL->max_length == 2) {
      pSVar2 = AJAMDCEKAFE__LFCNNAGLPHO(0,BFPCMHPBAGL,(MethodInfo *)0x0);
      pMVar5 = (MethodInfo *)0x0;
      local_38 = (System_Nullable_int__Fields)
                 AJAMDCEKAFE__NANCFCIGNEE(1,BFPCMHPBAGL,(MethodInfo *)0x0);
      if ((((ulong)local_38 & 0xff) == 0) ||
         (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0), bVar1)) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5626,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5627,
                   (MethodInfo *)0x0);
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      }
      else {
        CJNHFNHJHPE = System_Nullable<int>__get_Value
                                ((System_Nullable_int__o)&local_38,
                                 Method_System_Nullable<int>_get_Value__);
        if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
        }
        BDGDJDGHMJI__MKNJLMOFDHM(pSVar2,CJNHFNHJHPE,pMVar5);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5628,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5629,
                   (MethodInfo *)0x0);
        str0_00 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5630,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5631,
                   (MethodInfo *)0x0);
        str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        local_3c = System_Nullable<int>__get_Value
                             ((System_Nullable_int__o)&local_38,
                              Method_System_Nullable<int>_get_Value__);
        str3 = System_Int32__ToString((int32_t)&local_3c,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(str0_00,pSVar2,str2,str3,(MethodInfo *)0x0);
      }
    }
    else {
                    /* try { // try from 033667fc to 034669cf has its CatchHandler @ 033667fc
                       catch() { ... } // from try @ 033667fc with catch @ 033667fc
                       catch() { ... } // from try @ 03366a44 with catch @ 033667fc
                       catch() { ... } // from try @ 03366c88 with catch @ 033667fc
                       catch() { ... } // from try @ 03366cd4 with catch @ 033667fc
                       catch() { ... } // from try @ 03366d14 with catch @ 033667fc */
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5624,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5625,
                 (MethodInfo *)0x0);
      str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pMVar5 = str0;
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        pMVar5 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
      }
      pSVar2 = BDGDJDGHMJI__HDDPPDKDAKG(pMVar5);
      pSVar2 = System_String__Concat((System_String_o *)str0,pSVar2,(MethodInfo *)0x0);
    }
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033669d0 to 034669d7 has its CatchHandler @ 03366c8c */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}

