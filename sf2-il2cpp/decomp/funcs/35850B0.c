// Nekki.SF2.GUI.Map.MapScene$$EnableMapButtons @ RVA 0x35850B0

void Nekki_SF2_GUI_Map_MapScene__EnableMapButtons
               (Nekki_SF2_GUI_Map_MapScene_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *pNVar1;
  bool bVar2;
  
  pNVar1 = (__this->fields).MGIJJGGPFJB;
  if (CMPKOOEKFKF) {
    if (pNVar1 == (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) goto LAB_03685118;
    if ((__this->fields).IAAABJBDEMK != 0) {
      Nekki_SF2_GUI_Map_MapButtonsPanel__EnableStoryMapButtons(pNVar1,false,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).MGIJJGGPFJB;
      if (pNVar1 == (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) goto LAB_03685118;
      bVar2 = true;
      goto LAB_0368510c;
    }
    bVar2 = true;
  }
  else {
    if (pNVar1 == (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) goto LAB_03685118;
    bVar2 = false;
  }
  Nekki_SF2_GUI_Map_MapButtonsPanel__EnableStoryMapButtons(pNVar1,bVar2,(MethodInfo *)0x0);
  pNVar1 = (__this->fields).MGIJJGGPFJB;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
    bVar2 = false;
LAB_0368510c:
    Nekki_SF2_GUI_Map_MapButtonsPanel__EnableRaidMapButtons(pNVar1,bVar2,(MethodInfo *)0x0);
    return;
  }
LAB_03685118:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

