// MGNPHCAAEIO$$PCEHIGOFNHH @ RVA 0x3400EBC

void MGNPHCAAEIO__PCEHIGOFNHH(GLPEFEEGCPM_o *DKMMBMBMJBO,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  MDHCGLMBHIG_o *pMVar4;
  VirtualInvokeData *pVVar5;
  KKLJIDJBFEI_o *__this;
  JMDPBFOCHHP_o *pJVar6;
  MDHCGLMBHIG_c *pMVar7;
  FADHMEJJCPO_o *pFVar8;
  PGICCMFLDPI_o *pPVar9;
  JMDPBFOCHHP_NMAJABPDEPE_o *pJVar10;
  ulong uVar11;
  ulong uVar12;
  int32_t *piVar13;
  long lVar14;
  long lVar15;
  
  if ((DAT_04567fee & 1) == 0) {
    FUN_01bab630(&ALFGOMLMGDI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567fee = 1;
  }
  pMVar4 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pMVar4 != (MDHCGLMBHIG_o *)0x0) {
    pMVar7 = pMVar4->klass;
    uVar1._0_1_ = (pMVar7->_2).rank;
    uVar1._1_1_ = (pMVar7->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    if (uVar11 != 0) {
      piVar13 = &((pMVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)ALFGOMLMGDI_TypeInfo) {
          pVVar5 = pMVar7->vtable + (*piVar13 + 1);
          goto LAB_03500f6c;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pMVar4,ALFGOMLMGDI_TypeInfo,1);
LAB_03500f6c:
    (*pVVar5->methodPtr)(pMVar4,pVVar5->method);
    if (((DKMMBMBMJBO != (GLPEFEEGCPM_o *)0x0) &&
        (pFVar8 = (DKMMBMBMJBO->fields).PBBGNHKFEPG, pFVar8 != (FADHMEJJCPO_o *)0x0)) &&
       (pPVar9 = (pFVar8->fields).IMNALGKNMNP, pPVar9 != (PGICCMFLDPI_o *)0x0)) {
      lVar14 = (pPVar9->fields).GDKPGIBMFPA;
      __this = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this != (KKLJIDJBFEI_o *)0x0) &&
         (pPVar9 = KKLJIDJBFEI__MPBLBEGCAKP(__this,(MethodInfo *)0x0),
         pPVar9 != (PGICCMFLDPI_o *)0x0)) {
        lVar15 = (pPVar9->fields).GDKPGIBMFPA;
        pMVar4 = ADAHHFAPLLM__AIHNLLGNBLC((MethodInfo *)0x0);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
        }
        pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if ((pJVar6 != (JMDPBFOCHHP_o *)0x0) &&
           (pJVar10 = (pJVar6->fields)._IGLEEEJGEEJ_k__BackingField,
           pJVar10 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0)) {
          uVar11 = (ulong)(pJVar10->fields).BLGKNLLKCKM;
          lVar14 = lVar14 - lVar15;
          if (lVar14 < 1000) {
            if (pMVar4 == (MDHCGLMBHIG_o *)0x0) goto LAB_035010e4;
            pMVar7 = pMVar4->klass;
            uVar2._0_1_ = (pMVar7->_2).rank;
            uVar2._1_1_ = (pMVar7->_2).minimumAlignment;
            uVar12 = (ulong)uVar2;
            if (uVar12 != 0) {
              piVar13 = &((pMVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                    (Il2CppClass *)ALFGOMLMGDI_TypeInfo) goto LAB_035010bc;
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
          }
          else {
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            uVar11 = System_Math__Min(lVar14 / 1000,uVar11,(MethodInfo *)0x0);
            if (pMVar4 == (MDHCGLMBHIG_o *)0x0) goto LAB_035010e4;
            pMVar7 = pMVar4->klass;
            uVar3._0_1_ = (pMVar7->_2).rank;
            uVar3._1_1_ = (pMVar7->_2).minimumAlignment;
            uVar12 = (ulong)uVar3;
            if (uVar12 != 0) {
              piVar13 = &((pMVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                    (Il2CppClass *)ALFGOMLMGDI_TypeInfo) goto LAB_035010bc;
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
          }
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pMVar4,ALFGOMLMGDI_TypeInfo,0);
          goto LAB_035010c8;
        }
      }
    }
  }
LAB_035010e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_035010bc:
  pVVar5 = pMVar7->vtable + *piVar13;
LAB_035010c8:
                    /* WARNING: Could not recover jumptable at 0x035010e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(pMVar4,uVar11 & 0xffffffff,pVVar5->method);
  return;
}

