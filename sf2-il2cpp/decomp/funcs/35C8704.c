// Core.Appsflyer.BanzaiAppsFlyer$$SendIAPRevenue @ RVA 0x35C8704

void Core_Appsflyer_BanzaiAppsFlyer__SendIAPRevenue
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,HNOIHFFENNC_o *OPAEPDIIOEB,
               MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar3;
  HMEJGGGPIPL_o *pHVar4;
  
  if ((DAT_04568f7a & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&System_Decimal_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&StringLiteral_16368);
    FUN_01bab630(&StringLiteral_16366);
    FUN_01bab630(&StringLiteral_16364);
    FUN_01bab630(&StringLiteral_16365);
    FUN_01bab630(&StringLiteral_16369);
    FUN_01bab630(&StringLiteral_16370);
    FUN_01bab630(&StringLiteral_16371);
    DAT_04568f7a = 1;
  }
  pHVar4 = (__this->fields).KAPMLAAGDAI;
  if (pHVar4 != (HMEJGGGPIPL_o *)0x0) {
    if (((pHVar4->fields).INIMAINJABF != false) &&
       (((ulong)(OPAEPDIIOEB->fields).IEINLOAOCLD & 1) == 0)) {
      return;
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    System_Collections_Generic_Dictionary<object,_object>___ctor
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    if ((System_Decimal_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = System_Decimal__ToString(&(OPAEPDIIOEB->fields).IHEKPOBGEJC,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_16371,(Il2CppObject *)pSVar3,
                 Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_16365,(Il2CppObject *)(OPAEPDIIOEB->fields).ODNJEBGJAAD,
                 Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_16364,(Il2CppObject *)(OPAEPDIIOEB->fields).IIHFLLPKBJI,
                 Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_16366,
                 (Il2CppObject *)(OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.ulomidLE,
                 Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
      bVar2 = PCOEHCPGBBG__EDHHJAMCOJH((OPAEPDIIOEB->fields).AIKDONIPAMF,(MethodInfo *)0x0);
      if (!bVar2) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,StringLiteral_16370,(Il2CppObject *)(OPAEPDIIOEB->fields).AIKDONIPAMF,
                   Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
      }
      puVar1 = &StringLiteral_16369;
      if ((OPAEPDIIOEB->fields).PIGNHMJGDHM != 2) {
        puVar1 = &StringLiteral_16368;
      }
      pSVar3 = (System_String_o *)*puVar1;
      if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      AppsFlyerSDK_AppsFlyer__sendEvent
                (pSVar3,(System_Collections_Generic_Dictionary_string__string__o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

