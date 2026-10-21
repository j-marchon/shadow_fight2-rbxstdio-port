// Nekki.SF2.GUI.Shop.ShopScene$$CJDBBCECPGF @ RVA 0x3435784

void Nekki_SF2_GUI_Shop_ShopScene__CJDBBCECPGF
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Il2CppObject *ANMFBABEMFD;
  bool bVar1;
  bool bVar2;
  System_String_o *__this_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_01;
  FFHKCJAOPLI_o *pFVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_02;
  System_String_o *__this_03;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456818a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_5699);
    DAT_0456818a = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pFVar3 = (__this->fields).GLGDPPHDDAJ;
  if ((pFVar3 == (FFHKCJAOPLI_o *)0x0) ||
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pFVar3->fields).JNNGDLLCHAG,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  pFVar3 = (__this->fields).GLGDPPHDDAJ;
  if ((pFVar3 != (FFHKCJAOPLI_o *)0x0) &&
     (__this_03 = (pFVar3->fields).JNNGDLLCHAG, __this_03 != (System_String_o *)0x0)) {
    bVar1 = System_String__StartsWith(__this_03,StringLiteral_5699,(MethodInfo *)0x0);
    __this_02 = (__this->fields).FALDFPJGOMB;
    if (__this_02 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                            );
          ANMFBABEMFD = local_50.fields._current;
          if (!bVar2) goto LAB_035358cc;
          if ((HOOAAGABMBL_o *)local_50.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Equality
                            (((HOOAAGABMBL_Fields *)((long)local_50.fields._current + 0x10))->
                             _COIPKAKHDFP_k__BackingField,__this_03,(MethodInfo *)0x0);
          if (bVar2) goto LAB_035358b4;
        } while (!bVar1);
        __this_00 = ((HOOAAGABMBL_Fields *)((long)ANMFBABEMFD + 0x10))->_COIPKAKHDFP_k__BackingField
        ;
        if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__StartsWith(__this_00,__this_03,(MethodInfo *)0x0);
      } while (!bVar2);
LAB_035358b4:
      __this_01 = (__this->fields)._ItemsPanel;
      if (__this_01 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
                (__this_01,(HOOAAGABMBL_o *)ANMFBABEMFD,0.0,(MethodInfo *)0x0);
LAB_035358cc:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

