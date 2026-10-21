// Nekki.SF2.GUI.Map.MapScene$$IEJPFOFGJLN @ RVA 0x3585DAC

void Nekki_SF2_GUI_Map_MapScene__IEJPFOFGJLN
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04568cf2 & 1) == 0) {
    auVar2 = FUN_01bab630(&StringLiteral_18788);
    DAT_04568cf2 = 1;
  }
  pNVar1 = (__this->fields).FMIFNIIJJNK;
  if (pNVar1 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    Nekki_SF2_GUI_Map_MapScene__LHHLFBBBJLD
              (__this,(pNVar1->fields).RaidHintPos,StringLiteral_18788,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

