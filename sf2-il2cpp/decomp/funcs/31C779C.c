// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$remove_OnSelectedCellAction @ RVA 0x31C779C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__remove_OnSelectedCellAction
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               System_Action_BattleRaidCell__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BattleRaidCell__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BattleRaidCell__o *pSVar5;
  System_Action_BattleRaidCell__o **ppSVar6;
  System_Action_BattleRaidCell__o *source;
  
                    /* try { // try from 032c77a8 to 033c77af has its CatchHandler @ 032c7afc */
                    /* try { // try from 032c77b0 to 033c77bf has its CatchHandler @ 032c7b20 */
  if ((DAT_04566c3f & 1) == 0) {
                    /* try { // try from 032c77c4 to 033c77e3 has its CatchHandler @ 032c7b44 */
    FUN_01bab630(&System_Action<BattleRaidCell>_TypeInfo);
    DAT_04566c3f = 1;
  }
  ppSVar6 = &(__this->fields).IBOMDDIAHOH;
  source = *ppSVar6;
  do {
                    /* try { // try from 032c77e4 to 033c7807 has its CatchHandler @ 032c7b34 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<BattleRaidCell>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BattleRaidCell>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032c7848 to 033c784f has its CatchHandler @ 032c7af8 */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_BattleRaidCell__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* try { // try from 032c782c to 033c7833 has its CatchHandler @ 032c7b1c */
                    /* try { // try from 032c7838 to 033c783f has its CatchHandler @ 032c7ae0 */
  return;
}

