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
    FUN_01bab630(&StringLiteral_4217);
    FUN_01bab630(&StringLiteral_14677);
    FUN_01bab630(&StringLiteral_4372);
    FUN_01bab630(&StringLiteral_14678);
    FUN_01bab630(&StringLiteral_4219);
    FUN_01bab630(&StringLiteral_8095);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_4218);
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
                      ((pBVar12->fields)._JHGGGMJEENP_k__BackingField,StringLiteral_8095,
                       (MethodInfo *)0x0);
    if (bVar3) {
      pBVar12 = (__this->fields).super.RewardData;
      if (pBVar12 == (BCOICIIDFPD_o *)0x0) goto LAB_033c8c38;
      (*(__this->klass->vtable)._5_ENEJJGDDBGI.methodPtr)
                (0,__this,StringLiteral_1,(pBVar12->fields)._IANGGJCONIH_k__BackingField,0,
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
    puVar1 = &StringLiteral_4218;
    if (*(char *)&pIVar9[2].monitor != '\0') {
      puVar1 = &StringLiteral_4217;
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
    puVar1 = &StringLiteral_14678;
    if (!bVar3) {
      puVar1 = &StringLiteral_14677;
    }
    Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
              (pNVar14,pSVar5,(System_String_o *)*puVar1,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
              ((__this->fields).Glow,(pJVar7->fields).KBOFABJIPPD,StringLiteral_4219,
               (MethodInfo *)0x0);
    Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
              ((__this->fields).ClaimedCheck,(pJVar7->fields).KBOFABJIPPD,StringLiteral_4372,
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

