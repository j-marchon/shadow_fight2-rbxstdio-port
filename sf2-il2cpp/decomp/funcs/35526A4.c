// LEGDPJHPEOB.<>c$$MBNFGEODNLP @ RVA 0x35526A4

bool LEGDPJHPEOB_<>c__MBNFGEODNLP(LEGDPJHPEOB___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568b46 & 1) == 0) {
    __this = (LEGDPJHPEOB___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_04568b46 = 1;
  }
  if (offer != (NCCFNKMICGK_o *)0x0) {
    pNVar4 = offer->klass;
    uVar1._0_1_ = (pNVar4->_2).rank;
    uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar2 = pNVar4->vtable + (*piVar6 + 1);
          goto LAB_0365272c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_0365272c:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (LEGDPJHPEOB___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

