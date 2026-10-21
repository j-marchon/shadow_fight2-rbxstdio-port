// Nekki.SF2.GUI.Map.RaidKeysRowView$$OLOBIPCHMCC @ RVA 0x3327DC4

void Nekki_SF2_GUI_Map_RaidKeysRowView__OLOBIPCHMCC
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *__this_00;
  System_Collections_Generic_List_NPKKNCCEIND__o *__this_01;
  Nekki_SF2_GUI_Map_RaidKey_o *__this_02;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045678a6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_GetEnumerator__);
    DAT_045678a6 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._keyPanelCanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,0.001,(MethodInfo *)0x0);
    __this_01 = (__this->fields).super.ADHBPAAHOKK;
    if (__this_01 != (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<NPKKNCCEIND>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_Dispose__);
          Nekki_SF2_GUI_Map_IRaidKeysView__AMOJAGCNKAB((__this->fields)._keyPanel,(MethodInfo *)0x0)
          ;
          Nekki_SF2_GUI_Map_RaidKeysRowView__BGOAPKAMKOK(__this,method_00);
          return;
        }
        if ((NPKKNCCEIND_o *)local_38.fields._current == (NPKKNCCEIND_o *)0x0) break;
        if (0 < ((NPKKNCCEIND_Fields *)((long)local_38.fields._current + 0x10))->JAICMIMBIOA) {
          __this_02 = Nekki_SF2_GUI_Map_IRaidKeysView__ANMOLCFIIJK
                                ((Nekki_SF2_GUI_Map_IRaidKeysView_o *)__this,
                                 (NPKKNCCEIND_o *)local_38.fields._current,
                                 (__this->fields)._keyPanel,(MethodInfo *)0x0);
          if (__this_02 == (Nekki_SF2_GUI_Map_RaidKey_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_Map_RaidKey__InitButton(__this_02,(MethodInfo *)0x0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

