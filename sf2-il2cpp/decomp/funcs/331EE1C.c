// KJFLIAMBKEB$$GIENGNEGHPJ @ RVA 0x331EE1C

bool KJFLIAMBKEB__GIENGNEGHPJ(int32_t CNONPGEIGJM,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  KJFLIAMBKEB_StaticFields *pKVar3;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04567834 & 1) == 0) {
    FUN_01bab630(&DBMPKPJGIPI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_11721);
    DAT_04567834 = 1;
    method = extraout_x1;
  }
  if (DAT_045678d9 == '\0') {
    FUN_01bab630(&KJFLIAMBKEB_TypeInfo,method);
    DAT_045678d9 = '\x01';
    method = extraout_x1_00;
  }
  pKVar3 = KJFLIAMBKEB_TypeInfo->static_fields;
  if (pKVar3->_MEAPCEHFFHD_k__BackingField == false) {
    if (DAT_045678da == '\0') {
      FUN_01bab630(&KJFLIAMBKEB_TypeInfo,method);
      DAT_045678da = '\x01';
      pKVar3 = KJFLIAMBKEB_TypeInfo->static_fields;
    }
    bVar1 = true;
    pKVar3->_MEAPCEHFFHD_k__BackingField = true;
    if (CNONPGEIGJM != 0) {
      local_38.klass = (System_Enum_c *)DBMPKPJGIPI_TypeInfo;
      local_38.monitor = (void *)0xffffffffffffffff;
      local_28 = CNONPGEIGJM;
      pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_11721,pSVar2,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
      KJFLIAMBKEB__APMMIBJANFN(method_00);
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

