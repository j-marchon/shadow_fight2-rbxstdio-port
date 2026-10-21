// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$GFAPFHOKBCB @ RVA 0x31B2E44

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__GFAPFHOKBCB
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar2;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar3;
  
  if ((DAT_04566b8d & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_04566b8d = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__CBMLKIFOKJO(__this,method);
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  ppDVar3 = &(__this->fields).GOPKOMPBHKM;
  *ppDVar3 = pDVar1;
  thunk_FUN_01c20e04(ppDVar3,pDVar1);
  DG_Tweening_TweenSettingsExtensions__AppendInterval(*ppDVar3,0.0,(MethodInfo *)0x0);
  pDVar1 = *ppDVar3;
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((UnityEngine_UI_Image_o *)(__this->fields)._itemShineBorder,0.4,1.0,
                      (MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__Append
            (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  pDVar1 = *ppDVar3;
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((UnityEngine_UI_Image_o *)(__this->fields)._itemShineBorder,1.0,1.0,
                      (MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__Append
            (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__SetLoops<object>
            ((Il2CppObject *)*ppDVar3,-1,
             Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
  return;
}

