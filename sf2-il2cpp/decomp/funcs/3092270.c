// ACMLELBBNPF$$EOPICMLBFHB @ RVA 0x3092270

void ACMLELBBNPF__EOPICMLBFHB(ACMLELBBNPF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  VirtualInvokeData *pVVar4;
  HMKGDNALGCC_c *pHVar5;
  APCCLHJNENF_c *pAVar6;
  ulong uVar7;
  int32_t *piVar8;
  APCCLHJNENF_o *pAVar9;
  HMKGDNALGCC_o *pHVar10;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = __this;
  if ((DAT_045660ae & 1) == 0) {
    FUN_01bab630(&APCCLHJNENF_TypeInfo);
    auVar11 = FUN_01bab630(&HMKGDNALGCC_TypeInfo);
    DAT_045660ae = 1;
  }
  pHVar10 = (__this->fields).CMJNDHHGCBI;
  if (pHVar10 != (HMKGDNALGCC_o *)0x0) {
    pHVar5 = pHVar10->klass;
    pAVar9 = (__this->fields).FLEMAGEBBFJ;
    uVar1._0_1_ = (pHVar5->_2).rank;
    uVar1._1_1_ = (pHVar5->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pHVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)HMKGDNALGCC_TypeInfo) {
          pVVar4 = pHVar5->vtable + *piVar8;
          goto LAB_0319230c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pHVar10,HMKGDNALGCC_TypeInfo,0);
LAB_0319230c:
    auVar11 = (*pVVar4->methodPtr)(pHVar10,pVVar4->method);
    if (pAVar9 != (APCCLHJNENF_o *)0x0) {
      pAVar6 = pAVar9->klass;
      uVar2._0_1_ = (pAVar6->_2).rank;
      uVar2._1_1_ = (pAVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar2;
      if (uVar7 != 0) {
        piVar8 = &((pAVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)APCCLHJNENF_TypeInfo) {
            pVVar4 = pAVar6->vtable + *piVar8;
            goto LAB_03192378;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pAVar9,APCCLHJNENF_TypeInfo,0);
LAB_03192378:
      auVar11 = (*pVVar4->methodPtr)(pAVar9,auVar11._0_8_,auVar11._8_8_,pVVar4->method);
      if ((auVar11._0_8_ & 1) == 0) {
        return;
      }
      pHVar10 = (__this->fields).CMJNDHHGCBI;
      if (pHVar10 != (HMKGDNALGCC_o *)0x0) {
        pHVar5 = pHVar10->klass;
        uVar3._0_1_ = (pHVar5->_2).rank;
        uVar3._1_1_ = (pHVar5->_2).minimumAlignment;
        uVar7 = (ulong)uVar3;
        if (uVar7 != 0) {
          piVar8 = &((pHVar5->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)HMKGDNALGCC_TypeInfo) {
              pVVar4 = pHVar5->vtable + (*piVar8 + 3);
              goto LAB_031923f8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pHVar10,HMKGDNALGCC_TypeInfo,3);
LAB_031923f8:
                    /* WARNING: Could not recover jumptable at 0x0319240c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar4->methodPtr)(pHVar10,pVVar4->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
}

