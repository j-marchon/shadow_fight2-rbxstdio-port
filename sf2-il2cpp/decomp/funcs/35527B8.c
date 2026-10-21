// LEGDPJHPEOB.EOMIPPCJNMH$$LJNIEJCLFEP @ RVA 0x35527B8

bool LEGDPJHPEOB_EOMIPPCJNMH__LJNIEJCLFEP
               (LEGDPJHPEOB_EOMIPPCJNMH_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *a;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568b47 & 1) == 0) {
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_04568b47 = 1;
  }
  if (offer == (NCCFNKMICGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar4 = offer->klass;
  uVar1._0_1_ = (pNVar4->_2).rank;
  uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar3 = pNVar4->vtable + (*piVar6 + 2);
        goto LAB_03652844;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,2);
LAB_03652844:
  a = (System_String_o *)(*pVVar3->methodPtr)(offer,pVVar3->method);
  bVar2 = System_String__op_Equality(a,(__this->fields).offerName,(MethodInfo *)0x0);
  return bVar2;
}

