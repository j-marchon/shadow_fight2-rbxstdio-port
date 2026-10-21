// Nekki.SF2.GUI.Fight.ViewerFight$$UpdateCombo @ RVA 0x35BFA28

void Nekki_SF2_GUI_Fight_ViewerFight__UpdateCombo
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool FOFCAILEKJD,int32_t CJNHFNHJHPE,
               int32_t LHLELGFDIAP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bfa40 to 037bfa47 has its CatchHandler @ 036bfc18 */
  if ((DAT_04568f10 & 1) == 0) {
                    /* try { // try from 036bfa58 to 037bfa63 has its CatchHandler @ 036bfb90 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f10 = 1;
  }
                    /* try { // try from 036bfa68 to 037bfa73 has its CatchHandler @ 036bfb6c */
  if (FOFCAILEKJD) {
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 036bfa88 to 037bfa8f has its CatchHandler @ 036bfb8c */
                    /* try { // try from 036bfa90 to 037bfac7 has its CatchHandler @ 036bf6d4 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
                    /* try { // try from 036bfaf0 to 037bfafb has its CatchHandler @ 036bfb68 */
      return;
    }
    pNVar2 = (__this->fields).leftModel;
  }
  else {
    pNVar2 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 036bfac8 to 037bfacf has its CatchHandler @ 036bfbb8 */
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).rightModel;
  }
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
                    /* try { // try from 036bfae0 to 037bfaeb has its CatchHandler @ 036bfb84 */
    Nekki_SF2_GUI_Fight_ScreenModel__UpdateCombo(pNVar2,CJNHFNHJHPE,LHLELGFDIAP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

