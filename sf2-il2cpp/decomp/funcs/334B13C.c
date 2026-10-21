// Nekki.SF2.GUI.Dialogs.Raids.ChatSFTabButton$$.ctor @ RVA 0x334B13C

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this,MethodInfo *method)

{
  FNONKACJHKO_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045679f6 & 1) == 0) {
    FUN_01bab630(&FNONKACJHKO_TypeInfo);
    DAT_045679f6 = 1;
    method = extraout_x1;
  }
  (__this->fields)._scaleDuration = 0.1;
  (__this->fields)._minScale = 0.35;
  (__this->fields)._maxScale = 0.7;
  __this_00 = (FNONKACJHKO_o *)thunk_FUN_01bda818(FNONKACJHKO_TypeInfo,method);
  FNONKACJHKO___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).JMEFJLDILIJ = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).JMEFJLDILIJ,__this_00);
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}

