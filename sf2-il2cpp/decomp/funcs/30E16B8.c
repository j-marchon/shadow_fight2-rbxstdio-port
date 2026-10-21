// Nekki.SF2.GUI.Map.StoryMapContainer$$GIENGNEGHPJ @ RVA 0x30E16B8

void Nekki_SF2_GUI_Map_StoryMapContainer__GIENGNEGHPJ
               (Nekki_SF2_GUI_Map_StoryMapContainer_o *__this,MethodInfo *method)

{
  if ((DAT_045663b4 & 1) == 0) {
                    /* try { // try from 031e16e0 to 032e1707 has its CatchHandler @ 031e18ec */
    FUN_01bab630(&StringLiteral_12432);
    DAT_045663b4 = 1;
  }
  Nekki_SF2_GUI_Map_MapContainer__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Map_MapContainer_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Map_MapContainer__UpdateName
            ((Nekki_SF2_GUI_Map_MapContainer_o *)__this,StringLiteral_12432,(MethodInfo *)0x0);
  return;
}

