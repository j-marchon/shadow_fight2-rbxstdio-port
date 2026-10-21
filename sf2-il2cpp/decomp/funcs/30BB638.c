// Nekki.SF2.GUI.Common.SceneMenuScroll$$Open @ RVA 0x30BB638

void Nekki_SF2_GUI_Common_SceneMenuScroll__Open
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t HIEHLGHMJDO,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields endValue;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  Il2CppObject *t_00;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)HIEHLGHMJDO;
  if ((DAT_04566252 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_ENMNHIMEELL__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                );
    DAT_04566252 = 1;
    method_00 = extraout_x1;
  }
  if ((__this->fields).IAAABJBDEMK == 3) {
    Nekki_SF2_GUI_Common_SceneMenuScroll__JHJLELACELF(__this,method_00);
    endValue = (__this->fields).JNJNEIDIPEM.fields;
    (__this->fields).GLDOIEEOPCB = HIEHLGHMJDO;
    t = DG_Tweening_DOTweenModuleUI__DOSizeDelta
                  ((__this->fields)._Scroll,(UnityEngine_Vector2_o)endValue,
                   (__this->fields)._AnimationDuration,false,(MethodInfo *)0x0);
    t_00 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                     ((Il2CppObject *)t,(__this->fields)._AnimationEase,
                      Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                     );
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>
              (t_00,action,
               Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
              );
    Nekki_SF2_GUI_Common_SceneMenuScroll__MAFEFPMGALF(__this,method_01);
    return;
  }
  return;
}

