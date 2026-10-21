// MGNPHCAAEIO$$CGDODIKEKKB @ RVA 0x33FCD4C

void MGNPHCAAEIO__CGDODIKEKKB(AFFHKININGD_o *FBFPLEFCDOK,bool ECJCKOBIGPA,MethodInfo *method)

{
  ushort uVar1;
  MDHCGLMBHIG_o *pMVar2;
  VirtualInvokeData *pVVar3;
  PAMEPBLOLPB_o *pPVar4;
  MDHCGLMBHIG_c *pMVar5;
  ulong uVar6;
  int32_t *piVar7;
  int64_t iVar8;
  int iVar9;
  int64_t iVar10;
  
  if ((DAT_04567fc8 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PGHPINHICIC_TypeInfo);
    DAT_04567fc8 = 1;
  }
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
    if ((FBFPLEFCDOK->fields).JDNKKGPNHPB != 7) {
      return;
    }
    pPVar4 = (FBFPLEFCDOK->fields).JPBIBBBMCCD;
    if (pPVar4 != (PAMEPBLOLPB_o *)0x0) {
      if (ECJCKOBIGPA) {
        iVar9 = (int)(pPVar4->fields).DKMPMFFECBK;
      }
      else {
        iVar9 = (int)(pPVar4->fields).JJDACOBBFNB;
      }
      iVar8 = (FBFPLEFCDOK->fields).PIKNKFHOMLP;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b87 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b87 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar10 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
      pMVar2 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pMVar2 != (MDHCGLMBHIG_o *)0x0) {
        pMVar5 = pMVar2->klass;
        uVar1._0_1_ = (pMVar5->_2).rank;
        uVar1._1_1_ = (pMVar5->_2).minimumAlignment;
        uVar6 = (ulong)uVar1;
        if (uVar6 != 0) {
          piVar7 = &((pMVar5->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                (Il2CppClass *)PGHPINHICIC_TypeInfo) {
              pVVar3 = pMVar5->vtable + *piVar7;
              goto LAB_034fce8c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        pVVar3 = (VirtualInvokeData *)FUN_01b81914(pMVar2,PGHPINHICIC_TypeInfo,0);
LAB_034fce8c:
                    /* WARNING: Could not recover jumptable at 0x034fcea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar3->methodPtr)
                  (pMVar2,(ulong)(uint)(((int)iVar8 + iVar9) - (int)iVar10),pVVar3->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

