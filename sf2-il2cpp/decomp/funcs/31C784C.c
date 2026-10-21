// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$add_OnSelectedCellAction @ RVA 0x31C784C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__add_OnSelectedCellAction
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               System_Action_BattleRaidCell__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BattleRaidCell__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BattleRaidCell__o *pSVar5;
  System_Action_BattleRaidCell__o **ppSVar6;
  System_Action_BattleRaidCell__o *a;
  
                    /* try { // try from 032c7854 to 033c785b has its CatchHandler @ 032c7ae8 */
                    /* try { // try from 032c7864 to 033c786b has its CatchHandler @ 032c7b14 */
                    /* try { // try from 032c786c to 033c787b has its CatchHandler @ 032c7adc */
  if ((DAT_04566c40 & 1) == 0) {
    FUN_01bab630(&System_Action<BattleRaidCell>_TypeInfo);
    DAT_04566c40 = 1;
  }
                    /* try { // try from 032c7884 to 033c788b has its CatchHandler @ 032c7aec */
  ppSVar6 = &(__this->fields).IBOMDDIAHOH;
  a = *ppSVar6;
  do {
                    /* try { // try from 032c7894 to 033c789b has its CatchHandler @ 032c7af4 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<BattleRaidCell>_TypeInfo;
                    /* try { // try from 032c78a0 to 033c78a7 has its CatchHandler @ 032c7b28 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 032c78b0 to 033c78b7 has its CatchHandler @ 032c7af0 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BattleRaidCell>_TypeInfo);
                    /* try { // try from 032c78b8 to 033c78c7 has its CatchHandler @ 032c7ae4 */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 032c78cc to 033c78eb has its CatchHandler @ 032c7b38 */
    pSVar5 = (System_Action_BattleRaidCell__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* try { // try from 032c78ec to 033c7acb has its CatchHandler @ 032c7344 */
  return;
}

