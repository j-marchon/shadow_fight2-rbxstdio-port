// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$get_count @ RVA 0x32BA69C

int32_t Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__get_count
                  (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MenuItemButton__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567482 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Count__);
    DAT_04567482 = 1;
  }
  pSVar1 = (__this->fields)._buttons;
  if (pSVar1 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

