// Nekki.SF2.GUI.Dialogs.Raids.RaidBattleChatViewController$$OnCreateRaidPressed @ RVA 0x35225F0

void Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController__OnCreateRaidPressed
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MKIDEJJPLCE_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MKIDEJJPLCE_o *pMVar6;
  
  if ((DAT_045689d9 & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&MKIDEJJPLCE_TypeInfo);
    DAT_045689d9 = 1;
    method = extraout_x1;
  }
  pMVar6 = (__this->fields).super._chatPanel;
  if (pMVar6 != (MKIDEJJPLCE_o *)0x0) {
    pMVar3 = pMVar6->klass;
    uVar1._0_1_ = (pMVar3->_2).rank;
    uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
    uVar4 = (ulong)uVar1;
    if (uVar4 != 0) {
      piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
            (Il2CppClass *)MKIDEJJPLCE_TypeInfo) {
          pVVar2 = pMVar3->vtable + (*piVar5 + 3);
          goto LAB_03622690;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MKIDEJJPLCE_TypeInfo,3);
LAB_03622690:
    (*pVVar2->methodPtr)(pMVar6,pVVar2->method);
    method = extraout_x1_00;
  }
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo,method);
  }
  LPGPNBGHDBD__CFBCMMEBKHN((MethodInfo *)0x0);
  JJPNLEPEAFM__OCOOMCMIGJL((Il2CppObject *)0x0,(MethodInfo *)0x0);
  return;
}

