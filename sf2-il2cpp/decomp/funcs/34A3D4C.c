// PONNKDFAMFM$$CompareTo @ RVA 0x34A3D4C

int32_t PONNKDFAMFM__CompareTo(PONNKDFAMFM_o *__this,PONNKDFAMFM_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  PONNKDFAMFM_IBOIJJKIIAJ_o *pPVar4;
  
  pPVar4 = (__this->fields).JDHAHDALAOA;
  if (pPVar4 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar4->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
    if ((IBKIPBJJCPG != (PONNKDFAMFM_o *)0x0) &&
       (pPVar4 = (IBKIPBJJCPG->fields).JDHAHDALAOA, pPVar4 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0)) {
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pPVar4->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
      iVar1 = 1;
      if (iVar2 < iVar3) {
        iVar1 = -1;
      }
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

