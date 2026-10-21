// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$.ctor @ RVA 0x324D358

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene___ctor
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  if ((DAT_04567108 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>__ctor__);
    FUN_01bab630(&StringLiteral_17611);
    DAT_04567108 = 1;
  }
  (__this->fields)._videoPath = StringLiteral_17611;
  thunk_FUN_01c20e04();
  (__this->fields)._ChangeLanguageDelay = 1.0;
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>__ctor__
            );
  return;
}

