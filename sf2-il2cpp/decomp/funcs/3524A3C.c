// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$Unselect @ RVA 0x3524A3C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__Unselect
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,
               MethodInfo *method)

{
  UnityEngine_UI_RectMask2D_o *__this_00;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  
  __this_00 = (__this->fields)._Mask;
  if (__this_00 != (UnityEngine_UI_RectMask2D_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0)
    ;
    __this_01 = (__this->fields)._Fade;
    if ((__this_01 != (UnityEngine_UI_Image_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

