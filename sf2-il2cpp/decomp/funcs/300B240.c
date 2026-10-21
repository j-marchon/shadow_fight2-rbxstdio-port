// Nekki.SF2.GUI.Shop.InfoPanelContent$$LockButton @ RVA 0x300B240

void Nekki_SF2_GUI_Shop_InfoPanelContent__LockButton
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_IconLabelButton__o *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565b71 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b71 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).PGCBEJGMIMA;
  if (__this_01 != (System_Collections_Generic_List_IconLabelButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IconLabelButton>_GetEnumerator__);
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_MoveNext__
                          );
        __this_00 = local_48.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_Dispose__);
          return;
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
      } while (!bVar1);
      if ((UnityEngine_UI_Selectable_o *)__this_00 == (UnityEngine_UI_Selectable_o *)0x0) break;
      (*(code *)((UnityEngine_UI_Selectable_c *)__this_00->klass)[1].rgctx_data)
                (0x3f333333,__this_00,
                 ((UnityEngine_UI_Selectable_c *)__this_00->klass)[1]._2.typeHierarchy);
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_00,false,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

