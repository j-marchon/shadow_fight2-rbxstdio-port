// ProgressBarBase$$SetValue @ RVA 0x3195654

void ProgressBarBase__SetValue
               (ProgressBarBase_o *__this,float NBHHBBOJJME,float PNEIGGOFIOA,
               System_Action_o *DLPCMOHKKMH,MethodInfo *method)

{
  Il2CppObject *__this_00;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar1;
  MethodInfo *method_00;
  ProgressBarBase_c *pPVar2;
  void *pvVar3;
  DG_Tweening_Tween_o **ppDVar4;
  void **ppvVar5;
  float endValue;
  float fVar6;
  
  if ((DAT_04566a6b & 1) == 0) {
    FUN_01bab630(&Method_ProgressBarBase_DKLCHCNCMAI_CFIOEAEBAIB__);
    FUN_01bab630(&Method_ProgressBarBase_DKLCHCNCMAI_IKLHIKJBCKC__);
    FUN_01bab630(&Method_ProgressBarBase_DKLCHCNCMAI_KDEAENJLPNG__);
    FUN_01bab630(&ProgressBarBase_DKLCHCNCMAI_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                );
    DAT_04566a6b = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(ProgressBarBase_DKLCHCNCMAI_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00[1].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 1,__this);
  ppvVar5 = &__this_00[1].monitor;
  *ppvVar5 = DLPCMOHKKMH;
  thunk_FUN_01c20e04(ppvVar5,DLPCMOHKKMH);
  if ((__this->fields).JGFKHMMNJBA != NBHHBBOJJME) {
    ProgressBarBase__CCPABLFBFFA(__this,method_00);
    fVar6 = (__this->fields).FGFINIPCGAL;
    endValue = (__this->fields).LBDAPHMEAKC;
    if (NBHHBBOJJME <= endValue) {
      endValue = NBHHBBOJJME;
    }
    if (NBHHBBOJJME < fVar6) {
      endValue = fVar6;
    }
    if (0.0 < PNEIGGOFIOA) {
      getter = (DG_Tweening_Core_DOGetter_float__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
      DG_Tweening_Core_DOGetter<float>___ctor();
      setter = (DG_Tweening_Core_DOSetter_float__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
      DG_Tweening_Core_DOSetter<float>___ctor();
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      t = DG_Tweening_DOTween__To(getter,setter,endValue,PNEIGGOFIOA,(MethodInfo *)0x0);
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      pDVar1 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                         ((Il2CppObject *)t,action,
                          Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                         );
      ppDVar4 = &(__this->fields).IDMFMIPALLP;
      *ppDVar4 = pDVar1;
      thunk_FUN_01c20e04(ppDVar4,pDVar1);
      return;
    }
    pPVar2 = __this->klass;
    (__this->fields).JGFKHMMNJBA = endValue;
    (*(pPVar2->vtable)._4_unknown.methodPtr)(__this,(pPVar2->vtable)._4_unknown.method);
    pvVar3 = *ppvVar5;
    if (pvVar3 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03295894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((long)pvVar3 + 0x18))
                (*(undefined8 *)((long)pvVar3 + 0x40),*(undefined8 *)((long)pvVar3 + 0x28));
      return;
    }
  }
  return;
}

