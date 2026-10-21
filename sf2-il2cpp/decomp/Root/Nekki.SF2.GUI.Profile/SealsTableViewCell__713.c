// TypeDefIndex 713
// Namespace: Nekki.SF2.GUI.Profile
// public class SealsTableViewCell : TableViewCell, IComparable<SealsTableViewCell>
// Fields:
//   private ResolutionImageAvatar _image; // 0x40
//   private HOOAAGABMBL <AHFHJKDMDMO>k__BackingField; // 0x48

// ===== public int CompareTo(SealsTableViewCell IBKIPBJJCPG)  [RVA 0x303B748]
// Nekki.SF2.GUI.Profile.SealsTableViewCell$$CompareTo @ RVA 0x303B748

int32_t Nekki_SF2_GUI_Profile_SealsTableViewCell__CompareTo
                  (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,
                  Nekki_SF2_GUI_Profile_SealsTableViewCell_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o *pHVar3;
  int32_t value;
  int32_t local_18;
  int32_t local_14;
  
  pHVar2 = (__this->fields)._AHFHJKDMDMO_k__BackingField;
  if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = (pHVar2->fields)._JDEHPJEIOCI_k__BackingField;
  }
  if (IBKIPBJJCPG != (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *)0x0) {
    pHVar3 = (IBKIPBJJCPG->fields)._AHFHJKDMDMO_k__BackingField;
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (pHVar3->fields)._JDEHPJEIOCI_k__BackingField;
    }
    local_18 = 0;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      local_18 = (pHVar2->fields)._HBPAJOBFMLH_k__BackingField;
    }
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
      value = 1;
    }
    else {
      value = (pHVar3->fields)._HBPAJOBFMLH_k__BackingField;
    }
    iVar1 = System_Int32__CompareTo((int32_t)&local_14,iVar1,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      iVar1 = System_Int32__CompareTo((int32_t)&local_18,value,(MethodInfo *)0x0);
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CLIDHHJIGOC(HOOAAGABMBL CJNHFNHJHPE)  [RVA 0x303B7D0]
// Nekki.SF2.GUI.Profile.SealsTableViewCell$$CLIDHHJIGOC @ RVA 0x303B7D0

void Nekki_SF2_GUI_Profile_SealsTableViewCell__CLIDHHJIGOC
               (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,HOOAAGABMBL_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._AHFHJKDMDMO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override void set_Opacity(float CJNHFNHJHPE)  [RVA 0x303B7D8]
// Nekki.SF2.GUI.Profile.SealsTableViewCell$$set_Opacity @ RVA 0x303B7D8

void Nekki_SF2_GUI_Profile_SealsTableViewCell__set_Opacity
               (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageAvatar_o *__this_00;
  
  Nekki_SF2_GUI_TableViewCell__set_Opacity
            ((Nekki_SF2_GUI_TableViewCell_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._image;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_Alpha
              ((Nekki_SF2_GUI_ResolutionImage_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x303B810]
// Nekki.SF2.GUI.Profile.SealsTableViewCell$$.ctor @ RVA 0x303B810

void Nekki_SF2_GUI_Profile_SealsTableViewCell___ctor
               (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableViewCell___ctor((Nekki_SF2_GUI_TableViewCell_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void SetSelected()  [RVA 0x303B818]
// Nekki.SF2.GUI.Profile.SealsTableViewCell$$SetSelected @ RVA 0x303B818

void Nekki_SF2_GUI_Profile_SealsTableViewCell__SetSelected
               (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override float get_Opacity()  [RVA 0x303B81C]
// Nekki.SF2.GUI.Profile.SealsTableViewCell$$get_Opacity @ RVA 0x303B81C

float Nekki_SF2_GUI_Profile_SealsTableViewCell__get_Opacity
                (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,MethodInfo *method)

{
  return (__this->fields).super.FHIIIPEBDLE;
}


// ===== public HOOAAGABMBL get_ItemInfo()  [RVA 0x303B824]
// Nekki.SF2.GUI.Profile.SealsTableViewCell$$get_ItemInfo @ RVA 0x303B824

HOOAAGABMBL_o *
Nekki_SF2_GUI_Profile_SealsTableViewCell__get_ItemInfo
          (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,MethodInfo *method)

{
  return (__this->fields)._AHFHJKDMDMO_k__BackingField;
}


// ===== public override void SetHighlighted()  [RVA 0x303B82C]
// Nekki.SF2.GUI.Profile.SealsTableViewCell$$SetHighlighted @ RVA 0x303B82C

void Nekki_SF2_GUI_Profile_SealsTableViewCell__SetHighlighted
               (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void Display()  [RVA 0x303B830]
// Nekki.SF2.GUI.Profile.SealsTableViewCell$$Display @ RVA 0x303B830

void Nekki_SF2_GUI_Profile_SealsTableViewCell__Display
               (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void SetItemInfo(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x303B834]
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
    FUN_01bab630(&StringLiteral_11753/*"SealsTableViewCell({0})"*/);
    FUN_01bab630(&StringLiteral_11754/*"SealsTableViewCell.SetItemInfo _itemInfo is null"*/);
    FUN_01bab630(&StringLiteral_11755/*"SealsTableViewCell.SetItemInfo item is null"*/);
    DAT_04565d85 = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pSVar1 = System_String__Format
                       (StringLiteral_11753/*"SealsTableViewCell({0})"*/,
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
            puVar6 = &StringLiteral_11754/*"SealsTableViewCell.SetItemInfo _itemInfo is null"*/;
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
  puVar6 = &StringLiteral_11755/*"SealsTableViewCell.SetItemInfo item is null"*/;
LAB_0313bab8:
  UnityEngine_Debug__LogError((Il2CppObject *)*puVar6,(MethodInfo *)0x0);
  return;
}

