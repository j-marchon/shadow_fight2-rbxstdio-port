// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$MIHMIJDPJCL @ RVA 0x3027F7C

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__MIHMIJDPJCL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_DOGetter_float__o *pDVar2;
  DG_Tweening_Core_DOSetter_float__o *pDVar3;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar4;
  DG_Tweening_Tween_o *pDVar5;
  Il2CppObject *t;
  DG_Tweening_TweenCallback_o *action;
  System_Collections_Generic_List_GameObject__o *pSVar6;
  DG_Tweening_Sequence_o **ppDVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04565ca0 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_CMFFMBKDFMP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_MFBDEFGCHPF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_NFMPCDHBCLP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_ODGHIBFMFAG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_PLHLIKHCKBH__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnStepComplete<TweenerCore<float,_float,_FloatOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                );
    auVar8 = FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_04565ca0 = 1;
  }
  pSVar6 = (__this->fields).KPKPCPFOGAP;
  if (pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    if ((pSVar6->fields)._size == 1) {
      return;
    }
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    ppDVar7 = &(__this->fields).BHMLAAAEHKA;
    *ppDVar7 = pDVar1;
    thunk_FUN_01c20e04(ppDVar7,pDVar1);
    DG_Tweening_TweenSettingsExtensions__AppendInterval(*ppDVar7,0.5,(MethodInfo *)0x0);
    pDVar1 = *ppDVar7;
    pDVar2 = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    pDVar3 = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    pDVar4 = DG_Tweening_DOTween__To(pDVar2,pDVar3,0.0,1.0,(MethodInfo *)0x0);
    pDVar5 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetEase<object>
                       ((Il2CppObject *)pDVar4,9,
                        Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                       );
    DG_Tweening_TweenSettingsExtensions__Append(pDVar1,pDVar5,(MethodInfo *)0x0);
    pDVar1 = *ppDVar7;
    pDVar2 = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    pDVar3 = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    pDVar4 = DG_Tweening_DOTween__To(pDVar2,pDVar3,1.0,1.0,(MethodInfo *)0x0);
    t = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                  ((Il2CppObject *)pDVar4,8,
                   Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                  );
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
    DG_Tweening_TweenCallback___ctor();
    pDVar5 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__OnStepComplete<object>
                       (t,action,
                        Method_DG_Tweening_TweenSettingsExtensions_OnStepComplete<TweenerCore<float,_float,_FloatOptions>>__
                       );
    DG_Tweening_TweenSettingsExtensions__Append(pDVar1,pDVar5,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__SetLoops<object>
              ((Il2CppObject *)*ppDVar7,-1,0,
               Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DG_Tweening_TweenExtensions__Restart
              ((DG_Tweening_Tween_o *)*ppDVar7,true,-1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
}

