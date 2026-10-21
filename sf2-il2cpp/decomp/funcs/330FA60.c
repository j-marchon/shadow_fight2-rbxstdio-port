// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$JIMIDEDINCP @ RVA 0x330FA60

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__JIMIDEDINCP
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  UnityEngine_Transform_o *pUVar2;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar3;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar4;
  DG_Tweening_Sequence_o **ppDVar5;
  
  if ((DAT_045677a8 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_045677a8 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__HGNJELDOFKM(__this,method);
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar1,0.3,(MethodInfo *)0x0);
  pLVar4 = (__this->fields)._consumableButton;
  if (pLVar4 != (LabelButton_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
    pDVar3 = DG_Tweening_ShortcutExtensions__DOScale(pUVar2,1.05,0.3,(MethodInfo *)0x0);
    pDVar1 = DG_Tweening_TweenSettingsExtensions__Append
                       (pDVar1,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
    pLVar4 = (__this->fields)._consumableButton;
    if (pLVar4 != (LabelButton_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
      pDVar3 = DG_Tweening_ShortcutExtensions__DOScale(pUVar2,1.0,0.3,(MethodInfo *)0x0);
      pDVar1 = DG_Tweening_TweenSettingsExtensions__Append
                         (pDVar1,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
      pDVar1 = (DG_Tweening_Sequence_o *)
               DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                         ((Il2CppObject *)pDVar1,-1,
                          Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
      ppDVar5 = &(__this->fields).IBNPNEDABKA;
      *ppDVar5 = pDVar1;
      thunk_FUN_01c20e04(ppDVar5,pDVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

