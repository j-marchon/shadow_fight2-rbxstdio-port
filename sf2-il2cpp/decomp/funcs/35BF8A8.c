// Nekki.SF2.GUI.Fight.ViewerFight$$Strike @ RVA 0x35BF8A8

void Nekki_SF2_GUI_Fight_ViewerFight__Strike
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,ECENNHNBAME_o *CAMAHOAFAPK,
               float LINBBAKAFCP,int32_t ACCIHBHMFPN,bool JHMMNIMBIKL,bool JFOKCHFLFJG,
               bool CPKEPNCILEN,bool JECKCMKCNCH,bool ABOGGPJGIAI,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ScreenModel_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_Fight_ScreenModel_o **ppNVar3;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar4;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar5;
  Nekki_SF2_GUI_Fight_ScreenModel_o **ppNVar6;
  
                    /* try { // try from 036bf8b0 to 037bf8bb has its CatchHandler @ 036bfbb4 */
                    /* try { // try from 036bf8c0 to 037bf8cb has its CatchHandler @ 036bfb78 */
                    /* try { // try from 036bf8e0 to 037bf8e7 has its CatchHandler @ 036bfbb0 */
                    /* try { // try from 036bf8e8 to 037bf91f has its CatchHandler @ 036bf6d4 */
  if ((DAT_04568f0e & 1) == 0) {
    LINBBAKAFCP = (float)FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f0e = 1;
  }
  ppNVar6 = &(__this->fields).leftModel;
  pNVar5 = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LINBBAKAFCP);
  }
                    /* try { // try from 036bf920 to 037bf927 has its CatchHandler @ 036bfcd8 */
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    ppNVar3 = &(__this->fields).rightModel;
    pNVar5 = *ppNVar3;
                    /* try { // try from 036bf938 to 037bf943 has its CatchHandler @ 036bfba8 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 036bf948 to 037bf953 has its CatchHandler @ 036bfb74 */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    ppNVar1 = ppNVar6;
    if (ACCIHBHMFPN != 0) {
      ppNVar1 = ppNVar3;
      ppNVar3 = ppNVar6;
    }
                    /* try { // try from 036bf968 to 037bf96f has its CatchHandler @ 036bfba4 */
    pNVar5 = *ppNVar3;
    pNVar4 = *ppNVar1;
                    /* try { // try from 036bf970 to 037bf9a7 has its CatchHandler @ 036bf6d4 */
    if (ABOGGPJGIAI) {
      if (pNVar5 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bfa24;
      Nekki_SF2_GUI_Fight_ScreenModel__ShowShock(pNVar5,(MethodInfo *)0x0);
    }
    if (CPKEPNCILEN) {
      if (pNVar5 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bfa24;
      Nekki_SF2_GUI_Fight_ScreenModel__ShowCritical(pNVar5,(MethodInfo *)0x0);
    }
    else if (pNVar5 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bfa24;
    if (JECKCMKCNCH) {
                    /* try { // try from 036bf9a8 to 037bf9af has its CatchHandler @ 036bfc78 */
                    /* try { // try from 036bf9c0 to 037bf9cb has its CatchHandler @ 036bfb9c */
      Nekki_SF2_GUI_Fight_ScreenModel__CallEventBlockHit(pNVar5,(MethodInfo *)0x0);
      return;
    }
                    /* try { // try from 036bf9d0 to 037bf9db has its CatchHandler @ 036bfb70 */
    Nekki_SF2_GUI_Fight_ScreenModel__UpdateStyle(pNVar5,CAMAHOAFAPK,(MethodInfo *)0x0);
    if (JHMMNIMBIKL) {
      Nekki_SF2_GUI_Fight_ScreenModel__ShowFirstStrike(pNVar5,(MethodInfo *)0x0);
    }
    if (JFOKCHFLFJG) {
      Nekki_SF2_GUI_Fight_ScreenModel__ShowHeadStrike(pNVar5,(MethodInfo *)0x0);
    }
    if (pNVar4 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
LAB_036bfa24:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar4->fields)._IsNoBlock_k__BackingField = false;
  }
                    /* try { // try from 036bf9f0 to 037bf9f7 has its CatchHandler @ 036bfb98 */
                    /* try { // try from 036bf9f8 to 037bfa3f has its CatchHandler @ 036bf6d4 */
  return;
}

