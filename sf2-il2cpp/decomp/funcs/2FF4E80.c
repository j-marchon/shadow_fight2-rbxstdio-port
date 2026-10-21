// Nekki.SF2.GUI.Scenes.LoaderScreen$$Awake @ RVA 0x2FF4E80

void Nekki_SF2_GUI_Scenes_LoaderScreen__Awake
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a90 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_LoaderScreen_GJBIHHLINEG__);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04565a90 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Scenes_LoaderScreen__GJBIHHLINEG(__this,method);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  WideScreenController__add_UpdateEvent(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

