// TypeDefIndex 230
// Namespace: Nekki.SF2.GUI.Pvp
// public class PhasePerks : PhaseItem
// Fields:
//   private List<PerkItem> _Perks; // 0x48
//   private GameObject _PerksParent; // 0x50
//   private GameObject _RandomPerksParent; // 0x58
//   public PhaseWeapon WeaponPhase; // 0x60

// ===== public override void UpdateContent()  [RVA 0x32229E4]
// Nekki.SF2.GUI.Pvp.PhasePerks$$UpdateContent @ RVA 0x32229E4

void Nekki_SF2_GUI_Pvp_PhasePerks__UpdateContent
               (Nekki_SF2_GUI_Pvp_PhasePerks_o *__this,MethodInfo *method)

{
  int index;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  NLPJLHOEAOE_o *__this_00;
  NLPJLHOEAOE_NNODIMKLNFM_o *pNVar3;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Component_o *pUVar7;
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar8;
  BNAIBAODKAK_o *pBVar9;
  HOOAAGABMBL_o *pHVar10;
  ModelParameters_o *pPVar11;
  int iVar12;
  int iVar13;
  System_String_o *pSVar14;
  int iVar15;
  Il2CppClass *pIVar16;
  System_Collections_Generic_List_PerkItem__o **ppSVar17;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566f55 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkItem>_get_Current__);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkItem>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_3214/*"Attributes.weapon_attack"*/);
    FUN_01bab630(&StringLiteral_20433/*"random"*/);
    FUN_01bab630(&StringLiteral_3212/*"Attributes.magic_attack"*/);
    FUN_01bab630(&StringLiteral_3213/*"Attributes.ranged_attack"*/);
    FUN_01bab630(&StringLiteral_3210/*"Attributes.body_armor"*/);
    FUN_01bab630(&StringLiteral_3211/*"Attributes.head_armor"*/);
    FUN_01bab630(&StringLiteral_5704/*"Enchantments."*/);
    DAT_04566f55 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  ppSVar17 = &(__this->fields)._Perks;
  if (*ppSVar17 != (System_Collections_Generic_List_PerkItem__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)*ppSVar17,
               Method_System_Collections_Generic_List<PerkItem>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<PerkItem>_MoveNext__
                             ), pIVar5 = local_80.fields._current, bVar1) {
      if ((UnityEngine_Component_o *)local_80.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (((UnityEngine_Component_o *)((long)local_80.fields._current + 0x18))->monitor ==
          (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar2 = UnityEngine_Component__get_gameObject
                         (((UnityEngine_Component_o *)((long)local_80.fields._current + 0x18))->
                          monitor,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pIVar5,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<PerkItem>_Dispose__);
    pBVar9 = (__this->fields).super.KPLEAGPMKFD;
    if (pBVar9 != (BNAIBAODKAK_o *)0x0) {
      bVar1 = System_String__op_Equality
                        ((pBVar9->fields).PKJEMIDJPAG,StringLiteral_20433/*"random"*/,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._PerksParent;
      if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._RandomPerksParent;
        if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,bVar1,(MethodInfo *)0x0);
          if (bVar1) {
            return;
          }
          pBVar9 = (__this->fields).super.KPLEAGPMKFD;
          if (pBVar9 != (BNAIBAODKAK_o *)0x0) {
            bVar1 = BNAIBAODKAK__AAAMBLLDPHJ(pBVar9,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
            pBVar9 = (__this->fields).super.KPLEAGPMKFD;
            if ((((pBVar9 != (BNAIBAODKAK_o *)0x0) && (__this_00 != (NLPJLHOEAOE_o *)0x0)) &&
                (pNVar3 = NLPJLHOEAOE__ADKMBOALAKN
                                    (__this_00,(pBVar9->fields).PKJEMIDJPAG,(MethodInfo *)0x0),
                pNVar3 != (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0)) &&
               ((pPVar11 = (pNVar3->fields).BAKIMFMMFMP, pPVar11 != (ModelParameters_o *)0x0 &&
                (pHVar10 = (pPVar11->fields).IIDEPPHFJPA, pHVar10 != (HOOAAGABMBL_o *)0x0)))) {
              iVar12 = 0;
              while (pSVar4 = (pHVar10->fields)._GNJCCLBLPLO_k__BackingField,
                    pSVar4 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                if ((pSVar4->fields)._size <= iVar12) {
                  pHVar10 = (pPVar11->fields).PEMECEBIJDM;
                  if (pHVar10 != (HOOAAGABMBL_o *)0x0) {
                    iVar13 = 0;
                    goto LAB_03322da4;
                  }
                  break;
                }
                pIVar5 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar4,iVar12,
                                    Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
                if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
                    (pIVar6 = System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)*ppSVar17,
                                         iVar12,
                                         Method_System_Collections_Generic_List<PerkItem>_get_Item__
                                        ), pIVar6 == (Il2CppObject *)0x0)) ||
                   ((pIVar5 == (Il2CppObject *)0x0 ||
                    (pIVar6[2].monitor == (Nekki_SF2_GUI_LabelAlias_o *)0x0)))) break;
                Nekki_SF2_GUI_LabelAlias__set_Alias
                          (pIVar6[2].monitor,(System_String_o *)pIVar5[5].klass,(MethodInfo *)0x0);
                if ((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
                   (pIVar6 = System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)*ppSVar17,
                                        iVar12,
                                        Method_System_Collections_Generic_List<PerkItem>_get_Item__)
                   , pIVar6 == (Il2CppObject *)0x0)) break;
                pIVar16 = pIVar6[2].klass;
                pSVar14 = pIVar5[3].monitor;
                if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
                }
                KKCBGIBKOCP__PFJIHMIKHNL
                          ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar16,StringLiteral_5704/*"Enchantments."*/,pSVar14,
                           (MethodInfo *)0x0);
                if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
                    (pIVar5 = System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)*ppSVar17,
                                         iVar12,
                                         Method_System_Collections_Generic_List<PerkItem>_get_Item__
                                        ), pIVar5 == (Il2CppObject *)0x0)) ||
                   (pIVar5[3].klass == (Il2CppClass *)0x0)) break;
                Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                          ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar5[3].klass,StringLiteral_3211/*"Attributes.head_armor"*/,
                           (MethodInfo *)0x0);
                if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
                    (pUVar7 = (UnityEngine_Component_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)*ppSVar17,
                                         iVar12,
                                         Method_System_Collections_Generic_List<PerkItem>_get_Item__
                                        ), pUVar7 == (UnityEngine_Component_o *)0x0)) ||
                   (pUVar2 = UnityEngine_Component__get_gameObject(pUVar7,(MethodInfo *)0x0),
                   pUVar2 == (UnityEngine_GameObject_o *)0x0)) break;
                UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
                pHVar10 = (pPVar11->fields).IIDEPPHFJPA;
                iVar12 = iVar12 + 1;
                if (pHVar10 == (HOOAAGABMBL_o *)0x0) break;
              }
            }
          }
        }
      }
    }
  }
LAB_03323284:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_03322da4:
  pSVar4 = (pHVar10->fields)._GNJCCLBLPLO_k__BackingField;
  if (pSVar4 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_03323284;
  if ((pSVar4->fields)._size <= iVar13) {
    pHVar10 = (pPVar11->fields).AIDDHEHFBEG;
    if (pHVar10 != (HOOAAGABMBL_o *)0x0) {
      iVar15 = 0;
      iVar12 = iVar12 + iVar13;
      goto LAB_03322ed4;
    }
    goto LAB_03323284;
  }
  pIVar5 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar4,iVar13,
                      Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
  if (*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) goto LAB_03323284;
  iVar15 = iVar12 + iVar13;
  pIVar6 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar15,
                      Method_System_Collections_Generic_List<PerkItem>_get_Item__);
  if (((pIVar6 == (Il2CppObject *)0x0) || (pIVar5 == (Il2CppObject *)0x0)) ||
     (pIVar6[2].monitor == (Nekki_SF2_GUI_LabelAlias_o *)0x0)) goto LAB_03323284;
  Nekki_SF2_GUI_LabelAlias__set_Alias
            (pIVar6[2].monitor,(System_String_o *)pIVar5[5].klass,(MethodInfo *)0x0);
  if ((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
     (pIVar6 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar15,
                          Method_System_Collections_Generic_List<PerkItem>_get_Item__),
     pIVar6 == (Il2CppObject *)0x0)) goto LAB_03323284;
  pIVar16 = pIVar6[2].klass;
  pSVar14 = pIVar5[3].monitor;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
  }
  KKCBGIBKOCP__PFJIHMIKHNL
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar16,StringLiteral_5704/*"Enchantments."*/,pSVar14,(MethodInfo *)0x0
            );
  if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
      (pIVar5 = System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar15,
                           Method_System_Collections_Generic_List<PerkItem>_get_Item__),
      pIVar5 == (Il2CppObject *)0x0)) || (pIVar5[3].klass == (Il2CppClass *)0x0)) goto LAB_03323284;
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar5[3].klass,StringLiteral_3210/*"Attributes.body_armor"*/,(MethodInfo *)0x0
            );
  if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
      (pUVar7 = (UnityEngine_Component_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar15,
                           Method_System_Collections_Generic_List<PerkItem>_get_Item__),
      pUVar7 == (UnityEngine_Component_o *)0x0)) ||
     (pUVar2 = UnityEngine_Component__get_gameObject(pUVar7,(MethodInfo *)0x0),
     pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03323284;
  UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  pHVar10 = (pPVar11->fields).PEMECEBIJDM;
  iVar13 = iVar13 + 1;
  if (pHVar10 == (HOOAAGABMBL_o *)0x0) goto LAB_03323284;
  goto LAB_03322da4;
LAB_03322ed4:
  pSVar4 = (pHVar10->fields)._GNJCCLBLPLO_k__BackingField;
  if (pSVar4 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_03323284;
  if ((pSVar4->fields)._size <= iVar15) {
    pHVar10 = (pPVar11->fields).NBHGHLIPCAP;
    if (pHVar10 != (HOOAAGABMBL_o *)0x0) {
      iVar13 = 0;
      goto LAB_03323000;
    }
    goto LAB_03323284;
  }
  pIVar5 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar4,iVar15,
                      Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
  if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
      (pIVar6 = System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar12,
                           Method_System_Collections_Generic_List<PerkItem>_get_Item__),
      pIVar6 == (Il2CppObject *)0x0)) ||
     ((pIVar5 == (Il2CppObject *)0x0 || (pIVar6[2].monitor == (Nekki_SF2_GUI_LabelAlias_o *)0x0))))
  goto LAB_03323284;
  Nekki_SF2_GUI_LabelAlias__set_Alias
            (pIVar6[2].monitor,(System_String_o *)pIVar5[5].klass,(MethodInfo *)0x0);
  if ((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
     (pIVar6 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar12,
                          Method_System_Collections_Generic_List<PerkItem>_get_Item__),
     pIVar6 == (Il2CppObject *)0x0)) goto LAB_03323284;
  pIVar16 = pIVar6[2].klass;
  pSVar14 = pIVar5[3].monitor;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
  }
  KKCBGIBKOCP__PFJIHMIKHNL
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar16,StringLiteral_5704/*"Enchantments."*/,pSVar14,(MethodInfo *)0x0
            );
  if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
      (pIVar5 = System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar12,
                           Method_System_Collections_Generic_List<PerkItem>_get_Item__),
      pIVar5 == (Il2CppObject *)0x0)) || (pIVar5[3].klass == (Il2CppClass *)0x0)) goto LAB_03323284;
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar5[3].klass,StringLiteral_3212/*"Attributes.magic_attack"*/,(MethodInfo *)0x0
            );
  if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
      (pUVar7 = (UnityEngine_Component_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar12,
                           Method_System_Collections_Generic_List<PerkItem>_get_Item__),
      pUVar7 == (UnityEngine_Component_o *)0x0)) ||
     (pUVar2 = UnityEngine_Component__get_gameObject(pUVar7,(MethodInfo *)0x0),
     pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03323284;
  UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  pHVar10 = (pPVar11->fields).AIDDHEHFBEG;
  iVar12 = iVar12 + 1;
  iVar15 = iVar15 + 1;
  if (pHVar10 == (HOOAAGABMBL_o *)0x0) goto LAB_03323284;
  goto LAB_03322ed4;
LAB_03323000:
  pSVar4 = (pHVar10->fields)._GNJCCLBLPLO_k__BackingField;
  if (pSVar4 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_03323284;
  if ((pSVar4->fields)._size <= iVar13) {
    pNVar8 = (__this->fields).WeaponPhase;
    if (pNVar8 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
      (*(pNVar8->klass->vtable)._9_UpdateContent.methodPtr)
                (pNVar8,(pNVar8->klass->vtable)._9_UpdateContent.method);
      pNVar8 = (__this->fields).WeaponPhase;
      if (pNVar8 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
        iVar15 = 0;
        goto LAB_03323148;
      }
    }
    goto LAB_03323284;
  }
  pIVar5 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar4,iVar13,
                      Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
  if (*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) goto LAB_03323284;
  iVar15 = iVar12 + iVar13;
  pIVar6 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar15,
                      Method_System_Collections_Generic_List<PerkItem>_get_Item__);
  if (((pIVar6 == (Il2CppObject *)0x0) || (pIVar5 == (Il2CppObject *)0x0)) ||
     (pIVar6[2].monitor == (Nekki_SF2_GUI_LabelAlias_o *)0x0)) goto LAB_03323284;
  Nekki_SF2_GUI_LabelAlias__set_Alias
            (pIVar6[2].monitor,(System_String_o *)pIVar5[5].klass,(MethodInfo *)0x0);
  if ((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
     (pIVar6 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar15,
                          Method_System_Collections_Generic_List<PerkItem>_get_Item__),
     pIVar6 == (Il2CppObject *)0x0)) goto LAB_03323284;
  pIVar16 = pIVar6[2].klass;
  pSVar14 = pIVar5[3].monitor;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
  }
  KKCBGIBKOCP__PFJIHMIKHNL
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar16,StringLiteral_5704/*"Enchantments."*/,pSVar14,(MethodInfo *)0x0
            );
  if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
      (pIVar5 = System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar15,
                           Method_System_Collections_Generic_List<PerkItem>_get_Item__),
      pIVar5 == (Il2CppObject *)0x0)) || (pIVar5[3].klass == (Il2CppClass *)0x0)) goto LAB_03323284;
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar5[3].klass,StringLiteral_3213/*"Attributes.ranged_attack"*/,(MethodInfo *)0x0
            );
  if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
      (pUVar7 = (UnityEngine_Component_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)*ppSVar17,iVar15,
                           Method_System_Collections_Generic_List<PerkItem>_get_Item__),
      pUVar7 == (UnityEngine_Component_o *)0x0)) ||
     (pUVar2 = UnityEngine_Component__get_gameObject(pUVar7,(MethodInfo *)0x0),
     pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03323284;
  UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  pHVar10 = (pPVar11->fields).NBHGHLIPCAP;
  iVar13 = iVar13 + 1;
  if (pHVar10 == (HOOAAGABMBL_o *)0x0) goto LAB_03323284;
  goto LAB_03323000;
LAB_03323148:
  pHVar10 = Nekki_SF2_GUI_Pvp_PhaseWeapon__get_SelectedWeapon(pNVar8,(MethodInfo *)0x0);
  if ((pHVar10 == (HOOAAGABMBL_o *)0x0) ||
     (pSVar4 = (pHVar10->fields)._GNJCCLBLPLO_k__BackingField,
     pSVar4 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) goto LAB_03323284;
  if ((pSVar4->fields)._size <= iVar15) {
    return;
  }
  pNVar8 = (__this->fields).WeaponPhase;
  if (((pNVar8 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) ||
      (pHVar10 = Nekki_SF2_GUI_Pvp_PhaseWeapon__get_SelectedWeapon(pNVar8,(MethodInfo *)0x0),
      pHVar10 == (HOOAAGABMBL_o *)0x0)) ||
     (pSVar4 = (pHVar10->fields)._GNJCCLBLPLO_k__BackingField,
     pSVar4 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) goto LAB_03323284;
  pIVar5 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar4,iVar15,
                      Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
  if (*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) goto LAB_03323284;
  index = iVar12 + iVar13 + iVar15;
  pIVar6 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)*ppSVar17,index,
                      Method_System_Collections_Generic_List<PerkItem>_get_Item__);
  if (((pIVar6 == (Il2CppObject *)0x0) || (pIVar5 == (Il2CppObject *)0x0)) ||
     (pIVar6[2].monitor == (Nekki_SF2_GUI_LabelAlias_o *)0x0)) goto LAB_03323284;
  Nekki_SF2_GUI_LabelAlias__set_Alias
            (pIVar6[2].monitor,(System_String_o *)pIVar5[5].klass,(MethodInfo *)0x0);
  if ((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
     (pIVar6 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)*ppSVar17,index,
                          Method_System_Collections_Generic_List<PerkItem>_get_Item__),
     pIVar6 == (Il2CppObject *)0x0)) goto LAB_03323284;
  pIVar16 = pIVar6[2].klass;
  pSVar14 = pIVar5[3].monitor;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
  }
  KKCBGIBKOCP__PFJIHMIKHNL
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar16,StringLiteral_5704/*"Enchantments."*/,pSVar14,(MethodInfo *)0x0
            );
  if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
      (pIVar5 = System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)*ppSVar17,index,
                           Method_System_Collections_Generic_List<PerkItem>_get_Item__),
      pIVar5 == (Il2CppObject *)0x0)) || (pIVar5[3].klass == (Il2CppClass *)0x0)) goto LAB_03323284;
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar5[3].klass,StringLiteral_3214/*"Attributes.weapon_attack"*/,(MethodInfo *)0x0
            );
  if (((*ppSVar17 == (System_Collections_Generic_List_PerkItem__o *)0x0) ||
      (pUVar7 = (UnityEngine_Component_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)*ppSVar17,index,
                           Method_System_Collections_Generic_List<PerkItem>_get_Item__),
      pUVar7 == (UnityEngine_Component_o *)0x0)) ||
     (pUVar2 = UnityEngine_Component__get_gameObject(pUVar7,(MethodInfo *)0x0),
     pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03323284;
  UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  pNVar8 = (__this->fields).WeaponPhase;
  iVar15 = iVar15 + 1;
  if (pNVar8 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) goto LAB_03323284;
  goto LAB_03323148;
}


// ===== public void .ctor()  [RVA 0x3223334]
// Nekki.SF2.GUI.Pvp.PhasePerks$$.ctor @ RVA 0x3223334

void Nekki_SF2_GUI_Pvp_PhasePerks___ctor(Nekki_SF2_GUI_Pvp_PhasePerks_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PerkItem__o *__this_00;
  System_Collections_Generic_List_PerkItem__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f56 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PerkItem>_TypeInfo);
    DAT_04566f56 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_PerkItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkItem>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PerkItem>__ctor__);
  ppSVar1 = &(__this->fields)._Perks;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_Pvp_PhaseItem___ctor((Nekki_SF2_GUI_Pvp_PhaseItem_o *)__this,(MethodInfo *)0x0);
  return;
}

