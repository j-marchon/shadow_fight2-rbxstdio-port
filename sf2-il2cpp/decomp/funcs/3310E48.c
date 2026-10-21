// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$OnDestroy @ RVA 0x3310E48

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_045677ae & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045677ae = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__PBNBBJPDHGK(__this,method);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__CJPOKGIHNDE(__this,method_00);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__HGNJELDOFKM(__this,method_01);
  ppSVar7 = &(__this->fields).ALMLDADAHFC;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_03410f0c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03410f0c:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}

