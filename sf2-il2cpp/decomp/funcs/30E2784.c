// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$add_OnForceClose @ RVA 0x30E2784

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__add_OnForceClose
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,
               System_Action_RaidViewContainer__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidViewContainer__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidViewContainer__o *pSVar5;
  System_Action_RaidViewContainer__o **ppSVar6;
  System_Action_RaidViewContainer__o *a;
  
                    /* try { // try from 031e2798 to 032e27ab has its CatchHandler @ 031e2850 */
  if ((DAT_045663c3 & 1) == 0) {
                    /* try { // try from 031e27ac to 032e27af has its CatchHandler @ 031e21ec */
                    /* try { // try from 031e27b0 to 032e27b3 has its CatchHandler @ 031e27d4 */
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
                    /* try { // try from 031e27b4 to 032e27bb has its CatchHandler @ 031e27ec */
    DAT_045663c3 = 1;
  }
                    /* try { // try from 031e27bc to 032e27c3 has its CatchHandler @ 031e27d0 */
  ppSVar6 = &(__this->fields).CKNOFAMLBDE;
                    /* catch() { ... } // from try @ 031e2758 with catch @ 031e27c4
                       try { // try from 031e27c4 to 032e2807 has its CatchHandler @ 031e21ec */
  a = *ppSVar6;
  do {
                    /* catch() { ... } // from try @ 031e27bc with catch @ 031e27d0 */
                    /* catch() { ... } // from try @ 031e27b0 with catch @ 031e27d4 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<RaidViewContainer>_TypeInfo;
                    /* catch() { ... } // from try @ 031e2510 with catch @ 031e27d8 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 031e24a0 with catch @ 031e27dc */
                    /* catch() { ... } // from try @ 031e26fc with catch @ 031e27e0 */
                    /* catch() { ... } // from try @ 031e2484 with catch @ 031e27e4 */
                    /* catch() { ... } // from try @ 031e24dc with catch @ 031e27e8 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidViewContainer>_TypeInfo);
                    /* catch() { ... } // from try @ 031e27b4 with catch @ 031e27ec */
      if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 031e2808 with catch @ 031e282c */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidViewContainer__o *)FUN_01c07368(ppSVar6,lVar4,a);
                    /* try { // try from 031e2808 to 032e280b has its CatchHandler @ 031e282c */
    bVar2 = a != pSVar5;
    a = pSVar5;
                    /* try { // try from 031e280c to 032e2833 has its CatchHandler @ 031e21ec */
  } while (bVar2);
  return;
}

