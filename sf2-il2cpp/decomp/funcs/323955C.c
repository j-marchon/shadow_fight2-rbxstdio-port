// KKHJHHIPPOO$$AEHOAEDLPNI @ RVA 0x323955C

void KKHJHHIPPOO__AEHOAEDLPNI
               (KKHJHHIPPOO_o *__this,System_Action_LevelPlayAdError__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar6;
  
  if ((DAT_04567046 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_04567046 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 3);
        goto LAB_033395ec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,3);
LAB_033395ec:
                    /* WARNING: Could not recover jumptable at 0x03339600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}

