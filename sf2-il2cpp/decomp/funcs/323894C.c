// KKHJHHIPPOO$$FDKDJJJDKKK @ RVA 0x323894C

void KKHJHHIPPOO__FDKDJJJDKKK(KKHJHHIPPOO_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  ushort uVar1;
  ulong uVar2;
  VirtualInvokeData *pVVar3;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar6;
  
  if ((DAT_0456703d & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_0456703d = 1;
  }
  uVar2 = (*(__this->klass->vtable)._10_CDEIMFELDHP.methodPtr)
                    (__this,(__this->klass->vtable)._10_CDEIMFELDHP.method);
  if ((uVar2 & 1) != 0) {
    return;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  (__this->fields).super.HNIADPLNEII = true;
  (__this->fields).super.super.JBNGADJBDHB = ACCIHBHMFPN;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar4 = pUVar6->klass;
  uVar1._0_1_ = (pUVar4->_2).rank;
  uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
  uVar2 = (ulong)uVar1;
  if (uVar2 != 0) {
    piVar5 = &((pUVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar3 = pUVar4->vtable + (*piVar5 + 0x10);
        goto LAB_03338a08;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,0x10);
LAB_03338a08:
                    /* WARNING: Could not recover jumptable at 0x03338a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pUVar6,pVVar3->method);
  return;
}

