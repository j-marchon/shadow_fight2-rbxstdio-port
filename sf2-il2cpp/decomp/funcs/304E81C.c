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

