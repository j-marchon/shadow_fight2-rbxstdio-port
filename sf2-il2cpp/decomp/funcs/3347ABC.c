// Nekki.SF2.GUI.Map.ZoneScrollItem$$GetButtonByBattle @ RVA 0x3347ABC

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BattleButton__o *__this_00;
  Nekki_SF2_GUI_Map_BattleButton_o *pNVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045679d1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    DAT_045679d1 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PGCBEJGMIMA;
  if (__this_00 == (System_Collections_Generic_List_BattleButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__);
    if (!bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
      break;
    }
    if ((Nekki_SF2_GUI_Map_BattleButton_o *)local_48.fields._current ==
        (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar2 = (Nekki_SF2_GUI_Map_BattleButton_o *)local_48.fields._current;
  } while (((Nekki_SF2_GUI_Map_BattleButton_Fields *)((long)local_48.fields._current + 0x10))->
           CLMFOMEABFA != BANHBMINMMP);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
  return pNVar2;
}

