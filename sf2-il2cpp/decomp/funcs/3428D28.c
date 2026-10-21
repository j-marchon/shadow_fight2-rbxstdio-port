// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$UpdateTimer @ RVA 0x3428D28

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__UpdateTimer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int32_t IMCJLJNEMKH,
               MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar2;
  System_Action_o *CJNHFNHJHPE;
  CHDGOFBHAFI_o *pCVar3;
  MethodInfo *method_00;
  
  if ((DAT_04568126 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_IAKHIFOFLGO__);
    DAT_04568126 = 1;
  }
  if (IMCJLJNEMKH < 1) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar3 != (CHDGOFBHAFI_o *)0x0) {
      bVar1 = OOBBAGLCFPF__FLMDOPMDKID((pCVar3->fields).AABMLCNHHPN,(MethodInfo *)0x0);
      if (bVar1) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetRaidEndedState(__this,false,method);
        return;
      }
      return;
    }
  }
  else {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if ((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
       (pPVar2 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
       pPVar2 != (PGICCMFLDPI_o *)0x0)) {
      (__this->fields).PBACPHGLOFJ = (pPVar2->fields).GDKPGIBMFPA + (long)(IMCJLJNEMKH * 1000);
      CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__DCGKJKKNCEP(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

