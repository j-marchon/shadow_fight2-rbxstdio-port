// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$OnScroll @ RVA 0x31C6D6C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__OnScroll
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *IKMIAOJNAEA,MethodInfo *method)

{
  byte bVar1;
  MethodInfo *method_00;
  System_Action_BattleRaidCell__o *pSVar2;
  
                    /* try { // try from 032c6d78 to 033c6d7f has its CatchHandler @ 032c7254 */
  if ((DAT_04566c39 & 1) == 0) {
                    /* try { // try from 032c6d90 to 033c6d97 has its CatchHandler @ 032c7260 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo);
    DAT_04566c39 = 1;
  }
                    /* try { // try from 032c6d9c to 033c6da3 has its CatchHandler @ 032c7250 */
  if (IKMIAOJNAEA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* try { // try from 032c6db4 to 033c6dbb has its CatchHandler @ 032c7274 */
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032c6dbc to 033c6dcf has its CatchHandler @ 032c7244 */
    if ((IKMIAOJNAEA->klass->_2).naturalAligment < bVar1) {
      IKMIAOJNAEA = (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
    }
    else {
                    /* try { // try from 032c6dd0 to 033c6ddb has its CatchHandler @ 032c725c */
      if ((IKMIAOJNAEA->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo) {
        IKMIAOJNAEA = (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
      }
    }
  }
  pSVar2 = (__this->fields).IBOMDDIAHOH;
  if (pSVar2 == (System_Action_BattleRaidCell__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 032c6dec to 033c6def has its CatchHandler @ 032c71f0 */
  method_00 = (MethodInfo *)(pSVar2->fields).super.super.method;
  (*(code *)(pSVar2->fields).super.super.invoke_impl)
            ((pSVar2->fields).super.super.method_code,IKMIAOJNAEA);
                    /* try { // try from 032c6e04 to 033c6e0b has its CatchHandler @ 032c7220 */
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__EJOCEINJHFN
            (__this,(Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)IKMIAOJNAEA,method_00);
  return;
}

