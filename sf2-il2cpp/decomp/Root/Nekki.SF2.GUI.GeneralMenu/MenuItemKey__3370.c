// TypeDefIndex 3370
// Namespace: Nekki.SF2.GUI.GeneralMenu
// public class MenuItemKey : MenuItemButton
// Fields:
//   private LabelAlias _keylabel; // 0x78

// ===== public void StartEditing()  [RVA 0x353EDC0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemKey$$StartEditing @ RVA 0x353EDC0

void Nekki_SF2_GUI_GeneralMenu_MenuItemKey__StartEditing
               (Nekki_SF2_GUI_GeneralMenu_MenuItemKey_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0363edc0 to 0373edc7 has its CatchHandler @ 0363f008 */
                    /* try { // try from 0363edc8 to 0373ede3 has its CatchHandler @ 0363f024 */
  if ((DAT_04568ae4 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2492/*"???"*/);
    DAT_04568ae4 = 1;
    method = extraout_x1;
  }
  pNVar1 = (__this->fields)._keylabel;
                    /* try { // try from 0363edf0 to 0373edf7 has its CatchHandler @ 0363efe8 */
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0363ee00 to 0373ee07 has its CatchHandler @ 0363efbc */
                    /* try { // try from 0363ee08 to 0373ee13 has its CatchHandler @ 0363efc8 */
                    /* WARNING: Could not recover jumptable at 0x0363ee14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,StringLiteral_2492/*"???"*/,(pNVar1->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void SetKey(string PMACBPAMPJA)  [RVA 0x353EE1C]
// Nekki.SF2.GUI.GeneralMenu.MenuItemKey$$SetKey @ RVA 0x353EE1C

void Nekki_SF2_GUI_GeneralMenu_MenuItemKey__SetKey
               (Nekki_SF2_GUI_GeneralMenu_MenuItemKey_o *__this,System_String_o *PMACBPAMPJA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields)._keylabel;
                    /* try { // try from 0363ee24 to 0373ee2b has its CatchHandler @ 0363efec */
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0363ee34 to 0373ee3b has its CatchHandler @ 0363efe4 */
                    /* WARNING: Could not recover jumptable at 0x0363ee38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,PMACBPAMPJA,(pNVar1->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0363ee3c to 0373ee47 has its CatchHandler @ 0363efd4 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x353EE40]
// Nekki.SF2.GUI.GeneralMenu.MenuItemKey$$.ctor @ RVA 0x353EE40

void Nekki_SF2_GUI_GeneralMenu_MenuItemKey___ctor
               (Nekki_SF2_GUI_GeneralMenu_MenuItemKey_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton___ctor
            ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
  return;
}

