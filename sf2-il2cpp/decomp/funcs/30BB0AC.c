// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanEditDialog$$AFGELGGIGKK @ RVA 0x30BB0AC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog__AFGELGGIGKK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog_o *__this,
               OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  bool CJNHFNHJHPE_00;
  bool CJNHFNHJHPE_01;
  bool CJNHFNHJHPE_02;
  EEGDOGKBLNG_o *__this_00;
  int64_t FKIGDGJPIAC;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *pNVar1;
  
  if ((DAT_0456623d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_5633);
    FUN_01bab630(&StringLiteral_5632);
    FUN_01bab630(&StringLiteral_5635);
    FUN_01bab630(&StringLiteral_5631);
    DAT_0456623d = 1;
  }
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    FKIGDGJPIAC = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super.BBKLDPELJHI;
    if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditNameEnabled
                (pNVar1,false,(MethodInfo *)0x0);
      CJNHFNHJHPE = DOCPIHOLNOA__BJBGLBAEIJB
                              (PBNPKBJKFHE,StringLiteral_5631,FKIGDGJPIAC,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).super.BBKLDPELJHI;
      if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditDescriptionEnabled
                  (pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        CJNHFNHJHPE_00 =
             DOCPIHOLNOA__BJBGLBAEIJB(PBNPKBJKFHE,StringLiteral_5632,FKIGDGJPIAC,(MethodInfo *)0x0);
        pNVar1 = (__this->fields).super.BBKLDPELJHI;
        if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditIconEnabled
                    (pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
          CJNHFNHJHPE_01 =
               DOCPIHOLNOA__BJBGLBAEIJB
                         (PBNPKBJKFHE,StringLiteral_5633,FKIGDGJPIAC,(MethodInfo *)0x0);
          pNVar1 = (__this->fields).super.BBKLDPELJHI;
          if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditJoinTypeEnabled
                      (pNVar1,CJNHFNHJHPE_01,(MethodInfo *)0x0);
            CJNHFNHJHPE_02 =
                 DOCPIHOLNOA__BJBGLBAEIJB
                           (PBNPKBJKFHE,StringLiteral_5635,FKIGDGJPIAC,(MethodInfo *)0x0);
            pNVar1 = (__this->fields).super.BBKLDPELJHI;
            if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditRequirementsEnabled
                        (pNVar1,CJNHFNHJHPE_02,(MethodInfo *)0x0);
              if (((CJNHFNHJHPE || CJNHFNHJHPE_00) || CJNHFNHJHPE_01) || CJNHFNHJHPE_02) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x031bb284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(__this->klass->vtable)._42_FKEGLMMHKEO.methodPtr)
                        (__this,(__this->klass->vtable)._42_FKEGLMMHKEO.method);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

