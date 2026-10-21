// Nekki.SF2.GUI.Pvp.RandomSelectionModule$$ELJPNGLJAPJ @ RVA 0x3084E24

void Nekki_SF2_GUI_Pvp_RandomSelectionModule__ELJPNGLJAPJ
               (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *t;
  DG_Tweening_TweenCallback_o **ppDVar2;
  long lVar3;
  long lVar4;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Color_o endValue;
  UnityEngine_Color_o endValue_00;
  
  if ((DAT_04566018 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_GANCOFBMIFL__);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo);
    DAT_04566018 = 1;
  }
  bVar1 = (__this->fields).OJODPOEPFHO != false;
  lVar4 = 0x28;
  if (bVar1) {
    lVar4 = 0x30;
  }
  lVar3 = *(long *)((long)&__this->klass + lVar4);
  lVar4 = 0x30;
  if (bVar1) {
    lVar4 = 0x28;
  }
  if (lVar3 != 0) {
    lVar4 = *(long *)((long)&__this->klass + lVar4);
    endValue.fields.b = 0.5;
    endValue.fields.a = 1.0;
    endValue.fields.r = 0.5;
    endValue.fields.g = 0.5;
    DG_Tweening_DOTweenModuleUI__DOColor
              (*(UnityEngine_UI_Image_o **)(lVar3 + 0x10),endValue,(__this->fields)._SwitchTime,
               (MethodInfo *)0x0);
    if (lVar4 != 0) {
      endValue_00.fields.b = 1.0;
      endValue_00.fields.a = 1.0;
      endValue_00.fields.r = 1.0;
      endValue_00.fields.g = 1.0;
      t = DG_Tweening_DOTweenModuleUI__DOColor
                    (*(UnityEngine_UI_Image_o **)(lVar4 + 0x10),endValue_00,
                     (__this->fields)._SwitchTime,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo);
      }
      action = Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->static_fields->__9__17_0;
      if (action == (DG_Tweening_TweenCallback_o *)0x0) {
        if ((Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo);
        }
        action = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        ppDVar2 = &Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->static_fields->__9__17_0;
        *ppDVar2 = action;
        thunk_FUN_01c20e04(ppDVar2,action);
      }
      DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                ((Il2CppObject *)t,action,
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Color,_Color,_ColorOptions>>__
                );
      (__this->fields).OJODPOEPFHO = (bool_conflict)((__this->fields).OJODPOEPFHO ^ 1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

