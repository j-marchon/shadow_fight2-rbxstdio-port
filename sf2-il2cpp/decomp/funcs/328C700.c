// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GJBIHHLINEG @ RVA 0x328C700

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GJBIHHLINEG
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_RectTransform_o *JNPCENEINON;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0338c704 to 0348c70b has its CatchHandler @ 0338c70c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338c6d0 with catch @ 0338c70c
                       catch(type#2 @ 00000000) { ... } // from try @ 0338c704 with catch @ 0338c70c
                        */
  if ((DAT_045672fa & 1) == 0) {
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_045672fa = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).Bg;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    JNPCENEINON = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(WideScreenController_TypeInfo);
    }
    WideScreenController__RunCustom(JNPCENEINON,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

