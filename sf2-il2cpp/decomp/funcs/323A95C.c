// Nekki.SF2.GUI.Map.MapContainer$$.cctor @ RVA 0x323A95C

void Nekki_SF2_GUI_Map_MapContainer___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapContainer_StaticFields *pNVar1;
  
                    /* try { // try from 0333a968 to 0343aacb has its CatchHandler @ 0333a968
                       catch() { ... } // from try @ 0333a968 with catch @ 0333a968
                       catch() { ... } // from try @ 0333ac04 with catch @ 0333a968
                       catch() { ... } // from try @ 0333ac9c with catch @ 0333a968
                       catch() { ... } // from try @ 0333aca4 with catch @ 0333a968
                       catch() { ... } // from try @ 0333ad64 with catch @ 0333a968 */
  if ((DAT_04567055 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapContainer_TypeInfo);
    DAT_04567055 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Map_MapContainer_TypeInfo->static_fields;
  pNVar1->PHOGPJGGGMG = 20.0;
  pNVar1->DFFJDBKGGMC = 50.0;
  return;
}

