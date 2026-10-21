// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$ShowAchievementMessage @ RVA 0x31D114C

void Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__ShowAchievementMessage
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *__this,
               KMJDCOABCCG_o *LFOOJOJHDFM,MethodInfo *method)

{
  Il2CppObject *__this_00;
  KIENAPHHHDI_o *__this_01;
  Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *pNVar1;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityEventBase_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_04;
  void **ppvVar2;
  UnityEngine_Events_UnityEvent_o *__this_05;
  
  if ((DAT_04566caa & 1) == 0) {
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_CBKNCKEJPGD_BIMMHDDABLF__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_CBKNCKEJPGD_TypeInfo)
    ;
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566caa = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(
                                Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_CBKNCKEJPGD_TypeInfo
                                );
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_01 = (__this->fields).BHKGNJNHGAP;
    if (__this_01 != (KIENAPHHHDI_o *)0x0) {
      pNVar1 = KIENAPHHHDI__EOHMFJFFFIN(__this_01,(MethodInfo *)0x0);
      ppvVar2 = &__this_00[1].monitor;
      *ppvVar2 = pNVar1;
      thunk_FUN_01c20e04(ppvVar2,pNVar1);
      if (*ppvVar2 != (UnityEngine_Component_o *)0x0) {
        __this_02 = UnityEngine_Component__get_transform(*ppvVar2,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_02,parent,false,(MethodInfo *)0x0);
          if (*ppvVar2 != (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *)0x0) {
            Nekki_SF2_GUI_Common_Achievements_AchievementMessage__set_Achievement
                      (*ppvVar2,LFOOJOJHDFM,(MethodInfo *)0x0);
            if ((*ppvVar2 != (void *)0x0) &&
               (__this_03 = *(UnityEngine_Events_UnityEventBase_o **)((long)*ppvVar2 + 0x50),
               __this_03 != (UnityEngine_Events_UnityEventBase_o *)0x0)) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners(__this_03,(MethodInfo *)0x0);
              if (*ppvVar2 != (void *)0x0) {
                __this_05 = *(UnityEngine_Events_UnityEvent_o **)((long)*ppvVar2 + 0x50);
                call = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_05 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_05,call,(MethodInfo *)0x0);
                  if ((*ppvVar2 != (UnityEngine_Component_o *)0x0) &&
                     (__this_04 = UnityEngine_Component__get_gameObject(*ppvVar2,(MethodInfo *)0x0),
                     __this_04 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(__this_04,true,(MethodInfo *)0x0);
                    if (*ppvVar2 != (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *)0x0) {
                      Nekki_SF2_GUI_Common_Achievements_AchievementMessage__StartAnimation
                                (*ppvVar2,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

