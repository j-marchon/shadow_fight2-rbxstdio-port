// Nekki.SF2.GUI.Fight.ViewerFight$$OnFightPause @ RVA 0x35BF2DC

void Nekki_SF2_GUI_Fight_ViewerFight__OnFightPause
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bf2e4 to 037bf2eb has its CatchHandler @ 036bf36c */
                    /* try { // try from 036bf2ec to 037bf32f has its CatchHandler @ 036bef50 */
  if ((DAT_04568f07 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f07 = 1;
  }
  pNVar2 = (__this->fields).leftModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 036bf330 to 037bf333 has its CatchHandler @ 036bf3a8 */
                    /* try { // try from 036bf334 to 037bf33b has its CatchHandler @ 036bf39c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 036bf33c to 037bf33f has its CatchHandler @ 036bf398 */
  if (bVar1) {
                    /* try { // try from 036bf340 to 037bf347 has its CatchHandler @ 036bf394 */
    pNVar2 = (__this->fields).leftModel;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bf3ac;
                    /* try { // try from 036bf348 to 037bf34b has its CatchHandler @ 036bf390 */
                    /* try { // try from 036bf34c to 037bf353 has its CatchHandler @ 036bf388 */
    Nekki_SF2_GUI_Fight_ScreenModel__OnFightPause(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
                    /* try { // try from 036bf354 to 037bf357 has its CatchHandler @ 036bf380 */
                    /* try { // try from 036bf358 to 037bf35b has its CatchHandler @ 036bef50 */
  pNVar2 = (__this->fields).rightModel;
                    /* try { // try from 036bf35c to 037bf35f has its CatchHandler @ 036bf378 */
                    /* try { // try from 036bf360 to 037bf363 has its CatchHandler @ 036bf374 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036bf364 to 037bf367 has its CatchHandler @ 036bf368 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 036bf364 with catch @ 036bf368
                       try { // try from 036bf368 to 037bf3c3 has its CatchHandler @ 036bef50 */
                    /* catch() { ... } // from try @ 036bf2e4 with catch @ 036bf36c */
                    /* catch() { ... } // from try @ 036bf258 with catch @ 036bf370 */
                    /* catch() { ... } // from try @ 036bf360 with catch @ 036bf374 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036bf35c with catch @ 036bf378 */
  if (!bVar1) {
                    /* catch() { ... } // from try @ 036bf334 with catch @ 036bf39c */
                    /* catch() { ... } // from try @ 036bf0a0 with catch @ 036bf3a0 */
                    /* catch() { ... } // from try @ 036bf064 with catch @ 036bf3a4 */
                    /* catch() { ... } // from try @ 036bf330 with catch @ 036bf3a8 */
    return;
  }
                    /* catch() { ... } // from try @ 036bf10c with catch @ 036bf37c */
  pNVar2 = (__this->fields).rightModel;
                    /* catch() { ... } // from try @ 036bf354 with catch @ 036bf380 */
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
                    /* catch() { ... } // from try @ 036bf1cc with catch @ 036bf384 */
                    /* catch() { ... } // from try @ 036bf34c with catch @ 036bf388 */
                    /* catch() { ... } // from try @ 036bf150 with catch @ 036bf38c */
                    /* catch() { ... } // from try @ 036bf348 with catch @ 036bf390 */
                    /* catch() { ... } // from try @ 036bf340 with catch @ 036bf394 */
                    /* catch() { ... } // from try @ 036bf33c with catch @ 036bf398 */
    Nekki_SF2_GUI_Fight_ScreenModel__OnFightPause(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_036bf3ac:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036bf038 with catch @ 036bf3ac */
  FUN_01bab8c8();
}

