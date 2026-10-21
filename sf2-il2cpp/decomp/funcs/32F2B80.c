// NCNJEIBHGBH$$BIMEOHNANKC @ RVA 0x32F2B80

void NCNJEIBHGBH__BIMEOHNANKC
               (NCNJEIBHGBH_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,
               System_Collections_Generic_List_MapButton__o *GMFEBFOGDAA,bool MADBADMMABJ,
               MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  Il2CppObject *IHGFKLOLPOK;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  NCNJEIBHGBH_o *__this_01;
  int64_t iVar4;
  Nekki_SF2_GUI_Map_MapButton_o *item;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  DOPEEDABNEK_o *pDVar5;
  Nekki_SF2_GUI_Map_MapButton_array *pNVar6;
  System_Text_StringBuilder_o *pSVar7;
  char cVar8;
  System_String_o *JHDEDPMNOOJ;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456767f & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MapButton>__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456767f = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar5 != (DOPEEDABNEK_o *)0x0) &&
     (__this_00 = (pDVar5->fields).FDLFEJAEDGA,
     __this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        IHGFKLOLPOK = local_80.fields._current;
        if ((!bVar3) ||
           ((MADBADMMABJ &&
            (bVar3 = DJNBJHPDKDP__OBECCOPBADO<object>
                               ((System_Collections_Generic_List_T__o *)GMFEBFOGDAA,
                                Method_DJNBJHPDKDP_OBECCOPBADO<MapButton>__), !bVar3)))) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
          return;
        }
        if ((HOOAAGABMBL_o *)IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033f2e28 to 034f2e4f has its CatchHandler @ 033f3174 */
          FUN_01bab8c8();
        }
        method_00 = (((HOOAAGABMBL_c *)IHGFKLOLPOK->klass)->vtable)._6_PDECHBMCBDB.method;
        __this_01 = (NCNJEIBHGBH_o *)
                    (*(((HOOAAGABMBL_c *)IHGFKLOLPOK->klass)->vtable)._6_PDECHBMCBDB.methodPtr)
                              (IHGFKLOLPOK,0);
        if (__this_01 == (NCNJEIBHGBH_o *)0x0) {
          cVar8 = '\0';
        }
        else {
          cVar8 = *(char *)((long)&__this_01[1].klass + 2);
        }
        bVar3 = NCNJEIBHGBH__OMFIAFKMCMF(__this_01,(HOOAAGABMBL_o *)IHGFKLOLPOK,method_00);
      } while (!bVar3 || cVar8 == '\0');
      if (__this_01 == (NCNJEIBHGBH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((System_String_o *)(__this_01->fields).HKBOCMKKIOI,(MethodInfo *)0x0);
      lVar1 = 0x18;
      if (!bVar3) {
        lVar1 = 0x10;
      }
      JHDEDPMNOOJ = *(System_String_o **)((long)&__this_01->klass + lVar1);
      pSVar7 = (__this_01->fields).LJLADKMLDEF;
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      iVar4 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
      item = NCNJEIBHGBH__BGGKNPJBECD
                       (__this,KCAHJMFOIAG,(HOOAAGABMBL_o *)IHGFKLOLPOK,JHDEDPMNOOJ,
                        (long)pSVar7 - iVar4,in_x5);
      lVar1 = Method_System_Collections_Generic_List<MapButton>_Add__;
      if (GMFEBFOGDAA == (System_Collections_Generic_List_MapButton__o *)0x0) break;
      pNVar6 = (GMFEBFOGDAA->fields)._items;
      (GMFEBFOGDAA->fields)._version = (GMFEBFOGDAA->fields)._version + 1;
      if (pNVar6 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (GMFEBFOGDAA->fields)._size;
      if (uVar2 < (uint)pNVar6->max_length) {
        (GMFEBFOGDAA->fields)._size = uVar2 + 1;
        pNVar6->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

