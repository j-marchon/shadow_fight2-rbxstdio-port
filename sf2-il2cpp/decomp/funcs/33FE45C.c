// MGNPHCAAEIO$$KKJLFPHPGKP @ RVA 0x33FE45C

void MGNPHCAAEIO__KKJLFPHPGKP
               (System_String_o *JCLPIKHEKBB,AMJMGFCCAKN_o *IKKAMAMLIKA,MethodInfo *method)

{
  ushort uVar1;
  MDHCGLMBHIG_o *pMVar2;
  VirtualInvokeData *pVVar3;
  MDHCGLMBHIG_c *pMVar4;
  ulong uVar5;
  int32_t *piVar6;
  
                    /* try { // try from 034fe46c to 035fe473 has its CatchHandler @ 034fe6e4 */
  if ((DAT_04567fcd & 1) == 0) {
    FUN_01bab630(&MDNILNIEMEM_TypeInfo);
                    /* try { // try from 034fe484 to 035fe48f has its CatchHandler @ 034fe6f8 */
    DAT_04567fcd = 1;
  }
  if ((IKKAMAMLIKA == (AMJMGFCCAKN_o *)0x0) ||
     ((IKKAMAMLIKA->fields).MNELBNHIKGH == (IGFGDDANEPE_o *)0x0)) {
                    /* try { // try from 034fe4f0 to 035fe4fb has its CatchHandler @ 034fe6e0 */
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
          (Il2CppClass *)MDNILNIEMEM_TypeInfo) {
        pVVar3 = pMVar4->vtable + (*piVar6 + 1);
        goto LAB_034fe508;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
                    /* try { // try from 034fe4d8 to 035fe4df has its CatchHandler @ 034fe6dc */
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pMVar2,MDNILNIEMEM_TypeInfo,1);
LAB_034fe508:
                    /* WARNING: Could not recover jumptable at 0x034fe518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pMVar2,pVVar3->method);
  return;
}

