// Nekki.SF2.GUI.Pvp.SelectModule$$GKHAKLDEIJI @ RVA 0x31786B0

void Nekki_SF2_GUI_Pvp_SelectModule__GKHAKLDEIJI
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 uVar1;
  NLIDHEAMLMC_o *pNVar2;
  Nekki_SF2_GUI_Pvp_SelectModule_c *pNVar3;
  ulong uVar4;
  
                    /* catch() { ... } // from try @ 03278694 with catch @ 032786b0
                       catch() { ... } // from try @ 0327869c with catch @ 032786b0 */
  uVar4 = (ulong)(uint)NAIJBCMHBFK;
                    /* catch() { ... } // from try @ 03278690 with catch @ 032786b4
                       catch() { ... } // from try @ 03278698 with catch @ 032786b4 */
                    /* catch() { ... } // from try @ 0327868c with catch @ 032786b8 */
                    /* catch() { ... } // from try @ 03278688 with catch @ 032786bc */
                    /* catch() { ... } // from try @ 03278650 with catch @ 032786c0 */
                    /* catch() { ... } // from try @ 03278504 with catch @ 032786c4 */
  if ((DAT_04566967 & 1) == 0) {
                    /* try { // try from 032786dc to 033786df has its CatchHandler @ 03278700 */
                    /* try { // try from 032786e0 to 03378707 has its CatchHandler @ 032783f4 */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,uVar4);
    DAT_04566967 = 1;
    uVar4 = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    uVar4 = extraout_x1_00;
  }
                    /* catch() { ... } // from try @ 032786dc with catch @ 03278700 */
                    /* try { // try from 03278708 to 0337871b has its CatchHandler @ 0327877c */
  if (DAT_04565e5c == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,uVar4);
                    /* catch() { ... } // from try @ 03278634 with catch @ 0327871c
                       try { // try from 0327871c to 03378733 has its CatchHandler @ 032783f4 */
    DAT_04565e5c = '\x01';
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03278734 to 03378737 has its CatchHandler @ 03278758 */
                    /* try { // try from 03278738 to 0337875f has its CatchHandler @ 032783f4 */
  pNVar2 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  if (pNVar2 != (NLIDHEAMLMC_o *)0x0) {
    uVar4 = (ulong)((pNVar2->fields).OFFPEKODFPE != OPHMGAKOJLP);
    if (AAJGEHHPMGH == 0) {
      pNVar3 = __this->klass;
      uVar1 = 1;
    }
    else {
      if (AAJGEHHPMGH != 1) {
        return;
      }
                    /* catch() { ... } // from try @ 03278734 with catch @ 03278758 */
                    /* try { // try from 03278760 to 03378767 has its CatchHandler @ 0327877c */
                    /* try { // try from 03278768 to 03378773 has its CatchHandler @ 032783f4 */
      (*(__this->klass->vtable)._16_COFBGCFPCPM.methodPtr)
                (__this,uVar4,(__this->klass->vtable)._16_COFBGCFPCPM.method);
      pNVar3 = __this->klass;
                    /* try { // try from 03278774 to 0337877b has its CatchHandler @ 0327877c */
                    /* catch() { ... } // from try @ 03278708 with catch @ 0327877c
                       catch() { ... } // from try @ 03278760 with catch @ 0327877c
                       catch() { ... } // from try @ 03278774 with catch @ 0327877c */
      uVar1 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x032787a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar3->vtable)._14_FNLHNDOFOIG.methodPtr)
              (__this,uVar4,uVar1,(pNVar3->vtable)._14_FNLHNDOFOIG.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

