// JJPNLEPEAFM$$BAPCFKAPNEK @ RVA 0x3532294

Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *
JJPNLEPEAFM__BAPCFKAPNEK(NLBPJNEGNNM_o *OIALBIGPFFA,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this;
  
  if ((DAT_04568a67 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_TypeInfo);
    DAT_04568a67 = 1;
  }
  __this = (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *)
           GCIFMNHADDF__ACDDKABEBAP(200,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_TypeInfo)) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__Init(__this,OIALBIGPFFA,(MethodInfo *)0x0)
      ;
      return __this;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

