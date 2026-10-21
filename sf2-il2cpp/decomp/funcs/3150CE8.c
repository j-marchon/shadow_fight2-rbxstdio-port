// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$FinishAnimation @ RVA 0x3150CE8

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__FinishAnimation
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_NumberFormatInfo_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  int64_t iVar4;
  System_Func_long__string__o *pSVar5;
  int64_t *__this_02;
  DG_Tweening_Sequence_o **ppDVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar8;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04566806 & 1) == 0) {
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_9281);
    DAT_04566806 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Globalization_NumberFormatInfo_o *)
              thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo,method);
  System_Globalization_NumberFormatInfo___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (System_Globalization_NumberFormatInfo_o *)0x0) goto LAB_03250f60;
  System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
            (__this_00,StringLiteral_167,(MethodInfo *)0x0);
  ppDVar6 = &(__this->fields).NPGLPGLADBF;
  if (*ppDVar6 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar6,false,(MethodInfo *)0x0);
    *ppDVar6 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar6,0);
  }
  ppDVar6 = &(__this->fields).FNMDIKCCJAN;
  if (*ppDVar6 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar6,false,(MethodInfo *)0x0);
    *ppDVar6 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar6,0);
  }
  pNVar7 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields).textLabel;
    if ((pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_03250f60;
    value.fields.z = 0.0;
    value.fields._0_8_ = (__this->fields).LGEHFOCNFGF.fields;
    UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
  }
  if ((0 < (__this->fields).ODEAKOGFMPE) || ((__this->fields).HGFBBMJNBPI < 1)) {
    pNVar8 = (__this->fields).moneyCount;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar8 = (__this->fields).moneyCount;
      if ((pNVar8 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03250f60;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      iVar4 = (__this->fields).ODEAKOGFMPE;
      pSVar5 = (__this->fields).BHBICCNLODE;
      (__this->fields).PGGDJIGFIHK = iVar4;
      if (pSVar5 == (System_Func_long__string__o *)0x0) goto LAB_03250f60;
      pNVar8 = (__this->fields).moneyCount;
      pSVar3 = (System_String_o *)
               (*(code *)(pSVar5->fields).super.super.invoke_impl)
                         ((pSVar5->fields).super.super.method_code,iVar4,
                          (pSVar5->fields).super.super.method);
      if (pNVar8 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) goto LAB_03250f60;
      Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar8,pSVar3,(MethodInfo *)0x0);
    }
  }
  if (0 < (__this->fields).HGFBBMJNBPI) {
    pNVar8 = (__this->fields).rubyCount;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar8 = (__this->fields).rubyCount;
      if ((pNVar8 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        __this_02 = &(__this->fields).BJGBAECJNAD;
        *__this_02 = (__this->fields).HGFBBMJNBPI;
        pNVar8 = (__this->fields).rubyCount;
        pSVar3 = System_Int64__ToString
                           ((int64_t)__this_02,StringLiteral_9281,
                            (System_IFormatProvider_o *)__this_00,(MethodInfo *)0x0);
        if (pNVar8 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
          Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar8,pSVar3,(MethodInfo *)0x0);
          return;
        }
      }
LAB_03250f60:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

