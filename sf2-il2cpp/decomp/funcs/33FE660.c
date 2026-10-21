// MGNPHCAAEIO$$HDEOLJBKIHJ @ RVA 0x33FE660

bool MGNPHCAAEIO__HDEOLJBKIHJ(bool OLNDNNGJELN,MethodInfo *method)

{
  bool bVar1;
  int32_t IILEPKAGDGC;
  MGNPHCAAEIO_c *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  
  if ((DAT_0456804b & 1) == 0) {
                    /* try { // try from 034fe688 to 035fe68f has its CatchHandler @ 034fe730 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 034fe690 to 035fe693 has its CatchHandler @ 034fe710 */
    DAT_0456804b = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034fe694 to 035fe697 has its CatchHandler @ 034fe730 */
                    /* try { // try from 034fe698 to 035fe69b has its CatchHandler @ 034fe708 */
                    /* try { // try from 034fe69c to 035fe6a3 has its CatchHandler @ 034fe718 */
  method_00 = MGNPHCAAEIO_TypeInfo;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGNPHCAAEIO_c *)thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
                    /* try { // try from 034fe6a4 to 035fe6a7 has its CatchHandler @ 034fe6f4 */
  IILEPKAGDGC = MGNPHCAAEIO__JDFOFOAEAKD((MethodInfo *)method_00);
                    /* try { // try from 034fe6a8 to 035fe6ab has its CatchHandler @ 034fe6ec */
  bVar1 = IILEPKAGDGC == 0;
                    /* try { // try from 034fe6ac to 035fe6b3 has its CatchHandler @ 034fe6f0 */
                    /* try { // try from 034fe6b4 to 035fe6b7 has its CatchHandler @ 034fe6e8 */
                    /* try { // try from 034fe6b8 to 035fe6bb has its CatchHandler @ 034fe6d8 */
  if ((IILEPKAGDGC != 0) && (OLNDNNGJELN)) {
                    /* try { // try from 034fe6bc to 035fe6bf has its CatchHandler @ 034fe6e8 */
                    /* try { // try from 034fe6c0 to 035fe6c3 has its CatchHandler @ 034fe14c */
                    /* try { // try from 034fe6c4 to 035fe6c7 has its CatchHandler @ 034fe6d0 */
    method_01 = extraout_x1_00;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034fe6c8 to 035fe74b has its CatchHandler @ 034fe14c */
      thunk_FUN_01ba7564();
      method_01 = extraout_x1_01;
    }
                    /* catch() { ... } // from try @ 034fe6c4 with catch @ 034fe6d0 */
    MGNPHCAAEIO__DBMMDPHGONI(IILEPKAGDGC,method_01);
                    /* catch() { ... } // from try @ 034fe558 with catch @ 034fe6d4 */
    bVar1 = false;
  }
                    /* catch() { ... } // from try @ 034fe6b8 with catch @ 034fe6d8 */
                    /* catch() { ... } // from try @ 034fe4d8 with catch @ 034fe6dc */
                    /* catch() { ... } // from try @ 034fe4f0 with catch @ 034fe6e0 */
  return bVar1;
}

