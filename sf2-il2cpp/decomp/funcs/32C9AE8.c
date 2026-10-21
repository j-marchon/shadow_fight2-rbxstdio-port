// Nekki.SF2.GUI.Map.LampsPanel$$SetTouchEnabled @ RVA 0x32C9AE8

void Nekki_SF2_GUI_Map_LampsPanel__SetTouchEnabled
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,bool DMCLFENLIHB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_Button__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456750b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    DAT_0456750b = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NPKEJHGOGOE;
  if (__this_00 != (System_Collections_Generic_List_Button__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
        return;
      }
      if ((UnityEngine_UI_Selectable_o *)local_38.fields._current ==
          (UnityEngine_UI_Selectable_o *)0x0) break;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)local_38.fields._current,DMCLFENLIHB,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

