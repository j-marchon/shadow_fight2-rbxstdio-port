// GALHNMPIEHA$$FGJMKHPILFH @ RVA 0x31650C4

int64_t GALHNMPIEHA__FGJMKHPILFH(BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  JMDPBFOCHHP_o *pJVar3;
  NFFDIPBFJHP_o *pNVar4;
  int64_t iVar5;
  JMDPBFOCHHP_NMAJABPDEPE_o *pJVar6;
  GLPEFEEGCPM_o *pGVar7;
  FADHMEJJCPO_o *pFVar8;
  long lVar9;
  PGICCMFLDPI_o *pPVar10;
  long lVar11;
  
  if ((DAT_045668b1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045668b1 = 1;
  }
  bVar2 = JAIJCEMCHEK__HHDBIGKBMEC(JOBNGBCPEGO,(MethodInfo *)0x0);
  if (bVar2) {
    return -1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                    /* try { // try from 0326514c to 03365173 has its CatchHandler @ 03266c0c */
  if ((((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
       (pJVar6 = (pJVar3->fields)._IGLEEEJGEEJ_k__BackingField,
       pJVar6 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0)) && (JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0)) &&
     (pPVar10 = (JOBNGBCPEGO->fields).IMNALGKNMNP, pPVar10 != (PGICCMFLDPI_o *)0x0)) {
    uVar1 = (pJVar6->fields).BLGKNLLKCKM;
    lVar11 = (pPVar10->fields).GDKPGIBMFPA;
    pNVar4 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
    if (((pNVar4 != (NFFDIPBFJHP_o *)0x0) &&
        (pGVar7 = (pNVar4->fields).NEACDFLBNFO, pGVar7 != (GLPEFEEGCPM_o *)0x0)) &&
       ((pFVar8 = (pGVar7->fields).PBBGNHKFEPG, pFVar8 != (FADHMEJJCPO_o *)0x0 &&
        (pPVar10 = (pFVar8->fields).IMNALGKNMNP, pPVar10 != (PGICCMFLDPI_o *)0x0)))) {
      lVar9 = (pPVar10->fields).GDKPGIBMFPA;
                    /* try { // try from 032651a8 to 033651d3 has its CatchHandler @ 03266c08 */
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar5 = System_Math__Min(lVar11 / 1000 + (ulong)uVar1,lVar9 / 1000,(MethodInfo *)0x0);
      return iVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

