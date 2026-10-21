// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$DLOKPLFDEJA @ RVA 0x3175888

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__DLOKPLFDEJA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,
               MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar2;
  EEOMEMBBGNA_o *pEVar3;
  long lVar4;
  
  if ((DAT_04566951 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_4855);
    DAT_04566951 = 1;
  }
  if (KGCNBJOCNHC != (MGDJPGGPDJI_o *)0x0) {
    lVar4 = (KGCNBJOCNHC->fields).ANAJGHJEEOC;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      iVar2 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      if (lVar4 == iVar2) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar3 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
        if (pEVar3 == (EEOMEMBBGNA_o *)0x0) goto LAB_03275970;
        bVar1 = DOCPIHOLNOA__BJBGLBAEIJB
                          ((pEVar3->fields).MICFEIBNOLM,StringLiteral_4855,
                           (KGCNBJOCNHC->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
        if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0327595c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(__this->klass->vtable)._20_Close.methodPtr)
                    (__this,(__this->klass->vtable)._20_Close.method);
          return;
        }
      }
      return;
    }
  }
LAB_03275970:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

