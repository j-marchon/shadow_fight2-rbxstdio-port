// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$GFAPFHOKBCB @ RVA 0x330BA40

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__GFAPFHOKBCB
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  MethodInfo *extraout_x1;
  CBLABOPKBKD_o *pCVar3;
  DG_Tweening_Sequence_o **ppDVar4;
  
  if ((DAT_04567784 & 1) == 0) {
                    /* catch() { ... } // from try @ 0340ba2c with catch @ 0340ba5c */
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
                    /* try { // try from 0340ba6c to 0350ba73 has its CatchHandler @ 0340ba88 */
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
                    /* try { // try from 0340ba74 to 0350ba7f has its CatchHandler @ 0340b6d4 */
    DAT_04567784 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__CBMLKIFOKJO(__this,method);
                    /* try { // try from 0340ba80 to 0350ba87 has its CatchHandler @ 0340ba88 */
  pCVar3 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar3 != (CBLABOPKBKD_o *)0x0) {
                    /* catch() { ... } // from try @ 0340b9c4 with catch @ 0340ba88
                       catch() { ... } // from try @ 0340ba6c with catch @ 0340ba88
                       catch() { ... } // from try @ 0340ba80 with catch @ 0340ba88 */
    if ((pCVar3->fields).NMDOMADFIOI != false) {
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      ppDVar4 = &(__this->fields).NEDADGIEPNI;
      *ppDVar4 = pDVar1;
      thunk_FUN_01c20e04(ppDVar4,pDVar1);
      DG_Tweening_TweenSettingsExtensions__AppendInterval(*ppDVar4,0.0,(MethodInfo *)0x0);
      pDVar1 = *ppDVar4;
      pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                         ((UnityEngine_UI_Image_o *)(__this->fields)._shineBorder,0.4,1.0,
                          (MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Append
                (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
      pDVar1 = *ppDVar4;
      pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                         ((UnityEngine_UI_Image_o *)(__this->fields)._shineBorder,1.0,1.0,
                          (MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Append
                (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                ((Il2CppObject *)*ppDVar4,-1,
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
      return;
    }
    __this_00 = (__this->fields)._shineBorder;
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

