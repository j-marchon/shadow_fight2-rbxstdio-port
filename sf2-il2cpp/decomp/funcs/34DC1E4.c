// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$BGJLGOKOABF @ RVA 0x34DC1E4

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__BGJLGOKOABF
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Color_o endValue;
  
  if ((DAT_0456871f & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456871f = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__MHNCGDFKIJN((MethodInfo *)0x0);
  __this_00 = (__this->fields)._screenCanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,1.0,(MethodInfo *)0x0);
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields)._background,0.0,(MethodInfo *)0x0);
    endValue.fields.b = 1.0;
    endValue.fields.a = 1.0;
    endValue.fields.r = 1.0;
    endValue.fields.g = 1.0;
    DG_Tweening_DOTweenModuleUI__DOColor
              ((UnityEngine_UI_Image_o *)(__this->fields)._background,endValue,1.0,(MethodInfo *)0x0
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

