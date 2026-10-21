// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$OnHintClicked @ RVA 0x3176894

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__OnHintClicked
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *pNVar2;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  PBAKFOBIHEG_o *pPVar4;
  undefined8 uVar5;
  VirtualInvokeData *pVVar6;
  System_Collections_IEnumerator_o *pSVar7;
  MethodInfo *method_00;
  SFButton_o *__this_02;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector2_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04566959 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_HKFPJNNOBMH__);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_18730);
    DAT_04566959 = 1;
  }
  pNVar2 = (__this->fields)._hintPrefab;
  if (pNVar2 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
    DKIDCBPNMPD = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._hintButton;
    if ((__this_02 != (SFButton_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar14 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566664 == '\0') {
        FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
        DAT_04566664 = '\x01';
      }
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar2 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                         (DKIDCBPNMPD,pUVar3,UVar14,DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM
                          ,-1.0,-1.0,(MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(pNVar2,StringLiteral_18730,(MethodInfo *)0x0);
        Nekki_SF2_GUI_HintBox__UpdateLineSpacing
                  ((Nekki_SF2_GUI_HintBox_o *)pNVar2,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar14 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
          __this_01 = (pNVar2->fields).super._RectTransform;
          if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
            UVar13 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
            value.fields.x = UVar14.fields.x + 0.0;
            value.fields.y = UVar14.fields.y + UVar13.fields.y + 75.0;
            value.fields.z = UVar14.fields.z + 0.0;
            UnityEngine_Transform__set_localPosition(pUVar3,value,(MethodInfo *)0x0);
            fVar12 = (__this->fields).LLAFFKEMAOI;
            fVar11 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
            if (fVar12 < fVar11) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__DNHHEMBFGFJ(__this,method_00);
              pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
              uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              if (pPVar4 == (PBAKFOBIHEG_o *)0x0) goto LAB_03276b54;
              pPVar8 = pPVar4->klass;
              uVar1._0_1_ = (pPVar8->_2).rank;
              uVar1._1_1_ = (pPVar8->_2).minimumAlignment;
              uVar9 = (ulong)uVar1;
              if (uVar9 != 0) {
                piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                      (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    pVVar6 = pPVar8->vtable + (*piVar10 + 2);
                    goto LAB_03276b00;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,2);
LAB_03276b00:
              pSVar7 = (System_Collections_IEnumerator_o *)
                       (*pVVar6->methodPtr)(0x3dcccccd,pPVar4,uVar5,pVVar6->method);
              (__this->fields).INIKLIGPEHH = pSVar7;
              thunk_FUN_01c20e04(&(__this->fields).INIKLIGPEHH);
              fVar11 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
              (__this->fields).LLAFFKEMAOI = fVar11 + 3.0;
            }
            return;
          }
        }
      }
    }
  }
LAB_03276b54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

