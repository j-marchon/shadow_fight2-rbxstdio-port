// Nekki.SF2.GUI.Pvp.PvPHintController$$.ctor @ RVA 0x352A468

void Nekki_SF2_GUI_Pvp_PvPHintController___ctor
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568a1b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568a1b = 1;
    method = extraout_x1;
  }
  (__this->fields).super.field_0x16 = 1;
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

