// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$MBKCJEFAPMO @ RVA 0x321AD20

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__MBKCJEFAPMO
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *ALMGONACBKC;
  bool bVar1;
  System_Collections_Generic_List_PerkUI__o *pSVar2;
  OGNCMFBMBMB_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566f05 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_get_Count__);
    FUN_01bab630(&Method_OGNCMFBMBMB_LEAPFADCELA<PerkUI>__);
    DAT_04566f05 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).AHJLOHFIEGJ;
  if (pSVar2 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
    if ((pSVar2->fields)._size != 0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<PerkUI>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<PerkUI>_MoveNext__
                               ), ALMGONACBKC = local_50.fields._current, bVar1) {
        __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (OGNCMFBMBMB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        OGNCMFBMBMB__LEAPFADCELA<object>
                  (__this_00,ALMGONACBKC,Method_OGNCMFBMBMB_LEAPFADCELA<PerkUI>__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<PerkUI>_Dispose__);
      pSVar2 = (__this->fields).AHJLOHFIEGJ;
      if (pSVar2 == (System_Collections_Generic_List_PerkUI__o *)0x0) goto LAB_0331ae90;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
    __this_01 = (__this->fields)._perkIconHolder;
    if ((__this_01 != (UnityEngine_Transform_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0331ae90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

