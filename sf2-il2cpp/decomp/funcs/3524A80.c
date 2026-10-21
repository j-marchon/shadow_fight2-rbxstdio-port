// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$OnButtonClick @ RVA 0x3524A80

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__OnButtonClick
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689f0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ControlsInfoCategoryTab>_Invoke__);
    DAT_045689f0 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._OnClicked;
  if (__this_00 != (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)__this,
               Method_UnityEngine_Events_UnityEvent<ControlsInfoCategoryTab>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

