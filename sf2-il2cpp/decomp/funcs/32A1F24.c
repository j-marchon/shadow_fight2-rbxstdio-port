// IGJEEGBBNFC$$PBPNDMELHAL @ RVA 0x32A1F24

void IGJEEGBBNFC__PBPNDMELHAL
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *__this_00;
  bool bVar4;
  MMDDDDFHOLG_o *pMVar5;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_02;
  NJPBBPOABKP_o *pNVar6;
  System_Object_array *pSVar7;
  HJNEOLCKEMD_o *pHVar8;
  HEFOANCOHDC_o *EIKFGOCCOIE;
  FCJBEKHDLAF_o *pFVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045673c7 & 1) == 0) {
    FUN_01bab630(&CHKKPKKBBPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_get_Current__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
    DAT_045673c7 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033a2020 to 034a2027 has its CatchHandler @ 033a213c */
  pFVar9 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (pFVar9 == (FCJBEKHDLAF_o *)0x0) {
    return;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar8 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar8 != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (CHKKPKKBBPL_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033a204c to 034a2057 has its CatchHandler @ 033a2130 */
                    /* try { // try from 033a2064 to 034a206f has its CatchHandler @ 033a2124 */
    if (((pHVar8->klass->_2).naturalAligment < bVar1) ||
       ((pHVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)CHKKPKKBBPL_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar8);
    }
    pNVar6 = (pHVar8->fields)._MLBBLNHFENE_k__BackingField;
    if ((pNVar6 != (NJPBBPOABKP_o *)0x0) &&
       (pMVar5 = (pFVar9->fields).POEGCOJFMDB, pMVar5 != (MMDDDDFHOLG_o *)0x0)) {
      EIKFGOCCOIE = (pNVar6->fields)._MEFGNAIILBJ_k__BackingField;
                    /* try { // try from 033a207c to 034a2087 has its CatchHandler @ 033a2128 */
                    /* try { // try from 033a2088 to 034a2113 has its CatchHandler @ 033a1f08 */
      MMDDDDFHOLG__MDEAJBFLJGP
                (pMVar5,(CPECAEHDDDB->fields).HEMGHNOOJPI,EIKFGOCCOIE,(MethodInfo *)0x0);
      __this_01 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<NJPBBPOABKP>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_01,Method_System_Collections_Generic_List<NJPBBPOABKP>__ctor__);
      if ((EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) &&
         (__this_02 = (EIKFGOCCOIE->fields).EMNOFACFIBF,
         __this_02 != (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)__this_02,
                   Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__
                                 ), __this_00 = local_80.fields._current, bVar4) {
          if ((NJPBBPOABKP_o *)local_80.fields._current == (NJPBBPOABKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033a2114 to 034a2117 has its CatchHandler @ 033a2138 */
                    /* try { // try from 033a2118 to 034a211b has its CatchHandler @ 033a2134 */
                    /* try { // try from 033a211c to 034a211f has its CatchHandler @ 033a212c */
          bVar4 = System_String__op_Equality
                            (((NJPBBPOABKP_Fields *)((long)local_80.fields._current + 0x10))->
                             _COIPKAKHDFP_k__BackingField,(System_String_o *)pHVar8[1].klass,
                             (MethodInfo *)0x0);
                    /* try { // try from 033a2120 to 034a2153 has its CatchHandler @ 033a1f08 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a2064 with catch @ 033a2124
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a207c with catch @ 033a2128
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a211c with catch @ 033a212c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a204c with catch @ 033a2130
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a2118 with catch @ 033a2134
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a2114 with catch @ 033a2138
                        */
          if ((bVar4) &&
             (bVar4 = NJPBBPOABKP__JENPGIOLJAJ
                                ((NJPBBPOABKP_o *)__this_00,(CPECAEHDDDB->fields).HEMGHNOOJPI,
                                 (__this->fields).HFICCAMAMGI,(MethodInfo *)0x0),
             lVar3 = Method_System_Collections_Generic_List<NJPBBPOABKP>_Add__, bVar4)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a2020 with catch @ 033a213c
                        */
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar7 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
                    /* try { // try from 033a2154 to 034a2157 has its CatchHandler @ 033a2180 */
            if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 033a2158 to 034a218f has its CatchHandler @ 033a1f08 */
            uVar2 = (__this_01->fields)._size;
            if (uVar2 < (uint)pSVar7->max_length) {
              (__this_01->fields)._size = uVar2 + 1;
              pSVar7->m_Items[(int)uVar2] = __this_00;
              thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar2,__this_00);
                    /* catch() { ... } // from try @ 033a2154 with catch @ 033a2180 */
            }
            else {
                    /* try { // try from 033a2190 to 034a2197 has its CatchHandler @ 033a21ac */
                    /* try { // try from 033a2198 to 034a21a3 has its CatchHandler @ 033a1f08 */
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_01,__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
                    /* try { // try from 033a21a4 to 034a21ab has its CatchHandler @ 033a21ac */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033a2190 with catch @ 033a21ac
                       catch(type#2 @ 00000000) { ... } // from try @ 033a21a4 with catch @ 033a21ac
                        */
        if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_98,__this_01,
                     Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
          local_80.fields._index = local_98.fields._index;
          local_80.fields._version = local_98.fields._version;
          local_80.fields._list = local_98.fields._list;
          local_80.fields._current = local_98.fields._current;
          while( true ) {
            bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_80,
                               Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__
                              );
            if (!bVar4) {
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
              return;
            }
            pMVar5 = (pFVar9->fields).POEGCOJFMDB;
            if (pMVar5 == (MMDDDDFHOLG_o *)0x0) break;
            MMDDDDFHOLG__IKDPMKOIDMP
                      (pMVar5,(CPECAEHDDDB->fields).HEMGHNOOJPI,
                       (NJPBBPOABKP_o *)local_80.fields._current,true,(MethodInfo *)0x0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

