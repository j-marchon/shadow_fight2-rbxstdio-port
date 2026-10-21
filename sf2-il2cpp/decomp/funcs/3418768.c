// Nekki.SF2.GUI.Map.InfoBattle$$.ctor @ RVA 0x3418768

void Nekki_SF2_GUI_Map_InfoBattle___ctor(Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  DNELIPCHKLK_o *__this_00;
  DNELIPCHKLK_o **ppDVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045680ac & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_045680ac = 1;
    method = extraout_x1;
  }
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo,method);
  DNELIPCHKLK___ctor(__this_00,(MethodInfo *)0x0);
  ppDVar1 = &(__this->fields).AABIECAIFGA;
  *ppDVar1 = __this_00;
  thunk_FUN_01c20e04(ppDVar1,__this_00);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

