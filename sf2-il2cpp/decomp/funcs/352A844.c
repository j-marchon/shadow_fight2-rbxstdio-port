// Nekki.SF2.GUI.Pvp.PvPHintController$$SetLeftHintListAnimationAvailable @ RVA 0x352A844

void Nekki_SF2_GUI_Pvp_PvPHintController__SetLeftHintListAnimationAvailable
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,bool EOAIBJMEPND,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar1;
  MethodInfo *in_x3;
  
  pNVar1 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupAnimationAvailable
              (pNVar1,0x25a,EOAIBJMEPND,in_x3);
    pNVar1 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(__this->fields).IJAPOOKEGNE;
    if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupAnimationAvailable
                (pNVar1,0x259,EOAIBJMEPND,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

