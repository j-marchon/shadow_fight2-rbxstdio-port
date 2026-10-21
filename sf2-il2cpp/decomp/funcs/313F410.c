// AFIJIPMBKHP.HJDKIHEOLFO$$DOMGGGEMDNH @ RVA 0x313F410

void AFIJIPMBKHP_HJDKIHEOLFO__DOMGGGEMDNH
               (AFIJIPMBKHP_HJDKIHEOLFO_o *__this,System_Action_o *h,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  ODEIOKOJGDM_c *pOVar3;
  ulong uVar4;
  int32_t *piVar5;
  ODEIOKOJGDM_o *pOVar6;
  
  if ((DAT_0456674d & 1) == 0) {
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_0456674d = 1;
  }
  pOVar6 = (__this->fields).ledgerManager;
  if (pOVar6 == (ODEIOKOJGDM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pOVar3 = pOVar6->klass;
  uVar1._0_1_ = (pOVar3->_2).rank;
  uVar1._1_1_ = (pOVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pOVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)ODEIOKOJGDM_TypeInfo) {
        pVVar2 = pOVar3->vtable + (*piVar5 + 1);
        goto LAB_0323f4a0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pOVar6,ODEIOKOJGDM_TypeInfo,1);
LAB_0323f4a0:
                    /* WARNING: Could not recover jumptable at 0x0323f4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pOVar6,h,pVVar2->method);
  return;
}

