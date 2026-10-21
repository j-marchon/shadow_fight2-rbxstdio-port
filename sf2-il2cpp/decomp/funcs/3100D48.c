// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$CPMHIEJENLD @ RVA 0x3100D48

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CPMHIEJENLD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,int32_t IMCJLJNEMKH,
               MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar1;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  
  if ((DAT_045664c1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_IAKHIFOFLGO__);
    DAT_045664c1 = 1;
  }
  if (0 < IMCJLJNEMKH) {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
      iVar1 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
      (__this->fields).PBACPHGLOFJ = iVar1 + (ulong)(uint)IMCJLJNEMKH;
      CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__KKHNLLICFOO(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

