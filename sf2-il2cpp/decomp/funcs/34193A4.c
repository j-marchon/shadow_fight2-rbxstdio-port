// Nekki.SF2.GUI.Map.InfoBattle$$Refresh @ RVA 0x34193A4

void Nekki_SF2_GUI_Map_InfoBattle__Refresh
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  OOMHDDBCBJP_o *BANHBMINMMP;
  MethodInfo *in_x2;
  
  BANHBMINMMP = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method);
  Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,BANHBMINMMP,in_x2);
  return;
}

