// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$GGOICDIOIIK @ RVA 0x3172B94

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__GGOICDIOIIK
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,
               MethodInfo *method)

{
  PEEIMHCMDND_o *__this_00;
  System_Action_EOLFEKNCPLM__o *BLMFLPJJMPF;
  OJEHKJHEBID_o *extraout_x1;
  int64_t JBFDEJOPCDC;
  
  if ((DAT_04566935 & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_JKENKFGECHO__);
    DAT_04566935 = 1;
    PBNPKBJKFHE = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,PBNPKBJKFHE);
  }
  __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  JBFDEJOPCDC = (__this->fields).PMKMIDBNMOE;
  BLMFLPJJMPF = (System_Action_EOLFEKNCPLM__o *)
                thunk_FUN_01bda818(System_Action<EOLFEKNCPLM>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (PEEIMHCMDND_o *)0x0) {
    PEEIMHCMDND__ELHLAJNJAKD(__this_00,JBFDEJOPCDC,BLMFLPJJMPF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

