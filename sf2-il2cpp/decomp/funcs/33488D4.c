// Nekki.SF2.GUI.Map.ZoneScrollItem$$SetLastBattle @ RVA 0x33488D4

void Nekki_SF2_GUI_Map_ZoneScrollItem__SetLastBattle
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,System_String_o *EIMGAMOELIN,
               MethodInfo *method)

{
  MEJIKMPNBNL_o *__this_00;
  OOMHDDBCBJP_o *pOVar1;
  
  __this_00 = (__this->fields).IAJBEJGMIMM;
  if (__this_00 != (MEJIKMPNBNL_o *)0x0) {
    pOVar1 = MEJIKMPNBNL__KKPHCCBPIMN(__this_00,EIMGAMOELIN,(MethodInfo *)0x0);
    (__this->fields).KOGBPIPIKFA = pOVar1;
    thunk_FUN_01c20e04(&(__this->fields).KOGBPIPIKFA);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

