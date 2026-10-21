// Core.Appsflyer.BanzaiAppsFlyer.<>c$$MJFMJGDCOJN @ RVA 0x35C9758

void Core_Appsflyer_BanzaiAppsFlyer_<>c__MJFMJGDCOJN
               (Core_Appsflyer_BanzaiAppsFlyer___c_o *__this,GAHKDMDKMBP_o *args,MethodInfo *method)

{
  bool bVar1;
  System_String_o *str1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  int32_t local_24;
  
  if ((DAT_04568f88 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_7529);
    __this = (Core_Appsflyer_BanzaiAppsFlyer___c_o *)FUN_01bab630(&StringLiteral_11333);
    DAT_04568f88 = 1;
  }
  if (args != (GAHKDMDKMBP_o *)0x0) {
    local_24 = (args->fields)._PCCIKKDCEDF_k__BackingField;
    str1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrWhiteSpace
                      ((args->fields)._OLNLINOBHID_k__BackingField,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_11333;
    if (bVar1) {
      method_00 = (MethodInfo *)string_TypeInfo->static_fields->Empty;
    }
    else {
      method_00 = (MethodInfo *)
                  System_String__Concat
                            (StringLiteral_167,(args->fields)._OLNLINOBHID_k__BackingField,
                             (MethodInfo *)0x0);
    }
    pSVar2 = System_String__Concat(pSVar2,str1,(System_String_o *)method_00,(MethodInfo *)0x0);
    Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(pSVar2,StringLiteral_7529,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

