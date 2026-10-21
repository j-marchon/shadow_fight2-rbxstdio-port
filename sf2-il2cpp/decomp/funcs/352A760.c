// Nekki.SF2.GUI.Pvp.PvPHintController$$GIENGNEGHPJ @ RVA 0x352A760

void Nekki_SF2_GUI_Pvp_PvPHintController__GIENGNEGHPJ
               (Nekki_SF2_GUI_Pvp_PvPHintController_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568a1d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_10595);
    FUN_01bab630(&StringLiteral_10596);
    DAT_04568a1d = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = Nekki_SF2_GUI_UIModule__GetModuleByName<object>
                     (StringLiteral_10595,Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__)
  ;
  *(Il2CppObject **)&(__this->fields).IJAPOOKEGNE = pIVar1;
  thunk_FUN_01c20e04();
  pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintList_o *)
           Nekki_SF2_GUI_UIModule__GetModuleByName<object>
                     (StringLiteral_10596,Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__)
  ;
  (__this->fields).LAPCPDGHEIH = pNVar2;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Pvp_PvPHintController__RefreshHintsTrackingDevices(__this,method_00);
  Nekki_SF2_GUI_Pvp_PvPHintController__CEPJIALMEOO(__this,method_01);
  return;
}

