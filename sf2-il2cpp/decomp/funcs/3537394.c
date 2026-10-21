// EPFMFHDGMCE$$KONIOMKBHIP @ RVA 0x3537394

void EPFMFHDGMCE__KONIOMKBHIP
               (EPFMFHDGMCE_o *__this,EPFMFHDGMCE_JGKNDMCIPBN_o *LDJFHDMLJMO,MethodInfo *method)

{
  System_Comparison_JLGNBOILFLN__o **ppSVar1;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_00;
  System_Comparison_JLGNBOILFLN__o *comparison;
  
                    /* catch() { ... } // from try @ 0363737c with catch @ 03637394 */
                    /* catch() { ... } // from try @ 03637380 with catch @ 03637398 */
                    /* catch() { ... } // from try @ 03637278 with catch @ 0363739c */
                    /* catch() { ... } // from try @ 03637378 with catch @ 036373a0 */
                    /* catch() { ... } // from try @ 03637340 with catch @ 036373a4 */
                    /* catch() { ... } // from try @ 03637258 with catch @ 036373a8 */
  if ((DAT_04568a99 & 1) == 0) {
    FUN_01bab630(&System_Comparison<JLGNBOILFLN>_TypeInfo);
                    /* try { // try from 036373c0 to 037373c3 has its CatchHandler @ 036373e4 */
                    /* try { // try from 036373c4 to 037373eb has its CatchHandler @ 036370b8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Sort__);
    FUN_01bab630(&Method_EPFMFHDGMCE_<>c_PEBHFJINOPA__);
    FUN_01bab630(&EPFMFHDGMCE_<>c_TypeInfo);
                    /* catch() { ... } // from try @ 036373c0 with catch @ 036373e4 */
    DAT_04568a99 = 1;
  }
                    /* try { // try from 036373ec to 037373ff has its CatchHandler @ 03637460 */
  if (LDJFHDMLJMO != (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0) {
                    /* catch() { ... } // from try @ 0363730c with catch @ 03637400
                       try { // try from 03637400 to 03737417 has its CatchHandler @ 036370b8 */
    EPFMFHDGMCE__CCHEFCBOLBC(__this,(LDJFHDMLJMO->fields).NOPGBJNLFHM,method);
    EPFMFHDGMCE__LLEFFBHJAHK(__this,LDJFHDMLJMO,method);
    __this_00 = (__this->fields).GCHAMOPMNHF;
                    /* try { // try from 03637418 to 0373741b has its CatchHandler @ 0363743c */
                    /* try { // try from 0363741c to 03737443 has its CatchHandler @ 036370b8 */
    if ((EPFMFHDGMCE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = EPFMFHDGMCE_<>c_TypeInfo->static_fields->__9__27_0;
    if (comparison == (System_Comparison_JLGNBOILFLN__o *)0x0) {
      if ((EPFMFHDGMCE_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03637418 with catch @ 0363743c */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03637444 to 0373744b has its CatchHandler @ 03637460 */
                    /* try { // try from 0363744c to 03737457 has its CatchHandler @ 036370b8 */
                    /* try { // try from 03637458 to 0373745f has its CatchHandler @ 03637460 */
      comparison = (System_Comparison_JLGNBOILFLN__o *)
                   thunk_FUN_01bda818(System_Comparison<JLGNBOILFLN>_TypeInfo);
                    /* catch() { ... } // from try @ 036373ec with catch @ 03637460
                       catch() { ... } // from try @ 03637444 with catch @ 03637460
                       catch() { ... } // from try @ 03637458 with catch @ 03637460 */
      System_Comparison<object>___ctor();
      ppSVar1 = &EPFMFHDGMCE_<>c_TypeInfo->static_fields->__9__27_0;
      *ppSVar1 = comparison;
      thunk_FUN_01c20e04(ppSVar1,comparison);
    }
    if (__this_00 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Comparison_T__o *)comparison,
                 Method_System_Collections_Generic_List<JLGNBOILFLN>_Sort__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

