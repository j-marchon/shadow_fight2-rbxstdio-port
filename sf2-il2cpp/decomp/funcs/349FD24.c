// Nekki.SF2.GUI.HintBoxAutoKilled$$SetDescText @ RVA 0x349FD24

void Nekki_SF2_GUI_HintBoxAutoKilled__SetDescText
               (Nekki_SF2_GUI_HintBoxAutoKilled_o *__this,System_String_o *DIHAKADKIKM,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields).super._Description;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0359fd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,DIHAKADKIKM,(pNVar1->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

