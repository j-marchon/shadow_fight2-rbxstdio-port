// FCJBEKHDLAF$$APOPNPBBCMM @ RVA 0x33E7090

void FCJBEKHDLAF__APOPNPBBCMM(FCJBEKHDLAF_o *__this,IGPDCHBJAPD_o *GGKBMKIPCJH,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
                    /* catch() { ... } // from try @ 034e707c with catch @ 034e70a8 */
  if ((DAT_04567ed2 & 1) == 0) {
                    /* try { // try from 034e70b8 to 035e70bf has its CatchHandler @ 034e70d4 */
                    /* try { // try from 034e70c0 to 035e70cb has its CatchHandler @ 034e6f30 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567ed2 = 1;
  }
                    /* try { // try from 034e70cc to 035e70d3 has its CatchHandler @ 034e70d4 */
  pNVar2 = (__this->fields).HIBPKNAIPLH;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034e70b8 with catch @ 034e70d4
                       catch(type#2 @ 00000000) { ... } // from try @ 034e70cc with catch @ 034e70d4
                        */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  (__this->fields).MDJMIPGAJLL = true;
  if (pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
    Nekki_SF2_GUI_Fight_PreFight__OpenEndRaidRoundFightScreen(pNVar2,GGKBMKIPCJH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

