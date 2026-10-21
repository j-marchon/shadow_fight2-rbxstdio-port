// CJCCEHEKBPD$$DEBAOCBBOMP @ RVA 0x32CF784

void CJCCEHEKBPD__DEBAOCBBOMP(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [12];
  System_String_o *EIJDDKJONFO;
  MNLIBPAOCLG_o *pMVar2;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *name;
  UnityEngine_GameObject_o *pUVar4;
  CocosAnimation_o *pCVar5;
  UnityEngine_Transform_o *pUVar6;
  FCJBEKHDLAF_o *pFVar7;
  BEPJMNAHCAD_o *pBVar8;
  CocosAnimation_o **ppCVar9;
  NHBBOEHHEKG_o *pNVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector2_o CJNHFNHJHPE;
  UnityEngine_Vector3_o UVar15;
  
  if ((DAT_04567541 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_12915);
    FUN_01bab630(&StringLiteral_10236);
    DAT_04567541 = 1;
  }
  fVar12 = (__this->fields)._IPNDDFLCJIL_k__BackingField;
  EIJDDKJONFO = System_String__Concat
                          (StringLiteral_12915,(__this->fields)._GPEFIOMJHNN_k__BackingField,
                           (MethodInfo *)0x0);
  pFVar7 = (__this->fields).super._CKOGELANOLD_k__BackingField;
  if (((pFVar7 != (FCJBEKHDLAF_o *)0x0) &&
      (pBVar8 = (pFVar7->fields).FAJCMHDLBEJ, pBVar8 != (BEPJMNAHCAD_o *)0x0)) &&
     (pMVar2 = (pBVar8->fields).LIICCFBEOLC, pMVar2 != (MNLIBPAOCLG_o *)0x0)) {
    pNVar10 = (pFVar7->fields).CNHHLPPHNCO;
    pUVar3 = MNLIBPAOCLG__LLCCOBOLJML(pMVar2,(MethodInfo *)0x0);
    name = System_String__Concat
                     (StringLiteral_10236,(__this->fields).super._COIPKAKHDFP_k__BackingField,
                      (MethodInfo *)0x0);
    pUVar4 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(pUVar4,name,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pCVar5 = (CocosAnimation_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (pUVar4,Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
      ppCVar9 = &(__this->fields)._CIDLMIOMOFF_k__BackingField;
      *ppCVar9 = pCVar5;
      thunk_FUN_01c20e04(ppCVar9,pCVar5);
      if (*ppCVar9 != (CocosAnimation_o *)0x0) {
        CocosAnimation__Init(*ppCVar9,EIJDDKJONFO,1,(System_String_o *)0x0,(MethodInfo *)0x0);
        if ((*ppCVar9 != (CocosAnimation_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)*ppCVar9,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(pUVar6,pUVar3,false,(MethodInfo *)0x0);
          if ((*ppCVar9 != (CocosAnimation_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)*ppCVar9,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            if (*ppCVar9 != (CocosAnimation_o *)0x0) {
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)*ppCVar9,(MethodInfo *)0x0);
              pUVar3 = (UnityEngine_Transform_o *)
                       Util__OHBILOGJCLA<object>(pUVar4,Method_Util_OHBILOGJCLA<RectTransform>__);
              pFVar7 = (__this->fields).super._CKOGELANOLD_k__BackingField;
              if (((pFVar7 != (FCJBEKHDLAF_o *)0x0) &&
                  (pBVar8 = (pFVar7->fields).FAJCMHDLBEJ, pBVar8 != (BEPJMNAHCAD_o *)0x0)) &&
                 ((pMVar2 = (pBVar8->fields).LIICCFBEOLC, pMVar2 != (MNLIBPAOCLG_o *)0x0 &&
                  ((pUVar4 = (pMVar2->fields).LDAKOINICNJ, pUVar4 != (UnityEngine_GameObject_o *)0x0
                   && (pUVar6 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
                      pUVar6 != (UnityEngine_Transform_o *)0x0)))))) {
                UVar15 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                if ((pNVar10 != (NHBBOEHHEKG_o *)0x0) && (pUVar3 != (UnityEngine_Transform_o *)0x0))
                {
                  auVar1._4_8_ = 0;
                  auVar1._0_4_ = (__this->fields)._GJNIMFABNDM_k__BackingField +
                                 (pNVar10->fields).IDBMGJFGIJH +
                                 (UVar15.fields.y - (pNVar10->fields).DAPHCPICAAC * 0.5) +
                                 (__this->fields)._IJMMLDDCHFB_k__BackingField * 0.5;
                  UnityEngine_Transform__set_localPosition
                            (pUVar3,(UnityEngine_Vector3_o)(auVar1 << 0x20),(MethodInfo *)0x0);
                  pCVar5 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
                  if (pCVar5 != (CocosAnimation_o *)0x0) {
                    (pCVar5->fields)._autoSize = false;
                    (pCVar5->fields)._FEBBHCOAEMI_k__BackingField = -1;
                    CocosAnimation__SetFirstFrame(pCVar5,(MethodInfo *)0x0);
                    pCVar5 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
                    fVar13 = (__this->fields).super._BEEGDJFPEHO_k__BackingField;
                    fVar14 = (__this->fields)._IJMMLDDCHFB_k__BackingField;
                    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    if (DAT_045660f4 == '\0') {
                      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
                      DAT_045660f4 = '\x01';
                    }
                    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    if (pCVar5 != (CocosAnimation_o *)0x0) {
                      fVar11 = FGKGKDEJCOG_TypeInfo->static_fields->NADOFNLEECE;
                      CJNHFNHJHPE.fields.y = fVar14 * fVar11;
                      CJNHFNHJHPE.fields.x = fVar13 * fVar11;
                      CocosAnimation__set_ChildSize(pCVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
                      if (*ppCVar9 != (CocosAnimation_o *)0x0) {
                        ((*ppCVar9)->fields)._PPEGDOHGLJJ_k__BackingField = fVar12 / 60.0;
                        return;
                      }
                    }
                  }
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

