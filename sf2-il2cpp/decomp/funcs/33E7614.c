// FCJBEKHDLAF$$LALCMJGCLNM @ RVA 0x33E7614

void FCJBEKHDLAF__LALCMJGCLNM(FCJBEKHDLAF_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *extraout_x1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
  if ((DAT_04567ed4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567ed4 = 1;
    IMMNELPBGIF = extraout_x1;
  }
                    /* try { // try from 034e7648 to 035e7653 has its CatchHandler @ 034e720c */
  pNVar2 = (__this->fields).HIBPKNAIPLH;
                    /* try { // try from 034e7654 to 035e765b has its CatchHandler @ 034e765c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,IMMNELPBGIF);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034e75e0 with catch @ 034e765c
                       catch(type#2 @ 00000000) { ... } // from try @ 034e7654 with catch @ 034e765c
                        */
                    /* try { // try from 034e7668 to 035e76fb has its CatchHandler @ 034e7668
                       catch() { ... } // from try @ 034e7668 with catch @ 034e7668
                       catch() { ... } // from try @ 034e7720 with catch @ 034e7668
                       catch() { ... } // from try @ 034e7754 with catch @ 034e7668
                       catch() { ... } // from try @ 034e777c with catch @ 034e7668
                       catch() { ... } // from try @ 034e77ac with catch @ 034e7668 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).HIBPKNAIPLH;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Fight_PreFight__OnFightPause(pNVar2,false,(MethodInfo *)0x0);
  }
  (__this->fields).PMFNBNBOGCO = true;
  return;
}

