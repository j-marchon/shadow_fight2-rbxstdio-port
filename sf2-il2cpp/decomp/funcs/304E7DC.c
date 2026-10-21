// Nekki.SF2.GUI.Map.RaidMapContainer$$AddRaidZone @ RVA 0x304E7DC

void Nekki_SF2_GUI_Map_RaidMapContainer__AddRaidZone
               (Nekki_SF2_GUI_Map_RaidMapContainer_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *pNVar1;
  
  pNVar1 = (__this->fields).super._mapPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__Clear(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super._mapPanel;
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_MapPanel__AddRaidZone(pNVar1,BHHBEIACGPB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

