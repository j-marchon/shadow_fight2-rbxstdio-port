// Nekki.SF2.GUI.Profile.SealsContent$$Refresh @ RVA 0x32B97B4

void Nekki_SF2_GUI_Profile_SealsContent__Refresh
               (Nekki_SF2_GUI_Profile_SealsContent_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  HOOAAGABMBL_o **ppHVar1;
  
  ppHVar1 = &(__this->fields).PCBECBEFJOI;
  *ppHVar1 = CNDPGGAFHEA;
                    /* try { // try from 033b97c4 to 034b980f has its CatchHandler @ 033b9934 */
  thunk_FUN_01c20e04(ppHVar1);
  if ((*ppHVar1 != (HOOAAGABMBL_o *)0x0) &&
     (__this_00 = (__this->fields)._DescriptionLabel, __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0
     )) {
    Nekki_SF2_GUI_LabelAlias__set_Alias
              (__this_00,((*ppHVar1)->fields)._OICGFKLBNPE_k__BackingField,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

