// OJHODFIGFMA$$HKEFJFNDHDO @ RVA 0x323F480

System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *
OJHODFIGFMA__HKEFJFNDHDO(OJHODFIGFMA_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar3;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar4;
  System_Collections_Generic_Dictionary_string__OJHODFIGFMA_MJOLIJOPBMO__o *source_01;
  
  if ((DAT_0456709a & 1) == 0) {
    FUN_01bab630(&Method_OJHODFIGFMA_DKEAJNLENCM_FLHPEELAJLM__);
                    /* try { // try from 0333f4bc to 0343f563 has its CatchHandler @ 0333f4bc
                       catch() { ... } // from try @ 0333f4bc with catch @ 0333f4bc
                       catch() { ... } // from try @ 0333f580 with catch @ 0333f4bc
                       catch() { ... } // from try @ 0333f5b4 with catch @ 0333f4bc
                       catch() { ... } // from try @ 0333f5dc with catch @ 0333f4bc
                       catch() { ... } // from try @ 0333f61c with catch @ 0333f4bc */
    FUN_01bab630(&Method_OJHODFIGFMA_DKEAJNLENCM_IGFFJMPJDDA__);
    FUN_01bab630(&OJHODFIGFMA_DKEAJNLENCM_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Values__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_All<KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>>__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<OJHODFIGFMA_MJOLIJOPBMO>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<OJHODFIGFMA_MJOLIJOPBMO>__);
    FUN_01bab630(&FLLIEEHCFAB<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Func<KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<OJHODFIGFMA_MJOLIJOPBMO,_bool>_TypeInfo);
    DAT_0456709a = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(OJHODFIGFMA_DKEAJNLENCM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)ACCIHBHMFPN;
    thunk_FUN_01c20e04(__this_00 + 1,ACCIHBHMFPN);
    pOVar4 = (__this->fields).HEHMPFLAEGE;
    if (pOVar4 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) {
                    /* try { // try from 0333f564 to 0343f56b has its CatchHandler @ 0333f5c0 */
      source_01 = (pOVar4->fields).IAGNJPIIEPO;
                    /* try { // try from 0333f578 to 0343f57f has its CatchHandler @ 0333f5bc */
      pSVar2 = (System_Func_TSource__bool__o *)
               thunk_FUN_01bda818(
                                 System_Func<KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>,_bool>_TypeInfo
                                 );
                    /* try { // try from 0333f580 to 0343f5af has its CatchHandler @ 0333f4bc */
      System_Func<KeyValuePair<object,_object>,_bool>___ctor();
      bVar1 = System_Linq_Enumerable__All<KeyValuePair<object,_object>>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,pSVar2,
                         Method_System_Linq_Enumerable_All<KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>>__
                        );
      if (bVar1) {
                    /* try { // try from 0333f5b0 to 0343f5b3 has its CatchHandler @ 0333f5b8 */
                    /* try { // try from 0333f5b4 to 0343f5d7 has its CatchHandler @ 0333f4bc */
        if ((FLLIEEHCFAB<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333f5b0 with catch @ 0333f5b8
                        */
          thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333f578 with catch @ 0333f5bc
                        */
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333f564 with catch @ 0333f5c0
                        */
        return (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)
               FLLIEEHCFAB<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo->static_fields->AOAIEJMANCC;
      }
                    /* try { // try from 0333f5d8 to 0343f5db has its CatchHandler @ 0333f604 */
      pOVar4 = (__this->fields).HEHMPFLAEGE;
                    /* try { // try from 0333f5dc to 0343f613 has its CatchHandler @ 0333f4bc */
      if ((pOVar4 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) &&
         (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (pOVar4->fields).IAGNJPIIEPO,
         __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        source = System_Collections_Generic_Dictionary<object,_object>__get_Values
                           (__this_01,
                            Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Values__
                           );
                    /* catch() { ... } // from try @ 0333f5d8 with catch @ 0333f604 */
        pSVar2 = (System_Func_TSource__bool__o *)
                 thunk_FUN_01bda818(System_Func<OJHODFIGFMA_MJOLIJOPBMO,_bool>_TypeInfo);
                    /* try { // try from 0333f614 to 0343f61b has its CatchHandler @ 0333f630 */
                    /* try { // try from 0333f61c to 0343f627 has its CatchHandler @ 0333f4bc */
                    /* try { // try from 0333f628 to 0343f62f has its CatchHandler @ 0333f630 */
        System_Func<object,_bool>___ctor();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0333f614 with catch @ 0333f630
                       catch(type#2 @ 00000000) { ... } // from try @ 0333f628 with catch @ 0333f630
                        */
        source_00 = System_Linq_Enumerable__Where<object>
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,pSVar2,
                               Method_System_Linq_Enumerable_Where<OJHODFIGFMA_MJOLIJOPBMO>__);
        pSVar3 = System_Linq_Enumerable__ToList<object>
                           (source_00,
                            Method_System_Linq_Enumerable_ToList<OJHODFIGFMA_MJOLIJOPBMO>__);
        return (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

