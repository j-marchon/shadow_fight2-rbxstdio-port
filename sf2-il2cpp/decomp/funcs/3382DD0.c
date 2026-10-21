// IDDIABHBDEE$$COPJJLMNNOK @ RVA 0x3382DD0

bool IDDIABHBDEE__COPJJLMNNOK
               (System_String_o *NHBDCPODDKB,System_String_array *AOLOAMLCFBB,MethodInfo *method)

{
  bool bVar1;
  IDDIABHBDEE_CKJEJIDKBJE_o *__this;
  System_Func_string__bool__o **ppSVar2;
  System_String_array *source;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Func_TSource__bool__o *predicate;
  System_Func_string__bool__o *predicate_00;
  
                    /* catch() { ... } // from try @ 03482dc4 with catch @ 03482de0 */
                    /* try { // try from 03482df0 to 03582e6b has its CatchHandler @ 034831b0 */
  if ((DAT_04567ba6 & 1) == 0) {
    FUN_01bab630(&Method_IDDIABHBDEE_CKJEJIDKBJE_DLIOACFFMHO__);
    FUN_01bab630(&IDDIABHBDEE_CKJEJIDKBJE_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_All<string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<string>__);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&Method_IDDIABHBDEE_<>c_DMDJCNNLDHM__);
    FUN_01bab630(&IDDIABHBDEE_<>c_TypeInfo);
    DAT_04567ba6 = 1;
  }
  __this = (IDDIABHBDEE_CKJEJIDKBJE_o *)thunk_FUN_01bda818(IDDIABHBDEE_CKJEJIDKBJE_TypeInfo);
                    /* catch() { ... } // from try @ 03482488 with catch @ 03482e6c
                       try { // try from 03482e6c to 03582e9b has its CatchHandler @ 03481abc */
                    /* catch() { ... } // from try @ 03482248 with catch @ 03482e70 */
                    /* catch() { ... } // from try @ 0348261c with catch @ 03482e74 */
  IDDIABHBDEE_CKJEJIDKBJE___ctor(__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034825c0 with catch @ 03482e78 */
                    /* catch() { ... } // from try @ 03482c18 with catch @ 03482e7c */
                    /* catch() { ... } // from try @ 03482c10 with catch @ 03482e80 */
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(NHBDCPODDKB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03482650 with catch @ 03482e84 */
  if ((AOLOAMLCFBB != (System_String_array *)0x0) && (!bVar1)) {
                    /* try { // try from 03482e9c to 03582e9f has its CatchHandler @ 03482eb0 */
    if ((IDDIABHBDEE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 03482e9c with catch @ 03482eb0 */
    predicate_00 = IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__49_0;
    if (predicate_00 == (System_Func_string__bool__o *)0x0) {
                    /* try { // try from 03482ec0 to 03582f3b has its CatchHandler @ 034831b0 */
      if ((IDDIABHBDEE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      predicate_00 = (System_Func_string__bool__o *)
                     thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar2 = &IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__49_0;
      *ppSVar2 = predicate_00;
      thunk_FUN_01c20e04(ppSVar2,predicate_00);
    }
    bVar1 = System_Linq_Enumerable__All<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)AOLOAMLCFBB,
                       (System_Func_TSource__bool__o *)predicate_00,
                       Method_System_Linq_Enumerable_All<string>__);
    if (!bVar1) {
                    /* catch() { ... } // from try @ 034823cc with catch @ 03482f40 */
      if (NHBDCPODDKB != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 0348218c with catch @ 03482f44 */
                    /* catch() { ... } // from try @ 03482370 with catch @ 03482f48 */
                    /* catch() { ... } // from try @ 03482130 with catch @ 03482f4c */
                    /* catch() { ... } // from try @ 03482c00 with catch @ 03482f50 */
                    /* catch() { ... } // from try @ 03482c28 with catch @ 03482f54 */
        source = System_String__Split(NHBDCPODDKB,0x7c,1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03482400 with catch @ 03482f58 */
        pSVar3 = (System_Collections_Generic_List_string__o *)
                 System_Linq_Enumerable__ToList<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            Method_System_Linq_Enumerable_ToList<string>__);
        if (__this != (IDDIABHBDEE_CKJEJIDKBJE_o *)0x0) {
          (__this->fields).locales = pSVar3;
                    /* try { // try from 03482f78 to 03582f7b has its CatchHandler @ 03482f8c */
          thunk_FUN_01c20e04();
          predicate = (System_Func_TSource__bool__o *)
                      thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
                    /* catch() { ... } // from try @ 03482f78 with catch @ 03482f8c */
                    /* try { // try from 03482f9c to 03583017 has its CatchHandler @ 034831b0 */
          System_Func<object,_bool>___ctor();
          bVar1 = System_Linq_Enumerable__Any<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)AOLOAMLCFBB,
                             predicate,Method_System_Linq_Enumerable_Any<string>__);
          return bVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* catch() { ... } // from try @ 03481ffc with catch @ 03482f3c
                       try { // try from 03482f3c to 03582f77 has its CatchHandler @ 03481abc */
  return true;
}

