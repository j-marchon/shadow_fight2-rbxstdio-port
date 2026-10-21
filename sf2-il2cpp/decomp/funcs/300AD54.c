// Nekki.SF2.GUI.Shop.InfoPanelContent$$LFLGIOKBFCG @ RVA 0x300AD54

void Nekki_SF2_GUI_Shop_InfoPanelContent__LFLGIOKBFCG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  Il2CppObject *x;
  bool bVar1;
  System_Collections_Generic_List_IconLabelButton__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565b7a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b7a = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PGCBEJGMIMA;
  if (__this_00 != (System_Collections_Generic_List_IconLabelButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IconLabelButton>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_MoveNext__
                          );
        x = local_50.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_Dispose__);
          return;
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar1);
      if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) break;
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

