// IGFGDDANEPE$$CLIDHHJIGOC @ RVA 0x30A5E50

void IGFGDDANEPE__CLIDHHJIGOC(IGFGDDANEPE_o *__this,HOOAAGABMBL_o *CJNHFNHJHPE,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o **ppHVar3;
  
  ppHVar3 = &(__this->fields).PCBECBEFJOI;
  *ppHVar3 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppHVar3);
  pHVar2 = *ppHVar3;
  if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
    if ((pHVar2->fields)._NPMFPMGCNEC_k__BackingField == false) {
      (pHVar2->fields)._ILHGDFFOGHP_k__BackingField = true;
    }
    method_00 = (MethodInfo *)0x0;
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).DCFOJDEFIHG.fields,(MethodInfo *)0x0);
    if (iVar1 == -1) {
      if (*ppHVar3 == (HOOAAGABMBL_o *)0x0) goto LAB_031a5ec8;
      iVar1 = ((*ppHVar3)->fields)._HCHGENFJLHA_k__BackingField;
    }
    else {
      method_00 = (MethodInfo *)0x0;
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).DCFOJDEFIHG.fields,(MethodInfo *)0x0);
    }
    IGFGDDANEPE__DJJHOOKLHHL(__this,iVar1,method_00);
    return;
  }
LAB_031a5ec8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

