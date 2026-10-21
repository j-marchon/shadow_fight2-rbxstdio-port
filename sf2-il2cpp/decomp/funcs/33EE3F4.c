// FCJBEKHDLAF$$GFKIOANPLKP @ RVA 0x33EE3F4

void FCJBEKHDLAF__GFKIOANPLKP(FCJBEKHDLAF_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *extraout_x1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
                    /* try { // try from 034ee3f8 to 035ee423 has its CatchHandler @ 034ee8b0 */
  if ((DAT_04567eeb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567eeb = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,IMMNELPBGIF);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).HIBPKNAIPLH;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034ee460 to 035ee467 has its CatchHandler @ 034ee8a8 */
    Nekki_SF2_GUI_Fight_PreFight__OnFightPause(pNVar2,true,(MethodInfo *)0x0);
  }
  (__this->fields).PMFNBNBOGCO = false;
                    /* try { // try from 034ee46c to 035ee473 has its CatchHandler @ 034ee8a4 */
  return;
}

