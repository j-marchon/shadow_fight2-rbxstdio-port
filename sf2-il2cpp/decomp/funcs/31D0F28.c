// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$Create @ RVA 0x31D0F28

void Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__Create(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_Object_o *target;
  Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *pNVar2;
  
  if ((DAT_04566ca7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<AchievementMessagesManager>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10395);
    DAT_04566ca7 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo->static_fields->
           CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10395,Method_UnityEngine_Resources_Load<GameObject>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    target = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (target != (UnityEngine_Object_o *)0x0) {
      pNVar2 = (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *)
               UnityEngine_GameObject__GetComponent<object>
                         ((UnityEngine_GameObject_o *)target,
                          Method_UnityEngine_GameObject_GetComponent<AchievementMessagesManager>__);
      Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo->static_fields->
      CBDMFFMCJBK = pNVar2;
      thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo->
                         static_fields,pNVar2);
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

