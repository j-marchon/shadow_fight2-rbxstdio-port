// EnterScreen$$Init @ RVA 0x358A998

void EnterScreen__Init(EnterScreen_o *__this,System_String_o *EHNFGMGKCHO,
                      System_Action_o *IELDNEAAPBE,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar2;
  DG_Tweening_TweenCallback_o *pDVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  System_Action_o **ppSVar5;
  
                    /* try { // try from 0368a9a0 to 0378a9ab has its CatchHandler @ 0368a65c */
                    /* try { // try from 0368a9ac to 0378a9b3 has its CatchHandler @ 0368a9b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368a978 with catch @ 0368a9b4
                       catch(type#2 @ 00000000) { ... } // from try @ 0368a9ac with catch @ 0368a9b4
                        */
                    /* try { // try from 0368a9b8 to 0378aaeb has its CatchHandler @ 0368a9b8
                       catch() { ... } // from try @ 0368a9b8 with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368ab70 with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368abd8 with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368ac10 with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368ac9c with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368aca4 with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368ad40 with catch @ 0368a9b8 */
  if ((DAT_04568d38 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_EnterScreen_BFGDICLDJLE__);
    FUN_01bab630(&Method_EnterScreen_JPPDAADCIHJ__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04568d38 = 1;
  }
  ppSVar5 = &(__this->fields).DNPHBCPFMPB;
  *ppSVar5 = IELDNEAAPBE;
  thunk_FUN_01c20e04(ppSVar5,IELDNEAAPBE);
  pNVar4 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_03 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._label;
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_03 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,EHNFGMGKCHO,(MethodInfo *)0x0);
  }
  EnterScreen__SetVisible(__this,false,method_03);
  EnterScreen__PIJGMPKNCHJ(__this,method_00);
  EnterScreen__IJAKFBFEJPD(__this,(__this->fields).MIN_OPACITY,method_01);
  t = EnterScreen__MuteMusicSequence(__this,method_02);
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo);
  }
  s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((__this->fields)._foreground,(__this->fields).MAX_OPACITY,
                      (__this->fields).fadeTime,(MethodInfo *)0x0);
                    /* try { // try from 0368aaec to 0378ab13 has its CatchHandler @ 0368acbc */
  DG_Tweening_TweenSettingsExtensions__Join(s,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  pDVar3 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__AppendCallback(s,pDVar3,(MethodInfo *)0x0);
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((__this->fields)._foreground,(__this->fields).MIN_OPACITY,
                      (__this->fields).expandTime,(MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
                    /* try { // try from 0368ab48 to 0378ab6f has its CatchHandler @ 0368acb4 */
  DG_Tweening_TweenSettingsExtensions__AppendInterval(s,(__this->fields).hideTime,(MethodInfo *)0x0)
  ;
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((__this->fields)._foreground,(__this->fields).MAX_OPACITY,
                      (__this->fields).endTime,(MethodInfo *)0x0);
                    /* try { // try from 0368ab70 to 0378abc7 has its CatchHandler @ 0368a9b8 */
  DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  pDVar3 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__AppendCallback(s,pDVar3,(MethodInfo *)0x0);
  return;
}

