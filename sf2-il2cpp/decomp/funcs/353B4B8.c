// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$OnContentClick @ RVA 0x353B4B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__OnContentClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *__this_00;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_01;
  Il2CppObject *pIVar4;
  long lVar5;
  System_String_o *pSVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *__this_02;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Vector3_o HHPABFGHALF;
  
  if ((DAT_04568ac3 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_5076);
    FUN_01bab630(&StringLiteral_20391);
    DAT_04568ac3 = 1;
    method = extraout_x1;
  }
  DKIDCBPNMPD = (__this->fields)._hintPrefab;
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  pNVar3 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if ((pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) &&
     (__this_00 = (pNVar3->fields)._chatContent,
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *)0x0)) {
    HOKHHGFLMNA = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._hintPos;
    if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
      HHPABFGHALF = UnityEngine_Transform__get_position
                              ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
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
      __this_01 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                            (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,
                             DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM,-1.0,-1.0,
                             (MethodInfo *)0x0);
      if ((__this->fields).LFKBADICOFG == false) {
        if (__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
          Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias
                    (__this_01,StringLiteral_20391,(MethodInfo *)0x0);
LAB_0363b720:
          Nekki_SF2_GUI_HintBox__Flip((Nekki_SF2_GUI_HintBox_o *)__this_01,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar5 = FUN_01bab718(string___TypeInfo,1);
        pSVar6 = System_Int32__ToString((int)__this + 200,(MethodInfo *)0x0);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          *(System_String_o **)(lVar5 + 0x20) = pSVar6;
          thunk_FUN_01c20e04();
          uVar2 = StringLiteral_5076;
          if (pIVar4 != (Il2CppObject *)0x0) {
            pIVar8 = pIVar4->klass;
            uVar1._0_1_ = (pIVar8->_2).rank;
            uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
            uVar9 = (ulong)uVar1;
            if (uVar9 != 0) {
              piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar7 = pIVar8->vtable + (*piVar10 + 0xc);
                  goto LAB_0363b6f8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0363b6f8:
            pSVar6 = (System_String_o *)(*pVVar7->methodPtr)(pIVar4,uVar2,lVar5,pVVar7->method);
            if (__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
              Nekki_SF2_GUI_HintBoxAutoKilled__SetDescText(__this_01,pSVar6,(MethodInfo *)0x0);
              goto LAB_0363b720;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

