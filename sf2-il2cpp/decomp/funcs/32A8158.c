// Core.Configs.Models.BuildSettingsExtension$$GetHideLanguageFlags @ RVA 0x32A8158

bool Core_Configs_Models_BuildSettingsExtension__GetHideLanguageFlags
               (Core_Configs_Models_BuildSettingsConfig_o *config,bool def,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__bool__o *dictionary;
  
                    /* try { // try from 033a816c to 034a816f has its CatchHandler @ 033a8224 */
  if ((DAT_04567413 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_bool>__
                );
                    /* try { // try from 033a8188 to 034a818f has its CatchHandler @ 033a8244 */
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* try { // try from 033a8190 to 034a81a7 has its CatchHandler @ 033a7c34 */
    DAT_04567413 = 1;
  }
  if (config != (Core_Configs_Models_BuildSettingsConfig_o *)0x0) {
    dictionary = (config->fields)._HideLanguageFlags_k__BackingField;
                    /* try { // try from 033a81a8 to 034a81bf has its CatchHandler @ 033a8234 */
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033a81c0 to 034a8207 has its CatchHandler @ 033a7c34 */
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    bVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_bool>
                      ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)dictionary,
                       key,def,
                       Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_bool>__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

