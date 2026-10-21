// TypeDefIndex 715
// Namespace: 
// [RequireComponent(typeof(ResolutionImage))]
// public class CloseButton : ResolutionButton
// Fields:
//   private Action<object> LKIMJCGKOHH; // 0x1A8
//   private bool EOPAAFGEJAE; // 0x1B0
//   private Vector2 GOLEIJPNDMM; // 0x1B4
//   private Vector2 LHOCKKLCPHK; // 0x1BC

// ===== protected override void OnDestroy()  [RVA 0x303C0B4]
// CloseButton$$OnDestroy @ RVA 0x303C0B4

void CloseButton__OnDestroy(CloseButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* try { // try from 0313c0b4 to 0323c0b7 has its CatchHandler @ 0313c318 */
                    /* try { // try from 0313c0cc to 0323c0cf has its CatchHandler @ 0313c314 */
                    /* try { // try from 0313c0d4 to 0323c0d7 has its CatchHandler @ 0313c30c */
  if ((DAT_04565d8b & 1) == 0) {
    FUN_01bab630(&Method_CloseButton_PlayClickAnimation__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565d8b = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.super.m_OnClick;
                    /* try { // try from 0313c108 to 0323c12f has its CatchHandler @ 0313c320 */
  call = (UnityEngine_Events_UnityAction_o *)
         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
  UnityEngine_Events_UnityAction___ctor();
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0313c13c to 0323c153 has its CatchHandler @ 0313c300 */
    UnityEngine_Events_UnityEvent__RemoveListener(__this_00,call,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OIFPHNMJIEM()  [RVA 0x303C144]
// CloseButton$$OIFPHNMJIEM @ RVA 0x303C144

void CloseButton__OIFPHNMJIEM(CloseButton_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_o value;
  
  __this_00 = SFButton__get_RectTransform((SFButton_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0313c158 to 0323c15b has its CatchHandler @ 0313c258 */
    value.fields.z = 0.0;
    value.fields._0_8_ = (__this->fields).GOLEIJPNDMM.fields;
                    /* try { // try from 0313c164 to 0323c16b has its CatchHandler @ 0313c274 */
    UnityEngine_Transform__set_localPosition
              ((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_ClickAction(Action<object> CJNHFNHJHPE)  [RVA 0x303C174]
// CloseButton$$remove_ClickAction @ RVA 0x303C174

void CloseButton__remove_ClickAction
               (CloseButton_o *__this,System_Action_object__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_object__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_object__o *pSVar5;
  System_Action_object__o *source;
  
                    /* try { // try from 0313c180 to 0323c183 has its CatchHandler @ 0313c27c */
                    /* try { // try from 0313c188 to 0323c18b has its CatchHandler @ 0313c304 */
  if ((DAT_04565d8c & 1) == 0) {
                    /* try { // try from 0313c1a0 to 0323c1b7 has its CatchHandler @ 0313c308 */
    FUN_01bab630(&System_Action<object>_TypeInfo);
    DAT_04565d8c = 1;
  }
                    /* try { // try from 0313c1b8 to 0323c1bb has its CatchHandler @ 0313c278 */
  source = (__this->fields).LKIMJCGKOHH;
  do {
                    /* try { // try from 0313c1bc to 0323c213 has its CatchHandler @ 0313beb0 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<object>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<object>_TypeInfo);
      if (lVar4 == 0) {
                    /* try { // try from 0313c21c to 0323c21f has its CatchHandler @ 0313c310 */
                    /* try { // try from 0313c220 to 0323c233 has its CatchHandler @ 0313c324 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_object__o *)FUN_01c07368(&(__this->fields).LKIMJCGKOHH,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* try { // try from 0313c214 to 0323c217 has its CatchHandler @ 0313c31c */
                    /* try { // try from 0313c218 to 0323c21b has its CatchHandler @ 0313c324 */
  return;
}


// ===== private void NKKGGAFHJPK()  [RVA 0x303C228]
// CloseButton$$NKKGGAFHJPK @ RVA 0x303C228

void CloseButton__NKKGGAFHJPK(CloseButton_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  undefined8 uVar2;
  System_Action_object__o *pSVar3;
  UnityEngine_Vector3_o value;
  int32_t local_14;
  
                    /* try { // try from 0313c234 to 0323c24b has its CatchHandler @ 0313beb0 */
  if ((DAT_04565d8d & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 0313c24c to 0323c24f has its CatchHandler @ 0313c304 */
                    /* try { // try from 0313c250 to 0323c253 has its CatchHandler @ 0313c308 */
    DAT_04565d8d = 1;
  }
                    /* try { // try from 0313c254 to 0323c257 has its CatchHandler @ 0313c280 */
                    /* catch() { ... } // from try @ 0313c158 with catch @ 0313c258
                       try { // try from 0313c258 to 0323c2bb has its CatchHandler @ 0313beb0 */
                    /* catch() { ... } // from try @ 0313c0a0 with catch @ 0313c25c */
  pUVar1 = SFButton__get_RectTransform((SFButton_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0313bf88 with catch @ 0313c260 */
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* catch() { ... } // from try @ 0313bf80 with catch @ 0313c268 */
    value.fields.z = 0.0;
    value.fields._0_8_ = (__this->fields).GOLEIJPNDMM.fields;
                    /* catch() { ... } // from try @ 0313bf78 with catch @ 0313c26c */
                    /* catch() { ... } // from try @ 0313bf5c with catch @ 0313c270 */
                    /* catch() { ... } // from try @ 0313c164 with catch @ 0313c274 */
    UnityEngine_Transform__set_localPosition
              ((UnityEngine_Transform_o *)pUVar1,value,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0313c1b8 with catch @ 0313c278 */
                    /* catch() { ... } // from try @ 0313c180 with catch @ 0313c27c */
                    /* catch() { ... } // from try @ 0313c084 with catch @ 0313c280
                       catch() { ... } // from try @ 0313c254 with catch @ 0313c280 */
    pUVar1 = SFButton__get_RectTransform((SFButton_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0313c06c with catch @ 0313c284 */
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* catch() { ... } // from try @ 0313c064 with catch @ 0313c288 */
                    /* catch() { ... } // from try @ 0313bf64 with catch @ 0313c28c */
                    /* catch() { ... } // from try @ 0313c05c with catch @ 0313c290 */
                    /* catch() { ... } // from try @ 0313c054 with catch @ 0313c294 */
      UnityEngine_RectTransform__set_sizeDelta
                (pUVar1,(UnityEngine_Vector2_o)(__this->fields).LHOCKKLCPHK.fields,(MethodInfo *)0x0
                );
                    /* catch() { ... } // from try @ 0313bf48 with catch @ 0313c298 */
      pSVar3 = (__this->fields).LKIMJCGKOHH;
                    /* catch() { ... } // from try @ 0313c040 with catch @ 0313c29c */
      if (pSVar3 != (System_Action_object__o *)0x0) {
                    /* catch() { ... } // from try @ 0313bf34 with catch @ 0313c2a0 */
        local_14 = (__this->fields).super.super.ButtonId;
        uVar2 = thunk_FUN_01bda448(int_TypeInfo,&local_14);
                    /* try { // try from 0313c2bc to 0323c2bf has its CatchHandler @ 0313c2cc */
                    /* catch() { ... } // from try @ 0313c2bc with catch @ 0313c2cc */
        (*(code *)(pSVar3->fields).super.super.invoke_impl)
                  ((pSVar3->fields).super.super.method_code,uVar2,
                   (pSVar3->fields).super.super.method);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x303C2E4]
// CloseButton$$.ctor @ RVA 0x303C2E4

void CloseButton___ctor(CloseButton_o *__this,MethodInfo *method)

{
                    /* try { // try from 0313c2e4 to 0323c2ff has its CatchHandler @ 0313c388 */
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void Start()  [RVA 0x303C2EC]
// CloseButton$$Start @ RVA 0x303C2EC

void CloseButton__Start(CloseButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* catch() { ... } // from try @ 0313c13c with catch @ 0313c300
                       try { // try from 0313c300 to 0323c33b has its CatchHandler @ 0313beb0 */
                    /* catch() { ... } // from try @ 0313c188 with catch @ 0313c304
                       catch() { ... } // from try @ 0313c24c with catch @ 0313c304 */
                    /* catch() { ... } // from try @ 0313c1a0 with catch @ 0313c308
                       catch() { ... } // from try @ 0313c250 with catch @ 0313c308 */
                    /* catch() { ... } // from try @ 0313c0d4 with catch @ 0313c30c */
                    /* catch() { ... } // from try @ 0313c21c with catch @ 0313c310 */
                    /* catch() { ... } // from try @ 0313c0cc with catch @ 0313c314 */
  if ((DAT_04565d8e & 1) == 0) {
                    /* catch() { ... } // from try @ 0313c0b4 with catch @ 0313c318 */
                    /* catch() { ... } // from try @ 0313c214 with catch @ 0313c31c */
                    /* catch() { ... } // from try @ 0313c108 with catch @ 0313c320 */
    FUN_01bab630(&Method_CloseButton_PlayClickAnimation__);
                    /* catch() { ... } // from try @ 0313c218 with catch @ 0313c324
                       catch() { ... } // from try @ 0313c220 with catch @ 0313c324 */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565d8e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0313c33c to 0323c33f has its CatchHandler @ 0313c34c */
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.super.m_OnClick;
  call = (UnityEngine_Events_UnityAction_o *)
         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
                    /* catch() { ... } // from try @ 0313c33c with catch @ 0313c34c */
  UnityEngine_Events_UnityAction___ctor();
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0313c364 to 0323c373 has its CatchHandler @ 0313c388 */
                    /* try { // try from 0313c374 to 0323c37f has its CatchHandler @ 0313beb0 */
    UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GIENGNEGHPJ()  [RVA 0x303C37C]
// CloseButton$$GIENGNEGHPJ @ RVA 0x303C37C

void CloseButton__GIENGNEGHPJ(CloseButton_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Vector3_o UVar4;
  
                    /* try { // try from 0313c380 to 0323c387 has its CatchHandler @ 0313c388 */
                    /* catch() { ... } // from try @ 0313c2e4 with catch @ 0313c388
                       catch() { ... } // from try @ 0313c364 with catch @ 0313c388
                       catch() { ... } // from try @ 0313c380 with catch @ 0313c388 */
  if ((DAT_04565d8f & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    DAT_04565d8f = 1;
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo);
  }
  DG_Tweening_DOTween__Kill((Il2CppObject *)pUVar2,false,(MethodInfo *)0x0);
  if ((__this->fields).EOPAAFGEJAE != false) {
    return;
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 0313c3fc to 0323c52b has its CatchHandler @ 0313c3fc
                       catch() { ... } // from try @ 0313c3fc with catch @ 0313c3fc
                       catch() { ... } // from try @ 0313c604 with catch @ 0313c3fc
                       catch() { ... } // from try @ 0313c684 with catch @ 0313c3fc
                       catch() { ... } // from try @ 0313c6c8 with catch @ 0313c3fc
                       catch() { ... } // from try @ 0313c710 with catch @ 0313c3fc */
    UVar4 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    (__this->fields).GOLEIJPNDMM.fields.x = UVar4.fields.x;
    (__this->fields).GOLEIJPNDMM.fields.y = UVar4.fields.y;
    __this_00 = SFButton__get_RectTransform((SFButton_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
      iVar1 = (__this->fields).super.super.ButtonId;
      (__this->fields).LHOCKKLCPHK.fields = UVar3;
      if (iVar1 == -1) {
        (__this->fields).super.super.ButtonId = 0;
      }
      (__this->fields).EOPAAFGEJAE = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PlayIdleAnimation()  [RVA 0x303C454]
// CloseButton$$PlayIdleAnimation @ RVA 0x303C454

void CloseButton__PlayIdleAnimation(CloseButton_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  Il2CppObject *pIVar1;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d90 & 1) == 0) {
    FUN_01bab630(&Method_CloseButton_OIFPHNMJIEM__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnKill<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_04565d90 = 1;
    method = extraout_x1;
  }
  CloseButton__GIENGNEGHPJ(__this,method);
  target = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  t = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                (target,(__this->fields).GOLEIJPNDMM.fields.y + -10.0,0.75,false,(MethodInfo *)0x0);
  pIVar1 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                     ((Il2CppObject *)t,7,
                      Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                     );
  pIVar1 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                     (pIVar1,-1,1,
                      Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                     );
                    /* try { // try from 0313c52c to 0323c53b has its CatchHandler @ 0313c6a4 */
  action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 0313c540 to 0323c543 has its CatchHandler @ 0313c6a0 */
                    /* try { // try from 0313c548 to 0323c54b has its CatchHandler @ 0313c6a8 */
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__OnKill<object>
            (pIVar1,action,
             Method_DG_Tweening_TweenSettingsExtensions_OnKill<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
            );
  return;
}


// ===== public void PlayClickAnimation()  [RVA 0x303C570]
// CloseButton$$PlayClickAnimation @ RVA 0x303C570

void CloseButton__PlayClickAnimation(CloseButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *s;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  UnityEngine_RectTransform_o *target_00;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t_00;
  Il2CppObject *pIVar1;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_x1;
  UnityEngine_Vector2_o endValue;
  
                    /* try { // try from 0313c570 to 0323c573 has its CatchHandler @ 0313c698 */
                    /* try { // try from 0313c578 to 0323c5a7 has its CatchHandler @ 0313c6ac */
  if ((DAT_04565d91 & 1) == 0) {
    FUN_01bab630(&Method_CloseButton_NKKGGAFHJPK__);
                    /* try { // try from 0313c5ac to 0323c5af has its CatchHandler @ 0313c694 */
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
                    /* try { // try from 0313c5bc to 0323c5c3 has its CatchHandler @ 0313c690 */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_OnKill<Sequence>__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetEase<Sequence>__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_04565d91 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0313c5ec to 0323c5ef has its CatchHandler @ 0313c68c */
                    /* try { // try from 0313c5fc to 0323c603 has its CatchHandler @ 0313c688 */
                    /* try { // try from 0313c604 to 0323c667 has its CatchHandler @ 0313c3fc */
  CloseButton__GIENGNEGHPJ(__this,method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  target = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
                    /* try { // try from 0313c668 to 0323c66b has its CatchHandler @ 0313c6a8 */
                    /* try { // try from 0313c670 to 0323c673 has its CatchHandler @ 0313c69c */
  t = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                (target,(__this->fields).GOLEIJPNDMM.fields.y + -25.0,0.3,false,(MethodInfo *)0x0);
                    /* try { // try from 0313c678 to 0323c683 has its CatchHandler @ 0313c6ac */
                    /* try { // try from 0313c684 to 0323c6c3 has its CatchHandler @ 0313c3fc */
                    /* catch() { ... } // from try @ 0313c5fc with catch @ 0313c688 */
  DG_Tweening_TweenSettingsExtensions__Insert(s,0.0,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0313c5ec with catch @ 0313c68c */
                    /* catch() { ... } // from try @ 0313c5bc with catch @ 0313c690 */
                    /* catch() { ... } // from try @ 0313c5ac with catch @ 0313c694 */
  target_00 = SFButton__get_RectTransform((SFButton_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0313c570 with catch @ 0313c698 */
                    /* catch() { ... } // from try @ 0313c670 with catch @ 0313c69c */
  endValue.fields.x = (__this->fields).LHOCKKLCPHK.fields.x;
                    /* catch() { ... } // from try @ 0313c540 with catch @ 0313c6a0 */
                    /* catch() { ... } // from try @ 0313c52c with catch @ 0313c6a4 */
                    /* catch() { ... } // from try @ 0313c548 with catch @ 0313c6a8
                       catch() { ... } // from try @ 0313c668 with catch @ 0313c6a8 */
  endValue.fields.y = (__this->fields).LHOCKKLCPHK.fields.y + 20.0;
                    /* catch() { ... } // from try @ 0313c578 with catch @ 0313c6ac
                       catch() { ... } // from try @ 0313c678 with catch @ 0313c6ac */
  t_00 = DG_Tweening_DOTweenModuleUI__DOSizeDelta(target_00,endValue,0.3,false,(MethodInfo *)0x0);
                    /* try { // try from 0313c6c4 to 0323c6c7 has its CatchHandler @ 0313c6e8 */
                    /* try { // try from 0313c6c8 to 0323c6ff has its CatchHandler @ 0313c3fc */
  DG_Tweening_TweenSettingsExtensions__Insert(s,0.0,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
  pIVar1 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                     ((Il2CppObject *)s,1,
                      Method_DG_Tweening_TweenSettingsExtensions_SetEase<Sequence>__);
                    /* catch() { ... } // from try @ 0313c6c4 with catch @ 0313c6e8 */
  pIVar1 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                     (pIVar1,1,1,Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
  action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 0313c700 to 0323c70f has its CatchHandler @ 0313c724 */
  DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 0313c710 to 0323c71b has its CatchHandler @ 0313c3fc */
                    /* try { // try from 0313c71c to 0323c723 has its CatchHandler @ 0313c724 */
                    /* catch() { ... } // from try @ 0313c700 with catch @ 0313c724
                       catch() { ... } // from try @ 0313c71c with catch @ 0313c724 */
  DG_Tweening_TweenSettingsExtensions__OnKill<object>
            (pIVar1,action,Method_DG_Tweening_TweenSettingsExtensions_OnKill<Sequence>__);
  return;
}


// ===== public void add_ClickAction(Action<object> CJNHFNHJHPE)  [RVA 0x303C734]
// CloseButton$$add_ClickAction @ RVA 0x303C734

void CloseButton__add_ClickAction
               (CloseButton_o *__this,System_Action_object__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_object__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_object__o *pSVar5;
  System_Action_object__o *a;
  
  if ((DAT_04565d92 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    DAT_04565d92 = 1;
  }
  a = (__this->fields).LKIMJCGKOHH;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<object>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<object>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_object__o *)FUN_01c07368(&(__this->fields).LKIMJCGKOHH,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

