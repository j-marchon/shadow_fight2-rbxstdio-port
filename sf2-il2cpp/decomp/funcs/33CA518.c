// Nekki.SF2.GUI.Pvp.WeaponPvpCell$$set_ItemInfo @ RVA 0x33CA518

void Nekki_SF2_GUI_Pvp_WeaponPvpCell__set_ItemInfo
               (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *__this,HOOAAGABMBL_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Action_o *CJNHFNHJHPE_00;
  Il2CppObject *pIVar4;
  HOOAAGABMBL_o *pHVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar7;
  HOOAAGABMBL_o **ppHVar8;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar9;
  
  if ((DAT_04567e13 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_WeaponPvpCell_LOBFFNCDANO__);
    FUN_01bab630(&StringLiteral_11751);
    FUN_01bab630(&StringLiteral_14874);
    FUN_01bab630(&StringLiteral_5704);
    FUN_01bab630(&StringLiteral_14837);
    FUN_01bab630(&StringLiteral_14873);
    DAT_04567e13 = 1;
  }
  if (CJNHFNHJHPE != (HOOAAGABMBL_o *)0x0) {
    ppHVar8 = &(__this->fields).PCBECBEFJOI;
    *ppHVar8 = CJNHFNHJHPE;
    thunk_FUN_01c20e04(ppHVar8,CJNHFNHJHPE);
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((*ppHVar8 != (HOOAAGABMBL_o *)0x0) &&
       (pSVar2 = System_String__Format
                           (StringLiteral_14873,
                            (Il2CppObject *)((*ppHVar8)->fields)._COIPKAKHDFP_k__BackingField,
                            (MethodInfo *)0x0), __this_00 != (UnityEngine_Object_o *)0x0)) {
      UnityEngine_Object__set_name(__this_00,pSVar2,(MethodInfo *)0x0);
      pHVar5 = (__this->fields).PCBECBEFJOI;
      if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
        pNVar9 = (__this->fields)._Icon;
        bVar1 = System_String__op_Equality
                          ((pHVar5->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11751,
                           (MethodInfo *)0x0);
        if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
        }
        if (bVar1) {
          pSVar2 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
        }
        else {
          pSVar2 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
        }
        if (pNVar9 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          *(System_String_o **)&(pNVar9->fields).super.m_PixelsPerUnitMultiplier = pSVar2;
          thunk_FUN_01c20e04(&(pNVar9->fields).super.m_PixelsPerUnitMultiplier);
          pHVar5 = (__this->fields).PCBECBEFJOI;
          if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
            pNVar9 = (__this->fields)._Icon;
            pSVar2 = OFFIONDOEPM__CNLBHLNMCCI
                               ((pHVar5->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
            if (pNVar9 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar9,pSVar2,(MethodInfo *)0x0);
              if (*ppHVar8 != (HOOAAGABMBL_o *)0x0) {
                bVar1 = System_String__op_Equality
                                  (((*ppHVar8)->fields)._COIPKAKHDFP_k__BackingField,
                                   StringLiteral_14837,(MethodInfo *)0x0);
                pNVar6 = (__this->fields)._DefaultWeaponLabel;
                if ((pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                   (pUVar3 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
                   pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
                  pNVar6 = (__this->fields)._NameLabel;
                  if ((pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                     (pUVar3 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
                     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar3,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
                    pHVar5 = (__this->fields).PCBECBEFJOI;
                    if ((pHVar5 != (HOOAAGABMBL_o *)0x0) &&
                       (pNVar6 = (__this->fields)._NameLabel,
                       pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
                      Nekki_SF2_GUI_LabelAlias__set_Alias
                                (pNVar6,(pHVar5->fields)._COIPKAKHDFP_k__BackingField,
                                 (MethodInfo *)0x0);
                      pNVar6 = (__this->fields)._NameLabel;
                      CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo)
                      ;
                      System_Action___ctor();
                      if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                        Nekki_SF2_GUI_TextPic__add_OnBoundsUpdated
                                  ((Nekki_SF2_GUI_TextPic_o *)pNVar6,CJNHFNHJHPE_00,
                                   (MethodInfo *)0x0);
                        pNVar9 = (__this->fields)._PerkIcon;
                        if (pNVar9 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                          pUVar3 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0);
                          if (((*ppHVar8 != (HOOAAGABMBL_o *)0x0) &&
                              (pSVar7 = ((*ppHVar8)->fields)._GNJCCLBLPLO_k__BackingField,
                              pSVar7 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) &&
                             (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive
                                      (pUVar3,0 < (pSVar7->fields)._size,(MethodInfo *)0x0);
                            pNVar9 = (__this->fields)._PerkIcon;
                            if ((pNVar9 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                               (pUVar3 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)pNVar9,
                                                    (MethodInfo *)0x0),
                               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                              bVar1 = UnityEngine_GameObject__get_activeSelf
                                                (pUVar3,(MethodInfo *)0x0);
                              if (!bVar1) {
                                return;
                              }
                              pHVar5 = (__this->fields).PCBECBEFJOI;
                              if ((pHVar5 != (HOOAAGABMBL_o *)0x0) &&
                                 (pSVar7 = (pHVar5->fields)._GNJCCLBLPLO_k__BackingField,
                                 pSVar7 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
                                pNVar9 = (__this->fields)._PerkIcon;
                                pIVar4 = System_Collections_Generic_List<object>__get_Item
                                                   ((System_Collections_Generic_List_object__o *)
                                                    pSVar7,0,
                                                  Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__
                                                  );
                                if (pIVar4 != (Il2CppObject *)0x0) {
                                  pSVar2 = pIVar4[3].monitor;
                                  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
                                    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
                                  }
                                  KKCBGIBKOCP__PFJIHMIKHNL
                                            (pNVar9,StringLiteral_5704,pSVar2,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_14874,(MethodInfo *)0x0);
  return;
}

