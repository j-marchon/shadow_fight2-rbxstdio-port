// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$FKGFKNKJAHH @ RVA 0x3075A88

bool Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__FKGFKNKJAHH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  NFFDIPBFJHP_o *pNVar1;
  KKLJIDJBFEI_o *__this_00;
  MethodInfo *extraout_x1;
  GLPEFEEGCPM_o *pGVar2;
  FADHMEJJCPO_o *pFVar3;
  PGICCMFLDPI_o *pPVar4;
  int64_t iVar5;
  
  if ((DAT_04565fa1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565fa1 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 != (NFFDIPBFJHP_o *)0x0) {
    pGVar2 = (pNVar1->fields).NEACDFLBNFO;
    if (pGVar2 == (GLPEFEEGCPM_o *)0x0) {
      return true;
    }
    pFVar3 = (pGVar2->fields).PBBGNHKFEPG;
    if ((pFVar3 != (FADHMEJJCPO_o *)0x0) &&
       (pPVar4 = (pFVar3->fields).IMNALGKNMNP, pPVar4 != (PGICCMFLDPI_o *)0x0)) {
      iVar5 = (pPVar4->fields).GDKPGIBMFPA;
      __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
         (pPVar4 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
         pPVar4 != (PGICCMFLDPI_o *)0x0)) {
        return (int)iVar5 - (int)(pPVar4->fields).GDKPGIBMFPA < 1000;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

