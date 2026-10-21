// CUDLR.Server$$LJCILLMKCPE @ RVA 0x33BE154

void CUDLR_Server__LJCILLMKCPE
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  System_Net_HttpListener_o *__this_00;
  System_Net_HttpListenerPrefixCollection_o *__this_01;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str1;
  System_String_o *str2;
  System_String_o *extraout_x1;
  MethodInfo *method_00;
  System_Net_HttpListener_o **ppSVar4;
  int32_t local_44;
  
  if ((DAT_04567db8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_149);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_150);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_151);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_152);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Net_HttpListener_TypeInfo);
    DAT_04567db8 = 1;
    IMCONGDFJME = extraout_x1;
  }
  local_44 = 0;
  CUDLR_Server__OHDFFFNDEFC(__this,IMCONGDFJME,method);
  __this_00 = (System_Net_HttpListener_o *)thunk_FUN_01bda818(System_Net_HttpListener_TypeInfo);
  System_Net_HttpListener___ctor(__this_00,(MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).PDALMPAOAFM;
  *ppSVar4 = __this_00;
  thunk_FUN_01c20e04(ppSVar4,__this_00);
  if (*ppSVar4 == (System_Net_HttpListener_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01 = System_Net_HttpListener__get_Prefixes(*ppSVar4,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_149,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_150,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  local_44 = (__this->fields)._KJNKDIDJFLF_k__BackingField;
  str1 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_151,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_152,(MethodInfo *)0x0);
  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,str1,str2,(MethodInfo *)0x0);
  if (__this_01 == (System_Net_HttpListenerPrefixCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Net_HttpListenerPrefixCollection__Add(__this_01,pSVar3,(MethodInfo *)0x0);
  if (*ppSVar4 != (System_Net_HttpListener_o *)0x0) {
    System_Net_HttpListener__Start(*ppSVar4,(MethodInfo *)0x0);
    CUDLR_Server__LOPJACDNMJF(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

