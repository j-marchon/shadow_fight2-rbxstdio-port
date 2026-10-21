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

