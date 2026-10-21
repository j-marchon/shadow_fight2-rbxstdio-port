// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$ONFCBLFMGHN @ RVA 0x313D23C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__ONFCBLFMGHN
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,
               OHDDKGHEEPA_o *DKMMBMBMJBO,MethodInfo *method)

{
  AFFHKININGD_o *FBFPLEFCDOK;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  OHDDKGHEEPA_o *pOVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  
  (__this->fields)._battle = DKMMBMBMJBO;
  thunk_FUN_01c20e04(&(__this->fields)._battle);
  if ((__this->fields)._battle == (OHDDKGHEEPA_o *)0x0) {
    return;
  }
  __this_01 = (__this->fields)._icon;
  FBFPLEFCDOK = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__GetFight(__this,method_00);
  CJNHFNHJHPE = KFCFGKEHPNK__GHLDEKNCIEG(FBFPLEFCDOK,(MethodInfo *)0x0);
  if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    pOVar1 = (__this->fields)._battle;
    if ((pOVar1 != (OHDDKGHEEPA_o *)0x0) &&
       (__this_00 = (__this->fields)._name, __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (__this_00,(pOVar1->fields).super.FHPNAJENHNG,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__FOBFPEHKHAF(__this,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

