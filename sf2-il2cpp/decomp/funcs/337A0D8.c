// LLDOMGIEPNE$$AHEKNMBPDEL @ RVA 0x337A0D8

void LLDOMGIEPNE__AHEKNMBPDEL
               (LLDOMGIEPNE_o *__this,System_Action_PCJHNLGCCOB__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MNBNELNLOCB_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MNBNELNLOCB_o *pMVar6;
  
  if ((DAT_04567b74 & 1) == 0) {
    FUN_01bab630(&MNBNELNLOCB_TypeInfo);
    DAT_04567b74 = 1;
  }
  pMVar6 = (__this->fields).IOPFMDCMMLD;
  if (pMVar6 == (MNBNELNLOCB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MNBNELNLOCB_TypeInfo) {
        pVVar2 = pMVar3->vtable + (*piVar5 + 4);
        goto LAB_0347a168;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MNBNELNLOCB_TypeInfo,4);
LAB_0347a168:
                    /* WARNING: Could not recover jumptable at 0x0347a17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pMVar6,JLPMKKKMANE,pVVar2->method);
  return;
}

