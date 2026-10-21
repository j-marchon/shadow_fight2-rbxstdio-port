// Core.Configs.Models.BuildSettingsExtension$$GetFBLikeUrl @ RVA 0x32A8850

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetFBLikeUrl
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *__this;
  System_String_o *local_18;
  
                    /* try { // try from 033a8864 to 034a887b has its CatchHandler @ 033a88c4 */
  if ((DAT_04567418 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                );
                    /* try { // try from 033a887c to 034a88b3 has its CatchHandler @ 033a8254 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04567418 = 1;
    method = extraout_x1;
  }
  local_18 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (settings->fields)._FBLikeUrl_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a88b4 to 034a88c3 has its CatchHandler @ 033a88c4 */
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *)0x0) {
                    /* catch() { ... } // from try @ 033a8864 with catch @ 033a88c4
                       catch() { ... } // from try @ 033a88b4 with catch @ 033a88c4 */
                    /* try { // try from 033a88c8 to 034a88cb has its CatchHandler @ 033a88d4 */
                    /* try { // try from 033a88cc to 034a88d7 has its CatchHandler @ 033a8254 */
                    /* catch() { ... } // from try @ 033a8804 with catch @ 033a88d4
                       catch() { ... } // from try @ 033a88c8 with catch @ 033a88d4 */
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                         (Il2CppObject **)&local_18,
                         Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__
                        );
      if (!bVar1) {
                    /* try { // try from 033a88ec to 034a89e3 has its CatchHandler @ 033a88ec
                       catch() { ... } // from try @ 033a88ec with catch @ 033a88ec
                       catch() { ... } // from try @ 033a8b44 with catch @ 033a88ec
                       catch() { ... } // from try @ 033a8bec with catch @ 033a88ec
                       catch() { ... } // from try @ 033a8bf4 with catch @ 033a88ec
                       catch() { ... } // from try @ 033a8cb4 with catch @ 033a88ec */
        local_18 = (System_String_o *)
                   System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_object>
                             ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                              (settings->fields)._FBLikeUrl_k__BackingField,7,
                              Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                             );
      }
      return local_18;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

