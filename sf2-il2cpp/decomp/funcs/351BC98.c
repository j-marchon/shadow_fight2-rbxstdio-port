// KJLBJAOALEO$$BPHNBPHFDLM @ RVA 0x351BC98

bool KJLBJAOALEO__BPHNBPHFDLM(KJLBJAOALEO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined1 uVar2;
  VirtualInvokeData *pVVar3;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar4;
  ulong uVar5;
  int32_t *piVar6;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_0456898d & 1) == 0) {
    auVar8 = FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_0456898d = 1;
  }
  pUVar7 = (__this->fields).COHIBLKOLHH;
  if (pUVar7 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  pUVar4 = pUVar7->klass;
  uVar1._0_1_ = (pUVar4->_2).rank;
  uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pUVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar3 = pUVar4->vtable + (*piVar6 + 0x15);
        goto LAB_0361bd24;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pUVar7,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,0x15);
LAB_0361bd24:
                    /* WARNING: Could not recover jumptable at 0x0361bd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pVVar3->methodPtr)(pUVar7,pVVar3->method);
  return (bool)uVar2;
}

