// PFDCJGIIPLB.<>c$$GJHDPFEFPMJ @ RVA 0x3358E94

void PFDCJGIIPLB_<>c__GJHDPFEFPMJ
               (PFDCJGIIPLB___c_o *__this,System_Action_string__o *h,MethodInfo *method)

{
  ushort uVar1;
  CPHBJEDCAEO_o *pCVar2;
  VirtualInvokeData *pVVar3;
  CPHBJEDCAEO_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04567a50 & 1) == 0) {
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    DAT_04567a50 = 1;
  }
  pCVar2 = LLDOMGIEPNE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pCVar2 == (CPHBJEDCAEO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar2->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
        pVVar3 = pCVar4->vtable + (*piVar6 + 5);
        goto LAB_03458f28;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar2,CPHBJEDCAEO_TypeInfo,5);
LAB_03458f28:
                    /* WARNING: Could not recover jumptable at 0x03458f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pCVar2,h,pVVar3->method);
  return;
}

