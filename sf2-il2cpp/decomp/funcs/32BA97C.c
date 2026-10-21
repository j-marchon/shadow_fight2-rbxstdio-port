// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList.DEHHAOALHDN$$PFGBCIPPPMF @ RVA 0x32BA97C

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN__PFGBCIPPPMF
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *pNVar1;
  
  pNVar1 = (__this->fields).p_button;
  if (pNVar1 != (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033ba998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._10_TryCallEvent.methodPtr)
              (pNVar1,0,(pNVar1->klass->vtable)._10_TryCallEvent.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

