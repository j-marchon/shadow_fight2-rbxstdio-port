// Nekki.SF2.GUI.Map.MapButtonViewBase$$OIGHNFJGHEO @ RVA 0x31B8704

float Nekki_SF2_GUI_Map_MapButtonViewBase__OIGHNFJGHEO
                (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,
                System_Collections_Generic_List_RaidKey__o *IFFLAAMFALK,float GCDIOJKMKIN,
                MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  UnityEngine_Vector2_o UVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 032b8710 to 033b8717 has its CatchHandler @ 032b8cc4 */
                    /* try { // try from 032b8724 to 033b873f has its CatchHandler @ 032b8cbc */
  if ((DAT_04566bcc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RaidKey>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RaidKey>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RaidKey>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidKey>_GetEnumerator__);
    __this = (Nekki_SF2_GUI_Map_MapButtonViewBase_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<RaidKey>_get_Count__);
    DAT_04566bcc = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (IFFLAAMFALK != (System_Collections_Generic_List_RaidKey__o *)0x0) {
    iVar1 = (IFFLAAMFALK->fields)._size;
    if (iVar1 < 1) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = (float)(iVar1 + -1) * GCDIOJKMKIN;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)IFFLAAMFALK,
                 Method_System_Collections_Generic_List<RaidKey>_GetEnumerator__);
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_List_Enumerator<RaidKey>_MoveNext__
                               ), bVar2) {
        if ((Nekki_SF2_GUI_Map_RaidKey_o *)local_48.fields._current ==
            (Nekki_SF2_GUI_Map_RaidKey_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar4 = Nekki_SF2_GUI_Map_RaidKey__GetBoundingSize
                          ((Nekki_SF2_GUI_Map_RaidKey_o *)local_48.fields._current,(MethodInfo *)0x0
                          );
        fVar3 = fVar3 + UVar4.fields.x;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<RaidKey>_Dispose__);
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

