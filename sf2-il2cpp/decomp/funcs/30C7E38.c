// ADAHHFAPLLM$$JHDKCCOBBED @ RVA 0x30C7E38

void ADAHHFAPLLM__JHDKCCOBBED(ADAHHFAPLLM_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  LNADBMOHMKN_c *pLVar3;
  ulong uVar4;
  int32_t *piVar5;
  LNADBMOHMKN_o *pLVar6;
  
  if ((DAT_045662c2 & 1) == 0) {
                    /* try { // try from 031c7e5c to 032c7e67 has its CatchHandler @ 031c7af8 */
    FUN_01bab630(&LNADBMOHMKN_TypeInfo);
    DAT_045662c2 = 1;
  }
                    /* try { // try from 031c7e68 to 032c7e6f has its CatchHandler @ 031c7e70 */
                    /* catch() { ... } // from try @ 031c7d7c with catch @ 031c7e70
                       catch() { ... } // from try @ 031c7e34 with catch @ 031c7e70
                       catch() { ... } // from try @ 031c7e68 with catch @ 031c7e70 */
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
        pVVar2 = pLVar3->vtable + *piVar5;
        goto LAB_031c7ed8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pLVar6,LNADBMOHMKN_TypeInfo,0);
LAB_031c7ed8:
                    /* WARNING: Could not recover jumptable at 0x031c7eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pLVar6,(ulong)(uint)OGPGLGPMEPD,pVVar2->method);
  return;
}

