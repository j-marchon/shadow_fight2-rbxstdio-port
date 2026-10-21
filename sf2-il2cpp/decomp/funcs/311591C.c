// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$SetKickable @ RVA 0x311591C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__SetKickable
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,bool CKPLGFKDOHC,
               int32_t BGAKDPJEAIB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045665b0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    DAT_045665b0 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NMNKHAIGHDG;
  if (__this_00 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      *(bool *)((long)&local_48.fields._current[4].klass + 2) =
           0 < *(int *)&local_48.fields._current[3].klass - BGAKDPJEAIB && CKPLGFKDOHC;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

