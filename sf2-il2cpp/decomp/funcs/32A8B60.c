// Core.Configs.Models.BuildSettingsExtension$$GetMusicStore @ RVA 0x32A8B60

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetMusicStore
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *__this;
  System_String_o *local_18;
  
  if ((DAT_0456741c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_0456741c = 1;
    method = extraout_x1;
  }
  local_18 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (settings->fields)._MusicStoreUrl_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *)0x0) {
                    /* try { // try from 033a8bd8 to 034a8bdf has its CatchHandler @ 033a8c10 */
                    /* try { // try from 033a8be0 to 034a8be3 has its CatchHandler @ 033a8c20 */
                    /* try { // try from 033a8be4 to 034a8be7 has its CatchHandler @ 033a8c08 */
                    /* try { // try from 033a8be8 to 034a8beb has its CatchHandler @ 033a8c20 */
                    /* try { // try from 033a8bec to 034a8bef has its CatchHandler @ 033a88ec */
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                         (Il2CppObject **)&local_18,
                         Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__
                        );
                    /* try { // try from 033a8bf0 to 034a8bf3 has its CatchHandler @ 033a8bfc */
      if (!bVar1) {
                    /* catch() { ... } // from try @ 033a8bf0 with catch @ 033a8bfc */
                    /* catch() { ... } // from try @ 033a8adc with catch @ 033a8c00 */
                    /* catch() { ... } // from try @ 033a8ac0 with catch @ 033a8c04 */
                    /* catch() { ... } // from try @ 033a8be4 with catch @ 033a8c08 */
                    /* catch() { ... } // from try @ 033a8b20 with catch @ 033a8c0c */
                    /* catch() { ... } // from try @ 033a8bd8 with catch @ 033a8c10 */
        local_18 = (System_String_o *)
                   System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_object>
                             ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                              (settings->fields)._MusicStoreUrl_k__BackingField,7,
                              Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                             );
      }
                    /* catch() { ... } // from try @ 033a8a40 with catch @ 033a8c14 */
                    /* catch() { ... } // from try @ 033a89e4 with catch @ 033a8c18 */
                    /* catch() { ... } // from try @ 033a8aa4 with catch @ 033a8c1c */
      return local_18;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033a8be0 with catch @ 033a8c20
                       catch() { ... } // from try @ 033a8be8 with catch @ 033a8c20 */
  FUN_01bab8c8();
}

