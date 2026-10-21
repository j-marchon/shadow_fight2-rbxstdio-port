// Nekki.SF2.GUI.Shop.ShopScene$$StopCoroutine_ReloadActiveItemsAndRefresh @ RVA 0x3432D3C

void Nekki_SF2_GUI_Shop_ShopScene__StopCoroutine_ReloadActiveItemsAndRefresh
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456817f & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456817f = 1;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar3->klass;
  pSVar8 = (__this->fields).GBPDKLANGLP;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  ppSVar1 = &(__this->fields).GBPDKLANGLP;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_03532dd8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_03532dd8:
  (*pVVar4->methodPtr)(pPVar3,pSVar8,pVVar4->method);
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}

