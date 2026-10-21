// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$Deselect @ RVA 0x32BA700

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__Deselect
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MenuItemButton__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567483 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuItemButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuItemButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuItemButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_GetEnumerator__);
    DAT_04567483 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).IMECMAJEGFB == false) {
    __this_00 = (__this->fields)._buttons;
    if (__this_00 == (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,method);
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MenuItemButton>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<MenuItemButton>_MoveNext__
                             ), bVar1) {
      if ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_GeneralMenu_MenuItemButton__set_Selection
                ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)local_38.fields._current,false,
                 (MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<MenuItemButton>_Dispose__
              );
  }
  return;
}

