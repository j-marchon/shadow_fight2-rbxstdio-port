// Nekki.SF2.GUI.Pvp.PhaseBox$$ShowPhaseList @ RVA 0x32D8230

void Nekki_SF2_GUI_Pvp_PhaseBox__ShowPhaseList
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Coroutine_o **ppUVar2;
  
  if ((DAT_045675a0 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseBox_TypeInfo);
    DAT_045675a0 = 1;
  }
  if ((__this->fields).NLPOEKINGJI != false) {
    return;
  }
  if (Nekki_SF2_GUI_Pvp_PhaseBox_TypeInfo->static_fields->ENKENPPFHPE == false) {
    Nekki_SF2_GUI_Pvp_PhaseBox_TypeInfo->static_fields->ENKENPPFHPE = true;
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x40,(MethodInfo *)0x0);
  }
  ppUVar2 = &(__this->fields).CDABKLLENPE;
  pUVar1 = *ppUVar2;
  method_00 = (MethodInfo *)0x0;
  if (pUVar1 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar1,(MethodInfo *)0x0);
    method_00 = extraout_x1;
  }
  routine = Nekki_SF2_GUI_Pvp_PhaseBox__BIBCFLMBMIG(__this,method_00);
  pUVar1 = UnityEngine_MonoBehaviour__StartCoroutine
                     ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  (__this->fields).CDABKLLENPE = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  return;
}

