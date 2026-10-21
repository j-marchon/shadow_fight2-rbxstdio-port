// Nekki.SF2.GUI.Dialogs.StrangerDialog$$GetLeftButtonId @ RVA 0x3179FD0

int32_t Nekki_SF2_GUI_Dialogs_StrangerDialog__GetLeftButtonId
                  (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  MethodInfo *in_x2;
  
  pLVar1 = Nekki_SF2_GUI_Dialogs_StrangerDialog__HDECGIDPOPB(__this,false,in_x2);
  if (pLVar1 != (LabelButton_o *)0x0) {
    return (pLVar1->fields).super.super.ButtonId;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

