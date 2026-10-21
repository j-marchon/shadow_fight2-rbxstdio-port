// Nekki.SF2.GUI.Dialogs.Raids.ClanChatViewController$$OnCreateClanPressed @ RVA 0x30325CC

void Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController__OnCreateClanPressed
               (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MKIDEJJPLCE_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MKIDEJJPLCE_o *pMVar6;
  
  if ((DAT_04565d0d & 1) == 0) {
    FUN_01bab630(&MKIDEJJPLCE_TypeInfo);
    DAT_04565d0d = 1;
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
          goto LAB_03132658;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MKIDEJJPLCE_TypeInfo,3);
LAB_03132658:
    (*pVVar2->methodPtr)(pMVar6,pVVar2->method);
  }
  JJPNLEPEAFM__HOILBJHCLJG((MethodInfo *)0x0);
  return;
}

