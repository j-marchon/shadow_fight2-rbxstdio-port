// FEPCHKMAIBL$$POBKBKBKBEM @ RVA 0x32C4554

void FEPCHKMAIBL__POBKBKBKBEM(MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4490 with catch @ 033c4554
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c44c4 with catch @ 033c4558
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4478 with catch @ 033c455c
                        */
  __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 033c456c to 034c456f has its CatchHandler @ 033c4594 */
                    /* try { // try from 033c4570 to 034c459b has its CatchHandler @ 033c439c */
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this,0x3a,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

