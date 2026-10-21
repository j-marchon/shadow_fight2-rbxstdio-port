// NCNJEIBHGBH$$NJMNFMIBOPJ @ RVA 0x32F2EDC

void NCNJEIBHGBH__NJMNFMIBOPJ
               (NCNJEIBHGBH_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,
               System_Collections_Generic_List_MapButton__o *GMFEBFOGDAA,bool DDDMDNMNCIO,
               bool HOAJOICOBJD,bool MADBADMMABJ,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *BMINOMGENHE;
  bool bVar4;
  System_Collections_Generic_List_FKNCNNOOOIO__o *__this_00;
  Nekki_SF2_GUI_Map_MapButton_o *pNVar5;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Map_MapButton_array *pNVar6;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  method_00 = (MethodInfo *)(ulong)HOAJOICOBJD;
                    /* try { // try from 033f2ee4 to 034f2ef3 has its CatchHandler @ 033f30e8 */
  if ((DAT_04567684 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MapButton>__);
                    /* try { // try from 033f2f30 to 034f2f4b has its CatchHandler @ 033f30ec */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_get_Current__);
                    /* try { // try from 033f2f4c to 034f3087 has its CatchHandler @ 033f26fc */
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_GetEnumerator__);
    DAT_04567684 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JODEDMLAIEG;
  if (__this_00 == (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FKNCNNOOOIO>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    while( true ) {
      while( true ) {
        do {
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_MoveNext__
                            );
          BMINOMGENHE = local_80.fields._current;
          if ((!bVar4) ||
             ((MADBADMMABJ &&
              (bVar4 = DJNBJHPDKDP__OBECCOPBADO<object>
                                 ((System_Collections_Generic_List_T__o *)GMFEBFOGDAA,
                                  Method_DJNBJHPDKDP_OBECCOPBADO<MapButton>__), !bVar4)))) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_Dispose__);
            return;
          }
        } while (((FKNCNNOOOIO_o *)BMINOMGENHE == (FKNCNNOOOIO_o *)0x0) ||
                (((FKNCNNOOOIO_Fields *)((long)BMINOMGENHE + 0x10))->OEFBIKEMBOF != DDDMDNMNCIO));
        iVar1 = ((FKNCNNOOOIO_Fields *)((long)BMINOMGENHE + 0x10))->AIDMEFDEOLJ;
        if (iVar1 != 2) break;
        pNVar5 = NCNJEIBHGBH__JFIJFIEOGIC
                           (__this,KCAHJMFOIAG,(FKNCNNOOOIO_o *)BMINOMGENHE,false,method_00);
        lVar3 = Method_System_Collections_Generic_List<MapButton>_Add__;
        if (GMFEBFOGDAA == (System_Collections_Generic_List_MapButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033f3088 to 034f309f has its CatchHandler @ 033f3230 */
        pNVar6 = (GMFEBFOGDAA->fields)._items;
        (GMFEBFOGDAA->fields)._version = (GMFEBFOGDAA->fields)._version + 1;
        if (pNVar6 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033f30a0 to 034f30a3 has its CatchHandler @ 033f3100 */
        uVar2 = (GMFEBFOGDAA->fields)._size;
                    /* try { // try from 033f30a4 to 034f30a7 has its CatchHandler @ 033f30fc */
                    /* try { // try from 033f30a8 to 034f30af has its CatchHandler @ 033f30f8 */
        if (uVar2 < (uint)pNVar6->max_length) {
                    /* try { // try from 033f30b0 to 034f30b7 has its CatchHandler @ 033f30f0 */
                    /* try { // try from 033f30b8 to 034f30bf has its CatchHandler @ 033f3178 */
          (GMFEBFOGDAA->fields)._size = uVar2 + 1;
          pNVar6->m_Items[(int)uVar2] = pNVar5;
                    /* try { // try from 033f30c0 to 034f30cb has its CatchHandler @ 033f26fc */
          thunk_FUN_01c20e04();
        }
        else {
                    /* catch() { ... } // from try @ 033f3120 with catch @ 033f314c */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,(Il2CppObject *)pNVar5
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      if (iVar1 == 1) break;
                    /* try { // try from 033f30cc to 034f30cf has its CatchHandler @ 033f30e4 */
                    /* try { // try from 033f30d0 to 034f311f has its CatchHandler @ 033f26fc */
                    /* catch() { ... } // from try @ 033f2b70 with catch @ 033f30d8 */
      pNVar5 = NCNJEIBHGBH__JFIJFIEOGIC
                         (__this,KCAHJMFOIAG,(FKNCNNOOOIO_o *)BMINOMGENHE,true,method_00);
      lVar3 = Method_System_Collections_Generic_List<MapButton>_Add__;
      if (GMFEBFOGDAA == (System_Collections_Generic_List_MapButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033f321c to 034f3227 has its CatchHandler @ 033f26fc */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 033f30cc with catch @ 033f30e4 */
                    /* catch() { ... } // from try @ 033f2ee4 with catch @ 033f30e8 */
      pNVar6 = (GMFEBFOGDAA->fields)._items;
                    /* catch() { ... } // from try @ 033f2f30 with catch @ 033f30ec */
                    /* catch() { ... } // from try @ 033f30b0 with catch @ 033f30f0 */
                    /* catch() { ... } // from try @ 033f2b1c with catch @ 033f30f4 */
      (GMFEBFOGDAA->fields)._version = (GMFEBFOGDAA->fields)._version + 1;
                    /* catch() { ... } // from try @ 033f30a8 with catch @ 033f30f8 */
      if (pNVar6 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 033f30a4 with catch @ 033f30fc */
      uVar2 = (GMFEBFOGDAA->fields)._size;
                    /* catch() { ... } // from try @ 033f30a0 with catch @ 033f3100 */
                    /* catch() { ... } // from try @ 033f2abc with catch @ 033f3104 */
                    /* catch() { ... } // from try @ 033f2a9c with catch @ 033f3108 */
      if (uVar2 < (uint)pNVar6->max_length) {
        (GMFEBFOGDAA->fields)._size = uVar2 + 1;
        pNVar6->m_Items[(int)uVar2] = pNVar5;
        thunk_FUN_01c20e04();
                    /* try { // try from 033f3120 to 034f3123 has its CatchHandler @ 033f314c */
      }
      else {
                    /* try { // try from 033f315c to 034f316f has its CatchHandler @ 033f3230 */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,(Il2CppObject *)pNVar5,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      if (HOAJOICOBJD) {
                    /* catch() { ... } // from try @ 033f2e84 with catch @ 033f3170
                       try { // try from 033f3170 to 034f318f has its CatchHandler @ 033f26fc */
                    /* catch() { ... } // from try @ 033f2e28 with catch @ 033f3174 */
                    /* catch() { ... } // from try @ 033f30b8 with catch @ 033f3178 */
        pNVar5 = NCNJEIBHGBH__JFIJFIEOGIC
                           (__this,KCAHJMFOIAG,(FKNCNNOOOIO_o *)BMINOMGENHE,false,method_00);
        lVar3 = Method_System_Collections_Generic_List<MapButton>_Add__;
        pNVar6 = (GMFEBFOGDAA->fields)._items;
                    /* try { // try from 033f3190 to 034f3193 has its CatchHandler @ 033f31a4 */
        (GMFEBFOGDAA->fields)._version = (GMFEBFOGDAA->fields)._version + 1;
        if (pNVar6 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (GMFEBFOGDAA->fields)._size;
                    /* catch() { ... } // from try @ 033f3190 with catch @ 033f31a4 */
        if (uVar2 < (uint)pNVar6->max_length) {
                    /* try { // try from 033f31b4 to 034f321b has its CatchHandler @ 033f3230 */
          (GMFEBFOGDAA->fields)._size = uVar2 + 1;
          pNVar6->m_Items[(int)uVar2] = pNVar5;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,(Il2CppObject *)pNVar5
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    pNVar5 = NCNJEIBHGBH__JFIJFIEOGIC
                       (__this,KCAHJMFOIAG,(FKNCNNOOOIO_o *)BMINOMGENHE,true,method_00);
    lVar3 = Method_System_Collections_Generic_List<MapButton>_Add__;
    if (GMFEBFOGDAA == (System_Collections_Generic_List_MapButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar6 = (GMFEBFOGDAA->fields)._items;
    (GMFEBFOGDAA->fields)._version = (GMFEBFOGDAA->fields)._version + 1;
    if (pNVar6 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) break;
    uVar2 = (GMFEBFOGDAA->fields)._size;
    if (uVar2 < (uint)pNVar6->max_length) {
      (GMFEBFOGDAA->fields)._size = uVar2 + 1;
      pNVar6->m_Items[(int)uVar2] = pNVar5;
      thunk_FUN_01c20e04();
    }
    else {
                    /* try { // try from 033f3124 to 034f315b has its CatchHandler @ 033f26fc */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,(Il2CppObject *)pNVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

