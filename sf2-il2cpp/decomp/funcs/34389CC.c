// Nekki.SF2.GUI.Shop.ShopScene$$ReloadRaidItemPackSliderDelayed @ RVA 0x34389CC

void Nekki_SF2_GUI_Shop_ShopScene__ReloadRaidItemPackSliderDelayed
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_045681ab & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045681ab = 1;
  }
  if ((__this->fields).IMJDKMADNGL != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = Nekki_SF2_GUI_Shop_ShopScene__JDPMLOOBKOD(__this,method_00);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar3->klass;
  ppSVar1 = &(__this->fields).IMJDKMADNGL;
  uVar2._0_1_ = (pPVar6->_2).rank;
  uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar2;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar5 = pPVar6->vtable + *piVar8;
        goto LAB_03538a80;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_03538a80:
  pSVar4 = (System_Collections_IEnumerator_o *)(*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
  *ppSVar1 = pSVar4;
                    /* try { // try from 03538aa8 to 03638ceb has its CatchHandler @ 03538aa8
                       catch() { ... } // from try @ 03538aa8 with catch @ 03538aa8
                       catch() { ... } // from try @ 03538d74 with catch @ 03538aa8
                       catch() { ... } // from try @ 03538f1c with catch @ 03538aa8
                       catch() { ... } // from try @ 03538f84 with catch @ 03538aa8
                       catch() { ... } // from try @ 03538fb0 with catch @ 03538aa8
                       catch() { ... } // from try @ 03538fec with catch @ 03538aa8
                       catch() { ... } // from try @ 0353900c with catch @ 03538aa8
                       catch() { ... } // from try @ 03539040 with catch @ 03538aa8 */
  thunk_FUN_01c20e04(ppSVar1,pSVar4);
  return;
}

