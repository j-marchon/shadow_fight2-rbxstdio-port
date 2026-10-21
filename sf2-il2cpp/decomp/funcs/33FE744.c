// MGNPHCAAEIO$$LGONLBLHOFN @ RVA 0x33FE744

void MGNPHCAAEIO__LGONLBLHOFN(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  MDHCGLMBHIG_o *pMVar3;
  VirtualInvokeData *pVVar4;
  ACHLOMELAJE_o *pAVar5;
  MDHCGLMBHIG_c *pMVar6;
  ulong uVar7;
  int32_t *piVar8;
  ACHLOMELAJE_o *pAVar9;
  
                    /* try { // try from 034fe74c to 035fe74f has its CatchHandler @ 034fe764 */
  if ((DAT_04567fd0 & 1) == 0) {
                    /* catch() { ... } // from try @ 034fe74c with catch @ 034fe764 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 034fe774 to 035fe7e3 has its CatchHandler @ 034fe7f8 */
    FUN_01bab630(&POLKDIBEHFH_TypeInfo);
    DAT_04567fd0 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 034fe7e4 to 035fe7ef has its CatchHandler @ 034fe14c */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 034fe7f0 to 035fe7f7 has its CatchHandler @ 034fe7f8 */
      DAT_04565b7d = '\x01';
    }
  }
  else {
    pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  }
                    /* catch() { ... } // from try @ 034fe774 with catch @ 034fe7f8
                       catch() { ... } // from try @ 034fe7f0 with catch @ 034fe7f8 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar5 != (ACHLOMELAJE_o *)0x0) && (pAVar9 != (ACHLOMELAJE_o *)0x0)) {
    ACHLOMELAJE__KBKGBCEGIJF(pAVar9,(pAVar5->fields).BNDNKEHPKEO,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar9 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar9,false,(MethodInfo *)0x0);
      pMVar3 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pMVar3 != (MDHCGLMBHIG_o *)0x0) {
        pMVar6 = pMVar3->klass;
        uVar1._0_1_ = (pMVar6->_2).rank;
        uVar1._1_1_ = (pMVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar1;
        if (uVar7 != 0) {
          piVar8 = &((pMVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)POLKDIBEHFH_TypeInfo) {
              pVVar4 = pMVar6->vtable + (*piVar8 + 3);
              goto LAB_034fe8d4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pMVar3,POLKDIBEHFH_TypeInfo,3);
LAB_034fe8d4:
        (*pVVar4->methodPtr)(pMVar3,pVVar4->method);
        pMVar3 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pMVar3 != (MDHCGLMBHIG_o *)0x0) {
          pMVar6 = pMVar3->klass;
          uVar2._0_1_ = (pMVar6->_2).rank;
          uVar2._1_1_ = (pMVar6->_2).minimumAlignment;
          uVar7 = (ulong)uVar2;
          if (uVar7 != 0) {
            piVar8 = &((pMVar6->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                  (Il2CppClass *)POLKDIBEHFH_TypeInfo) {
                pVVar4 = pMVar6->vtable + (*piVar8 + 2);
                goto LAB_034fe940;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          pVVar4 = (VirtualInvokeData *)FUN_01b81914(pMVar3,POLKDIBEHFH_TypeInfo,2);
LAB_034fe940:
                    /* WARNING: Could not recover jumptable at 0x034fe950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar4->methodPtr)(pMVar3,pVVar4->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

