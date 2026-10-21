// Nekki.SF2.GUI.Fight.EndFightScreen$$EIDLDGJLALI @ RVA 0x2FEFD2C

void Nekki_SF2_GUI_Fight_EndFightScreen__EIDLDGJLALI
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *method_00;
  
  if ((DAT_04565a59 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565a59 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ClearStack
              (pNVar2,(System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (pNVar2,0x37,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      Nekki_SF2_GUI_Fight_EndFightScreen__INHOOPJHFPC(__this,method_00);
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__NEDONKJJDFN((MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

