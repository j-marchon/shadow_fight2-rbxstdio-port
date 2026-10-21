// Nekki.SF2.GUI.Dialogs.SimpleDialog$$SetContentTextFontSize @ RVA 0x301EB4C

void Nekki_SF2_GUI_Dialogs_SimpleDialog__SetContentTextFontSize
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,int32_t NJBICBHLOMO,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields)._label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_UseLabelFontSize(pNVar1,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._label;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,NJBICBHLOMO,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

