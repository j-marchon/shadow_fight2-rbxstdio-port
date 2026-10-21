// TypeDefIndex 2070
// Namespace: 
// [CompilerGenerated]
// private sealed class GeneralMenuList.DEHHAOALHDN
// Fields:
//   public MenuItemButton p_button; // 0x10
//   public GeneralMenuList <>4__this; // 0x18
//   public int p_index; // 0x20

// ===== internal void PFGBCIPPPMF()  [RVA 0x32BA97C]
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


// ===== public void .ctor()  [RVA 0x32BA8E0]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList.DEHHAOALHDN$$.ctor @ RVA 0x32BA8E0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN___ctor
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void BEJFGEIAICM()  [RVA 0x32BA9A0]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList.DEHHAOALHDN$$BEJFGEIAICM @ RVA 0x32BA9A0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN__BEJFGEIAICM
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this_00;
  MethodInfo *in_x3;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0) {
    Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt
              (__this_00,(__this->fields).p_index,true,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void FABOKBNLFJH()  [RVA 0x32BA9C4]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList.DEHHAOALHDN$$FABOKBNLFJH @ RVA 0x32BA9C4

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN__FABOKBNLFJH
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0) {
    Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__Deselect(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

