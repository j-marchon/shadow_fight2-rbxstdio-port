// NDPMLPGANCI$$JKAFOFMGDOA @ RVA 0x3449A04

void NDPMLPGANCI__JKAFOFMGDOA(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  KKEKKPIDGBK_o *pKVar4;
  VirtualInvokeData *pVVar5;
  undefined8 extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  GLINEGMOOBM_o *pGVar6;
  KKEKKPIDGBK_c *pKVar7;
  Il2CppObject *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = (ulong)__this;
  if ((DAT_0456825a & 1) == 0) {
    FUN_01bab630(&AFFHKININGD_TypeInfo);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    auVar11 = FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_0456825a = 1;
  }
  pGVar6 = (__this->fields).KLPOKEJLDHG;
  if (pGVar6 != (GLINEGMOOBM_o *)0x0) {
    if ((pGVar6->fields).DBMPKPJGIPI == 5) {
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
      auVar11._1_7_ = 0;
      auVar11[0] = bVar3;
      auVar11._8_8_ = extraout_x1;
      if (bVar3) {
        if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pKVar4 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pKVar4 == (KKEKKPIDGBK_o *)0x0) goto LAB_03549be8;
        pKVar7 = pKVar4->klass;
        uVar2._0_1_ = (pKVar7->_2).rank;
        uVar2._1_1_ = (pKVar7->_2).minimumAlignment;
        uVar9 = (ulong)uVar2;
        if (uVar9 != 0) {
          piVar10 = &((pKVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar5 = pKVar7->vtable + (*piVar10 + 4);
              goto LAB_03549b04;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pKVar4,KKEKKPIDGBK_TypeInfo,4);
LAB_03549b04:
        auVar11 = (*pVVar5->methodPtr)(pKVar4,3,0,1,pVVar5->method);
      }
    }
    method_00 = auVar11._8_8_;
    pGVar6 = (__this->fields).KLPOKEJLDHG;
    if (pGVar6 != (GLINEGMOOBM_o *)0x0) {
      switch((pGVar6->fields).DBMPKPJGIPI) {
      case 3:
      case 5:
      case 7:
        goto switchD_03549b48_caseD_3;
      case 4:
        if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar3 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanShowChatNowInShopScene
                          ((MethodInfo *)0x0);
        auVar11._1_7_ = 0;
        auVar11[0] = bVar3;
        auVar11._8_8_ = extraout_x1_00;
        method_00 = extraout_x1_00;
        if (!bVar3) goto switchD_03549b48_default;
switchD_03549b48_caseD_3:
        NDPMLPGANCI__DHMIJAAHPEI(__this,method_00);
        return;
      case 6:
        pIVar8 = (pGVar6->fields).KOANCCDDBDA;
        if (pIVar8 != (Il2CppObject *)0x0) {
          bVar1 = (AFFHKININGD_TypeInfo->_2).naturalAligment;
          if ((bVar1 <= (pIVar8->klass->_2).naturalAligment) &&
             ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)AFFHKININGD_TypeInfo)) {
            if (pIVar8 == (Il2CppObject *)0x0) break;
            if (*(int *)&pIVar8[1].monitor != 0) goto switchD_03549b48_default;
          }
        }
        return;
      default:
switchD_03549b48_default:
        NDPMLPGANCI__KJGGEPNHOBK(auVar11._0_8_,auVar11._8_8_);
        return;
      }
    }
  }
LAB_03549be8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

