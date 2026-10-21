// Nekki.SF2.GUI.Map.MapButtonsPanel$$EnableStoryMapButtons @ RVA 0x3593ADC

void Nekki_SF2_GUI_Map_MapButtonsPanel__EnableStoryMapButtons
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_MapButton__o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568d8c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    DAT_04568d8c = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).KMGFNKKPGIH;
  if (__this_01 != (System_Collections_Generic_List_MapButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
      __this_00 = local_50.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__)
        ;
        return;
      }
      if ((UnityEngine_Component_o *)local_50.fields._current == (UnityEngine_Component_o *)0x0)
      break;
      if (((UnityEngine_Component_o *)((long)local_50.fields._current + 0x168))->klass ==
          (UnityEngine_Component_c *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = FKNCNNOOOIO__MOAFEDFIIOA
                        ((FKNCNNOOOIO_o *)
                         ((UnityEngine_Component_o *)((long)local_50.fields._current + 0x168))->
                         klass,(MethodInfo *)0x0);
      if (bVar1) {
        __this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_GameObject__SetActive(__this_02,CMPKOOEKFKF,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

