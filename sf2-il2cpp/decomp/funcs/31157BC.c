// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$remove_OnRoleDown @ RVA 0x31157BC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnRoleDown
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o **ppSVar6;
  System_Action_IDGOGBNEGAM__o *source;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215708 with catch @ 032157bc
                        */
                    /* try { // try from 032157cc to 033157cf has its CatchHandler @ 032157f4 */
                    /* try { // try from 032157d0 to 033157fb has its CatchHandler @ 0321563c */
  if ((DAT_045665ad & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_045665ad = 1;
  }
                    /* catch() { ... } // from try @ 032157cc with catch @ 032157f4 */
  ppSVar6 = &(__this->fields).EKPABHKOHLJ;
                    /* try { // try from 032157fc to 03315803 has its CatchHandler @ 03215818 */
  source = *ppSVar6;
  do {
                    /* try { // try from 03215804 to 0331580f has its CatchHandler @ 0321563c */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
                    /* try { // try from 03215810 to 03315817 has its CatchHandler @ 03215818 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032157fc with catch @ 03215818
                       catch(type#2 @ 00000000) { ... } // from try @ 03215810 with catch @ 03215818
                        */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

