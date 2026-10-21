// SFButton$$DFCBNJJOHDA @ RVA 0x34BAB3C

void SFButton__DFCBNJJOHDA(SFButton_o *__this,float DLMEGIDOGPE,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar3;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *x;
  
  if ((DAT_045685c9 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_SFButton_BJEJCCMFMJH__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_045685c9 = 1;
    method = extraout_x1;
  }
  x = (__this->fields)._glowSprite;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((DLMEGIDOGPE != 0.0) && (!bVar1)) {
    SFButton__BJEJCCMFMJH(__this,method_00);
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    (__this->fields).HCLACPMIFEB = pDVar2;
    thunk_FUN_01c20e04(&(__this->fields).HCLACPMIFEB);
    pDVar2 = (__this->fields).HCLACPMIFEB;
    pDVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                       ((UnityEngine_UI_Image_o *)(__this->fields)._glowSprite,1.0,0.0,
                        (MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append
              (pDVar2,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__AppendInterval
              ((__this->fields).HCLACPMIFEB,1.0,(MethodInfo *)0x0);
    pDVar2 = (__this->fields).HCLACPMIFEB;
    pDVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                       ((UnityEngine_UI_Image_o *)(__this->fields)._glowSprite,0.0,DLMEGIDOGPE,
                        (MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append
              (pDVar2,(DG_Tweening_Tween_o *)pDVar3,(MethodInfo *)0x0);
    pDVar2 = (__this->fields).HCLACPMIFEB;
    callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
    ;
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,callback,(MethodInfo *)0x0);
    return;
  }
  return;
}

