// Nekki.SF2.GUI.Map.BattlePrize$$OnDestroy @ RVA 0x3217FBC

void Nekki_SF2_GUI_Map_BattlePrize__OnDestroy
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BattlePrizeElement__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566ee3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__);
    DAT_04566ee3 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JMAMFIMIIFA;
  if (__this_00 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_Map_BattlePrize__AKOJCICPDFI
                (__this,(Nekki_SF2_GUI_Map_BattlePrizeElement_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

