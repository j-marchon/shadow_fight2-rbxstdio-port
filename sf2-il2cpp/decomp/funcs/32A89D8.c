// Core.Configs.Models.BuildSettingsExtension$$GetFBPostLink @ RVA 0x32A89D8

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetFBPostLink
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *__this;
  System_String_o *local_18;
  
                    /* try { // try from 033a89e4 to 034a8a0b has its CatchHandler @ 033a8c18 */
  if ((DAT_0456741a & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_0456741a = 1;
    method = extraout_x1;
  }
  local_18 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (settings->fields)._FBPostLinkUrl_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
                    /* try { // try from 033a8a40 to 034a8a6b has its CatchHandler @ 033a8c14 */
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                         (Il2CppObject **)&local_18,
                         Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__
                        );
      if (!bVar1) {
        local_18 = (System_String_o *)
                   System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_object>
                             ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                              (settings->fields)._FBPostLinkUrl_k__BackingField,7,
                              Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                             );
      }
      return local_18;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

