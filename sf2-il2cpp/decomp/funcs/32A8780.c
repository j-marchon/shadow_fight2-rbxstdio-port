// Core.Configs.Models.BuildSettingsExtension$$GetPostAchievements @ RVA 0x32A8780

bool Core_Configs_Models_BuildSettingsExtension__GetPostAchievements
               (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__bool__o *__this;
  bool local_14 [4];
  
                    /* catch() { ... } // from try @ 033a8688 with catch @ 033a878c */
                    /* catch() { ... } // from try @ 033a84f4 with catch @ 033a8790 */
                    /* catch() { ... } // from try @ 033a849c with catch @ 033a8794 */
  if ((DAT_04567417 & 1) == 0) {
                    /* catch() { ... } // from try @ 033a86ec with catch @ 033a8798 */
                    /* catch() { ... } // from try @ 033a86e8 with catch @ 033a879c */
                    /* catch() { ... } // from try @ 033a83cc with catch @ 033a87a0 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_bool>__
                );
                    /* catch() { ... } // from try @ 033a83b8 with catch @ 033a87a4 */
                    /* catch() { ... } // from try @ 033a83b0 with catch @ 033a87a8 */
                    /* catch() { ... } // from try @ 033a86e4 with catch @ 033a87ac */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_bool>_TryGetValue__);
                    /* catch() { ... } // from try @ 033a83a0 with catch @ 033a87b0 */
                    /* catch() { ... } // from try @ 033a8374 with catch @ 033a87b4 */
                    /* catch() { ... } // from try @ 033a86e0 with catch @ 033a87b8 */
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* catch() { ... } // from try @ 033a86dc with catch @ 033a87bc */
                    /* catch() { ... } // from try @ 033a8484 with catch @ 033a87c0 */
    DAT_04567417 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 033a8434 with catch @ 033a87c4 */
  local_14[0] = false;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (settings->fields)._PostAchievements_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a87e4 to 034a87e7 has its CatchHandler @ 033a881c */
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_MHLJKODNJCP__bool__o *)0x0) {
                    /* try { // try from 033a8804 to 034a881b has its CatchHandler @ 033a88d4 */
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_bool>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                         local_14,
                         Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_bool>_TryGetValue__
                        );
      if (bVar1) {
        bVar1 = local_14[0] != false;
                    /* catch() { ... } // from try @ 033a87e4 with catch @ 033a881c
                       try { // try from 033a881c to 034a8863 has its CatchHandler @ 033a8254 */
      }
      else {
                    /* catch() { ... } // from try @ 033a8328 with catch @ 033a882c */
                    /* catch() { ... } // from try @ 033a8450 with catch @ 033a8830
                       catch() { ... } // from try @ 033a86d0 with catch @ 033a8830 */
                    /* catch() { ... } // from try @ 033a863c with catch @ 033a8834
                       catch() { ... } // from try @ 033a8718 with catch @ 033a8834
                       catch() { ... } // from try @ 033a8740 with catch @ 033a8834 */
                    /* catch() { ... } // from try @ 033a85f0 with catch @ 033a8838
                       catch() { ... } // from try @ 033a8710 with catch @ 033a8838
                       catch() { ... } // from try @ 033a8734 with catch @ 033a8838 */
        bVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_bool>
                          ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                           (settings->fields)._PostAchievements_k__BackingField,7,
                           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_bool>__
                          );
      }
                    /* catch() { ... } // from try @ 033a858c with catch @ 033a883c
                       catch() { ... } // from try @ 033a8708 with catch @ 033a883c
                       catch() { ... } // from try @ 033a8728 with catch @ 033a883c */
                    /* catch() { ... } // from try @ 033a8548 with catch @ 033a8840
                       catch() { ... } // from try @ 033a86fc with catch @ 033a8840
                       catch() { ... } // from try @ 033a871c with catch @ 033a8840 */
                    /* catch() { ... } // from try @ 033a8350 with catch @ 033a8844 */
                    /* catch() { ... } // from try @ 033a8310 with catch @ 033a8848
                       catch() { ... } // from try @ 033a86d8 with catch @ 033a8848 */
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

