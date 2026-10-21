// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$LCGFJKFJKJK @ RVA 0x3258C8C

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  LabelButton_o *pLVar1;
  
                    /* try { // try from 03358c8c to 03458ca3 has its CatchHandler @ 03358d9c */
  Nekki_SF2_GUI_Dialogs_BaseDialog__LCGFJKFJKJK
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,DNBBBGEENMM,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).super._btnOK;
  if (pLVar1 != (LabelButton_o *)0x0) {
                    /* try { // try from 03358ca4 to 03458d8b has its CatchHandler @ 03358c0c */
    LabelButton__set_ButtonColor(pLVar1,(__this->fields).super.FKKACPDDADI,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super._btnCancel;
    if (pLVar1 != (LabelButton_o *)0x0) {
      LabelButton__set_ButtonColor(pLVar1,(__this->fields).super.FHLAKGNIFAF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

