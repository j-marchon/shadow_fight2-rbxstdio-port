// Nekki.SF2.GUI.Fight.RewardPanelItem$$SetTextLerpValue @ RVA 0x35B1EE8

void Nekki_SF2_GUI_Fight_RewardPanelItem__SetTextLerpValue
               (Nekki_SF2_GUI_Fight_RewardPanelItem_o *__this,float IMCJLJNEMKH,float CGLPGJBDIDL,
               float JDIDBCGAMGG,MethodInfo *method)

{
  Il2CppObject *__this_00;
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_Tween_o *t_00;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  DG_Tweening_Sequence_o **ppDVar2;
  
  if ((DAT_04568ea1 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanelItem_NLOGCLAKJFB_CNIONHFINIF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanelItem_NLOGCLAKJFB_MJCKMECOGIF__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_RewardPanelItem_NLOGCLAKJFB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanelItem_PEPJOGNOLPB__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                );
    DAT_04568ea1 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_RewardPanelItem_NLOGCLAKJFB_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = __this;
    *(float *)&__this_00[1].klass = CGLPGJBDIDL;
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
    Nekki_SF2_GUI_Fight_RewardPanelItem__PEPJOGNOLPB(__this,method_00);
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    getter = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    setter = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    t = DG_Tweening_DOTween__To(getter,setter,JDIDBCGAMGG,IMCJLJNEMKH,(MethodInfo *)0x0);
    t_00 = (DG_Tweening_Tween_o *)
           DG_Tweening_TweenSettingsExtensions__SetEase<object>
                     ((Il2CppObject *)t,5,
                      Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                     );
    pDVar1 = DG_Tweening_TweenSettingsExtensions__Append(pDVar1,t_00,(MethodInfo *)0x0);
    ppDVar2 = &(__this->fields).HOJHFHLCPNL;
    *ppDVar2 = pDVar1;
    thunk_FUN_01c20e04(ppDVar2);
    pDVar1 = *ppDVar2;
    callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
    ;
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar1,callback,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

