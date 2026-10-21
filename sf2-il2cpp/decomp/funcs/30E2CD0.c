// Nekki.SF2.GUI.GeneralMenu.MenuItemStory$$get_CheckBoxEnabled @ RVA 0x30E2CD0

bool Nekki_SF2_GUI_GeneralMenu_MenuItemStory__get_CheckBoxEnabled
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = (__this->fields)._CheckBox;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

