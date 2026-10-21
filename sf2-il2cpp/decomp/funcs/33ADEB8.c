// OAKJDLHHIAB.FCBKBCABNHK$$DOIOLELGDFA @ RVA 0x33ADEB8

void OAKJDLHHIAB_FCBKBCABNHK__DOIOLELGDFA
               (OAKJDLHHIAB_FCBKBCABNHK_o *__this,System_Action_o *h,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  ICHIDBGJOEC_c *pIVar3;
  ulong uVar4;
  int32_t *piVar5;
  ICHIDBGJOEC_o *pIVar6;
  
  if ((DAT_04567d2a & 1) == 0) {
    FUN_01bab630(&ICHIDBGJOEC_TypeInfo);
    DAT_04567d2a = 1;
  }
  pIVar6 = (__this->fields).handler;
  if (pIVar6 == (ICHIDBGJOEC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar3 = pIVar6->klass;
  uVar1._0_1_ = (pIVar3->_2).rank;
  uVar1._1_1_ = (pIVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pIVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)ICHIDBGJOEC_TypeInfo) {
        pVVar2 = pIVar3->vtable + (*piVar5 + 1);
        goto LAB_034adf48;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pIVar6,ICHIDBGJOEC_TypeInfo,1);
LAB_034adf48:
                    /* WARNING: Could not recover jumptable at 0x034adf5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pIVar6,h,pVVar2->method);
  return;
}

