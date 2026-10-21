// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$UpdateTaskInfo @ RVA 0x3029054

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__UpdateTaskInfo
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,BDMABHJEEGD_o *JOBNGBCPEGO,
               MethodInfo *method)

{
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_EBEGCDCOHHJ_o *pJVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  BDMABHJEEGD_o *pBVar2;
  BDMABHJEEGD_o **ppBVar3;
  JMDPBFOCHHP_EBEGCDCOHHJ_o **ppJVar4;
  
  if ((DAT_04565ca6 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565ca6 = 1;
  }
  ppBVar3 = &(__this->fields).NCJONEIOCML;
  *ppBVar3 = JOBNGBCPEGO;
  thunk_FUN_01c20e04(ppBVar3,JOBNGBCPEGO);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((*ppBVar3 != (BDMABHJEEGD_o *)0x0) && (__this_00 != (JMDPBFOCHHP_o *)0x0)) {
    pJVar1 = JMDPBFOCHHP__NNCKFAHCIBE(__this_00,((*ppBVar3)->fields).OHMDCKEDOGH,(MethodInfo *)0x0);
    ppJVar4 = &(__this->fields).MGIFEGEAHOB;
    *ppJVar4 = pJVar1;
    thunk_FUN_01c20e04(ppJVar4,pJVar1);
    pBVar2 = (__this->fields).NCJONEIOCML;
    if (pBVar2 != (BDMABHJEEGD_o *)0x0) {
      if ((pBVar2->fields).IMNALGKNMNP == (PGICCMFLDPI_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__AADJLKMEKBF(__this,method_00);
        method_01 = extraout_x1_00;
      }
      else {
        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__HPADIJDOKDN(__this,method_00);
        method_01 = extraout_x1;
      }
      Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__DPDPADFPOBP(__this,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

