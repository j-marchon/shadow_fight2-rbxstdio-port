// Core.Configs.Models.BuildSettingsExtension$$GetTacticsCaching @ RVA 0x32A80CC

int32_t Core_Configs_Models_BuildSettingsExtension__GetTacticsCaching
                  (Core_Configs_Models_BuildSettingsConfig_o *config,int32_t def,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__int__o *dictionary;
  
                    /* try { // try from 033a80d4 to 034a80ef has its CatchHandler @ 033a7c34 */
  if ((DAT_04567412 & 1) == 0) {
                    /* try { // try from 033a80f0 to 034a80ff has its CatchHandler @ 033a8148 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_int>__
                );
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* try { // try from 033a8104 to 034a8107 has its CatchHandler @ 033a8124 */
    DAT_04567412 = 1;
  }
                    /* try { // try from 033a8108 to 034a810b has its CatchHandler @ 033a8120 */
  if (config != (Core_Configs_Models_BuildSettingsConfig_o *)0x0) {
                    /* try { // try from 033a810c to 034a810f has its CatchHandler @ 033a811c */
                    /* try { // try from 033a8110 to 034a8113 has its CatchHandler @ 033a8114 */
                    /* catch() { ... } // from try @ 033a8110 with catch @ 033a8114 */
                    /* catch() { ... } // from try @ 033a8060 with catch @ 033a8118 */
    dictionary = (config->fields)._TacticsCaching_k__BackingField;
                    /* catch() { ... } // from try @ 033a810c with catch @ 033a811c */
                    /* catch() { ... } // from try @ 033a8108 with catch @ 033a8120 */
                    /* catch() { ... } // from try @ 033a8104 with catch @ 033a8124 */
                    /* catch() { ... } // from try @ 033a806c with catch @ 033a8128 */
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033a8094 with catch @ 033a812c */
      thunk_FUN_01ba7564();
    }
    iVar1 = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033a8018 with catch @ 033a8138 */
                    /* catch() { ... } // from try @ 033a7ff8 with catch @ 033a813c */
                    /* catch() { ... } // from try @ 033a7fb0 with catch @ 033a8148
                       catch() { ... } // from try @ 033a80f0 with catch @ 033a8148 */
                    /* try { // try from 033a8150 to 034a8153 has its CatchHandler @ 033a8244 */
    iVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_int>
                      ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)dictionary,
                       iVar1,def,
                       Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_int>__
                      );
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033a8154 to 034a816b has its CatchHandler @ 033a7c34 */
  FUN_01bab8c8();
}

