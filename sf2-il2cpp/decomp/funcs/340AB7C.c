// MGNPHCAAEIO$$BJMIFDKPEGD @ RVA 0x340AB7C

void MGNPHCAAEIO__BJMIFDKPEGD
               (System_String_o *JCLPIKHEKBB,IGFGDDANEPE_o *IKKAMAMLIKA,MethodInfo *method)

{
  ushort uVar1;
  MDHCGLMBHIG_o *pMVar2;
  VirtualInvokeData *pVVar3;
  MDHCGLMBHIG_c *pMVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568031 & 1) == 0) {
    FUN_01bab630(&PILIGDMGJOI_TypeInfo);
    DAT_04568031 = 1;
  }
  if (IKKAMAMLIKA == (IGFGDDANEPE_o *)0x0) {
    return;
  }
  pMVar2 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pMVar2 == (MDHCGLMBHIG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar4 = pMVar2->klass;
  uVar1._0_1_ = (pMVar4->_2).rank;
  uVar1._1_1_ = (pMVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pMVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PILIGDMGJOI_TypeInfo) {
        pVVar3 = pMVar4->vtable + *piVar6;
        goto LAB_0350ac1c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pMVar2,PILIGDMGJOI_TypeInfo,0);
LAB_0350ac1c:
                    /* WARNING: Could not recover jumptable at 0x0350ac2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pMVar2,pVVar3->method);
  return;
}

