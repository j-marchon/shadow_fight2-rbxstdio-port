// Nekki.SF2.GUI.Map.InfoBattle$$EEGOPNGLBMJ @ RVA 0x3417CEC

void Nekki_SF2_GUI_Map_InfoBattle__EEGOPNGLBMJ
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method
               )

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  OOMHDDBCBJP_o *__this_01;
  OOMHDDBCBJP_o *BANHBMINMMP;
  
  if ((DAT_045680af & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    __this = (Nekki_SF2_GUI_Map_InfoBattle_o *)FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045680af = 1;
  }
  if ((FBFPLEFCDOK == (AFFHKININGD_o *)0x0) ||
     (__this_01 = (FBFPLEFCDOK->fields).IFJLLGPGMHM, __this_01 == (OOMHDDBCBJP_o *)0x0)) {
LAB_03517e34:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  iVar1 = OOMHDDBCBJP__NHGGBEACKBD(__this_01,(MethodInfo *)0x0);
  if (iVar1 == 5) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_03517e34;
    ACHLOMELAJE__DOFAAIMDOCP(__this_00,0,(MethodInfo *)0x0);
  }
  iVar1 = OOMHDDBCBJP__NHGGBEACKBD(__this_01,(MethodInfo *)0x0);
  if ((iVar1 != 2) && (iVar1 = OOMHDDBCBJP__NHGGBEACKBD(__this_01,(MethodInfo *)0x0), iVar1 != 10))
  {
    iVar1 = OOMHDDBCBJP__NHGGBEACKBD(__this_01,(MethodInfo *)0x0);
    BANHBMINMMP = (OOMHDDBCBJP_o *)0x0;
    if (iVar1 != 0x15) goto LAB_03517df8;
  }
  BANHBMINMMP = __this_01;
LAB_03517df8:
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__EEGOPNGLBMJ(FBFPLEFCDOK,false,BANHBMINMMP,true,true,false,(MethodInfo *)0x0);
  return;
}

