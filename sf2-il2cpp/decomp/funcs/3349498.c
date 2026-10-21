// Nekki.SF2.GUI.Map.ZoneScrollItem.<>c$$KPIFPIGJBCJ @ RVA 0x3349498

bool Nekki_SF2_GUI_Map_ZoneScrollItem_<>c__KPIFPIGJBCJ
               (Nekki_SF2_GUI_Map_ZoneScrollItem___c_o *__this,
               Nekki_SF2_GUI_Map_BattleButton_o *p_button,MethodInfo *method)

{
  bool bVar1;
  OOMHDDBCBJP_o *__this_00;
  
  if ((p_button != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) &&
     (__this_00 = (p_button->fields).CLMFOMEABFA,
     __this = (Nekki_SF2_GUI_Map_ZoneScrollItem___c_o *)0x0, __this_00 != (OOMHDDBCBJP_o *)0x0)) {
    if ((__this_00->fields).HHDBIGKBMEC != false) {
      bVar1 = OOMHDDBCBJP__EFLKILFFJKH(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

