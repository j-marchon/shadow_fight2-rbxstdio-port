// Nekki.SF2.GUI.Profile.SealsTableViewCell$$SetItemInfo @ RVA 0x303B834

void Nekki_SF2_GUI_Profile_SealsTableViewCell__SetItemInfo
               (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *__this_02;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o *pHVar3;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar4;
  UnityEngine_RectTransform_o *__this_03;
  ACHLOMELAJE_o *pAVar5;
  undefined8 *puVar6;
  HOOAAGABMBL_o **ppHVar7;
  
  if ((DAT_04565d85 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11753);
    FUN_01bab630(&StringLiteral_11754);
    FUN_01bab630(&StringLiteral_11755);
    DAT_04565d85 = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pSVar1 = System_String__Format
                       (StringLiteral_11753,
                        (Il2CppObject *)(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                        (MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,pSVar1,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
         (__this_01 = (pAVar5->fields).OIDPLCLELEN, __this_01 != (GGHCLMEFIGO_o *)0x0)) {
        __this_02 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,IKKAMAMLIKA,(MethodInfo *)0x0);
        pHVar3 = IKKAMAMLIKA;
        if ((__this_02 != (IGFGDDANEPE_o *)0x0) &&
           (pHVar2 = IGFGDDANEPE__JGBDIHJDIHD(__this_02,(MethodInfo *)0x0),
           pHVar2 != (HOOAAGABMBL_o *)0x0)) {
          pHVar3 = IGFGDDANEPE__JGBDIHJDIHD(__this_02,(MethodInfo *)0x0);
        }
        if (__this != (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *)0x0) {
          ppHVar7 = &(__this->fields)._AHFHJKDMDMO_k__BackingField;
          *ppHVar7 = pHVar3;
          thunk_FUN_01c20e04(ppHVar7);
          if (*ppHVar7 == (HOOAAGABMBL_o *)0x0) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            puVar6 = &StringLiteral_11754;
            goto LAB_0313bab8;
          }
          (*(__this->klass->vtable)._12_set_Opacity.methodPtr)
                    (0x3f800000,__this,(__this->klass->vtable)._12_set_Opacity.method);
          pNVar4 = (__this->fields)._image;
          if (pNVar4 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
            Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar4,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._image;
            if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar1 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
            if (pNVar4 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
              *(System_String_o **)&(pNVar4->fields).super.super.m_PixelsPerUnitMultiplier = pSVar1;
              thunk_FUN_01c20e04(&(pNVar4->fields).super.super.m_PixelsPerUnitMultiplier);
              pNVar4 = (__this->fields)._image;
              if (pNVar4 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                          ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar4,
                           (IKKAMAMLIKA->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
                pNVar4 = (__this->fields)._image;
                if (pNVar4 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                  __this_03 = UnityEngine_UI_Graphic__get_rectTransform
                                        ((UnityEngine_UI_Graphic_o *)pNVar4,(MethodInfo *)0x0);
                  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo);
                  }
                  if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_sizeDelta
                              (__this_03,
                               (UnityEngine_Vector2_o)
                               (BHEDGAKGKPO_TypeInfo->static_fields->PHOPCECNCND).fields,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  puVar6 = &StringLiteral_11755;
LAB_0313bab8:
  UnityEngine_Debug__LogError((Il2CppObject *)*puVar6,(MethodInfo *)0x0);
  return;
}

