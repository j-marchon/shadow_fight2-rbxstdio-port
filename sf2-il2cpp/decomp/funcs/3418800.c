// Nekki.SF2.GUI.Map.InfoBattle$$GetCurrentFight @ RVA 0x3418800

AFFHKININGD_o *
Nekki_SF2_GUI_Map_InfoBattle__GetCurrentFight
          (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  AFFHKININGD_o *pAVar1;
  MethodInfo *extraout_x1;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  
  if ((DAT_045680b2 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045680b2 = 1;
    method = extraout_x1;
  }
  DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar1 = NLPJLHOEAOE__OJDOCBFHNBN(DBIAAJNKHLH,(MethodInfo *)0x0);
  return pAVar1;
}

