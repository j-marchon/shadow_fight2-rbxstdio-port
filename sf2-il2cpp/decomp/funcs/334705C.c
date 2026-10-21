// Nekki.SF2.GUI.Map.ZoneScrollItem$$LKLHLGLCEOM @ RVA 0x334705C

void Nekki_SF2_GUI_Map_ZoneScrollItem__LKLHLGLCEOM
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BattleButton__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045679ca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattleButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    DAT_045679ca = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PGCBEJGMIMA;
  if (__this_00 != (System_Collections_Generic_List_BattleButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BattleButton>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<BattleButton>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_Map_ZoneScrollItem__GPAECDJPJPF
                (__this,(Nekki_SF2_GUI_Map_BattleButton_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<BattleButton>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

