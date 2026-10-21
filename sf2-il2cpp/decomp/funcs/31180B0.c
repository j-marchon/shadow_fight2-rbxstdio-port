// Nekki.SF2.GUI.Shop.PerkProgressBar$$SetValue @ RVA 0x31180B0

/* WARNING: Removing unreachable block (ram,0x032180d4) */

void Nekki_SF2_GUI_Shop_PerkProgressBar__SetValue
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,float LHBMDHAGMIO,float GGMALJLKHHB,
               System_Action_o *CAMCPDBKCGI,MethodInfo *method)

{
  float NBHHBBOJJME;
  float fVar1;
  
                    /* try { // try from 032180bc to 033180bf has its CatchHandler @ 03218118 */
                    /* try { // try from 032180c0 to 033180c3 has its CatchHandler @ 03218114 */
                    /* try { // try from 032180c4 to 033180c7 has its CatchHandler @ 03218118 */
                    /* try { // try from 032180c8 to 033180cb has its CatchHandler @ 03218104 */
  NBHHBBOJJME = Nekki_SF2_GUI_Shop_PerkProgressBar__PIJGHADPLNK
                          (__this,LHBMDHAGMIO,(MethodInfo *)CAMCPDBKCGI);
                    /* try { // try from 032180cc to 033180d3 has its CatchHandler @ 032180fc */
  fVar1 = (__this->fields).MFLPMCOHHGB;
                    /* try { // try from 032180d4 to 033180d7 has its CatchHandler @ 032180ec */
                    /* try { // try from 032180d8 to 0331812f has its CatchHandler @ 03217e34 */
                    /* catch() { ... } // from try @ 03218024 with catch @ 032180e0 */
                    /* catch() { ... } // from try @ 03218010 with catch @ 032180e4 */
                    /* catch() { ... } // from try @ 03217ec8 with catch @ 032180e8 */
                    /* catch() { ... } // from try @ 032180d4 with catch @ 032180ec */
                    /* catch() { ... } // from try @ 03217ee0 with catch @ 032180f0 */
  if (NBHHBBOJJME < 0.0) {
    NBHHBBOJJME = 0.0;
  }
                    /* catch() { ... } // from try @ 03217f1c with catch @ 032180f4 */
                    /* catch() { ... } // from try @ 03217f2c with catch @ 032180f8 */
  if (NBHHBBOJJME <= fVar1) {
    NBHHBBOJJME = fVar1;
  }
                    /* catch() { ... } // from try @ 032180cc with catch @ 032180fc */
                    /* catch() { ... } // from try @ 03217f40 with catch @ 03218100 */
                    /* catch() { ... } // from try @ 032180c8 with catch @ 03218104 */
                    /* catch() { ... } // from try @ 03217fb4 with catch @ 03218108 */
  ProgressBarBase__SetValue
            ((ProgressBarBase_o *)__this,NBHHBBOJJME,GGMALJLKHHB,CAMCPDBKCGI,(MethodInfo *)0x0);
  return;
}

