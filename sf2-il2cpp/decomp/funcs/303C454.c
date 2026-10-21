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

