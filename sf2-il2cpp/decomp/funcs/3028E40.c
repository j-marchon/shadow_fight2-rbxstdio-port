// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$DPDPADFPOBP @ RVA 0x3028E40

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__DPDPADFPOBP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *CJNHFNHJHPE;
  BDMABHJEEGD_o *JOBNGBCPEGO;
  int64_t iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04565ca4 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_BHLHBBKAFHH__);
    DAT_04565ca4 = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__AIBHLHDCMIO(__this,method);
  if (bVar1) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__PHHHGGNFGLL(__this,method_00);
    return;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__JKONMJEBNPH(__this,method_00);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  JOBNGBCPEGO = (__this->fields).NCJONEIOCML;
  if (JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0) {
    if ((JOBNGBCPEGO->fields).IMNALGKNMNP != (PGICCMFLDPI_o *)0x0) {
      iVar2 = GALHNMPIEHA__FGJMKHPILFH(JOBNGBCPEGO,(MethodInfo *)0x0);
      (__this->fields).GIFMJFJDFFG = iVar2;
      Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__BHLHBBKAFHH(__this,method_01);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

