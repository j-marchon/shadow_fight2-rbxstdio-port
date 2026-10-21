// Nekki.SF2.GUI.ProgressButton$$AAMAKOBPOBO @ RVA 0x30AE040

void Nekki_SF2_GUI_ProgressButton__AAMAKOBPOBO
               (Nekki_SF2_GUI_ProgressButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  DG_Tweening_Sequence_o *pDVar3;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar4;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *pUVar6;
  
  if ((DAT_045661be & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661be = 1;
    method = extraout_x1;
  }
  pUVar6 = (__this->fields)._picCompleteEffect;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar6 = (__this->fields)._picCompleteEffect;
  if ((pUVar6 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._picCompleteEffect;
    if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalScale
                (pUVar2,(__this->fields).LNEKHPJLPOO,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ProgressButton__IGFAAFAFHAE(__this,method_00);
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      (__this->fields).KAICJDBACPJ = pDVar3;
      thunk_FUN_01c20e04(&(__this->fields).KAICJDBACPJ);
      pDVar3 = (__this->fields).KAICJDBACPJ;
      pDVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                         ((__this->fields)._picCompleteEffect,(__this->fields).NMCDFKMOKGI,
                          (__this->fields).GNFLLECKGFP,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Append
                (pDVar3,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
      pUVar6 = (__this->fields)._picCompleteEffect;
      if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
        pDVar3 = (__this->fields).KAICJDBACPJ;
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
        pDVar5 = DG_Tweening_ShortcutExtensions__DOScale
                           (pUVar2,(__this->fields).FIJAPKDMBAL,(__this->fields).OFJCMEKNOBA,
                            (MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append
                  (pDVar3,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__AppendInterval
                  ((__this->fields).KAICJDBACPJ,(__this->fields).MPOILFINEKH,(MethodInfo *)0x0);
        pUVar6 = (__this->fields)._picCompleteEffect;
        if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
          pDVar3 = (__this->fields).KAICJDBACPJ;
          pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
          pDVar5 = DG_Tweening_ShortcutExtensions__DOScale
                             (pUVar2,(__this->fields).LNEKHPJLPOO,(__this->fields).OFJCMEKNOBA,
                              (MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__Append
                    (pDVar3,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
          pDVar3 = (__this->fields).KAICJDBACPJ;
          pDVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                             ((__this->fields)._picCompleteEffect,(__this->fields).GIAEIHPHEMB,
                              (__this->fields).GNFLLECKGFP,(MethodInfo *)0x0);
                    /* try { // try from 031ae1e4 to 032ae1f3 has its CatchHandler @ 031ae1fc */
                    /* try { // try from 031ae1f4 to 032ae203 has its CatchHandler @ 031adbc8 */
          DG_Tweening_TweenSettingsExtensions__Append
                    (pDVar3,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

