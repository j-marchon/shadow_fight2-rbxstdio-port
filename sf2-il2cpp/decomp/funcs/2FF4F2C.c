// Nekki.SF2.GUI.Scenes.LoaderScreen$$GJBIHHLINEG @ RVA 0x2FF4F2C

void Nekki_SF2_GUI_Scenes_LoaderScreen__GJBIHHLINEG
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  bool value;
  MethodInfo *extraout_x1;
  UnityEngine_UI_RectMask2D_o *__this_00;
  UnityEngine_RectTransform_o *JNPCENEINON;
  
  if ((DAT_04565a96 & 1) == 0) {
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04565a96 = 1;
    method = extraout_x1;
  }
  JNPCENEINON = (__this->fields)._MountRoot;
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(WideScreenController_TypeInfo,method);
  }
  WideScreenController__RunCustom(JNPCENEINON,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._MountMaskRoot;
  value = WideScreenController__ShouldRenderBorders((MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_UI_RectMask2D_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,value,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

