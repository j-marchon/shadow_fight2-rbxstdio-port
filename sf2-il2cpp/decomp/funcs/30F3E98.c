// Nekki.SF2.GUI.Dialogs.TradeDialog$$.ctor @ RVA 0x30F3E98

void Nekki_SF2_GUI_Dialogs_TradeDialog___ctor
               (Nekki_SF2_GUI_Dialogs_TradeDialog_o *__this,MethodInfo *method)

{
  if ((DAT_04566440 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04566440 = 1;
  }
  (__this->fields).JOIGFPPEHGI = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).CKAKBPJOALE = StringLiteral_1;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

