// IJCEPJPIDON.JDPMDINMGKK$$GLHEEOFNBKI @ RVA 0x3391FDC

void IJCEPJPIDON_JDPMDINMGKK__GLHEEOFNBKI
               (IJCEPJPIDON_JDPMDINMGKK_o *__this,System_Action_bool__o *h,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  FGOGONIFJFD_c *pFVar3;
  ulong uVar4;
  int32_t *piVar5;
  FGOGONIFJFD_o *pFVar6;
  
  if ((DAT_04567c28 & 1) == 0) {
    FUN_01bab630(&FGOGONIFJFD_TypeInfo);
    DAT_04567c28 = 1;
  }
  pFVar6 = (__this->fields).networkLoginService;
  if (pFVar6 == (FGOGONIFJFD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pFVar3 = pFVar6->klass;
  uVar1._0_1_ = (pFVar3->_2).rank;
  uVar1._1_1_ = (pFVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pFVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)FGOGONIFJFD_TypeInfo) {
        pVVar2 = pFVar3->vtable + (*piVar5 + 1);
        goto LAB_0349206c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pFVar6,FGOGONIFJFD_TypeInfo,1);
LAB_0349206c:
                    /* WARNING: Could not recover jumptable at 0x03492080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pFVar6,h,pVVar2->method);
  return;
}

