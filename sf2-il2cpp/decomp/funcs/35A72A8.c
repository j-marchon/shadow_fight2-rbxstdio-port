// Nekki.SF2.GUI.TextDebugger$$OnPopulateMesh @ RVA 0x35A72A8

void Nekki_SF2_GUI_TextDebugger__OnPopulateMesh
               (Nekki_SF2_GUI_TextDebugger_o *__this,UnityEngine_UI_VertexHelper_o *AABJHMHFLDI,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector3_array *__this_00;
  Il2CppClass *local_60;
  void *pvStack_58;
  Il2CppClass *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568e20 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextDebugger_PMOEINNJDPK>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextDebugger_PMOEINNJDPK>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextDebugger_PMOEINNJDPK>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_GetEnumerator__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e20 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (AABJHMHFLDI != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(AABJHMHFLDI,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04566f4d == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
      DAT_04566f4d = '\x01';
    }
    if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Nekki_SF2_GUI_TextDebugger_TypeInfo->static_fields->GONBFJNOFAA != false) {
      __this_00 = (__this->fields).super.m_Corners;
      if (__this_00 == (UnityEngine_Vector3_array *)0x0) goto LAB_036a7418;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<TextDebugger_PMOEINNJDPK>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<TextDebugger_PMOEINNJDPK>_MoveNext__
                          );
        if (!bVar1) break;
        if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pvStack_58 = local_48.fields._current[1].monitor;
        local_60 = local_48.fields._current[1].klass;
        local_50 = local_48.fields._current[2].klass;
        OMANDMDCGMF__PMNCECHABEA
                  ((UnityEngine_Bounds_o *)&local_60,
                   (UnityEngine_Color_o)
                   *(UnityEngine_Color_Fields *)((long)&local_48.fields._current[2].monitor + 4),
                   *(float *)&local_48.fields._current[2].monitor,AABJHMHFLDI,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,
                 Method_System_Collections_Generic_List_Enumerator<TextDebugger_PMOEINNJDPK>_Dispose__
                );
    }
    return;
  }
LAB_036a7418:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

