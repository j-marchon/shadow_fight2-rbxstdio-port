// Core.Appsflyer.BanzaiAppsFlyer$$SendAdRevenue @ RVA 0x35C7D88

void Core_Appsflyer_BanzaiAppsFlyer__SendAdRevenue
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,LADHIKFIKCJ_o *OPAEPDIIOEB,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar2;
  HMEJGGGPIPL_o *pHVar3;
  System_Enum_o local_60;
  int32_t local_50;
  Il2CppMethodPointer local_48;
  
  if ((DAT_04568f75 & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&ENMDKAIJNGC_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<double>_GetValueOrDefault__);
    FUN_01bab630(&StringLiteral_16318);
    FUN_01bab630(&StringLiteral_16366);
    FUN_01bab630(&StringLiteral_17973);
    FUN_01bab630(&StringLiteral_19737);
    FUN_01bab630(&StringLiteral_17405);
    FUN_01bab630(&StringLiteral_19641);
    FUN_01bab630(&StringLiteral_16371);
    FUN_01bab630(&StringLiteral_16317);
    FUN_01bab630(&StringLiteral_16363);
    FUN_01bab630(&StringLiteral_20215);
    DAT_04568f75 = 1;
  }
  local_48 = (Il2CppMethodPointer)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_17405,(Il2CppObject *)(OPAEPDIIOEB->fields).CEMIOJCCGLJ,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_16318,(Il2CppObject *)(OPAEPDIIOEB->fields).CHJCLDMEGKG,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_16317,(Il2CppObject *)(OPAEPDIIOEB->fields).CHGKLFADPLD,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_20215,(Il2CppObject *)(OPAEPDIIOEB->fields).IDHKJLAMGJD,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((OPAEPDIIOEB->fields).FDBMKCCNBNI,(MethodInfo *)0x0);
    if (!bVar1) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_17973,(Il2CppObject *)(OPAEPDIIOEB->fields).FDBMKCCNBNI,
                 Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    }
    pHVar3 = (__this->fields).KAPMLAAGDAI;
    if (pHVar3 != (HMEJGGGPIPL_o *)0x0) {
      if ((pHVar3->fields).JJDKCNBKPBE == false) {
        local_60.klass = (System_Enum_c *)ENMDKAIJNGC_TypeInfo;
        local_60.monitor = (void *)0xffffffffffffffff;
        local_50 = (OPAEPDIIOEB->fields).JNKLGAJMIDI;
        pSVar2 = System_Enum__ToString(&local_60,(MethodInfo *)0x0);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,StringLiteral_19641,(Il2CppObject *)pSVar2,
                   Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,StringLiteral_19737,(Il2CppObject *)(OPAEPDIIOEB->fields).LKLPHMLAFFH,
                   Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
        local_48 = (Il2CppMethodPointer)(OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.value;
        pSVar2 = System_Double__ToString((double)local_48,(MethodInfo *)&stack0xffffffffffffffb8);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,StringLiteral_16371,(Il2CppObject *)pSVar2,
                   Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,StringLiteral_16366,(Il2CppObject *)(OPAEPDIIOEB->fields).IEINLOAOCLD,
                   Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
        if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        AppsFlyerSDK_AppsFlyer__sendEvent
                  (StringLiteral_16363,
                   (System_Collections_Generic_Dictionary_string__string__o *)__this_00,
                   (MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

