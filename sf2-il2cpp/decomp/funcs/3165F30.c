// GALHNMPIEHA$$EEADODOOCCB @ RVA 0x3165F30

int64_t GALHNMPIEHA__EEADODOOCCB(BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  JMDPBFOCHHP_o *pJVar5;
  int64_t iVar6;
  KKLJIDJBFEI_o *__this;
  PGICCMFLDPI_o *pPVar7;
  ulong uVar8;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  JMDPBFOCHHP_NMAJABPDEPE_o *pJVar9;
  
  if ((DAT_045668b8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045668b8 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((pJVar5 != (JMDPBFOCHHP_o *)0x0) &&
     (pJVar9 = (pJVar5->fields)._IGLEEEJGEEJ_k__BackingField,
     pJVar9 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0)) {
    uVar1 = (pJVar9->fields).OAFBLBIBJBG;
    pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar5 != (JMDPBFOCHHP_o *)0x0) &&
       (pJVar9 = (pJVar5->fields)._IGLEEEJGEEJ_k__BackingField,
       pJVar9 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0)) {
      uVar2 = (pJVar9->fields).DCOMFGPIBOE;
      iVar6 = GALHNMPIEHA__FGJMKHPILFH(JOBNGBCPEGO,method_00);
      __this = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this != (KKLJIDJBFEI_o *)0x0) &&
         (pPVar7 = KKLJIDJBFEI__MPBLBEGCAKP(__this,(MethodInfo *)0x0),
         pPVar7 != (PGICCMFLDPI_o *)0x0)) {
        uVar8 = 0;
        if ((uVar1 != 0) && (uVar2 != 0)) {
          lVar4 = (pPVar7->fields).GDKPGIBMFPA / 1000;
          if (lVar4 < iVar6) {
            uVar3 = 0;
            if (uVar2 != 0) {
              uVar3 = (uint)((int)iVar6 - (int)lVar4) / uVar2;
            }
            uVar8 = (ulong)((uVar3 + 1) * uVar1);
          }
        }
        return uVar8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

