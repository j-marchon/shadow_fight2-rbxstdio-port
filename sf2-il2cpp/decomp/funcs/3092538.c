// ACMLELBBNPF$$MHLELHMLBAJ @ RVA 0x3092538

void ACMLELBBNPF__MHLELHMLBAJ(ACMLELBBNPF_o *__this,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  VirtualInvokeData *pVVar4;
  APCCLHJNENF_c *pAVar5;
  HMKGDNALGCC_c *pHVar6;
  ulong uVar7;
  int32_t *piVar8;
  HMKGDNALGCC_o *pHVar9;
  APCCLHJNENF_o *pAVar10;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = __this;
  if ((DAT_045660b0 & 1) == 0) {
    FUN_01bab630(&APCCLHJNENF_TypeInfo);
    auVar11 = FUN_01bab630(&HMKGDNALGCC_TypeInfo);
    DAT_045660b0 = 1;
  }
  pAVar10 = (__this->fields).FLEMAGEBBFJ;
  uVar1 = (__this->fields).EENGGOCLBOD + 1;
  (__this->fields).EENGGOCLBOD = uVar1;
  if (pAVar10 != (APCCLHJNENF_o *)0x0) {
    pAVar5 = pAVar10->klass;
    uVar2._0_1_ = (pAVar5->_2).rank;
    uVar2._1_1_ = (pAVar5->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pAVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)APCCLHJNENF_TypeInfo) {
          pVVar4 = pAVar5->vtable + (*piVar8 + 1);
          goto LAB_031925dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pAVar10,APCCLHJNENF_TypeInfo,1);
LAB_031925dc:
    auVar11 = (*pVVar4->methodPtr)(pAVar10,(ulong)uVar1,pVVar4->method);
    if ((auVar11._0_8_ & 1) == 0) {
      return;
    }
    pHVar9 = (__this->fields).CMJNDHHGCBI;
    (__this->fields).EENGGOCLBOD = 0;
    if (pHVar9 != (HMKGDNALGCC_o *)0x0) {
      pHVar6 = pHVar9->klass;
      uVar3._0_1_ = (pHVar6->_2).rank;
      uVar3._1_1_ = (pHVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar3;
      if (uVar7 != 0) {
        piVar8 = &((pHVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)HMKGDNALGCC_TypeInfo) {
            pVVar4 = pHVar6->vtable + (*piVar8 + 3);
            goto LAB_03192660;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pHVar9,HMKGDNALGCC_TypeInfo,3);
LAB_03192660:
                    /* WARNING: Could not recover jumptable at 0x03192670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pHVar9,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
}

