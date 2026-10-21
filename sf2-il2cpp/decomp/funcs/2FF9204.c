// JMDPBFOCHHP$$CECFFDLGAOH @ RVA 0x2FF9204

void JMDPBFOCHHP__CECFFDLGAOH(JMDPBFOCHHP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  JMDPBFOCHHP_AEJBILHMFDB_o **ppJVar3;
  JMDPBFOCHHP_EMDEPOFJFEF_o **ppJVar4;
  JMDPBFOCHHP_KJLILNPHJHI_o **ppJVar5;
  JMDPBFOCHHP_NMAJABPDEPE_o **ppJVar6;
  JMDPBFOCHHP_NOPCEDPNNKO_o **ppJVar7;
  JMDPBFOCHHP_EJICJNOEGGE_o **ppJVar8;
  JMDPBFOCHHP_DBNJFPILODG_o **ppJVar9;
  POLAJNLKPAK_o *__this_00;
  MCEIBCKPIAD_o *__this_01;
  JMDPBFOCHHP_AEDJNABHPOF_c *pJVar10;
  ulong uVar11;
  int32_t *piVar12;
  JMDPBFOCHHP_JMEJFGKJNEA_o **ppJVar13;
  JMDPBFOCHHP_AEDJNABHPOF_o *pJVar14;
  
  if ((DAT_04565abb & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_AEDJNABHPOF_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565abb = 1;
  }
  pJVar14 = (__this->fields).ICGFIOLHAMK;
  if (pJVar14 != (JMDPBFOCHHP_AEDJNABHPOF_o *)0x0) {
    pJVar10 = pJVar14->klass;
    uVar1._0_1_ = (pJVar10->_2).rank;
    uVar1._1_1_ = (pJVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    if (uVar11 != 0) {
      piVar12 = &((pJVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)JMDPBFOCHHP_AEDJNABHPOF_TypeInfo) {
          pVVar2 = pJVar10->vtable + (*piVar12 + 2);
          goto LAB_030f929c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pJVar14,JMDPBFOCHHP_AEDJNABHPOF_TypeInfo,2);
LAB_030f929c:
    (*pVVar2->methodPtr)(pJVar14,pVVar2->method);
    ppJVar3 = &(__this->fields)._JMEOCLFDHMM_k__BackingField;
    *ppJVar3 = (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0;
    thunk_FUN_01c20e04(ppJVar3,0);
    ppJVar4 = &(__this->fields)._GJCMAADAOHD_k__BackingField;
    *ppJVar4 = (JMDPBFOCHHP_EMDEPOFJFEF_o *)0x0;
    thunk_FUN_01c20e04(ppJVar4,0);
    ppJVar5 = &(__this->fields).OGPANCKIAED;
    *ppJVar5 = (JMDPBFOCHHP_KJLILNPHJHI_o *)0x0;
    thunk_FUN_01c20e04(ppJVar5,0);
    ppJVar6 = &(__this->fields)._IGLEEEJGEEJ_k__BackingField;
    *ppJVar6 = (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0;
    thunk_FUN_01c20e04(ppJVar6,0);
    ppJVar7 = &(__this->fields).OFMMMBIIDAE;
    *ppJVar7 = (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0;
    thunk_FUN_01c20e04(ppJVar7,0);
    ppJVar8 = &(__this->fields)._LEIIIBPIJGJ_k__BackingField;
    *ppJVar8 = (JMDPBFOCHHP_EJICJNOEGGE_o *)0x0;
    thunk_FUN_01c20e04(ppJVar8,0);
    ppJVar9 = &(__this->fields)._LGFNDLOCGPB_k__BackingField;
    *ppJVar9 = (JMDPBFOCHHP_DBNJFPILODG_o *)0x0;
    thunk_FUN_01c20e04(ppJVar9,0);
    ppJVar13 = &(__this->fields)._NFFDCNIMBHK_k__BackingField;
    *ppJVar13 = (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0;
    thunk_FUN_01c20e04(ppJVar13,0);
    __this_00 = (__this->fields).FMPOOGLPALN;
    if (__this_00 != (POLAJNLKPAK_o *)0x0) {
      POLAJNLKPAK__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__IOMECNCIENO((MethodInfo *)0x0);
      if (__this_01 != (MCEIBCKPIAD_o *)0x0) {
        MCEIBCKPIAD__DGLJCGNHLIG(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

