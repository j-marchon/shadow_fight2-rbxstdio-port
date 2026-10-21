// Nekki.SF2.GUI.TextDebugger$$OnDestroy @ RVA 0x35A5E9C

void Nekki_SF2_GUI_TextDebugger__OnDestroy(Nekki_SF2_GUI_TextDebugger_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04568e0a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextDebugger_JELBJIIOFDK__);
    FUN_01bab630(&Nekki_SF2_GUI_TextDebugger_TypeInfo);
    DAT_04568e0a = 1;
  }
  UnityEngine_UI_Graphic__OnDestroy((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  method_00 = extraout_x1;
  if ((Nekki_SF2_GUI_TextDebugger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_TextDebugger__JENDHHCONLG(CJNHFNHJHPE,method_00);
  return;
}

