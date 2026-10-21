// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$DJNONHNFKCN @ RVA 0x35AE62C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__DJNONHNFKCN
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,System_String_o *MAFOJGJOMLG,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  
  __this_00 = (__this->fields)._canvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,1.0,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._playerStatusIcon;
    if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_01,MAFOJGJOMLG,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

