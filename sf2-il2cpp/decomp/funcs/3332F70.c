// EBBCMCKFDAE.DJMOFAOLPGA$$AOEMPKKDDHH @ RVA 0x3332F70

void EBBCMCKFDAE_DJMOFAOLPGA__AOEMPKKDDHH
               (EBBCMCKFDAE_DJMOFAOLPGA_o *__this,System_Action_MPAKDCNMLEG__int__int__o *h,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_0456792a & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_0456792a = 1;
  }
  pKVar6 = (__this->fields).manager;
  if (pKVar6 == (KKEKKPIDGBK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 0xd);
        goto LAB_03433000;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xd);
LAB_03433000:
                    /* WARNING: Could not recover jumptable at 0x03433014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,h,pVVar2->method);
  return;
}

