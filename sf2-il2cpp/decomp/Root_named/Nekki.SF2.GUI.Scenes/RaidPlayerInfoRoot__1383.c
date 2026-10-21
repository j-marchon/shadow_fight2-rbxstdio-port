// TypeDefIndex 1383
// Namespace: Nekki.SF2.GUI.Scenes
// public class RaidPlayerInfoRoot : MonoBehaviour, HAFLPBGEGCI
// Fields:
//   private RaidPlayerScreen _screen; // 0x20
//   private WideScreenController _wide; // 0x28
//   private SpriteRendererQuality _background; // 0x30
//   private long PMKMIDBNMOE; // 0x38
//   private bool IMCAMDBEHMH; // 0x40
//   private Action<EOLFEKNCPLM> BADMDODBKLB; // 0x48
//   private static RaidPlayerInfoRoot FFOLFLCMFCH; // 0x0
//   private bool IGIDKCCDBPK; // 0x50

// ===== private void NKKEKIKFFCJ(GLINEGMOOBM DKMMBMBMJBO)  [RVA 0x3171D3C]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$NKKEKIKFFCJ @ RVA 0x3171D3C

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__NKKEKIKFFCJ
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,GLINEGMOOBM_o *DKMMBMBMJBO,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *pMVar2;
  UnityEngine_GameObject_o *pUVar3;
  DialogsManager_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  BackKeyManager_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this_02;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this_03;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *extraout_x0;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar4;
  RaidClansManager_o *__this_04;
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
    __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                  thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (DialogsManager_o *)0x0) {
      DialogsManager__JNDNMPDMDGB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
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
          if (__this_04 != (RaidClansManager_o *)0x0) {
            RaidClansManager__OKAMOFKHOLK(__this_04,CJNHFNHJHPE_00,(MethodInfo *)0x0);
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


// ===== public void Show(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x317206C]
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
  DialogsManager_o *__this_04;
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
          __this_04 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
          CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                        thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_04 != (DialogsManager_o *)0x0) {
            DialogsManager__EOAPHMAFKKP(__this_04,CJNHFNHJHPE,(MethodInfo *)0x0);
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


// ===== private void GIENGNEGHPJ()  [RVA 0x3172720]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$GIENGNEGHPJ @ RVA 0x3172720

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__GIENGNEGHPJ
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  HJNDPNIMBBG_o *__this_01;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_02;
  NDPMLPGANCI_o *__this_03;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  
  if ((DAT_0456692e & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_NKKEKIKFFCJ__);
    DAT_0456692e = 1;
  }
  pUVar2 = (UnityEngine_Object_o *)
           UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DontDestroyOnLoad(pUVar2,(MethodInfo *)0x0);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7e == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7e = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
    if (__this_01 != (HJNDPNIMBBG_o *)0x0) {
      pUVar2 = (UnityEngine_Object_o *)HJNDPNIMBBG__JDHIIDFJMBM(__this_01,(MethodInfo *)0x0);
      bVar1 = UnityEngine_Object__op_Implicit(pUVar2,(MethodInfo *)0x0);
      if (bVar1) {
        __this_02 = (__this->fields)._background;
        if (__this_02 == (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) goto LAB_032728a0;
        Nekki_SF2_GUI_SpriteRendererQuality__ChangeSprite
                  (__this_02,(UnityEngine_Sprite_o *)pUVar2,(MethodInfo *)0x0);
      }
      __this_03 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                    thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_03 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__IIOPONEHEGP(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_032728a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnRefreshPlayer(Action<EOLFEKNCPLM> CJNHFNHJHPE)  [RVA 0x31728A4]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$remove_OnRefreshPlayer @ RVA 0x31728A4

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__remove_OnRefreshPlayer
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,
               System_Action_EOLFEKNCPLM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_EOLFEKNCPLM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_EOLFEKNCPLM__o *pSVar5;
  System_Action_EOLFEKNCPLM__o **ppSVar6;
  System_Action_EOLFEKNCPLM__o *source;
  
  if ((DAT_0456692f & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    DAT_0456692f = 1;
  }
  ppSVar6 = &(__this->fields).BADMDODBKLB;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<EOLFEKNCPLM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<EOLFEKNCPLM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_EOLFEKNCPLM__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static bool IsActive()  [RVA 0x31721A8]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$IsActive @ RVA 0x31721A8

bool Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *pNVar2;
  
  if ((DAT_04566930 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo);
    DAT_04566930 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH;
    if ((pNVar2 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) &&
       (__this = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== public void Hide()  [RVA 0x3171D40]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$Hide @ RVA 0x3171D40

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Hide
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *pMVar2;
  UnityEngine_GameObject_o *pUVar3;
  DialogsManager_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  BackKeyManager_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this_02;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this_03;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *extraout_x0;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar4;
  RaidClansManager_o *__this_04;
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
    __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                  thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (DialogsManager_o *)0x0) {
      DialogsManager__JNDNMPDMDGB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
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
          if (__this_04 != (RaidClansManager_o *)0x0) {
            RaidClansManager__OKAMOFKHOLK(__this_04,CJNHFNHJHPE_00,(MethodInfo *)0x0);
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


// ===== private void LANNHNJHOLM(BaseDialog LMEHKLFGEHI)  [RVA 0x3172A10]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$LANNHNJHOLM @ RVA 0x3172A10

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__LANNHNJHOLM
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,
               Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_00;
  DialogsManager_o *__this_01;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  
  if ((DAT_04566932 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_LANNHNJHOLM__);
    DAT_04566932 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_DialogCanvasController__Show(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03272a6c to 03372a73 has its CatchHandler @ 03272ad0 */
    __this_01 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03272a80 to 03372a8b has its CatchHandler @ 03272acc */
    CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                  thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
                    /* try { // try from 03272a8c to 03372ae7 has its CatchHandler @ 032729d8 */
    System_Action<object>___ctor();
    if (__this_01 != (DialogsManager_o *)0x0) {
      DialogsManager__JNDNMPDMDGB(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x3172AB8]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$OnDestroy @ RVA 0x3172AB8

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__OnDestroy
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03272a80 with catch @ 03272acc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03272a6c with catch @ 03272ad0
                        */
  if ((DAT_04566933 & 1) == 0) {
                    /* try { // try from 03272ae8 to 03372aeb has its CatchHandler @ 03272b14 */
                    /* try { // try from 03272aec to 03372b1b has its CatchHandler @ 032729d8 */
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_NKKEKIKFFCJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo);
    DAT_04566933 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03272ae8 with catch @ 03272b14 */
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Hide(__this,method);
                    /* try { // try from 03272b1c to 03372b23 has its CatchHandler @ 03272b38 */
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03272b24 to 03372b2f has its CatchHandler @ 032729d8 */
  CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
                    /* try { // try from 03272b30 to 03372b37 has its CatchHandler @ 03272b38 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03272b1c with catch @ 03272b38
                       catch(type#2 @ 00000000) { ... } // from try @ 03272b30 with catch @ 03272b38
                        */
  System_Action<object>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__JBFHBECEOAP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH =
         (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GIENGNEGHPJ(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x31725B8]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$GIENGNEGHPJ @ RVA 0x31725B8

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__GIENGNEGHPJ
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this_00;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar1;
  RaidClansManager_o *__this_02;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  GKLPDMLELJF_o *pGVar2;
  System_Action_EOLFEKNCPLM__o *pSVar3;
  
  if ((DAT_04566934 & 1) == 0) {
                    /* try { // try from 032725e0 to 033725e7 has its CatchHandler @ 03272694 */
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
                    /* try { // try from 032725e8 to 0337260f has its CatchHandler @ 032724b8 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
                    /* catch() { ... } // from try @ 032725b4 with catch @ 032725fc */
                    /* catch() { ... } // from try @ 032725a4 with catch @ 03272600 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_GGOICDIOIIK__);
    DAT_04566934 = 1;
  }
                    /* try { // try from 03272610 to 03372613 has its CatchHandler @ 03272688 */
                    /* try { // try from 03272614 to 0337264f has its CatchHandler @ 032724b8 */
  if ((HEHMPFLAEGE != (EOLFEKNCPLM_o *)0x0) &&
     (pGVar2 = (HEHMPFLAEGE->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) {
    __this_00 = (__this->fields)._screen;
    (__this->fields).PMKMIDBNMOE = (pGVar2->fields).ANAJGHJEEOC;
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__Init(__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
      (__this->fields).IGIDKCCDBPK = true;
      Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__FKOGCHJKFGB(__this_01,false,method_00);
                    /* try { // try from 03272650 to 03372653 has its CatchHandler @ 032726a0 */
                    /* try { // try from 03272654 to 0337265b has its CatchHandler @ 03272698 */
      if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
                    /* try { // try from 0327266c to 03372683 has its CatchHandler @ 03272714 */
                    /* try { // try from 03272684 to 033726c3 has its CatchHandler @ 032724b8 */
                    /* catch() { ... } // from try @ 03272610 with catch @ 03272688 */
        (*(pNVar1->klass->vtable)._17_Hide.methodPtr)
                  (pNVar1,(pNVar1->klass->vtable)._17_Hide.method);
                    /* catch() { ... } // from try @ 032725e0 with catch @ 03272694 */
                    /* catch() { ... } // from try @ 03272654 with catch @ 03272698 */
                    /* catch() { ... } // from try @ 03272584 with catch @ 0327269c */
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03272650 with catch @ 032726a0 */
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0327256c with catch @ 032726ac */
        CJNHFNHJHPE = (System_Action_OJEHKJHEBID__o *)
                      thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
                    /* try { // try from 032726c4 to 033726c7 has its CatchHandler @ 032726f0 */
                    /* try { // try from 032726c8 to 033726f7 has its CatchHandler @ 032724b8 */
        System_Action<object>___ctor();
        if (__this_02 != (RaidClansManager_o *)0x0) {
          RaidClansManager__MFDOCMJONOH(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).BADMDODBKLB;
          if (pSVar3 != (System_Action_EOLFEKNCPLM__o *)0x0) {
                    /* catch() { ... } // from try @ 032726c4 with catch @ 032726f0 */
                    /* try { // try from 032726f8 to 033726ff has its CatchHandler @ 03272714 */
                    /* try { // try from 03272700 to 0337270b has its CatchHandler @ 032724b8 */
                    /* WARNING: Could not recover jumptable at 0x03272708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar3->fields).super.super.invoke_impl)
                      ((pSVar3->fields).super.super.method_code,HEHMPFLAEGE,
                       (pSVar3->fields).super.super.method);
            return;
          }
                    /* try { // try from 0327270c to 03372713 has its CatchHandler @ 03272714 */
                    /* catch() { ... } // from try @ 0327266c with catch @ 03272714
                       catch() { ... } // from try @ 032726f8 with catch @ 03272714
                       catch() { ... } // from try @ 0327270c with catch @ 03272714 */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RaidPlayerScreen GetScreen()  [RVA 0x3172B8C]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$GetScreen @ RVA 0x3172B8C

Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *
Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__GetScreen
          (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  return (__this->fields)._screen;
}


// ===== private void GGOICDIOIIK(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x3172B94]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$GGOICDIOIIK @ RVA 0x3172B94

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__GGOICDIOIIK
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,
               MethodInfo *method)

{
  RaidPlayerInfoHelper_o *__this_00;
  System_Action_EOLFEKNCPLM__o *BLMFLPJJMPF;
  OJEHKJHEBID_o *extraout_x1;
  int64_t JBFDEJOPCDC;
  
  if ((DAT_04566935 & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_JKENKFGECHO__);
    DAT_04566935 = 1;
    PBNPKBJKFHE = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,PBNPKBJKFHE);
  }
  __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  JBFDEJOPCDC = (__this->fields).PMKMIDBNMOE;
  BLMFLPJJMPF = (System_Action_EOLFEKNCPLM__o *)
                thunk_FUN_01bda818(System_Action<EOLFEKNCPLM>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (RaidPlayerInfoHelper_o *)0x0) {
    RaidPlayerInfoHelper__ELHLAJNJAKD(__this_00,JBFDEJOPCDC,BLMFLPJJMPF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FKOGCHJKFGB(bool CJNHFNHJHPE)  [RVA 0x3172954]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$FKOGCHJKFGB @ RVA 0x3172954

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__FKOGCHJKFGB
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Fights_Controls_GameController_o *__this_00;
  
  if ((DAT_04566936 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566936 = 1;
  }
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04565c84 = '\x01';
  }
  __this_00 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032729d8 to 03372a6b has its CatchHandler @ 032729d8
                       catch() { ... } // from try @ 032729d8 with catch @ 032729d8
                       catch() { ... } // from try @ 03272a8c with catch @ 032729d8
                       catch() { ... } // from try @ 03272aec with catch @ 032729d8
                       catch() { ... } // from try @ 03272b24 with catch @ 032729d8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    if (__this_00 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
      (__this_00->fields).GADNEKIHBNO = CJNHFNHJHPE;
      Nekki_SF2_Core_Fights_Controls_GameController__set_IsShowController
                (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void IIFBHJCLOPC()  [RVA 0x317225C]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$IIFBHJCLOPC @ RVA 0x317225C

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IIFBHJCLOPC
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *y;
  UnityEngine_GameObject_o *HODGKDNOHLP;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  
  if ((DAT_04566937 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566937 = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  if ((__this->fields).IMCAMDBEHMH == false) {
    __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((__this_00 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
      y = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)y,(MethodInfo *)0x0)
      ;
      if (bVar1) {
        HODGKDNOHLP = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Menu_MainMenu__ChangeParentAndHideScroll
                  (__this_00,HODGKDNOHLP,pUVar2,(MethodInfo *)0x0);
      }
      (__this->fields).IMCAMDBEHMH = true;
    }
  }
  return;
}


// ===== public void add_OnRefreshPlayer(Action<EOLFEKNCPLM> CJNHFNHJHPE)  [RVA 0x3172C5C]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$add_OnRefreshPlayer @ RVA 0x3172C5C

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__add_OnRefreshPlayer
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,
               System_Action_EOLFEKNCPLM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_EOLFEKNCPLM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_EOLFEKNCPLM__o *pSVar5;
  System_Action_EOLFEKNCPLM__o **ppSVar6;
  System_Action_EOLFEKNCPLM__o *a;
  
  if ((DAT_04566938 & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    DAT_04566938 = 1;
  }
  ppSVar6 = &(__this->fields).BADMDODBKLB;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<EOLFEKNCPLM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<EOLFEKNCPLM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_EOLFEKNCPLM__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void OnBackKeyClicked(object IMMNELPBGIF)  [RVA 0x3172D0C]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$OnBackKeyClicked @ RVA 0x3172D0C

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__OnBackKeyClicked
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
  if ((DAT_04566939 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<DojoScene>_get_Current__);
    DAT_04566939 = 1;
    IMMNELPBGIF = (Il2CppObject *)extraout_x1;
  }
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Hide(__this,(MethodInfo *)IMMNELPBGIF);
  if ((__this->fields).IGIDKCCDBPK != false) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<DojoScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<DojoScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(bool_conflict *)(**(long **)(lVar2 + 0xb8) + 0x98) = (__this->fields).IGIDKCCDBPK;
    }
  }
  (__this->fields).IGIDKCCDBPK = false;
  return;
}


// ===== public void .ctor()  [RVA 0x3172E0C]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$.ctor @ RVA 0x3172E0C

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot___ctor
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  (__this->fields).PMKMIDBNMOE = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void JKENKFGECHO(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x3172E1C]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$JKENKFGECHO @ RVA 0x3172E1C

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__JKENKFGECHO
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  System_Action_EOLFEKNCPLM__o *pSVar1;
  
                    /* try { // try from 03272e1c to 03372f3f has its CatchHandler @ 03272e1c
                       catch() { ... } // from try @ 03272e1c with catch @ 03272e1c
                       catch() { ... } // from try @ 03272fe4 with catch @ 03272e1c
                       catch() { ... } // from try @ 032730a0 with catch @ 03272e1c
                       catch() { ... } // from try @ 032730f8 with catch @ 03272e1c
                       catch() { ... } // from try @ 03273128 with catch @ 03272e1c */
  pSVar1 = (__this->fields).BADMDODBKLB;
  if (pSVar1 != (System_Action_EOLFEKNCPLM__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03272e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,HEHMPFLAEGE,
               (pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== private void Update()  [RVA 0x3172E38]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$Update @ RVA 0x3172E38

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Update
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  DialogsManager_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  
  if ((DAT_0456693a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456693a = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IIFBHJCLOPC(__this,method_00);
    pGVar2 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pGVar2 != (DialogsManager_o *)0x0) {
      x = (pGVar2->fields)._AOOFDKJAALA_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        if (bVar1) {
          Nekki_SF2_GUI_Menu_MainMenu__Show(__this_00,(MethodInfo *)0x0);
          return;
        }
        Nekki_SF2_GUI_Menu_MainMenu__Hide(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static RaidPlayerInfoRoot Current()  [RVA 0x3172F40]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$Current @ RVA 0x3172F40

Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *
Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *pNVar3;
  
                    /* try { // try from 03272f40 to 03372f47 has its CatchHandler @ 032730dc */
                    /* try { // try from 03272f54 to 03372f5f has its CatchHandler @ 032730d4 */
  if ((DAT_0456693b & 1) == 0) {
                    /* try { // try from 03272f6c to 03372f6f has its CatchHandler @ 032730b8 */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidPlayerInfoRoot>__);
                    /* try { // try from 03272f74 to 03372f7b has its CatchHandler @ 032730d8 */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03272f88 to 03372f93 has its CatchHandler @ 032730d0 */
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo);
                    /* try { // try from 03272f9c to 03372fa7 has its CatchHandler @ 032730b4 */
    FUN_01bab630(&StringLiteral_10413/*"Prefabs/Raids/RaidPlayerInfo/RaidPlayerInfo-Root"*/);
    DAT_0456693b = 1;
  }
                    /* try { // try from 03272fac to 03372fb7 has its CatchHandler @ 032730b0 */
  pNVar3 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03272fc0 to 03372fcb has its CatchHandler @ 032730bc */
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
LAB_0327306c:
    return Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH;
  }
                    /* try { // try from 03272fd8 to 03372fe3 has its CatchHandler @ 032730a4 */
                    /* try { // try from 03272fe4 to 0337308f has its CatchHandler @ 03272e1c */
  pUVar2 = UnityEngine_Resources__Load(StringLiteral_10413/*"Prefabs/Raids/RaidPlayerInfo/RaidPlayerInfo-Root"*/,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  pUVar2 = UnityEngine_Object__Instantiate(pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Object_o *)0x0) {
    if (pUVar2->klass != (UnityEngine_Object_c *)UnityEngine_GameObject_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    pNVar3 = (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)pUVar2,
                        Method_UnityEngine_GameObject_GetComponent<RaidPlayerInfoRoot>__);
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH = pNVar3;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields,pNVar3);
    pNVar3 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH;
    if (pNVar3 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) {
      Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__GIENGNEGHPJ(pNVar3,method_00);
      goto LAB_0327306c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HOIIHIFOMGO(bool CJNHFNHJHPE)  [RVA 0x3172398]
// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$HOIIHIFOMGO @ RVA 0x3172398

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__HOIIHIFOMGO
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_GameObject_array *pUVar3;
  UnityEngine_Object_o *pUVar4;
  ulong uVar5;
  UnityEngine_Object_o *x;
  ulong uVar6;
  UnityEngine_SceneManagement_Scene_Fields local_68 [2];
  
  if ((DAT_0456693c & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<DebugUI>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EventSystem>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidConnectionScreen>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    DAT_0456693c = 1;
  }
  if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_68[0].m_Handle =
       (int32_t)UnityEngine_SceneManagement_SceneManager__GetActiveScene((MethodInfo *)0x0);
  pUVar3 = UnityEngine_SceneManagement_Scene__GetRootGameObjects
                     ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)local_68,(MethodInfo *)0x0)
  ;
  if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
    if (0 < (int)pUVar3->max_length) {
      uVar6 = 0;
      uVar5 = pUVar3->max_length & 0xffffffff;
      do {
        if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        x = (UnityEngine_Object_o *)pUVar3->m_Items[uVar6];
        pUVar4 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 032724b8 to 0337256b has its CatchHandler @ 032724b8
                       catch() { ... } // from try @ 032724b8 with catch @ 032724b8
                       catch() { ... } // from try @ 032725e8 with catch @ 032724b8
                       catch() { ... } // from try @ 03272614 with catch @ 032724b8
                       catch() { ... } // from try @ 03272684 with catch @ 032724b8
                       catch() { ... } // from try @ 032726c8 with catch @ 032724b8
                       catch() { ... } // from try @ 03272700 with catch @ 032724b8 */
        bVar2 = UnityEngine_Object__op_Equality(x,pUVar4,(MethodInfo *)0x0);
        if (!bVar2) {
          if (x == (UnityEngine_Object_o *)0x0) goto LAB_032725b4;
          pUVar4 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             ((UnityEngine_GameObject_o *)x,
                              Method_UnityEngine_GameObject_GetComponent<DebugUI>__);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar2) {
            pUVar4 = (UnityEngine_Object_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               ((UnityEngine_GameObject_o *)x,
                                Method_UnityEngine_GameObject_GetComponent<EventSystem>__);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar2) {
              pUVar4 = (UnityEngine_Object_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 ((UnityEngine_GameObject_o *)x,
                                  Method_UnityEngine_GameObject_GetComponent<RaidConnectionScreen>__
                                 );
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
              }
              bVar2 = UnityEngine_Object__op_Inequality
                                (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0327256c to 03372573 has its CatchHandler @ 032726ac */
              if (!bVar2) {
                UnityEngine_GameObject__SetActive
                          ((UnityEngine_GameObject_o *)x,CJNHFNHJHPE,(MethodInfo *)0x0);
              }
            }
          }
        }
        uVar1 = (uint)pUVar3->max_length;
        uVar5 = (ulong)uVar1;
                    /* try { // try from 03272584 to 0337258f has its CatchHandler @ 0327269c */
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar1);
    }
                    /* try { // try from 032725a4 to 033725ab has its CatchHandler @ 03272600 */
    return;
  }
LAB_032725b4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032725b4 to 033725bf has its CatchHandler @ 032725fc */
  FUN_01bab8c8();
}

