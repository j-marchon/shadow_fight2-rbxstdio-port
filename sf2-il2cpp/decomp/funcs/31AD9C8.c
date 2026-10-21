// FBAABPGMPCC.DCGMKBCDLPN$$IENLJBBBJBN @ RVA 0x31AD9C8

void FBAABPGMPCC_DCGMKBCDLPN__IENLJBBBJBN
               (FBAABPGMPCC_DCGMKBCDLPN_o *__this,bool result,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  VirtualInvokeData *pVVar3;
  KHODJHFHCDE_o *__this_00;
  FBAABPGMPCC_PBDPKGEIHFM_o *pFVar4;
  HCOEEOMMEFL_c *pHVar5;
  FBAABPGMPCC_o *pFVar6;
  ulong uVar7;
  AAPGCAPGBLG_o *pAVar8;
  int32_t *piVar9;
  HCOEEOMMEFL_o *pHVar10;
  MethodInfo *method_00;
  
  if ((DAT_04566b5f & 1) == 0) {
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&KHODJHFHCDE_TypeInfo);
    FUN_01bab630(&StringLiteral_9916);
    DAT_04566b5f = 1;
  }
  uVar2 = StringLiteral_9916;
  pFVar4 = (__this->fields).CS___8__locals1;
  if (((pFVar4 != (FBAABPGMPCC_PBDPKGEIHFM_o *)0x0) &&
      (pFVar6 = (pFVar4->fields).__4__this, pFVar6 != (FBAABPGMPCC_o *)0x0)) &&
     (pAVar8 = (pFVar6->fields).APEEANDPFCG, pAVar8 != (AAPGCAPGBLG_o *)0x0)) {
    if ((pAVar8->fields)._KDBLLEPMIPL_k__BackingField == false) {
      method_00 = (MethodInfo *)(pFVar4->fields).packsToValidate;
      __this_00 = (KHODJHFHCDE_o *)thunk_FUN_01bda818(KHODJHFHCDE_TypeInfo);
      KHODJHFHCDE___ctor(__this_00,result,
                         (System_Collections_Generic_IReadOnlyList_PackSettings__o *)method_00,
                         (MethodInfo *)0x0);
      FBAABPGMPCC_DCGMKBCDLPN__JMHEEICBMHL(__this,__this_00,method_00);
      return;
    }
    pHVar10 = (pFVar6->fields).GLNMNHFKGCO;
    if (pHVar10 != (HCOEEOMMEFL_o *)0x0) {
      pHVar5 = pHVar10->klass;
      uVar1._0_1_ = (pHVar5->_2).rank;
      uVar1._1_1_ = (pHVar5->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar9 = &((pHVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)HCOEEOMMEFL_TypeInfo) {
            pVVar3 = pHVar5->vtable + (*piVar9 + 1);
            goto LAB_032adae0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pHVar10,HCOEEOMMEFL_TypeInfo,1);
LAB_032adae0:
                    /* WARNING: Could not recover jumptable at 0x032adafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)(pHVar10,uVar2,0,pVVar3->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

