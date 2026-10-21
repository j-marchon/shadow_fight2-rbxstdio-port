// NFFDIPBFJHP$$MHAFJGEAOIF @ RVA 0x32BA9DC

int32_t NFFDIPBFJHP__MHAFJGEAOIF(MethodInfo *method)

{
  undefined1 auVar1 [16];
  NFFDIPBFJHP_o *pNVar2;
  KKLJIDJBFEI_o *__this;
  GLPEFEEGCPM_o *pGVar3;
  FADHMEJJCPO_o *pFVar4;
  PGICCMFLDPI_o *pPVar5;
  long lVar6;
  
  if ((DAT_04567487 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567487 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if ((((pNVar2 != (NFFDIPBFJHP_o *)0x0) &&
       (pGVar3 = (pNVar2->fields).NEACDFLBNFO, pGVar3 != (GLPEFEEGCPM_o *)0x0)) &&
      (pFVar4 = (pGVar3->fields).PBBGNHKFEPG, pFVar4 != (FADHMEJJCPO_o *)0x0)) &&
     (pPVar5 = (pFVar4->fields).IMNALGKNMNP, pPVar5 != (PGICCMFLDPI_o *)0x0)) {
    lVar6 = (pPVar5->fields).GDKPGIBMFPA;
    __this = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if ((__this != (KKLJIDJBFEI_o *)0x0) &&
       (pPVar5 = KKLJIDJBFEI__MPBLBEGCAKP(__this,(MethodInfo *)0x0), pPVar5 != (PGICCMFLDPI_o *)0x0)
       ) {
      auVar1 = SEXT816(lVar6 - (pPVar5->fields).GDKPGIBMFPA) * SEXT816(0x20c49ba5e353f7cf);
      return (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

