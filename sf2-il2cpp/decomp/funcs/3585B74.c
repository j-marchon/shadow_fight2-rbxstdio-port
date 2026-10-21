// Nekki.SF2.GUI.Map.MapScene$$SelectFight @ RVA 0x3585B74

void Nekki_SF2_GUI_Map_MapScene__SelectFight
               (Nekki_SF2_GUI_Map_MapScene_o *__this,AFFHKININGD_o *MHOFCOHFCGL,float PNEIGGOFIOA,
               MethodInfo *method)

{
  OOMHDDBCBJP_o *BANHBMINMMP;
  
  if ((MHOFCOHFCGL != (AFFHKININGD_o *)0x0) &&
     (BANHBMINMMP = (MHOFCOHFCGL->fields).IFJLLGPGMHM, BANHBMINMMP != (OOMHDDBCBJP_o *)0x0)) {
    Nekki_SF2_GUI_Map_MapScene__SelectBattle(__this,BANHBMINMMP,PNEIGGOFIOA,method);
    return;
  }
  return;
}

