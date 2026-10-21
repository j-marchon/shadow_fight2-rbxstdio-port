// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$Show @ RVA 0x317206C

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Show
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  WideScreenController_o *__this_01;
  BackKeyManager_o *__this_02;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_03;
  GCIFMNHADDF_o *__this_04;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_05;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  pMVar2 = (MethodInfo *)__this;
  if ((DAT_0456692d & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    pMVar2 = (MethodInfo *)
             FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_LANNHNJHOLM__);
    DAT_0456692d = 1;
  }
  bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive(pMVar2);
  if (bVar1) {
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Hide(__this,method_00);
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pMVar2 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    (__this->fields).IMCAMDBEHMH = false;
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IIFBHJCLOPC(__this,method_01);
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__HOIIHIFOMGO(__this,false,pMVar2);
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__GIENGNEGHPJ(__this,HEHMPFLAEGE,pMVar2);
    __this_01 = (__this->fields)._wide;
    if (__this_01 != (WideScreenController_o *)0x0) {
      WideScreenController__Run(__this_01,(MethodInfo *)0x0);
      __this_02 = BackKeyManager__get_Instance((MethodInfo *)0x0);
      if (__this_02 != (BackKeyManager_o *)0x0) {
        BackKeyManager__AddBackKeyController(__this_02,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
        __this_03 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
        if (__this_03 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_DialogCanvasController__Hide(__this_03,(MethodInfo *)0x0);
          __this_04 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
          CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                        thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_04 != (GCIFMNHADDF_o *)0x0) {
            GCIFMNHADDF__EOAPHMAFKKP(__this_04,CJNHFNHJHPE,(MethodInfo *)0x0);
            __this_05 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (__this_05 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
              Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this_05,0x49,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

