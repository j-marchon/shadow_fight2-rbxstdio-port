// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$set_Selection @ RVA 0x3094B78

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__set_Selection
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
                    /* try { // try from 03194b7c to 03294b9f has its CatchHandler @ 03194cac */
  bVar1 = Nekki_SF2_GUI_GeneralMenu_MenuItemButton__get_Selection
                    (__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  if (bVar1 == CJNHFNHJHPE) {
    return;
  }
  __this_00 = (__this->fields)._selection;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 03194bb0 to 03294bb7 has its CatchHandler @ 03194c94 */
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

