// Nekki.SF2.GUI.Profile.ProfileScene$$HFHCHGEFAFD @ RVA 0x3394300

void Nekki_SF2_GUI_Profile_ProfileScene__HFHCHGEFAFD
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **LKJHINHIIHD;
  Nekki_SF2_GUI_Profile_ProfileScene_o *__this_00;
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this_01;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar1;
  MethodInfo *in_x2;
  
  __this_00 = __this;
  if ((DAT_04567c45 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_JCNJDMMNGCL__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    __this_00 = (Nekki_SF2_GUI_Profile_ProfileScene_o *)
                FUN_01bab630(&
                             Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                            );
    DAT_04567c45 = 1;
  }
  LKJHINHIIHD = &(__this->fields).LOGCCNNGOAG;
  Nekki_SF2_GUI_Profile_ProfileScene__CCPABLFBFFA(__this_00,LKJHINHIIHD,in_x2);
  __this_01 = (__this->fields)._LeftPanel;
  if (__this_01 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) {
    target = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    t = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                  (target,(__this->fields).DIADJHEAPCA,0.34,false,(MethodInfo *)0x0);
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
    DG_Tweening_TweenCallback___ctor();
    pDVar1 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                       ((Il2CppObject *)t,action,
                        Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                       );
    (__this->fields).LOGCCNNGOAG = pDVar1;
    thunk_FUN_01c20e04(LKJHINHIIHD,pDVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

