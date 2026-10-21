// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$Refresh @ RVA 0x312F64C

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__Refresh
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,
               IGFGDDANEPE_o *ANMFBABEMFD,MethodInfo *method)

{
  int32_t DPCEFBCDHPA;
  bool bVar1;
  int32_t HLKBCKLJHHI;
  HOOAAGABMBL_o *pHVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  MDLDFLDGLND_o *LIMHKIDICNM;
  System_Action_GameObject__o *ACOFKBGCMHA;
  UnityEngine_GameObject_o *pUVar4;
  BFBONKPKBNL_o *CJNHFNHJHPE;
  UnityEngine_Object_o *__this_00;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar5;
  System_String_o **ppSVar6;
  MethodInfo *method_00;
  GGLKHCAIGDI_o *pGVar7;
  System_String_o *value;
  IGFGDDANEPE_o **ppIVar8;
  GGLKHCAIGDI_o **ppGVar9;
  Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *pNVar10;
  Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *pNVar11;
  
  if ((DAT_045666bb & 1) == 0) {
    FUN_01bab630(&System_Action<GameObject>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_RecipeUI_AMKNLFPFLPK__);
    DAT_045666bb = 1;
  }
  ppGVar9 = &(__this->fields).PHAGOJCOMPN;
  *ppGVar9 = NDLOGJOGFCA;
  thunk_FUN_01c20e04(ppGVar9,NDLOGJOGFCA);
  ppIVar8 = &(__this->fields).AIGNPODKOAH;
  *ppIVar8 = ANMFBABEMFD;
  thunk_FUN_01c20e04(ppIVar8,ANMFBABEMFD);
  if (((*ppIVar8 != (IGFGDDANEPE_o *)0x0) &&
      (pHVar2 = IGFGDDANEPE__JPNNODJPOCL(*ppIVar8,false,(MethodInfo *)0x0),
      pHVar2 != (HOOAAGABMBL_o *)0x0)) && (*ppGVar9 != (GGLKHCAIGDI_o *)0x0)) {
    DPCEFBCDHPA = (pHVar2->fields)._JDEHPJEIOCI_k__BackingField;
    bVar1 = GGLKHCAIGDI__EMFCFMDNOBE
                      (*ppGVar9,(__this->fields).AIGNPODKOAH,DPCEFBCDHPA,(MethodInfo *)0x0);
    pGVar7 = (__this->fields).PHAGOJCOMPN;
    (__this->fields).POEHCNMCHEG = bVar1;
    if ((pGVar7 != (GGLKHCAIGDI_o *)0x0) &&
       (pNVar3 = (__this->fields)._RecipeNameLabel, pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (pNVar3,(pGVar7->fields)._HONAAKEIHJI_k__BackingField,(MethodInfo *)0x0);
      pGVar7 = (__this->fields).PHAGOJCOMPN;
      if (pGVar7 != (GGLKHCAIGDI_o *)0x0) {
        pNVar11 = (__this->fields)._RecipePropertiesUI;
        HLKBCKLJHHI = GGLKHCAIGDI__ICMIMIOJPMK(pGVar7,*ppIVar8,(MethodInfo *)0x0);
        if (*ppGVar9 != (GGLKHCAIGDI_o *)0x0) {
          LIMHKIDICNM = GGLKHCAIGDI__IPJOEKMPEJA(*ppGVar9,*ppIVar8,(MethodInfo *)0x0);
          if (*ppGVar9 != (GGLKHCAIGDI_o *)0x0) {
            bVar1 = GGLKHCAIGDI__PCDGMIBPFEO
                              (*ppGVar9,(__this->fields).AIGNPODKOAH,DPCEFBCDHPA,(MethodInfo *)0x0);
            ACOFKBGCMHA = (System_Action_GameObject__o *)
                          thunk_FUN_01bda818(System_Action<GameObject>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar11 != (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *)0x0) {
              Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__Refresh
                        (pNVar11,HLKBCKLJHHI,LIMHKIDICNM,bVar1,ACOFKBGCMHA,(MethodInfo *)0x0);
              pNVar11 = (__this->fields)._RecipePropertiesUI;
              if ((pNVar11 != (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive
                          (pUVar4,(__this->fields).POEHCNMCHEG,(MethodInfo *)0x0);
                pNVar3 = (__this->fields)._RecipeNotAvailableLabel;
                if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                   (pUVar4 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
                   pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive
                            (pUVar4,(__this->fields).POEHCNMCHEG == false,(MethodInfo *)0x0);
                  pNVar3 = (__this->fields)._EnchantWarningLabel;
                  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    pUVar4 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                    if ((__this->fields).POEHCNMCHEG == false) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = Nekki_SF2_GUI_Shop_Forge_RecipeUI__OLHPMPLENEF(__this,method_00);
                    }
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar4,bVar1,(MethodInfo *)0x0);
                      pGVar7 = (__this->fields).PHAGOJCOMPN;
                      if (pGVar7 != (GGLKHCAIGDI_o *)0x0) {
                        pNVar10 = (__this->fields)._RecipePriceUI;
                        CJNHFNHJHPE = GGLKHCAIGDI__GPGGNMAFOJD(pGVar7,*ppIVar8,(MethodInfo *)0x0);
                        if (pNVar10 != (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *)0x0) {
                          Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__set_RecipePrice
                                    (pNVar10,CJNHFNHJHPE,(MethodInfo *)0x0);
                          pNVar10 = (__this->fields)._RecipePriceUI;
                          if (pNVar10 != (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *)0x0) {
                            Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__set_IsPriceVisible
                                      (pNVar10,true,(MethodInfo *)0x0);
                            pNVar10 = (__this->fields)._RecipePriceUI;
                            if (pNVar10 != (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *)0x0) {
                              bVar1 = Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__get_IsFreePrice
                                                (pNVar10,(MethodInfo *)0x0);
                              pNVar10 = (__this->fields)._RecipePriceUI;
                              if ((pNVar10 != (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *)0x0) &&
                                 (pUVar4 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)pNVar10,
                                                      (MethodInfo *)0x0),
                                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                                UnityEngine_GameObject__SetActive
                                          (pUVar4,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
                                pUVar4 = (__this->fields)._FreePriceUI;
                                if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
                                   (pUVar4 = UnityEngine_GameObject__get_gameObject
                                                       (pUVar4,(MethodInfo *)0x0),
                                   pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                                  UnityEngine_GameObject__SetActive(pUVar4,bVar1,(MethodInfo *)0x0);
                                  __this_00 = (UnityEngine_Object_o *)
                                              UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)__this,
                                                         (MethodInfo *)0x0);
                                  pGVar7 = (__this->fields).PHAGOJCOMPN;
                                  if ((pGVar7 != (GGLKHCAIGDI_o *)0x0) &&
                                     (pNVar5 = (__this->fields)._TutorialNode,
                                     pNVar5 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0)) {
                                    value = (pGVar7->fields)._COIPKAKHDFP_k__BackingField;
                                    ppSVar6 = &(pNVar5->fields)._ID;
                                    *ppSVar6 = value;
                                    thunk_FUN_01c20e04(ppSVar6,value);
                                    if (__this_00 != (UnityEngine_Object_o *)0x0) {
                                      UnityEngine_Object__set_name
                                                (__this_00,value,(MethodInfo *)0x0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

