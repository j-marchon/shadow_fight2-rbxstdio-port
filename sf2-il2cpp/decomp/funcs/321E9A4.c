// FPPKHNNABAD$$HELILNPCOFA @ RVA 0x321E9A4

System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *
FPPKHNNABAD__HELILNPCOFA(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *item;
  MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_array *pMVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04566f1f & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_Add__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__
                );
                    /* try { // try from 0331ea28 to 0341eabb has its CatchHandler @ 0331ea28
                       catch() { ... } // from try @ 0331ea28 with catch @ 0331ea28
                       catch() { ... } // from try @ 0331eac4 with catch @ 0331ea28
                       catch() { ... } // from try @ 0331eb0c with catch @ 0331ea28
                       catch() { ... } // from try @ 0331eb30 with catch @ 0331ea28
                       catch() { ... } // from try @ 0331eb68 with catch @ 0331ea28 */
    FUN_01bab630(&System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_GetEnumerator__
                );
    DAT_04566f1f = 1;
  }
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._currentValue = (Il2CppObject *)0x0;
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KCIMMPDKPME;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Count
                      (pSVar5,
                       Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Count__
                      );
    if (iVar4 < 1) {
      pSVar6 = (System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *)
               thunk_FUN_01bda818(
                                 System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo
                                 );
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar6,
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__
                );
      return pSVar6;
    }
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KCIMMPDKPME
    ;
    if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      iVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Count
                        (pSVar5,
                         Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Count__
                        );
      pSVar6 = (System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *)
               thunk_FUN_01bda818(
                                 System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo
                                 );
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar6,iVar4,
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__
                );
      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).KCIMMPDKPME;
                    /* try { // try from 0331eabc to 0341eac3 has its CatchHandler @ 0331eb14 */
                    /* try { // try from 0331eac4 to 0341eb07 has its CatchHandler @ 0331ea28 */
      if ((pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_00 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                                (pSVar5,
                                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Values__
                                ),
         __this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
      {
        System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
                  (&local_68,__this_00,
                   Method_System_Collections_Generic_Dictionary_ValueCollection<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_GetEnumerator__
                  );
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
        local_50.fields._dictionary = local_68.fields._dictionary;
        local_50.fields._currentValue = local_68.fields._currentValue;
        while( true ) {
                    /* try { // try from 0331eb08 to 0341eb0b has its CatchHandler @ 0331eb10 */
                    /* try { // try from 0331eb0c to 0341eb2b has its CatchHandler @ 0331ea28 */
          bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_MoveNext__
                            );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331eb08 with catch @ 0331eb10
                        */
          if (!bVar3) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                      (&local_50,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Dispose__
                      );
            return pSVar6;
          }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331eabc with catch @ 0331eb14
                        */
          if ((MEMHEPBAJJA_HIAEDCDJJDJ_o *)local_50.fields._currentValue ==
              (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          item = MEMHEPBAJJA_HIAEDCDJJDJ__OIOHNFFMGLE
                           ((MEMHEPBAJJA_HIAEDCDJJDJ_o *)local_50.fields._currentValue,
                            (MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_Add__;
          if (pSVar6 == (System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *)
                        0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 0331eb2c to 0341eb2f has its CatchHandler @ 0331eb58 */
                    /* try { // try from 0331eb30 to 0341eb5f has its CatchHandler @ 0331ea28 */
          pMVar7 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pMVar7 == (MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_array *)0x0) break;
          uVar1 = (pSVar6->fields)._size;
          if (uVar1 < (uint)pMVar7->max_length) {
                    /* catch() { ... } // from try @ 0331eb2c with catch @ 0331eb58 */
            (pSVar6->fields)._size = uVar1 + 1;
                    /* try { // try from 0331eb60 to 0341eb67 has its CatchHandler @ 0331eb7c */
            pMVar7->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
                    /* try { // try from 0331eb68 to 0341eb73 has its CatchHandler @ 0331ea28 */
          }
          else {
                    /* try { // try from 0331eb74 to 0341eb7b has its CatchHandler @ 0331eb7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0331eb60 with catch @ 0331eb7c
                       catch(type#2 @ 00000000) { ... } // from try @ 0331eb74 with catch @ 0331eb7c
                        */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

