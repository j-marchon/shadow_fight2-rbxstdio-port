// Nekki.SF2.GUI.Map.ZoneScrollItem$$GetBattleButtonByBattleName @ RVA 0x3349184

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__GetBattleButtonByBattleName
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,System_String_o *EIMGAMOELIN,
          MethodInfo *method)

{
  MEJIKMPNBNL_o *__this_00;
  OOMHDDBCBJP_o *BANHBMINMMP;
  Nekki_SF2_GUI_Map_BattleButton_o *pNVar1;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).IAJBEJGMIMM;
  if (__this_00 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_00 = (MethodInfo *)0x0;
  BANHBMINMMP = MEJIKMPNBNL__KKPHCCBPIMN(__this_00,EIMGAMOELIN,(MethodInfo *)0x0);
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    pNVar1 = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle(__this,BANHBMINMMP,method_00);
    return pNVar1;
  }
  return (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
}

