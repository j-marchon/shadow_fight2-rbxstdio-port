// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$BHLHBBKAFHH @ RVA 0x3028FD0

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__BHLHBBKAFHH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  long ECLENFDGNKL;
  bool CJNHFNHJHPE;
  BDMABHJEEGD_o *JOBNGBCPEGO;
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar1;
  MethodInfo *in_x2;
  
  JOBNGBCPEGO = (__this->fields).NCJONEIOCML;
  if (JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0) {
    if ((JOBNGBCPEGO->fields).IMNALGKNMNP == (PGICCMFLDPI_o *)0x0) {
      CJNHFNHJHPE = GALHNMPIEHA__OALAPMJJBLJ(JOBNGBCPEGO,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__SetRefreshButtonVisible
                (__this,CJNHFNHJHPE,in_x2);
      return;
    }
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
      iVar1 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
      ECLENFDGNKL = (__this->fields).GIFMJFJDFFG - iVar1;
      if (-1 < ECLENFDGNKL) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__KGHBEACKHIB(__this,ECLENFDGNKL,in_x2);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

