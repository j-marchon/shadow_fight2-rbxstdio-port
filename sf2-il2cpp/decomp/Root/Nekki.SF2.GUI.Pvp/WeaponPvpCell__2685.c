// TypeDefIndex 2685
// Namespace: Nekki.SF2.GUI.Pvp
// public class WeaponPvpCell : TableViewCell
// Fields:
//   private LabelAlias _NameLabel; // 0x40
//   private ResolutionImage _PerkIcon; // 0x48
//   private LabelAlias _DefaultWeaponLabel; // 0x50
//   private ResolutionImage _Icon; // 0x58
//   private HOOAAGABMBL PCBECBEFJOI; // 0x60

// ===== private void LOBFFNCDANO()  [RVA 0x33CA3F4]
// Nekki.SF2.GUI.Pvp.WeaponPvpCell$$LOBFFNCDANO @ RVA 0x33CA3F4

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Pvp_WeaponPvpCell__LOBFFNCDANO
               (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector2_o UVar5;
  
  if ((DAT_04567e12 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_WeaponPvpCell_LOBFFNCDANO__);
    DAT_04567e12 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._NameLabel;
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_TextPic__remove_OnBoundsUpdated
              ((Nekki_SF2_GUI_TextPic_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._PerkIcon;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._NameLabel;
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pNVar1 = (__this->fields)._PerkIcon, pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        fVar3 = (pNVar2->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.y;
        __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UVar5 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._PerkIcon;
          if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (__this_02 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
             __this_02 != (UnityEngine_Transform_o *)0x0)) {
            UVar4 = UnityEngine_Transform__get_localPosition(__this_02,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_Transform_o *)0x0) {
              UVar4.fields.x = (fVar3 + fVar3) * 0.5 + UVar5.fields.x * 0.5 + 5.0;
              UVar4.fields.z = 0.0;
              UnityEngine_Transform__set_localPosition(__this_00,UVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_ItemInfo(HOOAAGABMBL CJNHFNHJHPE)  [RVA 0x33CA518]
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
    FUN_01bab630(&StringLiteral_11751/*"Seal"*/);
    FUN_01bab630(&StringLiteral_14874/*"WeaponPvpCell.SetItemInfo item is null"*/);
    FUN_01bab630(&StringLiteral_5704/*"Enchantments."*/);
    FUN_01bab630(&StringLiteral_14837/*"WEAPON_DEFAULT_RANDOM"*/);
    FUN_01bab630(&StringLiteral_14873/*"WeaponPvpCell({0})"*/);
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
                           (StringLiteral_14873/*"WeaponPvpCell({0})"*/,
                            (Il2CppObject *)((*ppHVar8)->fields)._COIPKAKHDFP_k__BackingField,
                            (MethodInfo *)0x0), __this_00 != (UnityEngine_Object_o *)0x0)) {
      UnityEngine_Object__set_name(__this_00,pSVar2,(MethodInfo *)0x0);
      pHVar5 = (__this->fields).PCBECBEFJOI;
      if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
        pNVar9 = (__this->fields)._Icon;
        bVar1 = System_String__op_Equality
                          ((pHVar5->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11751/*"Seal"*/,
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
                                   StringLiteral_14837/*"WEAPON_DEFAULT_RANDOM"*/,(MethodInfo *)0x0);
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
                                            (pNVar9,StringLiteral_5704/*"Enchantments."*/,pSVar2,(MethodInfo *)0x0);
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
  UnityEngine_Debug__LogError(StringLiteral_14874/*"WeaponPvpCell.SetItemInfo item is null"*/,(MethodInfo *)0x0);
  return;
}


// ===== public override void SetSelected()  [RVA 0x33CA8A8]
// Nekki.SF2.GUI.Pvp.WeaponPvpCell$$SetSelected @ RVA 0x33CA8A8

void Nekki_SF2_GUI_Pvp_WeaponPvpCell__SetSelected
               (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *__this,MethodInfo *method)

{
  return;
}


// ===== public HOOAAGABMBL get_ItemInfo()  [RVA 0x33CA8AC]
// Nekki.SF2.GUI.Pvp.WeaponPvpCell$$get_ItemInfo @ RVA 0x33CA8AC

HOOAAGABMBL_o *
Nekki_SF2_GUI_Pvp_WeaponPvpCell__get_ItemInfo
          (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *__this,MethodInfo *method)

{
  return (__this->fields).PCBECBEFJOI;
}


// ===== public void .ctor()  [RVA 0x33CA8B4]
// Nekki.SF2.GUI.Pvp.WeaponPvpCell$$.ctor @ RVA 0x33CA8B4

void Nekki_SF2_GUI_Pvp_WeaponPvpCell___ctor
               (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableViewCell___ctor((Nekki_SF2_GUI_TableViewCell_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void Display()  [RVA 0x33CA8BC]
// Nekki.SF2.GUI.Pvp.WeaponPvpCell$$Display @ RVA 0x33CA8BC

void Nekki_SF2_GUI_Pvp_WeaponPvpCell__Display
               (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void SetHighlighted()  [RVA 0x33CA8C0]
// Nekki.SF2.GUI.Pvp.WeaponPvpCell$$SetHighlighted @ RVA 0x33CA8C0

void Nekki_SF2_GUI_Pvp_WeaponPvpCell__SetHighlighted
               (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *__this,MethodInfo *method)

{
  return;
}

