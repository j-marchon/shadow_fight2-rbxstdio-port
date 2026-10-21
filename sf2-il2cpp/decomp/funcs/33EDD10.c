// FCJBEKHDLAF$$EEGOPNGLBMJ @ RVA 0x33EDD10

void FCJBEKHDLAF__EEGOPNGLBMJ(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
  if ((DAT_04567ee6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567ee6 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 034edd5c to 035edd63 has its CatchHandler @ 034eddd4 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).HIBPKNAIPLH;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* try { // try from 034edd78 to 035edd7f has its CatchHandler @ 034eddcc */
                    /* try { // try from 034edd80 to 035eddc3 has its CatchHandler @ 034edcd0 */
      Nekki_SF2_GUI_Fight_PreFight__CreateFight(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

