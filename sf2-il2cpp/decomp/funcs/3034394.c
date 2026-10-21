// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$OnNewMessageInChannel @ RVA 0x3034394

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OnNewMessageInChannel
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  MKIDEJJPLCE_c *pMVar4;
  ulong uVar5;
  int32_t *piVar6;
  MKIDEJJPLCE_o *pMVar7;
  
  if ((DAT_04565d24 & 1) == 0) {
    FUN_01bab630(&MKIDEJJPLCE_TypeInfo);
    DAT_04565d24 = 1;
  }
  pMVar7 = (__this->fields)._chatPanel;
  if (pMVar7 == (MKIDEJJPLCE_o *)0x0) {
    return;
  }
  pMVar4 = pMVar7->klass;
  uVar1 = (__this->fields).FIACGKGFFJP;
  uVar2._0_1_ = (pMVar4->_2).rank;
  uVar2._1_1_ = (pMVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar2;
  if (uVar5 != 0) {
    piVar6 = &((pMVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)MKIDEJJPLCE_TypeInfo) {
        pVVar3 = pMVar4->vtable + (*piVar6 + 5);
        goto LAB_03134430;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pMVar7,MKIDEJJPLCE_TypeInfo,5);
LAB_03134430:
                    /* WARNING: Could not recover jumptable at 0x03134444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pMVar7,(ulong)uVar1,pVVar3->method);
  return;
}

