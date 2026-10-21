// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$add_OnRoleDown @ RVA 0x311556C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__add_OnRoleDown
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
  
                    /* try { // try from 03215570 to 03315577 has its CatchHandler @ 03215578 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0321555c with catch @ 03215578
                       catch(type#2 @ 00000000) { ... } // from try @ 03215570 with catch @ 03215578
                        */
  if ((DAT_045665a9 & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_045665a9 = 1;
  }
  ppSVar6 = &(__this->fields).EKPABHKOHLJ;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

