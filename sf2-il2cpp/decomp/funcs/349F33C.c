// Nekki.SF2.GUI.Map.MapPanel$$HasBattle @ RVA 0x349F33C

bool Nekki_SF2_GUI_Map_MapPanel__HasBattle
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_00;
  Nekki_SF2_GUI_Map_BattleButton_o *exists;
  OOMHDDBCBJP_o *extraout_x1;
  OOMHDDBCBJP_o *method_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  method_00 = BANHBMINMMP;
  if ((DAT_04568485 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568485 = 1;
    method_00 = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,(MethodInfo *)method_00);
  if (__this_00 == (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_58,
                       Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__)
    ;
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_0359f440;
    }
    if ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_58.fields._current ==
        (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    exists = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle
                       ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_58.fields._current,BANHBMINMMP,
                        (MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_0359f440:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_58,Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
  return bVar1 && iVar3 == 4;
}

