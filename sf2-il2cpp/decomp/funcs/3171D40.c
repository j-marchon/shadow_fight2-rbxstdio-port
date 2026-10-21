// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$Hide @ RVA 0x3171D40

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Hide
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *pMVar2;
  UnityEngine_GameObject_o *pUVar3;
  GCIFMNHADDF_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  BackKeyManager_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this_02;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this_03;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *extraout_x0;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar4;
  EEOMEMBBGNA_o *__this_04;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE_00;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_05;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_06;
  System_Action_EOLFEKNCPLM__o **ppSVar5;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar6;
  
  pMVar2 = (MethodInfo *)__this;
  if ((DAT_04566931 & 1) == 0) {
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_GGOICDIOIIK__);
    pMVar2 = (MethodInfo *)
             FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_LANNHNJHOLM__);
    DAT_04566931 = 1;
  }
  bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive(pMVar2);
  if (!bVar1) {
    return;
  }
  pUVar3 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pMVar2 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__HOIIHIFOMGO(__this,true,pMVar2);
    __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                  thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (GCIFMNHADDF_o *)0x0) {
      GCIFMNHADDF__JNDNMPDMDGB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_01 = BackKeyManager__get_Instance((MethodInfo *)0x0);
      if (__this_01 != (BackKeyManager_o *)0x0) {
        BackKeyManager__RemoveBackKeyController(__this_01,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0)
        ;
        __this_02 = (__this->fields)._screen;
        if (__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__OnHide(__this_02,(MethodInfo *)0x0);
          if (DAT_04565b84 == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
            DAT_04565b84 = '\x01';
          }
          pNVar6 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField
          ;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar2 = (MethodInfo *)0x0;
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          __this_03 = (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)(ulong)bVar1;
          if ((bVar1) && ((__this->fields).IMCAMDBEHMH != false)) {
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar6 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                     _JPDNDPEAJAL_k__BackingField;
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pNVar6 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03272068;
            pMVar2 = (MethodInfo *)0x0;
            Nekki_SF2_GUI_Menu_MainMenu__RestoreParentAndTryShowScroll
                      (pNVar6,pUVar3,(MethodInfo *)0x0);
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar6 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                     _JPDNDPEAJAL_k__BackingField;
            if (pNVar6 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03272068;
            Nekki_SF2_GUI_Menu_MainMenu__Show(pNVar6,(MethodInfo *)0x0);
            (__this->fields).IMCAMDBEHMH = false;
            __this_03 = extraout_x0;
          }
          Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__FKOGCHJKFGB(__this_03,true,pMVar2);
          if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->HasEverShownChat
              != false) {
            if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
            if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) goto LAB_03272068;
            (*(pNVar4->klass->vtable)._20_Show.methodPtr)
                      (pNVar4,(pNVar4->klass->vtable)._20_Show.method);
          }
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_04 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
          CJNHFNHJHPE_00 =
               (System_Action_OJEHKJHEBID__o *)
               thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_04 != (EEOMEMBBGNA_o *)0x0) {
            EEOMEMBBGNA__OKAMOFKHOLK(__this_04,CJNHFNHJHPE_00,(MethodInfo *)0x0);
            ppSVar5 = &(__this->fields).BADMDODBKLB;
            *ppSVar5 = (System_Action_EOLFEKNCPLM__o *)0x0;
            thunk_FUN_01c20e04(ppSVar5,0);
            (__this->fields).PMKMIDBNMOE = -1;
            __this_05 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance
                                  ((MethodInfo *)0x0);
            if (__this_05 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_DialogCanvasController__Show(__this_05,(MethodInfo *)0x0);
              __this_06 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
              if (__this_06 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests
                          (__this_06,0x4a,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03272068:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

