// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$CEOEIJFKMOG @ RVA 0x353A7AC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__CEOEIJFKMOG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int32_t OILECKFDMDB;
  int *piVar1;
  CNLGMNIEGFG_o *AGONJKOMAAA;
  System_Action_BKKPAKHJDKB__o *CPECAEHDDDB;
  
  if ((DAT_04568ac0 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_OGCPNAAGKAK__)
    ;
    DAT_04568ac0 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  piVar1 = (int *)thunk_FUN_01bda96c();
  if (*piVar1 == 1) {
    OILECKFDMDB = (__this->fields).EIMPNFFLONC;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AGONJKOMAAA = MGNPHCAAEIO__MJDCGINJMOP(OILECKFDMDB,false,(MethodInfo *)0x0);
    CPECAEHDDDB = (System_Action_BKKPAKHJDKB__o *)
                  thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
    System_Action<object>___ctor();
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LPGPNBGHDBD__CEOEIJFKMOG((AFFHKININGD_o *)AGONJKOMAAA,CPECAEHDDDB,(MethodInfo *)0x0);
    return;
  }
  return;
}

