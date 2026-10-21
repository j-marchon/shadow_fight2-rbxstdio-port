// GALHNMPIEHA$$OALAPMJJBLJ @ RVA 0x3164F0C

bool GALHNMPIEHA__OALAPMJJBLJ(BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  JMDPBFOCHHP_o *pJVar3;
  KKLJIDJBFEI_o *__this;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_NMAJABPDEPE_o *pJVar4;
  PGICCMFLDPI_o *pPVar5;
  long lVar6;
  
  if ((DAT_045668ae & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045668ae = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
      (pJVar4 = (pJVar3->fields)._IGLEEEJGEEJ_k__BackingField,
      pJVar4 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0)) && (JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0)) {
    pPVar5 = (JOBNGBCPEGO->fields).GMHNOGKNFNB;
    if (pPVar5 == (PGICCMFLDPI_o *)0x0) {
      bVar2 = true;
    }
    else {
      uVar1 = (pJVar4->fields).OIMHAENFHBJ;
      lVar6 = (pPVar5->fields).GDKPGIBMFPA;
      __this = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this == (KKLJIDJBFEI_o *)0x0) ||
         (pPVar5 = KKLJIDJBFEI__MPBLBEGCAKP(__this,(MethodInfo *)0x0),
         pPVar5 == (PGICCMFLDPI_o *)0x0)) goto LAB_03264fb8;
      bVar2 = (long)(lVar6 + (ulong)uVar1 * 1000) <= (pPVar5->fields).GDKPGIBMFPA;
    }
    return bVar2;
  }
LAB_03264fb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

