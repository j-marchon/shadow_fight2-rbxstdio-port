// HBOAEOEEDEN$$.ctor @ RVA 0x311F5A8

void HBOAEOEEDEN___ctor(HBOAEOEEDEN_o *__this,ACBCKKIEOCE_o *GOAHBPBJCKC,MethodInfo *method)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  bool bVar3;
  MNLIBPAOCLG_o *pMVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_SpriteRenderer_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Sprite_o *pUVar9;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  FCJBEKHDLAF_o *pFVar10;
  BEPJMNAHCAD_o *pBVar11;
  MEHKKHFBNLM_o *pMVar12;
  UnityEngine_SpriteRenderer_o **ppUVar13;
  ACBCKKIEOCE_o **ppAVar14;
  UnityEngine_SpriteRenderer_o **ppUVar15;
  System_String_o *pSVar16;
  System_String_o *OOKEKJMFKPE;
  NHBBOEHHEKG_o *pNVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector2_o UVar22;
  UnityEngine_Vector2_o UVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o UVar25;
  
  if ((DAT_04566616 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_15978);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566616 = 1;
  }
  if (GOAHBPBJCKC != (ACBCKKIEOCE_o *)0x0) {
    FPIPKMIODLH___ctor((FPIPKMIODLH_o *)__this,(GOAHBPBJCKC->fields).DEKCPPOJFEH,
                       *(float *)&(GOAHBPBJCKC->fields).super.field_0x5c,method);
    pFVar10 = (__this->fields).super._CKOGELANOLD_k__BackingField;
    if (((pFVar10 != (FCJBEKHDLAF_o *)0x0) &&
        (pBVar11 = (pFVar10->fields).FAJCMHDLBEJ, pBVar11 != (BEPJMNAHCAD_o *)0x0)) &&
       (pMVar4 = (pBVar11->fields).LIICCFBEOLC, pMVar4 != (MNLIBPAOCLG_o *)0x0)) {
      pUVar5 = MNLIBPAOCLG__LLCCOBOLJML(pMVar4,(MethodInfo *)0x0);
      pFVar10 = (__this->fields).super._CKOGELANOLD_k__BackingField;
      if (pFVar10 != (FCJBEKHDLAF_o *)0x0) {
        pNVar17 = (pFVar10->fields).CNHHLPPHNCO;
        ppAVar14 = &(__this->fields).EOKBEEIMNAF;
        *ppAVar14 = GOAHBPBJCKC;
        thunk_FUN_01c20e04(ppAVar14,GOAHBPBJCKC);
        pSVar16 = (__this->fields).super._COIPKAKHDFP_k__BackingField;
        pUVar6 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(pUVar6,pSVar16,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = (UnityEngine_SpriteRenderer_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (pUVar6,Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
          ppUVar15 = &(__this->fields).PBFDBGBMIKF;
          *ppUVar15 = pUVar7;
          thunk_FUN_01c20e04(ppUVar15,pUVar7);
          if ((*ppUVar15 != (UnityEngine_SpriteRenderer_o *)0x0) &&
             (pUVar8 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)*ppUVar15,(MethodInfo *)0x0),
             pUVar8 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent(pUVar8,pUVar5,false,(MethodInfo *)0x0);
            pUVar7 = *ppUVar15;
            pSVar16 = (GOAHBPBJCKC->fields).AHNCOKJAGPN;
            OOKEKJMFKPE = string_TypeInfo->static_fields->Empty;
            if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pUVar9 = KKCBGIBKOCP__NECCNHODCAE(OOKEKJMFKPE,pSVar16,false,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) {
              UnityEngine_SpriteRenderer__set_sprite(pUVar7,pUVar9,(MethodInfo *)0x0);
              if ((*ppUVar15 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                 (pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)*ppUVar15,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                if (*ppUVar15 != (UnityEngine_SpriteRenderer_o *)0x0) {
                  pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)*ppUVar15,(MethodInfo *)0x0);
                  __this_00 = (UnityEngine_RectTransform_o *)
                              Util__OHBILOGJCLA<object>
                                        (pUVar6,Method_Util_OHBILOGJCLA<RectTransform>__);
                  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
                     (UVar22 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0)
                     , pNVar17 != (NHBBOEHHEKG_o *)0x0)) {
                    fVar18 = (pNVar17->fields).DAPHCPICAAC;
                    fVar19 = UVar22.fields.y;
                    UVar24.fields.y = (fVar18 + fVar18) / fVar19;
                    UVar24.fields.x =
                         (__this->fields).super._BEEGDJFPEHO_k__BackingField / UVar22.fields.x;
                    UVar24.fields.z = 0.0;
                    UnityEngine_Transform__set_localScale
                              ((UnityEngine_Transform_o *)__this_00,UVar24,(MethodInfo *)0x0);
                    pFVar10 = (__this->fields).super._CKOGELANOLD_k__BackingField;
                    if ((pFVar10 != (FCJBEKHDLAF_o *)0x0) &&
                       ((((pBVar11 = (pFVar10->fields).FAJCMHDLBEJ, pBVar11 != (BEPJMNAHCAD_o *)0x0
                          && (pMVar4 = (pBVar11->fields).LIICCFBEOLC, pMVar4 != (MNLIBPAOCLG_o *)0x0
                             )) && (pMVar12 = (pNVar17->fields).CLFNHGGJHCA,
                                   pMVar12 != (MEHKKHFBNLM_o *)0x0)) &&
                        (pUVar6 = (pMVar12->fields)._KDDKJJLDFFO_k__BackingField,
                        pUVar6 != (UnityEngine_GameObject_o *)0x0)))) {
                      fVar18 = (pMVar4->fields).FIGDMPIMECD;
                      pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                        UVar24 = UnityEngine_Transform__get_localPosition(pUVar5,(MethodInfo *)0x0);
                        fVar20 = (pNVar17->fields).DAPHCPICAAC;
                        fVar21 = (pNVar17->fields).IDBMGJFGIJH;
                        UVar25 = UnityEngine_Transform__get_localScale
                                           ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
                        auVar1._4_8_ = 0;
                        auVar1._0_4_ = (UVar24.fields.y - fVar18 * (fVar20 * 0.5 - fVar21)) + -90.0
                                       + fVar19 * UVar25.fields.y * 0.5;
                        UnityEngine_Transform__set_localPosition
                                  ((UnityEngine_Transform_o *)__this_00,
                                   (UnityEngine_Vector3_o)(auVar1 << 0x20),(MethodInfo *)0x0);
                        pSVar16 = (GOAHBPBJCKC->fields).APBICPEOMOM;
                        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar16,(MethodInfo *)0x0);
                        if (bVar3) {
                          return;
                        }
                        pUVar6 = (UnityEngine_GameObject_o *)
                                 thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                        UnityEngine_GameObject___ctor(pUVar6,StringLiteral_15978,(MethodInfo *)0x0);
                        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar7 = (UnityEngine_SpriteRenderer_o *)
                                   UnityEngine_GameObject__AddComponent<object>
                                             (pUVar6,
                                              Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__
                                             );
                          ppUVar13 = &(__this->fields).LAEBGENCMPB;
                          *ppUVar13 = pUVar7;
                          thunk_FUN_01c20e04(ppUVar13,pUVar7);
                          pUVar7 = *ppUVar13;
                          if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          pUVar9 = KKCBGIBKOCP__NECCNHODCAE
                                             (StringLiteral_1,pSVar16,false,(MethodInfo *)0x0);
                          if (pUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) {
                            UnityEngine_SpriteRenderer__set_sprite(pUVar7,pUVar9,(MethodInfo *)0x0);
                            if (*ppUVar13 != (UnityEngine_SpriteRenderer_o *)0x0) {
                              pUVar5 = UnityEngine_Component__get_transform
                                                 ((UnityEngine_Component_o *)*ppUVar13,
                                                  (MethodInfo *)0x0);
                              if ((*ppUVar15 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                                 (pUVar8 = UnityEngine_Component__get_transform
                                                     ((UnityEngine_Component_o *)*ppUVar15,
                                                      (MethodInfo *)0x0),
                                 pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                                UnityEngine_Transform__SetParent
                                          (pUVar5,pUVar8,false,(MethodInfo *)0x0);
                                if (*ppUVar13 != (UnityEngine_SpriteRenderer_o *)0x0) {
                                  pUVar6 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)*ppUVar13,
                                                      (MethodInfo *)0x0);
                                  __this_01 = (UnityEngine_RectTransform_o *)
                                              Util__OHBILOGJCLA<object>
                                                        (pUVar6,
                                                  Method_Util_OHBILOGJCLA<RectTransform>__);
                                  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                                    UVar23 = UnityEngine_RectTransform__get_sizeDelta
                                                       (__this_01,(MethodInfo *)0x0);
                                    fVar18 = (__this->fields).super._BEEGDJFPEHO_k__BackingField;
                                    fVar20 = (pNVar17->fields).DAPHCPICAAC;
                                    UVar24 = UnityEngine_Transform__get_localScale
                                                       ((UnityEngine_Transform_o *)__this_00,
                                                        (MethodInfo *)0x0);
                                    fVar19 = (fVar19 / fVar20) / UVar24.fields.y;
                                    UVar25.fields.y = fVar19;
                                    UVar25.fields.x = UVar22.fields.x / fVar18;
                                    UVar25.fields.z = 0.0;
                                    UnityEngine_Transform__set_localScale
                                              ((UnityEngine_Transform_o *)__this_01,UVar25,
                                               (MethodInfo *)0x0);
                                    auVar2._4_8_ = 0;
                                    auVar2._0_4_ = UVar23.fields.y * fVar19 * -0.5;
                                    UnityEngine_Transform__set_localPosition
                                              ((UnityEngine_Transform_o *)__this_01,
                                               (UnityEngine_Vector3_o)(auVar2 << 0x20),
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

