// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$add_OnFightBtnClick @ RVA 0x30E1D2C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__add_OnFightBtnClick
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
  
  if ((DAT_045663b7 & 1) == 0) {
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
                    /* try { // try from 031e1d5c to 032e1d5f has its CatchHandler @ 031e1d98 */
                    /* try { // try from 031e1d60 to 032e1d63 has its CatchHandler @ 031e1d94 */
    DAT_045663b7 = 1;
  }
                    /* try { // try from 031e1d64 to 032e1d67 has its CatchHandler @ 031e1d8c */
  ppSVar6 = &(__this->fields).FCHKBFCNOJL;
                    /* try { // try from 031e1d68 to 032e1d6b has its CatchHandler @ 031e19a8 */
                    /* try { // try from 031e1d6c to 032e1d6f has its CatchHandler @ 031e1d7c */
  a = *ppSVar6;
  do {
                    /* try { // try from 031e1d70 to 032e1dbb has its CatchHandler @ 031e19a8 */
                    /* catch() { ... } // from try @ 031e1c9c with catch @ 031e1d78 */
                    /* catch() { ... } // from try @ 031e1d6c with catch @ 031e1d7c */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<RaidViewContainer>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 031e1c30 with catch @ 031e1da0 */
      lVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 031e1c8c with catch @ 031e1d88 */
                    /* catch() { ... } // from try @ 031e1d64 with catch @ 031e1d8c */
                    /* catch() { ... } // from try @ 031e1c84 with catch @ 031e1d90 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidViewContainer>_TypeInfo);
                    /* catch() { ... } // from try @ 031e1d60 with catch @ 031e1d94 */
                    /* catch() { ... } // from try @ 031e1d5c with catch @ 031e1d98 */
      if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 031e1dbc with catch @ 031e1dd4 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* catch() { ... } // from try @ 031e1bd4 with catch @ 031e1da4 */
    pSVar5 = (System_Action_RaidViewContainer__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* try { // try from 031e1dbc to 032e1dbf has its CatchHandler @ 031e1dd4 */
  return;
}

