// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$.ctor @ RVA 0x352D314

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,MethodInfo *method)

{
  if ((DAT_04568a37 & 1) == 0) {
    FUN_01bab630(&StringLiteral_13800);
    FUN_01bab630(&StringLiteral_13798);
    FUN_01bab630(&StringLiteral_13796);
    FUN_01bab630(&StringLiteral_13788);
    DAT_04568a37 = 1;
  }
  (__this->fields)._TimeHourShort = StringLiteral_13796;
  thunk_FUN_01c20e04(&(__this->fields)._TimeHourShort);
  (__this->fields)._TimeMinuteShort = StringLiteral_13800;
  thunk_FUN_01c20e04(&(__this->fields)._TimeMinuteShort);
  (__this->fields)._TimeAgo = StringLiteral_13788;
  thunk_FUN_01c20e04(&(__this->fields)._TimeAgo);
  (__this->fields)._TimeLessMinute = StringLiteral_13798;
  thunk_FUN_01c20e04(&(__this->fields)._TimeLessMinute);
  (__this->fields).IOOGFEOIEPK = -1;
  (__this->fields).CCIKLAFHFAH = -1;
  (__this->fields).NBMPEEDDGKD = -1;
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}

