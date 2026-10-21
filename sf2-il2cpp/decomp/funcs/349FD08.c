// Nekki.SF2.GUI.HintBoxAutoKilled$$SetDescAlias @ RVA 0x349FD08

void Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias
               (Nekki_SF2_GUI_HintBoxAutoKilled_o *__this,System_String_o *DIHAKADKIKM,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields).super._Description;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,DIHAKADKIKM,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

