// Nekki.SF2.GUI.Map.InfoBattle$$GetCurrentBattle @ RVA 0x3413F1C

OOMHDDBCBJP_o *
Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle
          (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  AFFHKININGD_o *pAVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *extraout_x1;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  
  if ((DAT_045680ad & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045680ad = 1;
    method = extraout_x1;
  }
  pAVar1 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentFight(__this,method);
  if (pAVar1 != (AFFHKININGD_o *)0x0) {
    return (pAVar1->fields).IFJLLGPGMHM;
  }
  DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pOVar2 = NLPJLHOEAOE__JIOEHAPGADN(DBIAAJNKHLH,(MethodInfo *)0x0);
  return pOVar2;
}

