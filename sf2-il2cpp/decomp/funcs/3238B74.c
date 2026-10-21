// KKHJHHIPPOO$$DACCEKBJBBC @ RVA 0x3238B74

void KKHJHHIPPOO__DACCEKBJBBC(KKHJHHIPPOO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar4;
  ulong uVar5;
  int32_t *piVar6;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04567040 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    auVar8 = FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_04567040 = 1;
  }
  pUVar7 = (__this->fields).COHIBLKOLHH;
  if (pUVar7 != (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
    pUVar4 = pUVar7->klass;
    uVar1._0_1_ = (pUVar4->_2).rank;
    uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pUVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
          pVVar3 = pUVar4->vtable + (*piVar6 + 0x12);
          goto LAB_03338c0c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(pUVar7,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,0x12);
LAB_03338c0c:
    auVar8 = (*pVVar3->methodPtr)(pUVar7,pVVar3->method);
    pUVar7 = (__this->fields).COHIBLKOLHH;
    if (pUVar7 != (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
      pUVar4 = pUVar7->klass;
      uVar2._0_1_ = (pUVar4->_2).rank;
      uVar2._1_1_ = (pUVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar2;
      if (uVar5 != 0) {
        piVar6 = &((pUVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar3 = pUVar4->vtable + *piVar6;
            goto LAB_03338c74;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pUVar7,System_IDisposable_TypeInfo,0);
LAB_03338c74:
                    /* WARNING: Could not recover jumptable at 0x03338c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)(pUVar7,pVVar3->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
}

