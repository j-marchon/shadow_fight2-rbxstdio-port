// Nekki.SF2.Core.Quests.QuestsManager$$ScheduleAndRunQuests @ RVA 0x3300FB8

bool Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method
               )

{
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this,HIHCBMNGGEO,method);
  if ((bVar1) && ((__this->fields)._isRunActions == false)) {
    Nekki_SF2_Core_Quests_QuestsManager__KNCLEHBPCIN(__this,method_00);
  }
  return bVar1;
}

