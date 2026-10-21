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

