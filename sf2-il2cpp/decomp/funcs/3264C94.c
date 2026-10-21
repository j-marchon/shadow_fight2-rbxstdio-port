// BDGDJDGHMJI$$GDLIEPLBANO @ RVA 0x3264C94

System_String_o * BDGDJDGHMJI__GDLIEPLBANO(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  System_Nullable_int__o SVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_String_o *str1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  int32_t local_34;
  
  if ((DAT_045671c2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5572);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5573);
    FUN_01bab630(&BGPFALGFJIL_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_045671c2 = 1;
  }
  SVar1 = AJAMDCEKAFE__NANCFCIGNEE(0,BFPCMHPBAGL,(MethodInfo *)0x0);
  if (((ulong)SVar1.fields & 0xff) == 0) {
    if ((BGPFALGFJIL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                          (BGPFALGFJIL_TypeInfo->static_fields->JBGPHLKPICA).fields,
                          (MethodInfo *)0x0);
  }
  else {
    local_34 = SVar1.fields.value;
  }
  CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(local_34,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (HJPEKDOPBHN_TypeInfo->static_fields->ENCOAOMGLKD).fields = CVar3;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5572,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5573,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  str1 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(pSVar2,str1,(MethodInfo *)0x0);
  return pSVar2;
}

