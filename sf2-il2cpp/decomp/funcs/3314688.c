// Nekki.SF2.GUI.Common.PageSwitchPanel$$.ctor @ RVA 0x3314688

void Nekki_SF2_GUI_Common_PageSwitchPanel___ctor
               (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_PageSwitchPanel_PageSwitchEvent_o *__this_00;
  Nekki_SF2_GUI_Common_PageSwitchPanel_PageSwitchEvent_o **ppNVar1;
  MethodInfo *extraout_x1;
  undefined1 auVar2 [16];
  
  if ((DAT_045677cd & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_PageSwitchPanel_PageSwitchEvent_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_045677cd = 1;
    method = extraout_x1;
  }
  auVar2 = thunk_FUN_01bda818(Nekki_SF2_GUI_Common_PageSwitchPanel_PageSwitchEvent_TypeInfo,method);
  __this_00 = auVar2._0_8_;
  Nekki_SF2_GUI_Common_PageSwitchPanel_PageSwitchEvent___ctor(__this_00,auVar2._8_8_);
  ppNVar1 = &(__this->fields)._OnPageSwitched;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

