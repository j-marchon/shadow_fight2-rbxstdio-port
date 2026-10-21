// Nekki.SF2.GUI.Shop.ShopScene$$RemoveAdVideoNotificator @ RVA 0x3435C6C

void Nekki_SF2_GUI_Shop_ShopScene__RemoveAdVideoNotificator
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  ushort uVar1;
  KKEKKPIDGBK_o *pKVar2;
  VirtualInvokeData *pVVar3;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this_00;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this_01;
  MethodInfo *extraout_x1;
  KKEKKPIDGBK_c *pKVar4;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_0456818c & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_0456818c = 1;
    method = extraout_x1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MKFAKELPPAC_TypeInfo,method);
  }
  pKVar2 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pKVar2 != (KKEKKPIDGBK_o *)0x0) {
    pKVar4 = pKVar2->klass;
    uVar1._0_1_ = (pKVar4->_2).rank;
    uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pKVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
          pVVar3 = pKVar4->vtable + (*piVar7 + 0x12);
          goto LAB_03535d24;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar2,KKEKKPIDGBK_TypeInfo,0x12);
LAB_03535d24:
    (*pVVar3->methodPtr)(pKVar2,pVVar3->method);
    pNVar5 = (__this->fields)._ItemsPanel;
    if ((pNVar5 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) &&
       (__this_00 = (pNVar5->fields).HCMDPJADLOL,
       __this_00 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0)) {
      Nekki_SF2_GUI_Shop_ShopTableViewCell__HideBadge(__this_00,(MethodInfo *)0x0);
      __this_01 = (__this->fields).GJIPOBCNEPG;
      if (__this_01 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
        Nekki_SF2_GUI_Shop_ShopBottomPanel__RemoveFreeSectionNotificator
                  (__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

