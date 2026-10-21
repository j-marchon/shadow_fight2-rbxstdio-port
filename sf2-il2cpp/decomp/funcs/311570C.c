// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$add_OnKick @ RVA 0x311570C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__add_OnKick
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o **ppSVar6;
  System_Action_IDGOGBNEGAM__o *a;
  
                    /* try { // try from 03215728 to 0331572f has its CatchHandler @ 032157b8 */
  if ((DAT_045665ac & 1) == 0) {
                    /* try { // try from 03215738 to 0331573f has its CatchHandler @ 032157a8 */
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_045665ac = 1;
  }
  ppSVar6 = &(__this->fields).GHKNFLCOBON;
                    /* try { // try from 0321574c to 03315753 has its CatchHandler @ 032157a4 */
  a = *ppSVar6;
  do {
                    /* try { // try from 03215754 to 03315797 has its CatchHandler @ 0321563c */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215798 with catch @ 032157b4
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215728 with catch @ 032157b8
                        */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
                    /* try { // try from 03215798 to 0331579b has its CatchHandler @ 032157b4 */
  } while (bVar2);
                    /* try { // try from 0321579c to 0331579f has its CatchHandler @ 032157ac */
                    /* try { // try from 032157a0 to 033157cb has its CatchHandler @ 0321563c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321574c with catch @ 032157a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215738 with catch @ 032157a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321579c with catch @ 032157ac
                        */
  return;
}

