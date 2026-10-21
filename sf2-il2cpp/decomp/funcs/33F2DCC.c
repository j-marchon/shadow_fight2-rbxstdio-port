// FCJBEKHDLAF$$NPGJDKCAEHN @ RVA 0x33F2DCC

void FCJBEKHDLAF__NPGJDKCAEHN
               (FCJBEKHDLAF_o *__this,int32_t HEHMPFLAEGE,bool CCOCAIEPCOJ,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
                    /* try { // try from 034f2dd4 to 035f2def has its CatchHandler @ 034f2e48 */
                    /* try { // try from 034f2df0 to 035f2e27 has its CatchHandler @ 034f2b80 */
  if ((DAT_04567f42 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f42 = 1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034f2e28 to 035f2e2b has its CatchHandler @ 034f2e5c */
                    /* try { // try from 034f2e2c to 035f2e2f has its CatchHandler @ 034f2e60 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 034f2e30 to 035f2e33 has its CatchHandler @ 034f2e50 */
  if (bVar1) {
                    /* try { // try from 034f2e34 to 035f2e37 has its CatchHandler @ 034f2e60 */
    pNVar2 = (__this->fields).HIBPKNAIPLH;
                    /* try { // try from 034f2e38 to 035f2e7f has its CatchHandler @ 034f2b80 */
    if (pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* catch() { ... } // from try @ 034f2d6c with catch @ 034f2e3c */
                    /* catch() { ... } // from try @ 034f2d40 with catch @ 034f2e40 */
                    /* catch() { ... } // from try @ 034f2d80 with catch @ 034f2e44 */
                    /* catch() { ... } // from try @ 034f2dd4 with catch @ 034f2e48 */
                    /* catch() { ... } // from try @ 034f2d74 with catch @ 034f2e4c */
                    /* catch() { ... } // from try @ 034f2e30 with catch @ 034f2e50 */
                    /* catch() { ... } // from try @ 034f2ce8 with catch @ 034f2e54 */
      Nekki_SF2_GUI_Fight_PreFight__SetHealthBarVisible
                (pNVar2,HEHMPFLAEGE,CCOCAIEPCOJ,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034f2cc8 with catch @ 034f2e68 */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 034f2d00 with catch @ 034f2e58 */
                    /* catch() { ... } // from try @ 034f2e28 with catch @ 034f2e5c */
                    /* catch() { ... } // from try @ 034f2e2c with catch @ 034f2e60
                       catch() { ... } // from try @ 034f2e34 with catch @ 034f2e60 */
                    /* catch() { ... } // from try @ 034f2d20 with catch @ 034f2e64 */
  return;
}

