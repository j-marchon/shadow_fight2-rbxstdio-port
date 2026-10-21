// TypeDefIndex 1476
// Namespace: 
// public abstract class ProgressBarBase : MonoBehaviour
// Fields:
//   public ResolutionImage Background; // 0x20
//   protected float FGFINIPCGAL; // 0x28
//   protected float LBDAPHMEAKC; // 0x2C
//   protected float JGFKHMMNJBA; // 0x30
//   protected Tween IDMFMIPALLP; // 0x38

// ===== public virtual float get_Value()  [RVA 0x3195638]
// ProgressBarBase$$get_Value @ RVA 0x3195638

float ProgressBarBase__get_Value(ProgressBarBase_o *__this,MethodInfo *method)

{
  return (__this->fields).JGFKHMMNJBA;
}


// ===== public virtual void set_Value(float CJNHFNHJHPE)  [RVA 0x3195640]
// ProgressBarBase$$set_Value @ RVA 0x3195640

void ProgressBarBase__set_Value(ProgressBarBase_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x03295650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._8_SetValue.methodPtr)
            (CJNHFNHJHPE,0,__this,0,(__this->klass->vtable)._8_SetValue.method);
  return;
}


// ===== public virtual void SetValue(float NBHHBBOJJME, float PNEIGGOFIOA = 0, Action DLPCMOHKKMH)  [RVA 0x3195654]
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


// ===== public virtual void set_MinValue(float CJNHFNHJHPE)  [RVA 0x31958F0]
// ProgressBarBase$$set_MinValue @ RVA 0x31958F0

void ProgressBarBase__set_MinValue(ProgressBarBase_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  ProgressBarBase_c *pPVar1;
  
  pPVar1 = __this->klass;
  (__this->fields).FGFINIPCGAL = CJNHFNHJHPE;
                    /* WARNING: Could not recover jumptable at 0x032958fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pPVar1->vtable)._4_unknown.methodPtr)(__this,(pPVar1->vtable)._4_unknown.method);
  return;
}


// ===== public virtual float get_MaxValue()  [RVA 0x3195900]
// ProgressBarBase$$get_MaxValue @ RVA 0x3195900

float ProgressBarBase__get_MaxValue(ProgressBarBase_o *__this,MethodInfo *method)

{
  return (__this->fields).LBDAPHMEAKC;
}


// ===== protected float KHNHBNKJPAE()  [RVA 0x3195908]
// ProgressBarBase$$KHNHBNKJPAE @ RVA 0x3195908

float ProgressBarBase__KHNHBNKJPAE(ProgressBarBase_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).FGFINIPCGAL;
  return ((__this->fields).JGFKHMMNJBA - fVar1) / ((__this->fields).LBDAPHMEAKC - fVar1);
}


// ===== private void CCPABLFBFFA()  [RVA 0x31958B8]
// ProgressBarBase$$CCPABLFBFFA @ RVA 0x31958B8

void ProgressBarBase__CCPABLFBFFA(ProgressBarBase_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).IDMFMIPALLP;
  if (*ppDVar1 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== public virtual void SetValueBorders(float OGHDILLOGDA, float KMOHFJKJBMK)  [RVA 0x3195920]
// ProgressBarBase$$SetValueBorders @ RVA 0x3195920

void ProgressBarBase__SetValueBorders
               (ProgressBarBase_o *__this,float OGHDILLOGDA,float KMOHFJKJBMK,MethodInfo *method)

{
  ProgressBarBase_c *pPVar1;
  float fVar2;
  float fVar3;
  
  pPVar1 = __this->klass;
  (__this->fields).FGFINIPCGAL = OGHDILLOGDA;
  (__this->fields).LBDAPHMEAKC = KMOHFJKJBMK;
  fVar3 = (__this->fields).JGFKHMMNJBA;
  fVar2 = (float)(*(pPVar1->vtable)._10_get_MaxValue.methodPtr)
                           (__this,(pPVar1->vtable)._10_get_MaxValue.method);
  pPVar1 = __this->klass;
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  if (fVar3 < OGHDILLOGDA) {
    fVar2 = OGHDILLOGDA;
  }
  (__this->fields).JGFKHMMNJBA = fVar2;
                    /* WARNING: Could not recover jumptable at 0x0329596c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pPVar1->vtable)._4_unknown.methodPtr)(__this,(pPVar1->vtable)._4_unknown.method);
  return;
}


// ===== public RectTransform get_RectTransform()  [RVA 0x3195970]
// ProgressBarBase$$get_RectTransform @ RVA 0x3195970

UnityEngine_RectTransform_o *
ProgressBarBase__get_RectTransform(ProgressBarBase_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04566a6c & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566a6c = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((pUVar1 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar1->klass != UnityEngine_RectTransform_TypeInfo)) {
    pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  }
  return pUVar1;
}


// ===== public virtual float get_MinValue()  [RVA 0x31959D0]
// ProgressBarBase$$get_MinValue @ RVA 0x31959D0

float ProgressBarBase__get_MinValue(ProgressBarBase_o *__this,MethodInfo *method)

{
  return (__this->fields).FGFINIPCGAL;
}


// ===== public bool IsChanging()  [RVA 0x31959D8]
// ProgressBarBase$$IsChanging @ RVA 0x31959D8

bool ProgressBarBase__IsChanging(ProgressBarBase_o *__this,MethodInfo *method)

{
  return (__this->fields).IDMFMIPALLP != (DG_Tweening_Tween_o *)0x0;
}


// ===== protected void .ctor()  [RVA 0x31959E8]
// ProgressBarBase$$.ctor @ RVA 0x31959E8

void ProgressBarBase___ctor(ProgressBarBase_o *__this,MethodInfo *method)

{
  (__this->fields).LBDAPHMEAKC = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public virtual void set_MaxValue(float CJNHFNHJHPE)  [RVA 0x31959F8]
// ProgressBarBase$$set_MaxValue @ RVA 0x31959F8

void ProgressBarBase__set_MaxValue(ProgressBarBase_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  ProgressBarBase_c *pPVar1;
  
  pPVar1 = __this->klass;
  (__this->fields).LBDAPHMEAKC = CJNHFNHJHPE;
                    /* WARNING: Could not recover jumptable at 0x03295a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pPVar1->vtable)._4_unknown.methodPtr)(__this,(pPVar1->vtable)._4_unknown.method);
  return;
}

