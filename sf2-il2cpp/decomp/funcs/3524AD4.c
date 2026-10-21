// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$.ctor @ RVA 0x3524AD4

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab___ctor
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o *__this_00;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o **ppNVar1;
  MethodInfo *extraout_x1;
  undefined1 auVar2 [16];
  
  if ((DAT_045689f1 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_TypeInfo);
    DAT_045689f1 = 1;
    method = extraout_x1;
  }
  (__this->fields)._Category = -1;
  auVar2 = thunk_FUN_01bda818(Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_TypeInfo
                              ,method);
  __this_00 = auVar2._0_8_;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM___ctor
            (__this_00,auVar2._8_8_);
  ppNVar1 = &(__this->fields)._OnClicked;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

