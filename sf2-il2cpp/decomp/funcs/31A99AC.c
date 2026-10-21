// OOBBAGLCFPF$$OECPILPMHCA @ RVA 0x31A99AC

float OOBBAGLCFPF__OECPILPMHCA(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  int32_t iVar1;
  CNLGMNIEGFG_o *pCVar2;
  PJKHAJKEHEL_o *pPVar3;
  MethodInfo *extraout_x1;
  KDADMJGPAOM_o *pKVar4;
  CNLGMNIEGFG_FKKOIBADKGP_o *pCVar5;
  System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN;
  
  if ((DAT_04566b2c & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566b2c = 1;
    method = extraout_x1;
  }
  if ((IHODMKCBNKJ != (AADKBCFCLKK_o *)0x0) &&
     (pKVar4 = (IHODMKCBNKJ->fields).LHFLMBNKPHF, pKVar4 != (KDADMJGPAOM_o *)0x0)) {
    iVar1 = (pKVar4->fields).IILCHFKCEEH;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    pCVar2 = MGNPHCAAEIO__MJDCGINJMOP(iVar1,false,(MethodInfo *)0x0);
    if (pCVar2 == (CNLGMNIEGFG_o *)0x0) {
      return 0.0;
    }
    OKBIKHHKOEN = (pCVar2->fields).super.MECHOBPGHFJ;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pPVar3 = MGNPHCAAEIO__DDHNCKDHKAC(OKBIKHHKOEN,(MethodInfo *)0x0);
    if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pPVar3->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
      pCVar5 = (pCVar2->fields).BOOKHNOMHGM;
      if (pCVar5 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) {
        return (pCVar5->fields).LMBCNLBOPAF * (float)iVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

