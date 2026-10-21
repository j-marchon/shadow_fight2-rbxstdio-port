// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_IsTopSubItemSelected @ RVA 0x34A8A54

bool Nekki_SF2_GUI_Profile_UserPerksPanel__get_IsTopSubItemSelected
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  Nekki_SF2_GUI_TableViewCell_o *pNVar3;
  
                    /* try { // try from 035a8a58 to 036a8a5b has its CatchHandler @ 035a8ac8 */
                    /* try { // try from 035a8a60 to 036a8a63 has its CatchHandler @ 035a8ac4 */
                    /* try { // try from 035a8a68 to 036a8a6b has its CatchHandler @ 035a8aa8 */
  if ((DAT_0456850d & 1) == 0) {
                    /* try { // try from 035a8a70 to 036a8a73 has its CatchHandler @ 035a8a94 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035a8a78 to 036a8a7b has its CatchHandler @ 035a8a80 */
                    /* try { // try from 035a8a7c to 036a8af3 has its CatchHandler @ 035a81ac */
    DAT_0456850d = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 035a8a78 with catch @ 035a8a80 */
  pNVar2 = (__this->fields)._TableView;
                    /* catch() { ... } // from try @ 035a8920 with catch @ 035a8a84 */
  if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* catch() { ... } // from try @ 035a8940 with catch @ 035a8a88 */
                    /* catch() { ... } // from try @ 035a8958 with catch @ 035a8a8c */
                    /* catch() { ... } // from try @ 035a8898 with catch @ 035a8a90 */
    pNVar3 = (pNVar2->fields)._LDAHBFIIBJJ_k__BackingField;
                    /* catch() { ... } // from try @ 035a8a70 with catch @ 035a8a94 */
                    /* catch() { ... } // from try @ 035a88b8 with catch @ 035a8a98 */
                    /* catch() { ... } // from try @ 035a8888 with catch @ 035a8a9c */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035a8868 with catch @ 035a8aa0 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
                    /* catch() { ... } // from try @ 035a88c8 with catch @ 035a8aa4 */
                    /* catch() { ... } // from try @ 035a8a68 with catch @ 035a8aa8 */
                    /* catch() { ... } // from try @ 035a887c with catch @ 035a8aac */
                    /* catch() { ... } // from try @ 035a8858 with catch @ 035a8ab0 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 035a88e8 with catch @ 035a8ab4 */
    if (bVar1) {
                    /* catch() { ... } // from try @ 035a8900 with catch @ 035a8ab8 */
      pNVar2 = (__this->fields)._TableView;
                    /* catch() { ... } // from try @ 035a8840 with catch @ 035a8abc */
                    /* catch() { ... } // from try @ 035a8820 with catch @ 035a8ac0 */
                    /* catch() { ... } // from try @ 035a8a60 with catch @ 035a8ac4 */
      if ((pNVar2 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (pNVar3 = (pNVar2->fields)._LDAHBFIIBJJ_k__BackingField,
         pNVar3 == (Nekki_SF2_GUI_TableViewCell_o *)0x0)) goto LAB_035a8ae8;
                    /* catch() { ... } // from try @ 035a8a58 with catch @ 035a8ac8 */
                    /* catch() { ... } // from try @ 035a8834 with catch @ 035a8acc */
      bVar1 = (pNVar3->fields).FIMCNHGPCNA == 0;
                    /* catch() { ... } // from try @ 035a8810 with catch @ 035a8ad0 */
                    /* catch() { ... } // from try @ 035a87d4 with catch @ 035a8ad4 */
    }
    else {
                    /* catch() { ... } // from try @ 035a8778 with catch @ 035a8ad8 */
      bVar1 = false;
    }
    return bVar1;
  }
LAB_035a8ae8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

