// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$GKPJMHOFIOO @ RVA 0x31007B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  NFFDIPBFJHP_o *pNVar2;
  KKLJIDJBFEI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *in_x2;
  FADHMEJJCPO_o *pFVar3;
  PGICCMFLDPI_o *pPVar4;
  GLPEFEEGCPM_o *pGVar5;
  long lVar6;
  
  if ((DAT_045664bc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_5942);
    DAT_045664bc = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar2 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar2 != (NFFDIPBFJHP_o *)0x0) {
    pGVar5 = (pNVar2->fields).NEACDFLBNFO;
    if (pGVar5 == (GLPEFEEGCPM_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_5942,(MethodInfo *)0x0);
      return;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CFPJAFNAAME(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CBMBNAKAFMH(__this,method_01);
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__LHKAGIIDFIP(__this,method_02);
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__NGGIGILFODP(__this,method_03);
    pFVar3 = (pGVar5->fields).PBBGNHKFEPG;
    if ((pFVar3 != (FADHMEJJCPO_o *)0x0) &&
       (pPVar4 = (pFVar3->fields).IMNALGKNMNP, pPVar4 != (PGICCMFLDPI_o *)0x0)) {
      lVar6 = (pPVar4->fields).GDKPGIBMFPA;
      __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
         (pPVar4 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
         pPVar4 != (PGICCMFLDPI_o *)0x0)) {
        auVar1 = SEXT816(lVar6 - (pPVar4->fields).GDKPGIBMFPA) * SEXT816(0x20c49ba5e353f7cf);
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CPMHIEJENLD
                  (__this,(int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f),in_x2);
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__HEFGCBGBDGP(__this,method_04);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

