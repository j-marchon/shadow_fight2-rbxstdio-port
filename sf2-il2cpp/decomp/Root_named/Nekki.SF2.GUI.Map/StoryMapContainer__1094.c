// TypeDefIndex 1094
// Namespace: Nekki.SF2.GUI.Map
// public sealed class StoryMapContainer : MapContainer
// Fields:

// ===== public void .ctor()  [RVA 0x30E1660]
// Nekki.SF2.GUI.Map.StoryMapContainer$$.ctor @ RVA 0x30E1660

void Nekki_SF2_GUI_Map_StoryMapContainer___ctor
               (Nekki_SF2_GUI_Map_StoryMapContainer_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045663b3 & 1) == 0) {
                    /* try { // try from 031e1684 to 032e16ab has its CatchHandler @ 031e18f0 */
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapContainer_TypeInfo);
    DAT_045663b3 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_MapContainer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapContainer_TypeInfo,method);
  }
  Nekki_SF2_GUI_Map_MapContainer___ctor
            ((Nekki_SF2_GUI_Map_MapContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x30E16B8]
// Nekki.SF2.GUI.Map.StoryMapContainer$$GIENGNEGHPJ @ RVA 0x30E16B8

void Nekki_SF2_GUI_Map_StoryMapContainer__GIENGNEGHPJ
               (Nekki_SF2_GUI_Map_StoryMapContainer_o *__this,MethodInfo *method)

{
  if ((DAT_045663b4 & 1) == 0) {
                    /* try { // try from 031e16e0 to 032e1707 has its CatchHandler @ 031e18ec */
    FUN_01bab630(&StringLiteral_12432/*"StoryMapContainer"*/);
    DAT_045663b4 = 1;
  }
  Nekki_SF2_GUI_Map_MapContainer__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Map_MapContainer_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Map_MapContainer__UpdateName
            ((Nekki_SF2_GUI_Map_MapContainer_o *)__this,StringLiteral_12432/*"StoryMapContainer"*/,(MethodInfo *)0x0);
  return;
}

