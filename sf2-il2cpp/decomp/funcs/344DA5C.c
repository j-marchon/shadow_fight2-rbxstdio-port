// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$IDJJMFEFODC @ RVA 0x344DA5C

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__IDJJMFEFODC
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  ACHLOMELAJE_o *pAVar1;
  int64_t iVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04568283 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_04568283 = 1;
  }
  pAVar1 = (__this->fields).OKNKKHGBECG;
                    /* try { // try from 0354da94 to 0364da9b has its CatchHandler @ 0354dae4 */
                    /* try { // try from 0354da9c to 0364da9f has its CatchHandler @ 0354dad8 */
                    /* try { // try from 0354daa0 to 0364daa3 has its CatchHandler @ 0354dac4 */
  if ((pAVar1 == (ACHLOMELAJE_o *)0x0) ||
     (iVar2 = ACHLOMELAJE__IMLCNMCBEEN(pAVar1,(MethodInfo *)0x0),
     iVar2 == (__this->fields).DIIHKNHKKIJ)) {
                    /* try { // try from 0354daa4 to 0364daa7 has its CatchHandler @ 0354d590 */
                    /* try { // try from 0354daa8 to 0364daab has its CatchHandler @ 0354dac0 */
                    /* try { // try from 0354daac to 0364daaf has its CatchHandler @ 0354dab8 */
    return;
  }
                    /* try { // try from 0354dab0 to 0364daf3 has its CatchHandler @ 0354d590 */
  pAVar1 = (__this->fields).OKNKKHGBECG;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
                    /* catch() { ... } // from try @ 0354daac with catch @ 0354dab8 */
                    /* catch() { ... } // from try @ 0354d99c with catch @ 0354dabc */
    iVar2 = ACHLOMELAJE__IMLCNMCBEEN(pAVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0354daa8 with catch @ 0354dac0 */
    (__this->fields).DIIHKNHKKIJ = iVar2;
                    /* catch() { ... } // from try @ 0354daa0 with catch @ 0354dac4 */
                    /* catch() { ... } // from try @ 0354d964 with catch @ 0354dac8 */
                    /* catch() { ... } // from try @ 0354d978 with catch @ 0354dacc */
                    /* catch() { ... } // from try @ 0354d934 with catch @ 0354dad0 */
    pNVar4 = (__this->fields)._infoCoins;
                    /* catch() { ... } // from try @ 0354d944 with catch @ 0354dad4 */
                    /* catch() { ... } // from try @ 0354da9c with catch @ 0354dad8 */
                    /* catch() { ... } // from try @ 0354d8cc with catch @ 0354dadc */
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0354d870 with catch @ 0354dae0 */
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 0354da94 with catch @ 0354dae4 */
    pSVar3 = BJFCCEEPHOF__POMAAOILGAL(iVar2,(MethodInfo *)0x0);
    if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0354daf4 to 0364daf7 has its CatchHandler @ 0354db0c */
                    /* catch() { ... } // from try @ 0354daf4 with catch @ 0354db0c */
                    /* WARNING: Could not recover jumptable at 0x0354db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                (pNVar4,pSVar3,(pNVar4->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0354db14 to 0364db7b has its CatchHandler @ 0354db90 */
  FUN_01bab8c8();
}

