// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$HNFDMDOJNKO @ RVA 0x34A6630

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__HNFDMDOJNKO
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar2;
  MethodInfo *extraout_x1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a65d4 with catch @ 035a6630
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6628 with catch @ 035a6634
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a65bc with catch @ 035a6638
                        */
                    /* try { // try from 035a6650 to 036a6653 has its CatchHandler @ 035a6680 */
  if ((DAT_045684f3 & 1) == 0) {
                    /* try { // try from 035a6654 to 036a6687 has its CatchHandler @ 035a6510 */
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_045684f3 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 035a6650 with catch @ 035a6680 */
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__BJEJCCMFMJH(__this,method);
                    /* try { // try from 035a6688 to 036a668f has its CatchHandler @ 035a66a4 */
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035a6690 to 036a669b has its CatchHandler @ 035a6510 */
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                    /* try { // try from 035a669c to 036a66a3 has its CatchHandler @ 035a66a4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a6688 with catch @ 035a66a4
                       catch(type#2 @ 00000000) { ... } // from try @ 035a669c with catch @ 035a66a4
                        */
                    /* try { // try from 035a66a8 to 036a6773 has its CatchHandler @ 035a66a8
                       catch() { ... } // from try @ 035a66a8 with catch @ 035a66a8
                       catch() { ... } // from try @ 035a67b8 with catch @ 035a66a8
                       catch() { ... } // from try @ 035a6804 with catch @ 035a66a8
                       catch() { ... } // from try @ 035a6834 with catch @ 035a66a8
                       catch() { ... } // from try @ 035a686c with catch @ 035a66a8 */
  pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar1,0.2,(MethodInfo *)0x0);
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((UnityEngine_UI_Image_o *)(__this->fields)._consumableGlow,0.4,0.9,
                      (MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__Append
                     (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((UnityEngine_UI_Image_o *)(__this->fields)._consumableGlow,1.0,0.9,
                      (MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__Append
                     (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  pDVar1 = (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                     ((Il2CppObject *)pDVar1,-1,
                      Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
  (__this->fields).MCLDLFHFMGO = pDVar1;
  thunk_FUN_01c20e04(&(__this->fields).MCLDLFHFMGO);
  return;
}

