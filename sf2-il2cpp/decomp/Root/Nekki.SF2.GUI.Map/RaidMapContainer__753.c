// TypeDefIndex 753
// Namespace: Nekki.SF2.GUI.Map
// public sealed class RaidMapContainer : MapContainer
// Fields:

// ===== public void AddRaidZone(MEJIKMPNBNL BHHBEIACGPB)  [RVA 0x304E7DC]
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


// ===== public void .ctor()  [RVA 0x304E81C]
// Nekki.SF2.GUI.Map.RaidMapContainer$$.ctor @ RVA 0x304E81C

void Nekki_SF2_GUI_Map_RaidMapContainer___ctor
               (Nekki_SF2_GUI_Map_RaidMapContainer_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e30 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapContainer_TypeInfo);
    DAT_04565e30 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_MapContainer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapContainer_TypeInfo,method);
  }
  Nekki_SF2_GUI_Map_MapContainer___ctor
            ((Nekki_SF2_GUI_Map_MapContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x304E874]
// Nekki.SF2.GUI.Map.RaidMapContainer$$GIENGNEGHPJ @ RVA 0x304E874

void Nekki_SF2_GUI_Map_RaidMapContainer__GIENGNEGHPJ
               (Nekki_SF2_GUI_Map_RaidMapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapContainer__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Map_MapContainer_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Map_MapContainer__SetLampsVisible
            ((Nekki_SF2_GUI_Map_MapContainer_o *)__this,false,(MethodInfo *)0x0);
  return;
}

