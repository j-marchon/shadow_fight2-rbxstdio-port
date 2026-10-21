// Nekki.SF2.GUI.Common.SceneMenuScroll$$Close @ RVA 0x30BBE2C

void Nekki_SF2_GUI_Common_SceneMenuScroll__Close
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SectionButton_o *__this_00;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  Il2CppObject *t_00;
  DG_Tweening_TweenCallback_o *action;
  undefined8 uVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Common_SceneSelector_o *pNVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
                    /* try { // try from 031bbe40 to 032bbed3 has its CatchHandler @ 031bbe40
                       catch() { ... } // from try @ 031bbe40 with catch @ 031bbe40
                       catch() { ... } // from try @ 031bc138 with catch @ 031bbe40
                       catch() { ... } // from try @ 031bc1bc with catch @ 031bbe40
                       catch() { ... } // from try @ 031bc26c with catch @ 031bbe40 */
  if ((DAT_04566250 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_PEMOCAODJBA__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                );
    auVar3 = FUN_01bab630(&
                          Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                         );
    DAT_04566250 = 1;
  }
  uVar1 = auVar3._0_8_;
  if ((__this->fields).IAAABJBDEMK == 1) {
    pNVar2 = (__this->fields).NFFFEDGMBIL;
    if ((pNVar2 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) &&
       (__this_00 = (pNVar2->fields)._Button, uVar1 = 0,
       __this_00 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0)) {
      SFButton__SetStateNormal((SFButton_o *)__this_00,(MethodInfo *)0x0);
      t = DG_Tweening_DOTweenModuleUI__DOSizeDelta
                    ((__this->fields)._Scroll,
                     (UnityEngine_Vector2_o)(__this->fields).JCJGBLBKEID.fields,
                     (__this->fields)._AnimationDuration,false,(MethodInfo *)0x0);
      t_00 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                       ((Il2CppObject *)t,(__this->fields)._AnimationEase,
                        Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                       );
                    /* try { // try from 031bbed4 to 032bbedb has its CatchHandler @ 031bc158 */
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
                    /* try { // try from 031bbef4 to 032bbefb has its CatchHandler @ 031bc18c */
      DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 031bbf14 to 032bbf33 has its CatchHandler @ 031bc160 */
      DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                (t_00,action,
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector2,_Vector2,_VectorOptions>>__
                );
      Nekki_SF2_GUI_Common_SceneMenuScroll__CMAEBFBFONH(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(uVar1,auVar3._8_8_);
  }
  return;
}

