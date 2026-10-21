// FJNIPMODEPO$$OAIAFKMMCFB @ RVA 0x3034928

void FJNIPMODEPO__OAIAFKMMCFB(FJNIPMODEPO_o *__this,System_Action_o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  CPHBJEDCAEO_c *pCVar3;
  ulong uVar4;
  int32_t *piVar5;
  CPHBJEDCAEO_o *pCVar6;
  
  if ((DAT_04565d30 & 1) == 0) {
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    DAT_04565d30 = 1;
  }
  pCVar6 = (__this->fields).HEEHMDOOMIO;
  if (pCVar6 == (CPHBJEDCAEO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar3 = pCVar6->klass;
  uVar1._0_1_ = (pCVar3->_2).rank;
  uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pCVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
        pVVar2 = pCVar3->vtable + (*piVar5 + 2);
        goto LAB_031349b8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CPHBJEDCAEO_TypeInfo,2);
LAB_031349b8:
                    /* WARNING: Could not recover jumptable at 0x031349cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar6,JLPMKKKMANE,pVVar2->method);
  return;
}

