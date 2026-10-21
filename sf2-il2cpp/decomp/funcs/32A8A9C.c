// Core.Configs.Models.BuildSettingsExtension$$GetRateUrl @ RVA 0x32A8A9C

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetRateUrl
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *__this;
  System_String_o *local_18;
  
                    /* try { // try from 033a8aa4 to 034a8ab3 has its CatchHandler @ 033a8c1c */
  if ((DAT_0456741b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                );
                    /* try { // try from 033a8ac0 to 034a8acb has its CatchHandler @ 033a8c04 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* try { // try from 033a8adc to 034a8ae3 has its CatchHandler @ 033a8c00 */
    DAT_0456741b = 1;
    method = extraout_x1;
  }
  local_18 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (settings->fields)._RateUrl_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *)0x0) {
                    /* try { // try from 033a8b20 to 034a8b43 has its CatchHandler @ 033a8c0c */
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                         (Il2CppObject **)&local_18,
                         Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__
                        );
      if (!bVar1) {
                    /* try { // try from 033a8b44 to 034a8bd7 has its CatchHandler @ 033a88ec */
        local_18 = (System_String_o *)
                   System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_object>
                             ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                              (settings->fields)._RateUrl_k__BackingField,7,
                              Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                             );
      }
      return local_18;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

