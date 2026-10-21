// JIBAEMHNBOF$$BCLJHFNMAID @ RVA 0x30C9244

bool JIBAEMHNBOF__BCLJHFNMAID(NCCFNKMICGK_o *NLFMDIGKNGP,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  VirtualInvokeData *pVVar4;
  NCCFNKMICGK_c *pNVar5;
  ulong uVar6;
  int32_t *piVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = NLFMDIGKNGP;
  if ((DAT_045662cc & 1) == 0) {
    auVar8 = FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662cc = 1;
  }
  if (NLFMDIGKNGP == (NCCFNKMICGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  pNVar5 = NLFMDIGKNGP->klass;
  uVar1._0_1_ = (pNVar5->_2).rank;
  uVar1._1_1_ = (pNVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pNVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar4 = pNVar5->vtable + (*piVar7 + 4);
        goto LAB_031c92cc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,4);
LAB_031c92cc:
  bVar3 = (*pVVar4->methodPtr)(NLFMDIGKNGP,pVVar4->method);
  if ((bVar3 & 1) != 0) {
    pNVar5 = NLFMDIGKNGP->klass;
    uVar2._0_1_ = (pNVar5->_2).rank;
    uVar2._1_1_ = (pNVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar2;
    if (uVar6 != 0) {
      piVar7 = &((pNVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar4 = pNVar5->vtable + (*piVar7 + 7);
          goto LAB_031c9330;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,7);
LAB_031c9330:
    (*pVVar4->methodPtr)(NLFMDIGKNGP,1,pVVar4->method);
  }
  return (bool)(bVar3 & 1);
}

