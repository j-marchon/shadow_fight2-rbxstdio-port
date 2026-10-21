// Nekki.SF2.GUI.Dialogs.NewsDialog$$LAIDOAAOECP @ RVA 0x350CFD0

void Nekki_SF2_GUI_Dialogs_NewsDialog__LAIDOAAOECP
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  PKHMIGFEJCL_o *pPVar3;
  System_String_o *url;
  
  if ((DAT_045688d6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_045688d6 = 1;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((__this->fields).BPOCMBDOBOC,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  url = (__this->fields).BPOCMBDOBOC;
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
    (pPVar3->fields).JEMIJCDAKLB = (__this->fields).BPOCMBDOBOC;
    thunk_FUN_01c20e04();
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x50,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

