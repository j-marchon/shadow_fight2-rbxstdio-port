// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$get_Item @ RVA 0x32BA888

Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__get_Item
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,int32_t DPJIDNBJIBG,
          MethodInfo *method)

{
  System_Collections_Generic_List_MenuItemButton__o *__this_00;
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *pNVar1;
  
  if ((DAT_04567484 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    DAT_04567484 = 1;
  }
  __this_00 = (__this->fields)._buttons;
  if (__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
    pNVar1 = (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                        Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

