// Nekki.SF2.GUI.Map.MapButtonsPanel$$AddEventsButton @ RVA 0x3592F78

void Nekki_SF2_GUI_Map_MapButtonsPanel__AddEventsButton
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  NCNJEIBHGBH_o *__this_00;
  Nekki_SF2_GUI_Map_MapButton_o *pNVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  KKEKKPIDGBK_o *pKVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *extraout_x1;
  KKEKKPIDGBK_c *pKVar6;
  FKNCNNOOOIO_o *pFVar7;
  ulong uVar8;
  int32_t *piVar9;
  Nekki_SF2_GUI_Map_MapButton_o **ppNVar10;
  UnityEngine_Transform_o *pUVar11;
  
  if ((DAT_04568d88 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15551);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568d88 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MapButtonsPanel__ANDLONHJIGB(__this,method);
  __this_00 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (NCNJEIBHGBH_o *)0x0) goto LAB_03693214;
  pNVar3 = NCNJEIBHGBH__MKIGGEJHHMH(__this_00,(__this->fields)._MapButtonPrefab,(MethodInfo *)0x0);
  ppNVar10 = &(__this->fields).APPEDOFGLKO;
  *ppNVar10 = pNVar3;
  thunk_FUN_01c20e04(ppNVar10,pNVar3);
  pNVar3 = *ppNVar10;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) goto LAB_036931d0;
  pNVar3 = *ppNVar10;
  if ((pNVar3 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) ||
     (pFVar7 = (pNVar3->fields).AEPNEAIEKOL, pFVar7 == (FKNCNNOOOIO_o *)0x0)) goto LAB_03693214;
  if ((pFVar7->fields).OEFBIKEMBOF == false) {
LAB_036930ac:
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    pUVar11 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_03693214;
  }
  else {
    pUVar11 = (__this->fields)._ActionsPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    pNVar3 = *ppNVar10;
    if (!bVar2) {
      if (pNVar3 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) goto LAB_03693214;
      goto LAB_036930ac;
    }
    if ((pNVar3 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_03693214;
    pUVar11 = (__this->fields)._ActionsPanel;
  }
  UnityEngine_Transform__SetParent(__this_01,pUVar11,false,(MethodInfo *)0x0);
  if (*ppNVar10 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButton__Refresh(*ppNVar10,(MethodInfo *)0x0);
    if ((*ppNVar10 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
      if (bVar2) {
        if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pKVar4 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pKVar4 == (KKEKKPIDGBK_o *)0x0) goto LAB_03693214;
        pKVar6 = pKVar4->klass;
        uVar1._0_1_ = (pKVar6->_2).rank;
        uVar1._1_1_ = (pKVar6->_2).minimumAlignment;
        uVar8 = (ulong)uVar1;
        if (uVar8 != 0) {
          piVar9 = &((pKVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar5 = pKVar6->vtable + (*piVar9 + 6);
              goto LAB_036931ac;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pKVar4,KKEKKPIDGBK_TypeInfo,6);
LAB_036931ac:
        uVar8 = (*pVVar5->methodPtr)(pKVar4,pVVar5->method);
        if ((uVar8 & 1) != 0) {
          if (*ppNVar10 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) goto LAB_03693214;
          Nekki_SF2_GUI_Map_MapButton__set_NotificatorEnabled(*ppNVar10,true,(MethodInfo *)0x0);
        }
      }
LAB_036931d0:
      if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_15551,StringLiteral_1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03693214:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

