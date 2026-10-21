// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$set_Value @ RVA 0x2FEF180

void Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__set_Value
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerkProgressBar_o *pNVar1;
  
  pNVar1 = (__this->fields)._ProgressBar;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_PerkProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030ef198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._7_set_Value.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._7_set_Value.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

