// OCHIFKHFMAC$$PFFOOLHOCKA @ RVA 0x358A3BC

void OCHIFKHFMAC__PFFOOLHOCKA(OCHIFKHFMAC_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Lazy_Dictionary_string__bool___o *__this_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_String_o *pSVar2;
  PDFMAHPKIEI_o *pPVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d34 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_bool>_get_Count__);
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568d34 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).MDNPGDCCAEA;
  if (__this_00 == (System_Lazy_Dictionary_string__bool___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
              System_Lazy<object>__get_Value
                        ((System_Lazy_object__o *)__this_00,
                         Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
  if (__this_01 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = System_Collections_Generic_Dictionary<object,_bool>__get_Count
                    (__this_01,
                     Method_System_Collections_Generic_Dictionary<string,_bool>_get_Count__);
  if (iVar1 == 0) {
    pPVar3 = PDFMAHPKIEI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pPVar3 == (PDFMAHPKIEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    PDFMAHPKIEI__HHFEEKFDDIF(pPVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
  }
  else {
    if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Newtonsoft_Json_JsonConvert__SerializeObject
                       ((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    pSVar2 = PCOEHCPGBBG__EBPNANKNGPD(pSVar2,(MethodInfo *)0x0);
    pPVar3 = PDFMAHPKIEI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pPVar3 == (PDFMAHPKIEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    PDFMAHPKIEI__HHFEEKFDDIF(pPVar3,pSVar2,(MethodInfo *)0x0);
  }
  return;
}

