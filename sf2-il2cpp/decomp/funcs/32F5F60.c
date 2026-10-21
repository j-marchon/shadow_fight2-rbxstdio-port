// NCNJEIBHGBH$$JOCHGEBKLMM @ RVA 0x32F5F60

void NCNJEIBHGBH__JOCHGEBKLMM(NCNJEIBHGBH_o *__this,MethodInfo *method)

{
  ushort uVar1;
  KKEKKPIDGBK_o *pKVar2;
  VirtualInvokeData *pVVar3;
  long lVar4;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  MethodInfo *extraout_x1;
  KKEKKPIDGBK_c *pKVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04567692 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04567692 = 1;
    method = extraout_x1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MKFAKELPPAC_TypeInfo,method);
  }
  pKVar2 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pKVar2 != (KKEKKPIDGBK_o *)0x0) {
    pKVar6 = pKVar2->klass;
    uVar1._0_1_ = (pKVar6->_2).rank;
    uVar1._1_1_ = (pKVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pKVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
          pVVar3 = pKVar6->vtable + (*piVar8 + 0x12);
          goto LAB_033f6028;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar2,KKEKKPIDGBK_TypeInfo,0x12);
LAB_033f6028:
    (*pVVar3->methodPtr)(pKVar2,pVVar3->method);
    lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8) !=
        (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
      Nekki_SF2_GUI_Map_MapScene__HideEventButtonNotificator
                ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8),(MethodInfo *)0x0);
      pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar5,0x2b,(MethodInfo *)0x0);
        pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          Nekki_SF2_Core_Quests_QuestsManager__RunQuests(pNVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

