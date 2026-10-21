// Nekki.SF2.GUI.Map.MapScene$$GetRaidToggleBtn @ RVA 0x3587538

Nekki_SF2_GUI_Map_RaidToggleButton_o *
Nekki_SF2_GUI_Map_MapScene__GetRaidToggleBtn
          (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar1;
  
  pNVar1 = (__this->fields).FMIFNIIJJNK;
  if (pNVar1 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    return (pNVar1->fields).RaidToggleButton;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

