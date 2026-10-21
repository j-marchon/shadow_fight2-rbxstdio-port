// Nekki.SF2.GUI.Fight.ViewerFight$$UpdateHotGroundTimer @ RVA 0x35BDD98

void Nekki_SF2_GUI_Fight_ViewerFight__UpdateHotGroundTimer
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,int32_t LFJGFLNMBMC,int32_t HEHMPFLAEGE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bddb0 to 037bddb3 has its CatchHandler @ 036bddb8 */
                    /* try { // try from 036bddb4 to 037bddd3 has its CatchHandler @ 036bdc80 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bddb0 with catch @ 036bddb8
                        */
  if ((DAT_04568ef7 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bdd3c with catch @ 036bddbc
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ef7 = 1;
  }
                    /* try { // try from 036bddd4 to 037bddd7 has its CatchHandler @ 036bde00 */
  if (HEHMPFLAEGE == 1) {
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).leftModel;
  }
  else {
                    /* try { // try from 036bddd8 to 037bde0f has its CatchHandler @ 036bdc80 */
    if (HEHMPFLAEGE != 2) {
      if (HEHMPFLAEGE != 3) {
        return;
      }
      pNVar2 = (__this->fields).leftModel;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036bddd4 with catch @ 036bde00 */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 036bde10 to 037bde17 has its CatchHandler @ 036bde2c */
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 036bde18 to 037bde23 has its CatchHandler @ 036bdc80 */
        pNVar2 = (__this->fields).leftModel;
        if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bde6c;
                    /* try { // try from 036bde24 to 037bde2b has its CatchHandler @ 036bde2c */
        Nekki_SF2_GUI_Fight_ScreenModel__ShowHotGroundTimer(pNVar2,LFJGFLNMBMC,(MethodInfo *)0x0);
      }
    }
    pNVar2 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).rightModel;
  }
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenModel__ShowHotGroundTimer(pNVar2,LFJGFLNMBMC,(MethodInfo *)0x0);
    return;
  }
LAB_036bde6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

