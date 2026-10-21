// Nekki.SF2.GUI.Shop.ParametersPanelContent$$KDOOCENHKNC @ RVA 0x30F8918

void Nekki_SF2_GUI_Shop_ParametersPanelContent__KDOOCENHKNC
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *t_00;
  MethodInfo *in_x2;
  DG_Tweening_Sequence_o **ppDVar2;
  
  if ((DAT_04566488 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParametersPanelContent_MIBHDMONJLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParametersPanelContent_OACHLIJPIKN__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetEase<Sequence>__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_04566488 = 1;
  }
  Nekki_SF2_GUI_Shop_ParametersPanelContent__JGBBHPHIJNB(__this,true,in_x2);
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                     (pDVar1,(__this->fields)._ScrollAnimationDelay,(MethodInfo *)0x0);
  getter = (DG_Tweening_Core_DOGetter_float__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
  DG_Tweening_Core_DOGetter<float>___ctor();
  setter = (DG_Tweening_Core_DOSetter_float__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
  DG_Tweening_Core_DOSetter<float>___ctor();
  t = DG_Tweening_DOTween__To
                (getter,setter,0.0,(__this->fields)._ScrollAnimationDuration,(MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__Append
                     (pDVar1,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                     (pDVar1,(__this->fields)._ScrollAnimationDelay,(MethodInfo *)0x0);
  t_00 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                   ((Il2CppObject *)pDVar1,-1,1,
                    Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
  pDVar1 = (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetEase<object>
                     (t_00,10,Method_DG_Tweening_TweenSettingsExtensions_SetEase<Sequence>__);
  ppDVar2 = &(__this->fields).HNKEDPLJLJJ;
  *ppDVar2 = pDVar1;
  thunk_FUN_01c20e04(ppDVar2);
  return;
}

