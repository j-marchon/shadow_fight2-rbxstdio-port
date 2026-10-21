// Nekki.SF2.GUI.Menu.MainMenu$$OALJMNGIJCK @ RVA 0x356BEBC

void Nekki_SF2_GUI_Menu_MainMenu__OALJMNGIJCK
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool BBLFHGGEMNI,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o **ppNVar1;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *method_00;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04568c2e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_BLBMLOBNODO__);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&StringLiteral_8793);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568c2e = 1;
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_8793,StringLiteral_1,(MethodInfo *)0x0);
  __this_00 = *(UnityEngine_Component_o **)&(__this->fields).TopMenuDefaultInteraction;
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    ppNVar1 = &(__this->fields)._Materials;
    if (BBLFHGGEMNI) {
      endValue.fields.z = 0.0;
      endValue.fields._0_8_ = *ppNVar1;
      t = DG_Tweening_ShortcutExtensions__DOLocalMove
                    (__this_01,endValue,(__this->fields)._MaterialsOpenedPosition.fields.x,false,
                     (MethodInfo *)0x0);
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                ((Il2CppObject *)t,action,
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
      return;
    }
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value.fields.z = 0.0;
      value.fields._0_8_ = *ppNVar1;
      UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Menu_MainMenu__BLBMLOBNODO(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

