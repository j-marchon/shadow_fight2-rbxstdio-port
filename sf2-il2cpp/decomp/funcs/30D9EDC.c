// Nekki.SF2.GUI.TableView$$SetPosition @ RVA 0x30D9EDC

void Nekki_SF2_GUI_TableView__SetPosition
               (Nekki_SF2_GUI_TableView_o *__this,float NNEOOGABAAB,float LFJGFLNMBMC,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  KMAKOOHEKNB_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *in_x2;
  DG_Tweening_Tween_o **ppDVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_04566352 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_GFECOLFOILC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_KILOIOEILFL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_LOIGGEHCNPI__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                );
    DAT_04566352 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_TableView__KillTween(__this,method);
  if ((__this->fields).PIHMBLAFPBJ != false) {
    return;
  }
  fVar5 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_00);
  fVar6 = Nekki_SF2_GUI_TableView__get_StartOffset(__this,method_01);
  fVar7 = Nekki_SF2_GUI_TableView__get_EndOffset(__this,method_02);
  fVar8 = Nekki_SF2_GUI_TableView__get_ContentSize(__this,method_03);
  fVar7 = (fVar5 - fVar6) - fVar7;
  fVar5 = Nekki_SF2_GUI_TableView__PositionForRow(__this,0,in_x2);
  fVar6 = 0.0;
  if (fVar7 < fVar8) {
    fVar6 = Nekki_SF2_GUI_TableView__get_StartOffset(__this,method_04);
  }
  __this_00 = (__this->fields).HCLHHHKCABP;
  if (__this_00 != (KMAKOOHEKNB_o *)0x0) {
    iVar2 = KMAKOOHEKNB__IBLCNILBAHE(__this_00,(MethodInfo *)0x0);
    fVar9 = Nekki_SF2_GUI_TableView__PositionForRow(__this,iVar2 + -1,in_x2);
    fVar10 = 0.0;
    if (fVar7 < fVar8) {
      fVar10 = Nekki_SF2_GUI_TableView__get_EndOffset(__this,method_05);
    }
    fVar7 = fVar9 - fVar10;
    if (NNEOOGABAAB <= fVar9 - fVar10) {
      fVar7 = NNEOOGABAAB;
    }
    if (NNEOOGABAAB < fVar5 + fVar6) {
      fVar7 = fVar5 + fVar6;
    }
    (__this->fields).LMBKODIDILL = fVar7;
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
      if ((0.0 < LFJGFLNMBMC) && (bVar1)) {
        getter = (DG_Tweening_Core_DOGetter_float__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
        DG_Tweening_Core_DOGetter<float>___ctor();
        setter = (DG_Tweening_Core_DOSetter_float__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
        DG_Tweening_Core_DOSetter<float>___ctor();
        fVar5 = (__this->fields).LMBKODIDILL;
        if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        t = DG_Tweening_DOTween__To(getter,setter,fVar5,LFJGFLNMBMC,(MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        pDVar3 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                           ((Il2CppObject *)t,action,
                            Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                           );
        ppDVar4 = &(__this->fields).OGBOMAHLDKN;
        *ppDVar4 = pDVar3;
        thunk_FUN_01c20e04(ppDVar4);
        return;
      }
      Nekki_SF2_GUI_TableView__GFECOLFOILC(__this,(__this->fields).LMBKODIDILL,method_06);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

