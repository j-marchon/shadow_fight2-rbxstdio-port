// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$remove_OnFightBtnClick @ RVA 0x30E26D4

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__remove_OnFightBtnClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,
               System_Action_RaidViewContainer__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidViewContainer__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidViewContainer__o *pSVar5;
  System_Action_RaidViewContainer__o **ppSVar6;
  System_Action_RaidViewContainer__o *source;
  
  if ((DAT_045663c2 & 1) == 0) {
                    /* try { // try from 031e26fc to 032e2703 has its CatchHandler @ 031e27e0 */
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
    DAT_045663c2 = 1;
  }
  ppSVar6 = &(__this->fields).FCHKBFCNOJL;
  source = *ppSVar6;
  do {
                    /* try { // try from 031e2718 to 032e271b has its CatchHandler @ 031e2734 */
                    /* try { // try from 031e271c to 032e2757 has its CatchHandler @ 031e21ec */
                    /* catch() { ... } // from try @ 031e2648 with catch @ 031e2720 */
                    /* catch() { ... } // from try @ 031e260c with catch @ 031e2724 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<RaidViewContainer>_TypeInfo;
                    /* catch() { ... } // from try @ 031e26a8 with catch @ 031e2728 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 031e25dc with catch @ 031e272c */
                    /* catch() { ... } // from try @ 031e25a0 with catch @ 031e2730 */
                    /* catch() { ... } // from try @ 031e2718 with catch @ 031e2734 */
                    /* catch() { ... } // from try @ 031e252c with catch @ 031e2738 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidViewContainer>_TypeInfo);
                    /* catch() { ... } // from try @ 031e2570 with catch @ 031e273c */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidViewContainer__o *)FUN_01c07368(ppSVar6,lVar4,source);
                    /* try { // try from 031e2758 to 032e275b has its CatchHandler @ 031e27c4 */
    bVar2 = source != pSVar5;
    source = pSVar5;
                    /* try { // try from 031e275c to 032e2797 has its CatchHandler @ 031e21ec */
  } while (bVar2);
  return;
}

