// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$MFIEPLJIGNP @ RVA 0x34A6834

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__MFIEPLJIGNP
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this_00;
  Nekki_SF2_GUI_InfoButton_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this_02;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar2;
  
                    /* try { // try from 035a6834 to 036a6863 has its CatchHandler @ 035a66a8 */
  if ((DAT_045684f4 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 035a6830 with catch @ 035a685c */
    DAT_045684f4 = 1;
  }
  pJVar2 = (__this->fields).PPJALGIONOI;
                    /* try { // try from 035a6864 to 036a686b has its CatchHandler @ 035a6880 */
                    /* try { // try from 035a686c to 036a6877 has its CatchHandler @ 035a66a8 */
  if ((pJVar2 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) &&
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pJVar2->fields).super.EJEPJCHIGFE,(MethodInfo *)0x0), !bVar1
     )) {
                    /* try { // try from 035a6884 to 036a6a23 has its CatchHandler @ 035a6884
                       catch() { ... } // from try @ 035a6884 with catch @ 035a6884
                       catch() { ... } // from try @ 035a6be8 with catch @ 035a6884
                       catch() { ... } // from try @ 035a6c84 with catch @ 035a6884
                       catch() { ... } // from try @ 035a6ce8 with catch @ 035a6884
                       catch() { ... } // from try @ 035a6d28 with catch @ 035a6884 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar2 = (__this->fields).PPJALGIONOI;
    if ((pJVar2 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) &&
       (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
       __this_00 != (ACHLOMELAJE_o *)0x0)) {
      ACHLOMELAJE__PLEHMNAALGE(__this_00,(pJVar2->fields).super.JIJLBFGKNJK,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._hintDescriptionButton;
      if (__this_01 != (Nekki_SF2_GUI_InfoButton_o *)0x0) {
        Nekki_SF2_GUI_InfoButton__set_HighlightEnabled(__this_01,false,(MethodInfo *)0x0);
        __this_02 = (__this->fields).EKNAKFAPEGK;
        if (__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ShowConsumableHint
                    (__this_02,(__this->fields).PPJALGIONOI,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 035a6878 to 036a687f has its CatchHandler @ 035a6880 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a6864 with catch @ 035a6880
                       catch(type#2 @ 00000000) { ... } // from try @ 035a6878 with catch @ 035a6880
                        */
  return;
}

