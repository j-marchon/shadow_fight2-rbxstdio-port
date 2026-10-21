// Nekki.SF2.GUI.Shop.PerkProgressBar$$NLFAIJPCCLI @ RVA 0x311810C

/* WARNING: Removing unreachable block (ram,0x03218120) */

float Nekki_SF2_GUI_Shop_PerkProgressBar__NLFAIJPCCLI
                (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 03217fa0 with catch @ 0321810c */
                    /* catch() { ... } // from try @ 03217fc8 with catch @ 03218110 */
                    /* catch() { ... } // from try @ 032180c0 with catch @ 03218114 */
  fVar1 = Nekki_SF2_GUI_Shop_PerkProgressBar__PIJGHADPLNK(__this,OOGPLJBADCD,method);
                    /* catch() { ... } // from try @ 032180bc with catch @ 03218118
                       catch() { ... } // from try @ 032180c4 with catch @ 03218118 */
  fVar2 = (__this->fields).MFLPMCOHHGB;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
                    /* try { // try from 03218130 to 03318133 has its CatchHandler @ 03218144 */
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}

