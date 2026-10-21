// TypeDefIndex 2098
// Namespace: Nekki.SF2.GUI.Profile
// public class BattlePassRewardCell : BaseRewardCell
// Fields:
//   private SFButton _cellProbabilityButton; // 0x58
//   private const string AGEAIEGPFBB = "Cell_VIP";
//   private const string DGLBOCAAJLG = "Cell_default";
//   private const string EECOOMJPHAF = "VIP_locked";
//   private const string NCLPLNOJGGG = "VIP_unlocked";
//   private const string CNDDMDMNMNM = "Cell_glow";
//   private const string CILGACENBDJ = "Claimed_icon";
//   private const float GEMDEEFEMHD = 0.36;
//   public CanvasGroup CanvasGroup; // 0x60
//   public ResolutionImage Glow; // 0x68
//   public ResolutionImage BgImage; // 0x70
//   public ResolutionImage VIPImage; // 0x78
//   public LabelAlias Level; // 0x80
//   public ResolutionImage ClaimedCheck; // 0x88

// ===== protected override void ENEJJGDDBGI(string OOKEKJMFKPE, string HCAAAAMDCNO, bool LECNADPGFOM, float JKOJPEKLBCI = 0)  [RVA 0x32C85A8]
// Nekki.SF2.GUI.Profile.BattlePassRewardCell$$ENEJJGDDBGI @ RVA 0x32C85A8

void Nekki_SF2_GUI_Profile_BattlePassRewardCell__ENEJJGDDBGI
               (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *__this,System_String_o *OOKEKJMFKPE,
               System_String_o *HCAAAAMDCNO,bool LECNADPGFOM,float JKOJPEKLBCI,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  BCOICIIDFPD_o *pBVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  
                    /* catch() { ... } // from try @ 033c7c80 with catch @ 033c85a8 */
                    /* catch() { ... } // from try @ 033c8190 with catch @ 033c85ac
                       catch() { ... } // from try @ 033c8198 with catch @ 033c85ac */
                    /* catch() { ... } // from try @ 033c7cdc with catch @ 033c85b0 */
                    /* try { // try from 033c85c0 to 034c85c3 has its CatchHandler @ 033c85d4 */
  if ((DAT_04567502 & 1) == 0) {
                    /* catch() { ... } // from try @ 033c85c0 with catch @ 033c85d4 */
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
                    /* try { // try from 033c85dc to 034c8643 has its CatchHandler @ 033c8658 */
    DAT_04567502 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseRewardCell__ENEJJGDDBGI
            ((Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)__this,OOKEKJMFKPE,HCAAAAMDCNO,LECNADPGFOM,
             0.0,(MethodInfo *)0x0);
  pBVar3 = (__this->fields).super.RewardData;
  if (pBVar3 != (BCOICIIDFPD_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((pBVar3->fields)._JHGGGMJEENP_k__BackingField,StringLiteral_8095/*"Item"*/,
                       (MethodInfo *)0x0);
    pNVar4 = (__this->fields).super.SlotImage;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
      if (bVar1) {
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_033c86f0;
                    /* try { // try from 033c8644 to 034c864f has its CatchHandler @ 033c79c8 */
        fVar5 = 0.28;
        fVar7 = 0.0;
        fVar6 = fVar5;
                    /* try { // try from 033c8650 to 034c8657 has its CatchHandler @ 033c8658 */
      }
      else {
                    /* catch() { ... } // from try @ 033c8250 with catch @ 033c8658
                       catch() { ... } // from try @ 033c8584 with catch @ 033c8658
                       catch() { ... } // from try @ 033c85dc with catch @ 033c8658
                       catch() { ... } // from try @ 033c8650 with catch @ 033c8658 */
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_033c86f0;
        UVar8 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
        fVar5 = UVar8.fields.x * 0.7;
        fVar6 = UVar8.fields.y * 0.7;
        fVar7 = UVar8.fields.z * 0.7;
      }
      UVar8.fields.y = fVar6;
      UVar8.fields.x = fVar5;
      UVar8.fields.z = fVar7;
      UnityEngine_Transform__set_localScale(pUVar2,UVar8,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).super.SlotImage;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
        if (DAT_0455fa77 == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fa77 = '\x01';
        }
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar2,(UnityEngine_Vector3_o)
                            (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_033c86f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HFAMAMIMEIA()  [RVA 0x32C86F4]
// Nekki.SF2.GUI.Profile.BattlePassRewardCell$$HFAMAMIMEIA @ RVA 0x32C86F4

void Nekki_SF2_GUI_Profile_BattlePassRewardCell__HFAMAMIMEIA
               (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *__this,MethodInfo *method)

{
  BCOICIIDFPD_o *pBVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567503 & 1) == 0) {
    auVar2 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567503 = 1;
  }
  pBVar1 = (__this->fields).super.RewardData;
  if (pBVar1 != (BCOICIIDFPD_o *)0x0) {
    JJPNLEPEAFM__FOMGGGJEKEA
              ((JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0,(JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0,
               (System_Action_object__o *)0x0,(pBVar1->fields)._COIPKAKHDFP_k__BackingField,
               StringLiteral_1/*""*/,false,1,2,(System_String_o *)0x0,(System_String_o *)0x0,1,1,true,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void .ctor()  [RVA 0x32C8784]
// Nekki.SF2.GUI.Profile.BattlePassRewardCell$$.ctor @ RVA 0x32C8784

void Nekki_SF2_GUI_Profile_BattlePassRewardCell___ctor
               (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseRewardCell___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void RefreshCellView()  [RVA 0x32C878C]
// Nekki.SF2.GUI.Profile.BattlePassRewardCell$$RefreshCellView @ RVA 0x32C878C

void Nekki_SF2_GUI_Profile_BattlePassRewardCell__RefreshCellView
               (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  int index;
  byte bVar2;
  bool bVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  System_String_o *pSVar5;
  EGMONPGHHDP_o *pEVar6;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar7;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *pSVar8;
  Il2CppObject *pIVar9;
  UnityEngine_GameObject_o *pUVar10;
  System_Collections_BitArray_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_CanvasGroup_o *pUVar11;
  BCOICIIDFPD_o *pBVar12;
  BCOICIIDFPD_c *pBVar13;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar14;
  float value;
  int local_64;
  
  if ((DAT_04567504 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__);
    FUN_01bab630(&PIJBHIFGBCK_TypeInfo);
    FUN_01bab630(&StringLiteral_4217/*"Cell_VIP"*/);
    FUN_01bab630(&StringLiteral_14677/*"VIP_locked"*/);
    FUN_01bab630(&StringLiteral_4372/*"Claimed_icon"*/);
    FUN_01bab630(&StringLiteral_14678/*"VIP_unlocked"*/);
    FUN_01bab630(&StringLiteral_4219/*"Cell_glow"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_4218/*"Cell_default"*/);
    DAT_04567504 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseRewardCell__RefreshCellView
            ((Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)__this,(MethodInfo *)0x0);
  pNVar4 = (__this->fields).Level;
  if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar4,
               (pNVar4->klass->vtable)._23_set_color.method);
    pBVar12 = (__this->fields).super.RewardData;
    if (pBVar12 == (BCOICIIDFPD_o *)0x0) goto LAB_033c8c38;
    pBVar13 = pBVar12->klass;
    bVar2 = (PIJBHIFGBCK_TypeInfo->_2).naturalAligment;
    if (((pBVar13->_2).naturalAligment < bVar2) ||
       ((pBVar13->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)PIJBHIFGBCK_TypeInfo))
    goto LAB_033c8c38;
    pNVar4 = (__this->fields).Level;
    if ((pBVar13->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)PIJBHIFGBCK_TypeInfo) {
      pBVar12 = (BCOICIIDFPD_o *)0x0;
    }
    index = *(int *)&(pBVar12->fields).field_0x3c;
    local_64 = index + 1;
    pSVar5 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033c8c38;
    (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
              (pNVar4,pSVar5,(pNVar4->klass->vtable)._75_set_text.method);
    pBVar12 = (__this->fields).super.RewardData;
    if (pBVar12 == (BCOICIIDFPD_o *)0x0) goto LAB_033c8c38;
    bVar3 = System_String__op_Equality
                      ((pBVar12->fields)._JHGGGMJEENP_k__BackingField,StringLiteral_8095/*"Item"*/,
                       (MethodInfo *)0x0);
    if (bVar3) {
      pBVar12 = (__this->fields).super.RewardData;
      if (pBVar12 == (BCOICIIDFPD_o *)0x0) goto LAB_033c8c38;
      (*(__this->klass->vtable)._5_ENEJJGDDBGI.methodPtr)
                (0,__this,StringLiteral_1/*""*/,(pBVar12->fields)._IANGGJCONIH_k__BackingField,0,
                 (__this->klass->vtable)._5_ENEJJGDDBGI.method);
      pBVar12 = (__this->fields).super.RewardData;
      if (pBVar12 == (BCOICIIDFPD_o *)0x0) goto LAB_033c8c38;
      local_64 = (pBVar12->fields)._HFPMLGFDOKC_k__BackingField;
      pNVar4 = (__this->fields).super.SlotCount;
      pSVar5 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033c8c38;
      (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                (pNVar4,pSVar5,(pNVar4->klass->vtable)._75_set_text.method);
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    if (((pEVar6 == (EGMONPGHHDP_o *)0x0) ||
        (pJVar7 = EGMONPGHHDP__OKBKFJKEAAG(pEVar6,(MethodInfo *)0x0),
        pJVar7 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0)) ||
       (pSVar8 = (pJVar7->fields).GPNNHMIJLGL,
       pSVar8 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0))
    goto LAB_033c8c38;
    pNVar14 = (__this->fields).BgImage;
    pSVar5 = (pJVar7->fields).KBOFABJIPPD;
    pIVar9 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar8,index,
                        Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__);
    if (pIVar9 == (Il2CppObject *)0x0) goto LAB_033c8c38;
    puVar1 = &StringLiteral_4218/*"Cell_default"*/;
    if (*(char *)&pIVar9[2].monitor != '\0') {
      puVar1 = &StringLiteral_4217/*"Cell_VIP"*/;
    }
    Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
              (pNVar14,pSVar5,(System_String_o *)*puVar1,(MethodInfo *)0x0);
    pNVar14 = (__this->fields).VIPImage;
    pSVar5 = (pJVar7->fields).KBOFABJIPPD;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    if (pEVar6 == (EGMONPGHHDP_o *)0x0) goto LAB_033c8c38;
    bVar3 = EGMONPGHHDP__PJKNOEOGFNM(pEVar6,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_14678/*"VIP_unlocked"*/;
    if (!bVar3) {
      puVar1 = &StringLiteral_14677/*"VIP_locked"*/;
    }
    Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
              (pNVar14,pSVar5,(System_String_o *)*puVar1,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
              ((__this->fields).Glow,(pJVar7->fields).KBOFABJIPPD,StringLiteral_4219/*"Cell_glow"*/,
               (MethodInfo *)0x0);
    Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
              ((__this->fields).ClaimedCheck,(pJVar7->fields).KBOFABJIPPD,StringLiteral_4372/*"Claimed_icon"*/,
               (MethodInfo *)0x0);
    pNVar14 = (__this->fields).Glow;
    if ((pNVar14 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar10 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar14,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c8c38;
    UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
    pNVar14 = (__this->fields).VIPImage;
    if (pNVar14 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_033c8c38;
    pUVar10 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pNVar14,(MethodInfo *)0x0);
    pSVar8 = (pJVar7->fields).GPNNHMIJLGL;
    if (((pSVar8 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) ||
        (pIVar9 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,index,
                             Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                            ), pIVar9 == (Il2CppObject *)0x0)) ||
       (pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c8c38;
    UnityEngine_GameObject__SetActive(pUVar10,*(bool *)&pIVar9[2].monitor,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    if ((pEVar6 == (EGMONPGHHDP_o *)0x0) ||
       (__this_00 = (pEVar6->fields)._MLMHDKDJJFK_k__BackingField,
       __this_00 == (System_Collections_BitArray_o *)0x0)) goto LAB_033c8c38;
    bVar3 = System_Collections_BitArray__get_Item(__this_00,index,(MethodInfo *)0x0);
    pNVar14 = (__this->fields).ClaimedCheck;
    if ((pNVar14 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar10 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar14,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c8c38;
    UnityEngine_GameObject__SetActive(pUVar10,bVar3,(MethodInfo *)0x0);
    if (bVar3) {
      pNVar4 = (__this->fields).super.SlotCount;
      if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar10 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c8c38;
      UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
      __this_01 = (__this->fields).super.PerkContainer;
      if ((__this_01 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar10 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c8c38;
      UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).CanvasGroup;
      if (pUVar11 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_033c8c38;
      UnityEngine_CanvasGroup__set_alpha(pUVar11,1.0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).CanvasGroup;
    }
    else {
      pUVar11 = (__this->fields).CanvasGroup;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
      if (pEVar6 == (EGMONPGHHDP_o *)0x0) goto LAB_033c8c38;
      bVar3 = EGMONPGHHDP__LKMGFEDIOAC(pEVar6,index,(MethodInfo *)0x0);
      if (!bVar3) {
        value = 0.36;
        if (pUVar11 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_033c8c38;
        goto LAB_033c8c00;
      }
    }
    value = 1.0;
    if (pUVar11 != (UnityEngine_CanvasGroup_o *)0x0) {
LAB_033c8c00:
      UnityEngine_CanvasGroup__set_alpha(pUVar11,value,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033c8c38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EnableProbability(bool CJNHFNHJHPE)  [RVA 0x32C8C3C]
// Nekki.SF2.GUI.Profile.BattlePassRewardCell$$EnableProbability @ RVA 0x32C8C3C

void Nekki_SF2_GUI_Profile_BattlePassRewardCell__EnableProbability
               (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  SFButton_o *pSVar1;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04567505 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassRewardCell_HFAMAMIMEIA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567505 = 1;
  }
  pSVar1 = (__this->fields)._cellProbabilityButton;
  if (pSVar1 != (SFButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pSVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._cellProbabilityButton;
    if (pSVar1 != (SFButton_o *)0x0) {
      __this_00 = (UnityEngine_Events_UnityEvent_o *)(pSVar1->fields).super.m_OnClick;
      if (CJNHFNHJHPE) {
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
          return;
        }
      }
      else if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

