// GALHNMPIEHA$$MFKHGFEDMIO @ RVA 0x31651F4

void GALHNMPIEHA__MFKHGFEDMIO(GALHNMPIEHA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  MDHCGLMBHIG_o *pMVar2;
  ulong uVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  MDHCGLMBHIG_c *pMVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045668b2 & 1) == 0) {
                    /* try { // try from 0326520c to 0336522f has its CatchHandler @ 03266c10 */
    FUN_01bab630(&ALFGOMLMGDI_TypeInfo);
    DAT_045668b2 = 1;
  }
  pMVar2 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03265230 to 03365373 has its CatchHandler @ 03263c08 */
  uVar3 = GALHNMPIEHA__DBENAIKIEEI(__this,method_00);
  if (pMVar2 == (MDHCGLMBHIG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar5 = pMVar2->klass;
  uVar1._0_1_ = (pMVar5->_2).rank;
  uVar1._1_1_ = (pMVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pMVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)ALFGOMLMGDI_TypeInfo) {
        pVVar4 = pMVar5->vtable + *piVar7;
        goto LAB_03265290;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pMVar2,ALFGOMLMGDI_TypeInfo,0);
LAB_03265290:
                    /* WARNING: Could not recover jumptable at 0x032652a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pMVar2,uVar3 & 0xffffffff,pVVar4->method);
  return;
}

