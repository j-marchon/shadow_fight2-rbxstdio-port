// Nekki.SF2.GUI.Fight.ViewerFight$$RemoveCombo @ RVA 0x35BFB00

void Nekki_SF2_GUI_Fight_ViewerFight__RemoveCombo
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bfb10 to 037bfb17 has its CatchHandler @ 036bfb80 */
                    /* try { // try from 036bfb18 to 037bfb4f has its CatchHandler @ 036bf6d4 */
  if ((DAT_04568f11 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f11 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).leftModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 036bfb50 to 037bfb53 has its CatchHandler @ 036bfbac */
                    /* try { // try from 036bfb54 to 037bfb57 has its CatchHandler @ 036bfba0 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 036bfb58 to 037bfb5b has its CatchHandler @ 036bfb94 */
  if (bVar1) {
                    /* try { // try from 036bfb5c to 037bfb5f has its CatchHandler @ 036bfb88 */
    pNVar2 = (__this->fields).leftModel;
                    /* try { // try from 036bfb60 to 037bfb63 has its CatchHandler @ 036bfb7c */
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bfbb8;
                    /* try { // try from 036bfb64 to 037bfbc7 has its CatchHandler @ 036bf6d4 */
                    /* catch() { ... } // from try @ 036bfaf0 with catch @ 036bfb68 */
    Nekki_SF2_GUI_Fight_ScreenModel__RemoveCombo(pNVar2,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 036bfa68 with catch @ 036bfb6c */
                    /* catch() { ... } // from try @ 036bf9d0 with catch @ 036bfb70 */
  pNVar2 = (__this->fields).rightModel;
                    /* catch() { ... } // from try @ 036bf948 with catch @ 036bfb74 */
                    /* catch() { ... } // from try @ 036bf8c0 with catch @ 036bfb78 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036bfb60 with catch @ 036bfb7c */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 036bfb10 with catch @ 036bfb80 */
                    /* catch() { ... } // from try @ 036bfae0 with catch @ 036bfb84 */
                    /* catch() { ... } // from try @ 036bfb5c with catch @ 036bfb88 */
                    /* catch() { ... } // from try @ 036bfa88 with catch @ 036bfb8c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036bfa58 with catch @ 036bfb90 */
  if (!bVar1) {
                    /* catch() { ... } // from try @ 036bfb50 with catch @ 036bfbac */
                    /* catch() { ... } // from try @ 036bf8e0 with catch @ 036bfbb0 */
                    /* catch() { ... } // from try @ 036bf8b0 with catch @ 036bfbb4 */
    return;
  }
                    /* catch() { ... } // from try @ 036bfb58 with catch @ 036bfb94 */
  pNVar2 = (__this->fields).rightModel;
                    /* catch() { ... } // from try @ 036bf9f0 with catch @ 036bfb98 */
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
                    /* catch() { ... } // from try @ 036bf9c0 with catch @ 036bfb9c */
                    /* catch() { ... } // from try @ 036bfb54 with catch @ 036bfba0 */
                    /* catch() { ... } // from try @ 036bf968 with catch @ 036bfba4 */
                    /* catch() { ... } // from try @ 036bf938 with catch @ 036bfba8 */
    Nekki_SF2_GUI_Fight_ScreenModel__RemoveCombo(pNVar2,(MethodInfo *)0x0);
    return;
  }
LAB_036bfbb8:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036bfac8 with catch @ 036bfbb8 */
  FUN_01bab8c8();
}

