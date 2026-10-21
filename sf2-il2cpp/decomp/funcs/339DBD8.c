// LKBNKHMKFMG$$DGCODECJJCC @ RVA 0x339DBD8

bool LKBNKHMKFMG__DGCODECJJCC(LKBNKHMKFMG_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  OLKKAIFGGAK_o *pOVar6;
  Il2CppObject *pIVar7;
  Il2CppClass *pIVar8;
  Il2CppClass **ppIVar9;
  OLKKAIFGGAK_OGCKCABMHLC_o *pOVar10;
  
                    /* catch() { ... } // from try @ 0349d9a4 with catch @ 0349dbd8 */
                    /* try { // try from 0349dbf0 to 0359dbf3 has its CatchHandler @ 0349dc04 */
  if ((DAT_04567c93 & 1) == 0) {
    FUN_01bab630(&JADGCGOJLJB_TypeInfo);
                    /* catch() { ... } // from try @ 0349dbf0 with catch @ 0349dc04 */
    FUN_01bab630(&MDAPDLLMOMF_TypeInfo);
                    /* try { // try from 0349dc14 to 0359dc83 has its CatchHandler @ 0349dc98 */
    FUN_01bab630(&StringLiteral_11996);
    FUN_01bab630(&StringLiteral_4893);
    DAT_04567c93 = 1;
  }
  bVar3 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if (!bVar3) {
    return false;
  }
  if ((KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) ||
     (pOVar6 = (KDFMDHADHMD->fields).HEMGHNOOJPI, pOVar6 == (OLKKAIFGGAK_o *)0x0))
  goto LAB_0349dd78;
  pOVar10 = (pOVar6->fields).MMIDFMEOACB;
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).super.KFFGGNGPNLO,(MethodInfo *)0x0);
  if (!bVar3) {
    bVar3 = System_String__op_Equality
                      ((__this->fields).super.KFFGGNGPNLO,StringLiteral_4893,(MethodInfo *)0x0);
    if (bVar3) {
      if (pOVar10 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) goto LAB_0349dd78;
                    /* try { // try from 0349dc84 to 0359dc8f has its CatchHandler @ 0349d67c */
      if ((pOVar10->fields).EPPIJIGMFFJ != false) goto LAB_0349dcb0;
    }
                    /* try { // try from 0349dc90 to 0359dc97 has its CatchHandler @ 0349dc98 */
                    /* catch() { ... } // from try @ 0349dc14 with catch @ 0349dc98
                       catch() { ... } // from try @ 0349dc90 with catch @ 0349dc98 */
    bVar3 = System_String__op_Equality
                      ((__this->fields).super.KFFGGNGPNLO,StringLiteral_11996,(MethodInfo *)0x0);
    if (bVar3) {
      if (pOVar10 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) {
LAB_0349dd78:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pOVar10->fields).NLFJFKCJEAC != false) goto LAB_0349dcb0;
    }
    bVar5 = false;
    goto LAB_0349dd44;
  }
LAB_0349dcb0:
  pIVar7 = (KDFMDHADHMD->fields).KOANCCDDBDA;
  if (pIVar7 == (Il2CppObject *)0x0) {
LAB_0349dd04:
    bVar3 = true;
  }
  else {
    pIVar8 = pIVar7->klass;
    bVar1 = (pIVar8->_2).naturalAligment;
    bVar2 = (JADGCGOJLJB_TypeInfo->_2).naturalAligment;
    if (((bVar1 < bVar2) ||
        (ppIVar9 = (pIVar8->_2).typeHierarchy,
        ppIVar9[(ulong)bVar2 - 1] != (Il2CppClass *)JADGCGOJLJB_TypeInfo)) ||
       (bVar2 = (MDAPDLLMOMF_TypeInfo->_2).naturalAligment, bVar1 < bVar2)) goto LAB_0349dd04;
    bVar3 = ppIVar9[(ulong)bVar2 - 1] != (Il2CppClass *)MDAPDLLMOMF_TypeInfo;
  }
  bVar4 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).super.DHKOGAHJNMK,(MethodInfo *)0x0);
  bVar5 = true;
  if ((!bVar3) && (!bVar4)) {
    bVar5 = System_String__op_Equality
                      ((__this->fields).super.DHKOGAHJNMK,(KDFMDHADHMD->fields).LCIJCMJDKIH,
                       (MethodInfo *)0x0);
  }
LAB_0349dd44:
  return (bool)(bVar5 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

