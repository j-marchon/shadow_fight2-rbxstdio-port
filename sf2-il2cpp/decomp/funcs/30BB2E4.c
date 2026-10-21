// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanEditDialog$$DLOKPLFDEJA @ RVA 0x30BB2E4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog__DLOKPLFDEJA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog_o *__this,
               MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar1;
  EEOMEMBBGNA_o *pEVar2;
  long lVar3;
  
  if ((DAT_0456623f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456623f = 1;
  }
  if (KGCNBJOCNHC != (MGDJPGGPDJI_o *)0x0) {
    lVar3 = (KGCNBJOCNHC->fields).ANAJGHJEEOC;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      iVar1 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      if (lVar3 != iVar1) {
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (pEVar2 != (EEOMEMBBGNA_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog__AFGELGGIGKK
                  (__this,(pEVar2->fields).MICFEIBNOLM,method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

