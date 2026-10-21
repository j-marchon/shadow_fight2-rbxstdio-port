// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$LJBAAMGCKCC @ RVA 0x32702B0

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__LJBAAMGCKCC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_0456721e & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456721e = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GKKAJKLEPPJ(__this,method_00);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_0337034c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_0337034c:
                    /* WARNING: Could not recover jumptable at 0x03370364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pPVar2,pSVar3,0,pVVar4->method);
  return;
}

