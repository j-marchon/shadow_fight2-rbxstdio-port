// FCJBEKHDLAF$$ENEDPCAKAPH @ RVA 0x33F2E6C

void FCJBEKHDLAF__ENEDPCAKAPH(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
                    /* try { // try from 034f2e80 to 035f2e83 has its CatchHandler @ 034f2eac */
                    /* try { // try from 034f2e84 to 035f2ebb has its CatchHandler @ 034f2b80 */
  if ((DAT_04567f3a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f3a = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
                    /* catch() { ... } // from try @ 034f2e80 with catch @ 034f2eac */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 034f2ebc to 035f2ec3 has its CatchHandler @ 034f2ed8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 034f2ec4 to 035f2ecf has its CatchHandler @ 034f2b80 */
  if (bVar1) {
    pNVar2 = (__this->fields).HIBPKNAIPLH;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* try { // try from 034f2ed0 to 035f2ed7 has its CatchHandler @ 034f2ed8 */
                    /* catch() { ... } // from try @ 034f2ebc with catch @ 034f2ed8
                       catch() { ... } // from try @ 034f2ed0 with catch @ 034f2ed8 */
                    /* try { // try from 034f2edc to 035f2fc7 has its CatchHandler @ 034f2edc
                       catch() { ... } // from try @ 034f2edc with catch @ 034f2edc
                       catch() { ... } // from try @ 034f31d8 with catch @ 034f2edc
                       catch() { ... } // from try @ 034f3224 with catch @ 034f2edc
                       catch() { ... } // from try @ 034f3278 with catch @ 034f2edc
                       catch() { ... } // from try @ 034f32a8 with catch @ 034f2edc */
      Nekki_SF2_GUI_Fight_PreFight__RemovePointsTable(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

