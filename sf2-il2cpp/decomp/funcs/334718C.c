// Nekki.SF2.GUI.Map.ZoneScrollItem$$GPAECDJPJPF @ RVA 0x334718C

void Nekki_SF2_GUI_Map_ZoneScrollItem__GPAECDJPJPF
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,
               Nekki_SF2_GUI_Map_BattleButton_o *BECCOGAMKJL,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  OLKPEJMEBPJ_o *__this_00;
  OOMHDDBCBJP_o *pOVar1;
  
  if ((BECCOGAMKJL == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) ||
     (pOVar1 = (BECCOGAMKJL->fields).CLMFOMEABFA, pOVar1 == (OOMHDDBCBJP_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = (pOVar1->fields).LFJPDELEIHG;
  if (__this_00 == (OLKPEJMEBPJ_o *)0x0) {
    if ((BECCOGAMKJL->fields).GEOICCNOABO == false) goto LAB_034471f0;
    CJNHFNHJHPE = false;
  }
  else {
    CJNHFNHJHPE = OLKPEJMEBPJ__EFLKILFFJKH(__this_00,(MethodInfo *)0x0);
    if (CJNHFNHJHPE == ((BECCOGAMKJL->fields).GEOICCNOABO != false)) goto LAB_034471f0;
  }
  Nekki_SF2_GUI_Map_BattleButton__set_Hidden(BECCOGAMKJL,CJNHFNHJHPE,(MethodInfo *)0x0);
LAB_034471f0:
  Nekki_SF2_GUI_Map_BattleButton__SetActiveBattle
            (BECCOGAMKJL,(BECCOGAMKJL->fields).CLMFOMEABFA == (__this->fields).KOGBPIPIKFA,
             (MethodInfo *)0x0);
  return;
}

