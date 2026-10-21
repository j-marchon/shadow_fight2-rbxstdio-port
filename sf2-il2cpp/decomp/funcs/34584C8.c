// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$Init @ RVA 0x34584C8

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
               JMDPBFOCHHP_ENBCJNLAHAC_o *FHCHNMBPDDK,System_Action_object__o *DMEKIMDACOD,
               System_String_o *EJBLDNOOBDP,int32_t PEMBNLANBGE,int32_t LIBIMGBINNP,bool KBIPPAEJHLH
               ,bool OCBFFECAJFG,MethodInfo *method)

{
  int32_t *piVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  LabelButton_o *pLVar5;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar6;
  ACHLOMELAJE_o *__this_01;
  UnityEngine_RectTransform_o *pUVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_UI_ScrollRect_o *pUVar8;
  JMDPBFOCHHP_ENBCJNLAHAC_o **ppJVar9;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector2_o UVar14;
  UnityEngine_Color_o UVar15;
  UnityEngine_Rect_o UVar16;
  
  if ((DAT_045682d9 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_20991);
    FUN_01bab630(&StringLiteral_20290);
    FUN_01bab630(&StringLiteral_22500);
    DAT_045682d9 = 1;
  }
  ppJVar9 = &(__this->fields).AICEKIFKCEH;
  *ppJVar9 = FHCHNMBPDDK;
  thunk_FUN_01c20e04(ppJVar9,FHCHNMBPDDK);
  (__this->fields).HNMGGECHAKN = OCBFFECAJFG;
  if (FHCHNMBPDDK != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    __this_02 = (__this->fields)._header;
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((FHCHNMBPDDK->fields).JMGIACHBIKG,(MethodInfo *)0x0);
    if (__this_02 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      lVar2 = 0x10;
      if (!bVar3) {
        lVar2 = 0x18;
      }
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (__this_02,*(System_String_o **)((long)&FHCHNMBPDDK->klass + lVar2),
                 (MethodInfo *)0x0);
      if (OCBFFECAJFG) {
        pLVar5 = (__this->fields)._buyButton;
        if ((pLVar5 == (LabelButton_o *)0x0) ||
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pLVar5,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03558834;
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        method_00 = extraout_x1;
      }
      else {
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(EJBLDNOOBDP,(MethodInfo *)0x0);
        pLVar5 = (__this->fields)._buyButton;
        if ((bVar3) && (EJBLDNOOBDP = StringLiteral_20991, KBIPPAEJHLH)) {
          piVar1 = &(FHCHNMBPDDK->fields).NGMFKGGBHND;
          pSVar6 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat
                             (StringLiteral_20290,pSVar6,StringLiteral_22500,(MethodInfo *)0x0);
          if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03558834;
          LabelButton__set_Alias(pLVar5,pSVar6,(MethodInfo *)0x0);
          pLVar5 = (__this->fields)._buyButton;
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
          __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_01 == (ACHLOMELAJE_o *)0x0) goto LAB_03558834;
          bVar3 = ACHLOMELAJE__MIFEPGNGDON(__this_01,(long)*piVar1,(MethodInfo *)0x0);
          if (bVar3) {
            fVar12 = 1.0;
            fVar13 = 0.0;
            fVar10 = 0.0;
            fVar11 = 0.0;
          }
          else {
            if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UVar15 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
            fVar12 = UVar15.fields.a;
            fVar11 = UVar15.fields.b;
            fVar10 = UVar15.fields.g;
            fVar13 = UVar15.fields.r;
          }
          if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03558834;
          UVar15.fields.g = fVar10;
          UVar15.fields.r = fVar13;
          UVar15.fields.a = fVar12;
          UVar15.fields.b = fVar11;
          LabelButton__set_Color(pLVar5,UVar15,(MethodInfo *)0x0);
        }
        else {
          if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03558834;
          LabelButton__set_Alias(pLVar5,EJBLDNOOBDP,(MethodInfo *)0x0);
        }
        pLVar5 = (__this->fields)._buyButton;
        if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03558834;
        LabelButton__set_ButtonColor(pLVar5,PEMBNLANBGE,(MethodInfo *)0x0);
        pLVar5 = (__this->fields)._buyButton;
        if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03558834;
        (pLVar5->fields).super.super.ButtonId = LIBIMGBINNP;
        SFButton__AddEventListener((SFButton_o *)pLVar5,2,DMEKIMDACOD,(MethodInfo *)0x0);
        method_00 = extraout_x1_00;
      }
      Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__EFMALKIOHMA(__this,method_00);
      pUVar8 = (__this->fields)._scroll;
      if ((pUVar8 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar7 = (pUVar8->fields).m_Content, pUVar7 != (UnityEngine_RectTransform_o *)0x0)) {
        iVar4 = UnityEngine_Transform__get_childCount
                          ((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
        if (iVar4 < 1) {
          fVar13 = 0.0;
        }
        else {
          pUVar8 = (__this->fields)._scroll;
          if ((((pUVar8 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
               (pUVar7 = (pUVar8->fields).m_Content, pUVar7 == (UnityEngine_RectTransform_o *)0x0))
              || (pUVar7 = (UnityEngine_RectTransform_o *)
                           UnityEngine_Transform__GetChild
                                     ((UnityEngine_Transform_o *)pUVar7,0,(MethodInfo *)0x0),
                 pUVar7 == (UnityEngine_RectTransform_o *)0x0)) ||
             (pUVar7->klass != UnityEngine_RectTransform_TypeInfo)) goto LAB_03558834;
          UVar14 = UnityEngine_RectTransform__get_sizeDelta(pUVar7,(MethodInfo *)0x0);
          pUVar8 = (__this->fields)._scroll;
          if ((pUVar8 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
             (pUVar7 = (pUVar8->fields).m_Content, pUVar7 == (UnityEngine_RectTransform_o *)0x0))
          goto LAB_03558834;
          iVar4 = UnityEngine_Transform__get_childCount
                            ((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
          fVar13 = UVar14.fields.y * (float)iVar4;
        }
        pUVar8 = (__this->fields)._scroll;
        if ((pUVar8 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar7 = (pUVar8->fields).m_Viewport, pUVar7 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
          (pUVar8->fields).m_Vertical = UVar16.fields.m_Height + 0.01 <= fVar13;
          return;
        }
      }
    }
  }
LAB_03558834:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

