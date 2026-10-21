// ADAHHFAPLLM$$DCIFPFIPGFD @ RVA 0x30C8A88

void ADAHHFAPLLM__DCIFPFIPGFD(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  LNADBMOHMKN_c *pLVar3;
  ulong uVar4;
  int32_t *piVar5;
  LNADBMOHMKN_o *pLVar6;
  
  if ((DAT_045662c1 & 1) == 0) {
    FUN_01bab630(&LNADBMOHMKN_TypeInfo);
    DAT_045662c1 = 1;
  }
  if (((__this->fields)._IOLEJLFICGM_k__BackingField == false) ||
     (pLVar6 = (__this->fields).IOPFMDCMMLD, pLVar6 == (LNADBMOHMKN_o *)0x0)) {
    return;
  }
  pLVar3 = pLVar6->klass;
  uVar1._0_1_ = (pLVar3->_2).rank;
  uVar1._1_1_ = (pLVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pLVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)LNADBMOHMKN_TypeInfo) {
        pVVar2 = pLVar3->vtable + (*piVar5 + 3);
        goto LAB_031c8b28;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pLVar6,LNADBMOHMKN_TypeInfo,3);
LAB_031c8b28:
                    /* WARNING: Could not recover jumptable at 0x031c8b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pLVar6,pVVar2->method);
  return;
}

