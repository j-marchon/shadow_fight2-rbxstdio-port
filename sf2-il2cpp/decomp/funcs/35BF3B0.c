// Nekki.SF2.GUI.Fight.ViewerFight$$UpdateVictorys @ RVA 0x35BF3B0

void Nekki_SF2_GUI_Fight_ViewerFight__UpdateVictorys
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bf3c4 to 037bf3c7 has its CatchHandler @ 036bf3f0 */
                    /* try { // try from 036bf3c8 to 037bf3ff has its CatchHandler @ 036bef50 */
  if ((DAT_04568f08 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f08 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).leftModel;
                    /* catch() { ... } // from try @ 036bf3c4 with catch @ 036bf3f0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 036bf400 to 037bf407 has its CatchHandler @ 036bf41c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 036bf408 to 037bf413 has its CatchHandler @ 036bef50 */
  if (bVar1) {
    pNVar2 = (__this->fields).leftModel;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bf468;
                    /* try { // try from 036bf414 to 037bf41b has its CatchHandler @ 036bf41c */
    Nekki_SF2_GUI_Fight_ScreenModel__UpdateVictories(pNVar2,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 036bf400 with catch @ 036bf41c
                       catch() { ... } // from try @ 036bf414 with catch @ 036bf41c */
  pNVar2 = (__this->fields).rightModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar2 = (__this->fields).rightModel;
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenModel__UpdateVictories(pNVar2,(MethodInfo *)0x0);
    return;
  }
LAB_036bf468:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

