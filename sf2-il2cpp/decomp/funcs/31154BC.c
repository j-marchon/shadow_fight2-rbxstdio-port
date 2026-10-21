// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$remove_OnShowHintRole @ RVA 0x31154BC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnShowHintRole
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               System_Action_RectTransform__string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RectTransform__string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RectTransform__string__o *pSVar5;
  System_Action_RectTransform__string__o **ppSVar6;
  System_Action_RectTransform__string__o *source;
  
  if ((DAT_045665a8 & 1) == 0) {
    FUN_01bab630(&System_Action<RectTransform,_string>_TypeInfo);
    DAT_045665a8 = 1;
  }
  ppSVar6 = &(__this->fields).JDMBKBAKOFA;
                    /* try { // try from 032154f8 to 033154fb has its CatchHandler @ 03215500 */
                    /* try { // try from 032154fc to 0331551f has its CatchHandler @ 032153d8 */
  source = *ppSVar6;
  do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032154f8 with catch @ 03215500
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215484 with catch @ 03215504
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215498 with catch @ 03215508
                        */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<RectTransform,_string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 03215520 to 03315523 has its CatchHandler @ 0321554c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RectTransform,_string>_TypeInfo);
                    /* try { // try from 03215524 to 0331555b has its CatchHandler @ 032153d8 */
      if (lVar4 == 0) {
                    /* try { // try from 03215564 to 0331556f has its CatchHandler @ 032153d8 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RectTransform__string__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* catch() { ... } // from try @ 03215520 with catch @ 0321554c */
                    /* try { // try from 0321555c to 03315563 has its CatchHandler @ 03215578 */
  return;
}

