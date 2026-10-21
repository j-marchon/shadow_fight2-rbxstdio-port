// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$Awake @ RVA 0x31D10E4

void Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__Awake
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *__this,
               MethodInfo *method)

{
  KIENAPHHHDI_o *__this_00;
  MethodInfo *extraout_x1;
  KIENAPHHHDI_o **ppKVar1;
  UnityEngine_GameObject_o *MPBBJAMGECF;
  
  if ((DAT_04566ca9 & 1) == 0) {
    FUN_01bab630(&KIENAPHHHDI_TypeInfo);
    DAT_04566ca9 = 1;
    method = extraout_x1;
  }
  MPBBJAMGECF = (__this->fields)._messagePrefab;
  __this_00 = (KIENAPHHHDI_o *)thunk_FUN_01bda818(KIENAPHHHDI_TypeInfo,method);
  KIENAPHHHDI___ctor(__this_00,MPBBJAMGECF,(MethodInfo *)0x0);
  ppKVar1 = &(__this->fields).BHKGNJNHGAP;
  *ppKVar1 = __this_00;
  thunk_FUN_01c20e04(ppKVar1,__this_00);
  return;
}

