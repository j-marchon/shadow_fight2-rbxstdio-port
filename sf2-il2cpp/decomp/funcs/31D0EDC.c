// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$get_Instance @ RVA 0x31D0EDC

FLHAOOHNCAL_o *
Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__get_Instance(MethodInfo *method)

{
  if ((DAT_04566ca6 & 1) == 0) {
    method = (MethodInfo *)
             FUN_01bab630(&Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo);
    DAT_04566ca6 = 1;
  }
  Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__Create(method);
  return (FLHAOOHNCAL_o *)
         Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo->static_fields->
         CBDMFFMCJBK;
}

