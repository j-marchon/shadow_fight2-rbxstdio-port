// NKPJLEMPIKD$$EPBENPDCBFE @ RVA 0x3000054

bool NKPJLEMPIKD__EPBENPDCBFE
               (NKPJLEMPIKD_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  iVar1 = (__this->fields).super.BEMCNJHEADJ;
  if (iVar1 == 2) {
    if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) goto LAB_031000c0;
    if ((PHCGJGCHKCM->fields).LHNJNJMBLJM == (PHCGJGCHKCM->fields).EMCFCMFGPME) {
      return false;
    }
  }
  else if (iVar1 == 1) {
    if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) {
LAB_031000c0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((PHCGJGCHKCM->fields).LHNJNJMBLJM != (PHCGJGCHKCM->fields).EMCFCMFGPME) {
      return false;
    }
  }
  else if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) goto LAB_031000c0;
  iVar1 = (PHCGJGCHKCM->fields).BGHFADDGPAD;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
  return iVar1 == iVar2;
}

