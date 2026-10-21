// Nekki.SF2.GUI.GeneralMenu.MenuItemVideo$$OnEnable @ RVA 0x34CADB8

void Nekki_SF2_GUI_GeneralMenu_MenuItemVideo__OnEnable
               (Nekki_SF2_GUI_GeneralMenu_MenuItemVideo_o *__this,MethodInfo *method)

{
  long lVar1;
  bool value;
  Nekki_SF2_GUI_GeneralMenu_MenuItemVideo_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *in_x2;
  UnityEngine_GameObject_o *__this_02;
  
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnEnable
            ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
  value = Nekki_SF2_GUI_GeneralMenu_MenuItemVideo__KCAPGAALIDN
                    (__this_00,(__this->fields).VideoInternalName,in_x2);
  __this_02 = (__this->fields).LockedImage;
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_02,value,(MethodInfo *)0x0);
    __this_01 = (__this->fields).super._label;
    if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      lVar1 = 0x88;
      if (!value) {
        lVar1 = 0x80;
      }
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (__this_01,*(System_String_o **)((long)&__this->klass + lVar1),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

