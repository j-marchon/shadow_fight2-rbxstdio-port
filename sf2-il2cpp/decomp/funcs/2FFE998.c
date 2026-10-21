// Nekki.SF2.GUI.Fight.PreFight$$.ctor @ RVA 0x2FFE998

void Nekki_SF2_GUI_Fight_PreFight___ctor(Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *__this_00;
  Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o **ppNVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_01;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o **ppNVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04565b0e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04565b0e = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_TypeInfo,method);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields).OnButtonClick;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_TypeInfo);
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD___ctor(__this_01,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).OnStopScreen;
  *ppNVar2 = __this_01;
  thunk_FUN_01c20e04(ppNVar2,__this_01);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

