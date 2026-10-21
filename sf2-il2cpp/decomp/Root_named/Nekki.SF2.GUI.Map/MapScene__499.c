// TypeDefIndex 499
// Namespace: Nekki.SF2.GUI.Map
// public class MapScene : Scene<MapScene>
// Fields:
//   private Action CLMHOCHLKBH; // 0x90
//   private Action KFECPODMONB; // 0x98
//   private Action IGDMLILCCJP; // 0xA0
//   private RaidMapUIModule FMIFNIIJJNK; // 0xA8
//   private StoryMapContainer DGPJKBMBBNN; // 0xB0
//   private RaidMapContainer OPPIFBJOLBI; // 0xB8
//   private RaidMapContainer CLKPHCHEEJA; // 0xC0
//   private int KFKABLNIFDP; // 0xC8
//   private InfoBattle OCBDFDALFLL; // 0xD0
//   private MapButtonsPanel MGIJJGGPFJB; // 0xD8
//   private List<MEJIKMPNBNL> JFANFALIFFE; // 0xE0
//   private GameObject _raidMapContainerPrefab; // 0xE8
//   private MapScene.LHAHPPIGIKP _raidDailyButtonHideLogic; // 0xF0
//   private bool CNKIBIHKLKA; // 0xF4
//   private ZoneScrollItem CAJCGACFIHD; // 0xF8
//   private MapScene.JPKKNLCJFJH IAAABJBDEMK; // 0x100
//   private MapScene.HODBNGIFLEJ JIPJNLEIIFC; // 0x108
//   private MapScene.HODBNGIFLEJ FLAMCGAKENN; // 0x110
//   private static int AAGIOBBFCDN; // 0x0
//   private IEnumerator JNMOCNBAIMC; // 0x118
//   private Roster OKNKKHGBECG; // 0x120

// ===== public MapScene.JPKKNLCJFJH get_CurrentState()  [RVA 0x3583F8C]
// Nekki.SF2.GUI.Map.MapScene$$get_CurrentState @ RVA 0x3583F8C

int32_t Nekki_SF2_GUI_Map_MapScene__get_CurrentState
                  (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  return (__this->fields).IAAABJBDEMK;
}


// ===== private static IEnumerator CNPHOIBCCOD()  [RVA 0x3583F94]
// Nekki.SF2.GUI.Map.MapScene$$CNPHOIBCCOD @ RVA 0x3583F94

System_Collections_IEnumerator_o * Nekki_SF2_GUI_Map_MapScene__CNPHOIBCCOD(MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_o *__this;
  
  if ((DAT_04568cea & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_TypeInfo);
    DAT_04568cea = 1;
  }
  __this = (Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_o *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_TypeInfo);
  Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC___ctor(__this,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this;
}


// ===== private void DNKNGIHFMLC()  [RVA 0x3583FEC]
// Nekki.SF2.GUI.Map.MapScene$$DNKNGIHFMLC @ RVA 0x3583FEC

void Nekki_SF2_GUI_Map_MapScene__DNKNGIHFMLC
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar3;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar4;
  Nekki_SF2_GUI_Map_MapCurrencyPanel_o *pNVar5;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar6;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04568ceb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_ACFKDEHDMFJ__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568ceb = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).FMIFNIIJJNK;
  if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar5 = (pNVar3->fields).RaidKeysPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar3 = (__this->fields).FMIFNIIJJNK;
      if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
          (pNVar5 = (pNVar3->fields).RaidKeysPanel,
          pNVar5 == (Nekki_SF2_GUI_Map_MapCurrencyPanel_o *)0x0)) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036841fc;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields).FMIFNIIJJNK;
    if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
      pNVar6 = (pNVar3->fields)._RaidDailyQuestsButton_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar6,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar3 = (__this->fields).FMIFNIIJJNK;
        if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
            (pNVar6 = (pNVar3->fields)._RaidDailyQuestsButton_k__BackingField,
            pNVar6 == (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) ||
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036841fc;
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields).JFANFALIFFE;
      if (pSVar4 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
        if ((pSVar4->fields)._size < 2) {
          return;
        }
        pNVar3 = (__this->fields).FMIFNIIJJNK;
        if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
          pUVar7 = (pNVar3->fields).RaidMapScrollButton;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          pNVar3 = (__this->fields).FMIFNIIJJNK;
          if (((pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
              (pUVar7 = (pNVar3->fields).RaidMapScrollButton,
              pUVar7 != (UnityEngine_UI_Button_o *)0x0)) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            pNVar3 = (__this->fields).FMIFNIIJJNK;
            if (((pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
                (pUVar7 = (pNVar3->fields).RaidMapScrollButton,
                pUVar7 != (UnityEngine_UI_Button_o *)0x0)) &&
               (__this_00 = (pUVar7->fields).m_OnClick,
               __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners
                        ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
              pNVar3 = (__this->fields).FMIFNIIJJNK;
              if ((pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
                 (pUVar7 = (pNVar3->fields).RaidMapScrollButton,
                 pUVar7 != (UnityEngine_UI_Button_o *)0x0)) {
                __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
                call = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                  pNVar3 = (__this->fields).FMIFNIIJJNK;
                  if ((pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
                     (pUVar7 = (pNVar3->fields).RaidMapScrollButton,
                     pUVar7 != (UnityEngine_UI_Button_o *)0x0)) {
                    UnityEngine_UI_Selectable__set_interactable
                              ((UnityEngine_UI_Selectable_o *)pUVar7,false,(MethodInfo *)0x0);
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
LAB_036841fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MEDCMFMKLED()  [RVA 0x3584200]
// Nekki.SF2.GUI.Map.MapScene$$MEDCMFMKLED @ RVA 0x3584200

void Nekki_SF2_GUI_Map_MapScene__MEDCMFMKLED
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x26,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__MKEBFHLGMPO(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ChangeRaid(int BFGHCDJJJOO)  [RVA 0x35843F8]
// Nekki.SF2.GUI.Map.MapScene$$ChangeRaid @ RVA 0x35843F8

void Nekki_SF2_GUI_Map_MapScene__ChangeRaid
               (Nekki_SF2_GUI_Map_MapScene_o *__this,int32_t BFGHCDJJJOO,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_RaidMapContainer_o **GBCPJHKADAD;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar3;
  RaidManager_o *pCVar4;
  Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *pNVar5;
  OOMHDDBCBJP_o *pOVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar7;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar8;
  Nekki_SF2_GUI_Map_RaidMapContainer_o **PGEOELLFHCH;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *pNVar9;
  
  if ((DAT_04568cec & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<RaidMapContainer>__);
    FUN_01bab630(&StringLiteral_9131/*"Missing temporary map for change"*/);
    DAT_04568cec = 1;
  }
  PGEOELLFHCH = &(__this->fields).CLKPHCHEEJA;
  pNVar9 = *PGEOELLFHCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*PGEOELLFHCH == (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0) goto LAB_036846ec;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*PGEOELLFHCH,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar9 = Nekki_SF2_GUI_Map_MapScene__CJIKOBCFOOF(__this,BFGHCDJJJOO,true,in_x3);
  (__this->fields).CLKPHCHEEJA = pNVar9;
  thunk_FUN_01c20e04(PGEOELLFHCH,pNVar9);
  pNVar9 = (__this->fields).CLKPHCHEEJA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar9,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_9131/*"Missing temporary map for change"*/,(MethodInfo *)0x0);
    return;
  }
  pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).CLKPHCHEEJA;
  if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    if ((__this->fields).KFKABLNIFDP < BFGHCDJJJOO) {
      Nekki_SF2_GUI_Map_MapContainer__OpenRightNow(pNVar3,(MethodInfo *)0x0);
      pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
      if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_036846ec;
      Nekki_SF2_GUI_Map_MapContainer__Close(pNVar3,(MethodInfo *)0x0);
    }
    else {
      Nekki_SF2_GUI_Map_MapContainer__CloseRightNow(pNVar3,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_Map_MapContainer_o *)*PGEOELLFHCH ==
          (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_036846ec;
      Nekki_SF2_GUI_Map_MapContainer__Open
                ((Nekki_SF2_GUI_Map_MapContainer_o *)*PGEOELLFHCH,(MethodInfo *)0x0);
    }
    (__this->fields).KFKABLNIFDP = BFGHCDJJJOO;
    GBCPJHKADAD = &(__this->fields).OPPIFBJOLBI;
    Util__JGJFNOOGAEP<object>
              ((Il2CppObject **)GBCPJHKADAD,(Il2CppObject **)PGEOELLFHCH,
               Method_Util_JGJFNOOGAEP<RaidMapContainer>__);
    pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).CLKPHCHEEJA;
    if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar3,false,(MethodInfo *)0x0);
      pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)*GBCPJHKADAD;
      if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
        Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar3,true,(MethodInfo *)0x0);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pCVar4 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        if (pCVar4 != (RaidManager_o *)0x0) {
          (pCVar4->fields).ANDOENDCBPM = (__this->fields).KFKABLNIFDP;
          Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_00);
          pNVar5 = (__this->fields).FLAMCGAKENN;
          if (pNVar5 != (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *)0x0) {
            pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
            pOVar6 = Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__FLCKLDFJPGF(pNVar5,(MethodInfo *)0x0);
            if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
              method_03 = (MethodInfo *)0x0;
              Nekki_SF2_GUI_Map_MapContainer__SelectBattle(pNVar3,pOVar6,0.0,(MethodInfo *)0x0);
              pNVar5 = (__this->fields).FLAMCGAKENN;
              if (pNVar5 != (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *)0x0) {
                pOVar6 = Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__FLCKLDFJPGF
                                   (pNVar5,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Map_MapScene__PIMIMOACBNG(__this,pOVar6,method_03);
                Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_01);
                Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_02);
                if ((__this->fields)._raidDailyButtonHideLogic == 1) {
                  pNVar7 = (__this->fields).FMIFNIIJJNK;
                  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar1) {
                    pNVar7 = (__this->fields).FMIFNIIJJNK;
                    if (pNVar7 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
                      pNVar8 = (pNVar7->fields)._RaidDailyQuestsButton_k__BackingField;
                      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      bVar1 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (!bVar1) {
                        return;
                      }
                      pNVar7 = (__this->fields).FMIFNIIJJNK;
                      if (((pNVar7 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
                          (pNVar8 = (pNVar7->fields)._RaidDailyQuestsButton_k__BackingField,
                          pNVar8 != (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) &&
                         (pUVar2 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
                         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
                        return;
                      }
                    }
                    goto LAB_036846ec;
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_036846ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnStoryMapClosedAction(Action CJNHFNHJHPE)  [RVA 0x3584FD0]
// Nekki.SF2.GUI.Map.MapScene$$remove_OnStoryMapClosedAction @ RVA 0x3584FD0

void Nekki_SF2_GUI_Map_MapScene__remove_OnStoryMapClosedAction
               (Nekki_SF2_GUI_Map_MapScene_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04568ced & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568ced = 1;
  }
  ppSVar4 = &(__this->fields).KFECPODMONB;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void AIIOJJEPJMD(FKNCNNOOOIO DKMMBMBMJBO)  [RVA 0x358506C]
// Nekki.SF2.GUI.Map.MapScene$$AIIOJJEPJMD @ RVA 0x358506C

void Nekki_SF2_GUI_Map_MapScene__AIIOJJEPJMD
               (Nekki_SF2_GUI_Map_MapScene_o *__this,FKNCNNOOOIO_o *DKMMBMBMJBO,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapScene__ALKKMBCDKJC(__this,(MethodInfo *)DKMMBMBMJBO);
  Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,true,method);
  return;
}


// ===== private void PMPKEJKFNOE()  [RVA 0x358511C]
// Nekki.SF2.GUI.Map.MapScene$$PMPKEJKFNOE @ RVA 0x358511C

void Nekki_SF2_GUI_Map_MapScene__PMPKEJKFNOE
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  FKDLCJJOGIP_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *__this_01;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar4;
  System_Action_o *pSVar5;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
    FKDLCJJOGIP__LLBIEPFEJPG(__this_00,(MethodInfo *)0x0);
    (__this->fields).IAAABJBDEMK = 0;
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      pPVar6 = (pNVar1->fields).QuestParameters;
      pSVar2 = MMOGKBGEPGM__GKMAFGODLLG(0x10,(MethodInfo *)0x0);
      if (pPVar6 != (PKHMIGFEJCL_o *)0x0) {
        ppSVar7 = &(pPVar6->fields).CHFDDNODLGP;
        *ppSVar7 = pSVar2;
        thunk_FUN_01c20e04(ppSVar7,pSVar2);
        pNVar4 = (__this->fields).FMIFNIIJJNK;
        if ((pNVar4 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
           (__this_01 = (pNVar4->fields).RaidToggleButton,
           __this_01 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
          Nekki_SF2_GUI_Map_RaidToggleButton__SetState(__this_01,0,(MethodInfo *)0x0);
          pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
          if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
            Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar3,true,(MethodInfo *)0x0);
            pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
            if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
              Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar3,false,(MethodInfo *)0x0)
              ;
              Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_00);
              Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_01);
              pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
              if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
                Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled(pNVar3,true,(MethodInfo *)0x0);
                pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
                if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
                  method_02 = (MethodInfo *)0x0;
                  Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled(pNVar3,false,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,method_02);
                  Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,true,method_02);
                  pSVar5 = (__this->fields).CLMHOCHLKBH;
                  if (pSVar5 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03685220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(pSVar5->fields).super.super.invoke_impl)
                              ((pSVar5->fields).super.super.method_code,
                               (pSVar5->fields).super.super.method);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private RaidMapContainer CJIKOBCFOOF(int BFGHCDJJJOO, bool IPJLOGAFNAH)  [RVA 0x35846F0]
// Nekki.SF2.GUI.Map.MapScene$$CJIKOBCFOOF @ RVA 0x35846F0

Nekki_SF2_GUI_Map_RaidMapContainer_o *
Nekki_SF2_GUI_Map_MapScene__CJIKOBCFOOF
          (Nekki_SF2_GUI_Map_MapScene_o *__this,int32_t BFGHCDJJJOO,bool IPJLOGAFNAH,
          MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_UIModule_o *BBFEPHOMGDM;
  UnityEngine_Transform_o *pUVar4;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_01;
  MEJIKMPNBNL_o *BHHBEIACGPB;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE;
  System_Action_o *pSVar8;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_02;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar9;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *exists;
  Il2CppObject *arg0;
  undefined4 local_38;
  int32_t local_34;
  
  local_34 = BFGHCDJJJOO;
  if ((DAT_04568cee & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<UIModule>__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_EDBJMDJLCKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_OnClickBattle__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_RaidMapContainer_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_8834/*"MapScene::CreateRaidMap: Invalid raid zone index for change, Id = "*/);
    FUN_01bab630(&StringLiteral_12863/*"Temp"*/);
    FUN_01bab630(&StringLiteral_8788/*"Main"*/);
    FUN_01bab630(&StringLiteral_22435/*"{0}RaidMapContainer Id: {1}, Name: {2}"*/);
    DAT_04568cee = 1;
  }
  pSVar9 = (__this->fields).JFANFALIFFE;
  if (pSVar9 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    if ((BFGHCDJJJOO < 0) || ((pSVar9->fields)._size <= BFGHCDJJJOO)) {
      pSVar7 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat(StringLiteral_8834/*"MapScene::CreateRaidMap: Invalid raid zone index for change, Id = "*/,pSVar7,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      return (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0;
    }
    __this_00 = (__this->fields)._raidMapContainerPrefab;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      BBFEPHOMGDM = (Nekki_SF2_GUI_UIModule_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_00,Method_UnityEngine_GameObject_GetComponent<UIModule>__);
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo);
      }
      __this_01 = (Nekki_SF2_GUI_Map_MapContainer_o *)
                  Nekki_SF2_GUI_UIModule__MountModule(BBFEPHOMGDM,pUVar4,true,(MethodInfo *)0x0);
      if ((__this_01 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) &&
         (__this_01->klass !=
          (Nekki_SF2_GUI_Map_MapContainer_c *)Nekki_SF2_GUI_Map_RaidMapContainer_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_01);
      }
      pSVar9 = (__this->fields).JFANFALIFFE;
      if ((pSVar9 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) &&
         (BHHBEIACGPB = (MEJIKMPNBNL_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar9,BFGHCDJJJOO,
                                   Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__),
         __this_01 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0)) {
        Nekki_SF2_GUI_Map_RaidMapContainer__AddRaidZone
                  ((Nekki_SF2_GUI_Map_RaidMapContainer_o *)__this_01,BHHBEIACGPB,(MethodInfo *)0x0);
        pSVar7 = StringLiteral_22435/*"{0}RaidMapContainer Id: {1}, Name: {2}"*/;
        pSVar9 = (__this->fields).JFANFALIFFE;
        puVar1 = &StringLiteral_12863/*"Temp"*/;
        if (!IPJLOGAFNAH) {
          puVar1 = &StringLiteral_8788/*"Main"*/;
        }
        if (pSVar9 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
          arg0 = (Il2CppObject *)*puVar1;
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar9,BFGHCDJJJOO,
                              Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
          if (pIVar5 != (Il2CppObject *)0x0) {
            local_38 = *(undefined4 *)((long)&pIVar5[2].monitor + 4);
            pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
            pSVar9 = (__this->fields).JFANFALIFFE;
            if ((pSVar9 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) &&
               (pIVar6 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar9,local_34,
                                    Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__),
               pIVar6 != (Il2CppObject *)0x0)) {
              pSVar7 = System_String__Format
                                 (pSVar7,arg0,pIVar5,(Il2CppObject *)pIVar6[2].klass,
                                  (MethodInfo *)0x0);
              Nekki_SF2_GUI_Map_MapContainer__UpdateName(__this_01,pSVar7,(MethodInfo *)0x0);
              CJNHFNHJHPE = (System_Action_OOMHDDBCBJP__o *)
                            thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
              System_Action<object>___ctor();
              Nekki_SF2_GUI_Map_MapContainer__add_OnBattleClicked
                        (__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
              pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              Nekki_SF2_GUI_Map_MapContainer__add_OnOpened(__this_01,pSVar8,(MethodInfo *)0x0);
              pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              Nekki_SF2_GUI_Map_MapContainer__add_OnClosed(__this_01,pSVar8,(MethodInfo *)0x0);
              pUVar4 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetAsFirstSibling(pUVar4,(MethodInfo *)0x0);
                exists = (__this->fields).OPPIFBJOLBI;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar3 = UnityEngine_Object__op_Implicit
                                  ((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
                if (bVar3) {
                  iVar2 = (__this->fields).KFKABLNIFDP;
                  if (local_34 < iVar2) {
                    __this_02 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
                    if (__this_02 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03684ae0;
                  }
                  else {
                    __this_02 = __this_01;
                    if (local_34 <= iVar2) {
                      return (Nekki_SF2_GUI_Map_RaidMapContainer_o *)__this_01;
                    }
                  }
                  pUVar4 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03684ae0;
                  UnityEngine_Transform__SetAsFirstSibling(pUVar4,(MethodInfo *)0x0);
                }
                return (Nekki_SF2_GUI_Map_RaidMapContainer_o *)__this_01;
              }
            }
          }
        }
      }
    }
  }
LAB_03684ae0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CloseRaids()  [RVA 0x35852F8]
// Nekki.SF2.GUI.Map.MapScene$$CloseRaids @ RVA 0x35852F8

void Nekki_SF2_GUI_Map_MapScene__CloseRaids(Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  
  if ((__this->fields).IAAABJBDEMK != 1) {
    return;
  }
  Nekki_SF2_GUI_Map_MapScene__FNOPCFKAOEF(__this,method);
  Nekki_SF2_GUI_Map_MapScene__LNEFBMFLDDG(__this,method_00);
  if ((__this->fields).IAAABJBDEMK != 1) {
    pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    if (pNVar2 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03685380;
    bVar1 = Nekki_SF2_GUI_Map_MapContainer__IsClosingNow(pNVar2,(MethodInfo *)0x0);
    method_02 = extraout_x1;
    if (!bVar1) goto LAB_03685354;
  }
  pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (pNVar2 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__ToggleLampsPanelLocationName(pNVar2,true,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_01);
    method_02 = extraout_x1_00;
LAB_03685354:
    Nekki_SF2_GUI_Map_MapScene__PCDOAIDDKPP(__this,method_02);
    Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_03);
    Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_04);
    Nekki_SF2_GUI_Map_MapScene__EHJIAIJGNHJ(__this,method_05);
    return;
  }
LAB_03685380:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3585A94]
// Nekki.SF2.GUI.Map.MapScene$$.cctor @ RVA 0x3585A94

void Nekki_SF2_GUI_Map_MapScene___cctor(MethodInfo *method)

{
  if ((DAT_04568cef & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    DAT_04568cef = 1;
  }
  Nekki_SF2_GUI_Map_MapScene_TypeInfo->static_fields->AAGIOBBFCDN = -1;
  return;
}


// ===== private ZoneScrollItem PHHAIMAKFDL(MEJIKMPNBNL BHHBEIACGPB)  [RVA 0x3585AE0]
// Nekki.SF2.GUI.Map.MapScene$$PHHAIMAKFDL @ RVA 0x3585AE0

Nekki_SF2_GUI_Map_ZoneScrollItem_o *
Nekki_SF2_GUI_Map_MapScene__PHHAIMAKFDL
          (Nekki_SF2_GUI_Map_MapScene_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar1;
  
  if (BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) {
    pNVar1 = Nekki_SF2_GUI_Map_MapScene__DAECLPKNLGE
                       (__this,(BHHBEIACGPB->fields).DEKCPPOJFEH,method);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelectFight(FightList MHOFCOHFCGL, float PNEIGGOFIOA = 0)  [RVA 0x3585B74]
// Nekki.SF2.GUI.Map.MapScene$$SelectFight @ RVA 0x3585B74

void Nekki_SF2_GUI_Map_MapScene__SelectFight
               (Nekki_SF2_GUI_Map_MapScene_o *__this,FightList_o *MHOFCOHFCGL,float PNEIGGOFIOA,
               MethodInfo *method)

{
  OOMHDDBCBJP_o *BANHBMINMMP;
  
  if ((MHOFCOHFCGL != (FightList_o *)0x0) &&
     (BANHBMINMMP = (MHOFCOHFCGL->fields).IFJLLGPGMHM, BANHBMINMMP != (OOMHDDBCBJP_o *)0x0)) {
    Nekki_SF2_GUI_Map_MapScene__SelectBattle(__this,BANHBMINMMP,PNEIGGOFIOA,method);
    return;
  }
  return;
}


// ===== public void add_OnRaidMapReloadedAction(Action CJNHFNHJHPE)  [RVA 0x3585D10]
// Nekki.SF2.GUI.Map.MapScene$$add_OnRaidMapReloadedAction @ RVA 0x3585D10

void Nekki_SF2_GUI_Map_MapScene__add_OnRaidMapReloadedAction
               (Nekki_SF2_GUI_Map_MapScene_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04568cf0 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568cf0 = 1;
  }
  ppSVar4 = &(__this->fields).IGDMLILCCJP;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void OGHJAMAKPFJ(bool CMPKOOEKFKF)  [RVA 0x3585228]
// Nekki.SF2.GUI.Map.MapScene$$OGHJAMAKPFJ @ RVA 0x3585228

void Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ
               (Nekki_SF2_GUI_Map_MapScene_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar3;
  
  if ((DAT_04568cf1 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cf1 = 1;
  }
  pNVar2 = (__this->fields).FMIFNIIJJNK;
  if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar3 = (pNVar2->fields).RaidToggleButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = GameUtils__MPGHOPABJNB((MethodInfo *)0x0);
    pNVar2 = (__this->fields).FMIFNIIJJNK;
    if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
       (pNVar3 = (pNVar2->fields).RaidToggleButton,
       pNVar3 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
      Nekki_SF2_GUI_Map_RaidToggleButton__set_interactable
                (pNVar3,bVar1 && CMPKOOEKFKF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IEJPFOFGJLN()  [RVA 0x3585DAC]
// Nekki.SF2.GUI.Map.MapScene$$IEJPFOFGJLN @ RVA 0x3585DAC

void Nekki_SF2_GUI_Map_MapScene__IEJPFOFGJLN
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04568cf2 & 1) == 0) {
    auVar2 = FUN_01bab630(&StringLiteral_18788/*"hintZoneRaidLocked"*/);
    DAT_04568cf2 = 1;
  }
  pNVar1 = (__this->fields).FMIFNIIJJNK;
  if (pNVar1 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    Nekki_SF2_GUI_Map_MapScene__LHHLFBBBJLD
              (__this,(pNVar1->fields).RaidHintPos,StringLiteral_18788/*"hintZoneRaidLocked"*/,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void .ctor()  [RVA 0x3585F2C]
// Nekki.SF2.GUI.Map.MapScene$$.ctor @ RVA 0x3585F2C

void Nekki_SF2_GUI_Map_MapScene___ctor(Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  System_Collections_Generic_List_MEJIKMPNBNL__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar3;
  
  if ((DAT_04568cf3 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MEJIKMPNBNL>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>__ctor__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_<>c_FCELHKOPIHL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_<>c_FGNFFFLGIBM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_<>c_MJCOOBALDPE__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo);
    DAT_04568cf3 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_0;
  if (pSVar3 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
    ppSVar1 = &(__this->fields).CLMHOCHLKBH;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_1;
    if (pSVar3 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_1;
      *ppSVar1 = pSVar3;
      thunk_FUN_01c20e04(ppSVar1,pSVar3);
    }
    ppSVar1 = &(__this->fields).KFECPODMONB;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_2;
    if (pSVar3 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_2;
      *ppSVar1 = pSVar3;
      thunk_FUN_01c20e04(ppSVar1,pSVar3);
    }
    ppSVar1 = &(__this->fields).IGDMLILCCJP;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    __this_00 = (System_Collections_Generic_List_MEJIKMPNBNL__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<MEJIKMPNBNL>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>__ctor__);
    ppSVar2 = &(__this->fields).JFANFALIFFE;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    (__this->fields)._raidDailyButtonHideLogic = 1;
    Nekki_SF2_GUI_Scene<object>___ctor
              ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<MapScene>__ctor__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnStoryMapClosedAction(Action CJNHFNHJHPE)  [RVA 0x35861BC]
// Nekki.SF2.GUI.Map.MapScene$$add_OnStoryMapClosedAction @ RVA 0x35861BC

void Nekki_SF2_GUI_Map_MapScene__add_OnStoryMapClosedAction
               (Nekki_SF2_GUI_Map_MapScene_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04568cf4 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568cf4 = 1;
  }
  ppSVar4 = &(__this->fields).KFECPODMONB;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void IIDMBPKLJME()  [RVA 0x3586258]
// Nekki.SF2.GUI.Map.MapScene$$IIDMBPKLJME @ RVA 0x3586258

void Nekki_SF2_GUI_Map_MapScene__IIDMBPKLJME
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04568cf5 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568cf5 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = Nekki_SF2_GUI_Map_MapScene__GBJCFLOEJLF(__this,method_00);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_036862f4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_036862f4:
                    /* WARNING: Could not recover jumptable at 0x0368630c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  return;
}


// ===== private void OIFGCKKJBLI()  [RVA 0x3586388]
// Nekki.SF2.GUI.Map.MapScene$$OIFGCKKJBLI @ RVA 0x3586388

void Nekki_SF2_GUI_Map_MapScene__OIFGCKKJBLI
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  FKDLCJJOGIP_o *pFVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((__this->fields).IAAABJBDEMK == 0) {
    pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pFVar2 != (FKDLCJJOGIP_o *)0x0) {
      bVar1 = FKDLCJJOGIP__PMINMFLPJCB(pFVar2,(MethodInfo *)0x0);
      method = extraout_x1;
      if (!bVar1) goto LAB_036863d0;
      pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pFVar2 != (FKDLCJJOGIP_o *)0x0) {
        FKDLCJJOGIP__LGBOGFICFPF(pFVar2,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Map_MapScene__SetRaidMode(__this,method_00);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_036863d0:
  Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method);
  return;
}


// ===== public void add_OnStoryMapOpenedAction(Action CJNHFNHJHPE)  [RVA 0x3586464]
// Nekki.SF2.GUI.Map.MapScene$$add_OnStoryMapOpenedAction @ RVA 0x3586464

void Nekki_SF2_GUI_Map_MapScene__add_OnStoryMapOpenedAction
               (Nekki_SF2_GUI_Map_MapScene_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04568cf6 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568cf6 = 1;
  }
  ppSVar4 = &(__this->fields).CLMHOCHLKBH;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void remove_OnStoryMapOpenedAction(Action CJNHFNHJHPE)  [RVA 0x3586500]
// Nekki.SF2.GUI.Map.MapScene$$remove_OnStoryMapOpenedAction @ RVA 0x3586500

void Nekki_SF2_GUI_Map_MapScene__remove_OnStoryMapOpenedAction
               (Nekki_SF2_GUI_Map_MapScene_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04568cf7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568cf7 = 1;
  }
  ppSVar4 = &(__this->fields).CLMHOCHLKBH;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private bool PAEKCOEHGMB()  [RVA 0x358659C]
// Nekki.SF2.GUI.Map.MapScene$$PAEKCOEHGMB @ RVA 0x358659C

bool Nekki_SF2_GUI_Map_MapScene__PAEKCOEHGMB
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t ELHAJJAHLHM;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  FKDLCJJOGIP_o *__this_00;
  MethodInfo *method_00;
  PKHMIGFEJCL_o *pPVar3;
  
  if ((DAT_04568cf8 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568cf8 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x22,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      return false;
    }
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
      ELHAJJAHLHM = MMOGKBGEPGM__GFLCMDMEOBN((pPVar3->fields).CHFDDNODLGP,(MethodInfo *)0x0);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GameUtils_TypeInfo);
      }
      bVar1 = GameUtils__BIFPGEGFDLK(ELHAJJAHLHM,0x11,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
      Nekki_SF2_GUI_Map_MapScene__SetRaidMode(__this,method_00);
      __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
        FKDLCJJOGIP__LGBOGFICFPF(__this_00,(MethodInfo *)0x0);
        return true;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelectBattle(OOMHDDBCBJP BANHBMINMMP, float PNEIGGOFIOA)  [RVA 0x3585B88]
// Nekki.SF2.GUI.Map.MapScene$$SelectBattle @ RVA 0x3585B88

void Nekki_SF2_GUI_Map_MapScene__SelectBattle
               (Nekki_SF2_GUI_Map_MapScene_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,float PNEIGGOFIOA,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar2;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_Map_StoryMapContainer_o *y;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *y_00;
  
  if ((DAT_04568cf9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cf9 = 1;
  }
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) {
    return;
  }
  pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (pNVar2 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03685d0c;
  bVar1 = Nekki_SF2_GUI_Map_MapContainer__HasBattle(pNVar2,BANHBMINMMP,(MethodInfo *)0x0);
  pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)0x0;
  if (bVar1) {
    pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    if (__this_00 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03685d0c;
    bVar1 = Nekki_SF2_GUI_Map_MapContainer__HasBattle(__this_00,BANHBMINMMP,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  y = (__this->fields).DGPJKBMBBNN;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if ((bVar1) && (method_00 = extraout_x1, (__this->fields).IAAABJBDEMK != 0)) {
LAB_03685ccc:
    Nekki_SF2_GUI_Map_MapScene__OIFGCKKJBLI(__this,method_00);
  }
  else {
    y_00 = (__this->fields).OPPIFBJOLBI;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)y_00,(MethodInfo *)0x0
                      );
    if ((bVar1) && (method_00 = extraout_x1_00, (__this->fields).IAAABJBDEMK != 1))
    goto LAB_03685ccc;
  }
  if (pNVar2 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__SelectBattle(pNVar2,BANHBMINMMP,PNEIGGOFIOA,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_01);
    Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_02);
    return;
  }
LAB_03685d0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EHJIAIJGNHJ()  [RVA 0x3585928]
// Nekki.SF2.GUI.Map.MapScene$$EHJIAIJGNHJ @ RVA 0x3585928

void Nekki_SF2_GUI_Map_MapScene__EHJIAIJGNHJ
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar3;
  Nekki_SF2_GUI_Map_MapCurrencyPanel_o *pNVar4;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar5;
  UnityEngine_UI_Button_o *pUVar6;
  
  if ((DAT_04568cfa & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cfa = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).FMIFNIIJJNK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).FMIFNIIJJNK;
  if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar4 = (pNVar3->fields).RaidKeysPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar3 = (__this->fields).FMIFNIIJJNK;
      if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
          (pNVar4 = (pNVar3->fields).RaidKeysPanel,
          pNVar4 == (Nekki_SF2_GUI_Map_MapCurrencyPanel_o *)0x0)) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03685a90;
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields).FMIFNIIJJNK;
    if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
      pNVar5 = (pNVar3->fields)._RaidDailyQuestsButton_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar3 = (__this->fields).FMIFNIIJJNK;
        if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
            (pNVar5 = (pNVar3->fields)._RaidDailyQuestsButton_k__BackingField,
            pNVar5 == (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) ||
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03685a90;
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      }
      pNVar3 = (__this->fields).FMIFNIIJJNK;
      if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
        pUVar6 = (pNVar3->fields).RaidMapScrollButton;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar3 = (__this->fields).FMIFNIIJJNK;
        if (((pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
            (pUVar6 = (pNVar3->fields).RaidMapScrollButton, pUVar6 != (UnityEngine_UI_Button_o *)0x0
            )) && (pUVar2 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
                  pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03685a90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnClickBattle(OOMHDDBCBJP ODPEIFGHKNG)  [RVA 0x3586670]
// Nekki.SF2.GUI.Map.MapScene$$OnClickBattle @ RVA 0x3586670

void Nekki_SF2_GUI_Map_MapScene__OnClickBattle
               (Nekki_SF2_GUI_Map_MapScene_o *__this,OOMHDDBCBJP_o *ODPEIFGHKNG,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_InfoBattle_o *__this_00;
  OOMHDDBCBJP_o *pOVar1;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).OCBDFDALFLL;
  if (__this_00 == (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pOVar1 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this_00,(MethodInfo *)0x0);
  if (pOVar1 != ODPEIFGHKNG) {
    Nekki_SF2_GUI_Map_MapScene__PIMIMOACBNG(__this,ODPEIFGHKNG,method);
    Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_00);
    return;
  }
  return;
}


// ===== public void GotoZoneByName(string KGLJICLJHEL, int ABKNPBMGHKH = 0)  [RVA 0x35866C4]
// Nekki.SF2.GUI.Map.MapScene$$GotoZoneByName @ RVA 0x35866C4

void Nekki_SF2_GUI_Map_MapScene__GotoZoneByName
               (Nekki_SF2_GUI_Map_MapScene_o *__this,System_String_o *KGLJICLJHEL,
               int32_t ABKNPBMGHKH,MethodInfo *method)

{
  int32_t FKKFOKKIGCE;
  Nekki_SF2_GUI_Map_StoryMapContainer_o **ppNVar1;
  
  ppNVar1 = &(__this->fields).DGPJKBMBBNN;
  if ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    FKKFOKKIGCE = Nekki_SF2_GUI_Map_MapContainer__GetZoneIndexByName
                            ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1,KGLJICLJHEL,
                             (MethodInfo *)0x0);
    if (FKKFOKKIGCE < 0) {
      ppNVar1 = (Nekki_SF2_GUI_Map_StoryMapContainer_o **)&(__this->fields).OPPIFBJOLBI;
      if ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0)
      goto LAB_03686740;
      FKKFOKKIGCE = Nekki_SF2_GUI_Map_MapContainer__GetZoneIndexByName
                              ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1,KGLJICLJHEL,
                               (MethodInfo *)0x0);
      if (FKKFOKKIGCE < 0) {
        return;
      }
    }
    Nekki_SF2_GUI_Map_MapScene__SelectZone
              (__this,(Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1,FKKFOKKIGCE,(float)ABKNPBMGHKH,
               method);
    return;
  }
LAB_03686740:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private ZoneScrollItem DAECLPKNLGE(string AJBDHHOLPMM)  [RVA 0x3585AF8]
// Nekki.SF2.GUI.Map.MapScene$$DAECLPKNLGE @ RVA 0x3585AF8

Nekki_SF2_GUI_Map_ZoneScrollItem_o *
Nekki_SF2_GUI_Map_MapScene__DAECLPKNLGE
          (Nekki_SF2_GUI_Map_MapScene_o *__this,System_String_o *AJBDHHOLPMM,MethodInfo *method)

{
  int32_t DPJIDNBJIBG;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar2;
  
  pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    DPJIDNBJIBG = Nekki_SF2_GUI_Map_MapContainer__GetZoneIndexByName
                            (pNVar1,AJBDHHOLPMM,(MethodInfo *)0x0);
    if (DPJIDNBJIBG < 0) {
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
      if (pNVar1 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03685b70;
      DPJIDNBJIBG = Nekki_SF2_GUI_Map_MapContainer__GetZoneIndexByName
                              (pNVar1,AJBDHHOLPMM,(MethodInfo *)0x0);
      if (DPJIDNBJIBG < 0) {
        return (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
      }
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    }
    else {
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    }
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      pNVar2 = Nekki_SF2_GUI_Map_MapContainer__GetZone(pNVar1,DPJIDNBJIBG,(MethodInfo *)0x0);
      return pNVar2;
    }
  }
LAB_03685b70:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PCDOAIDDKPP()  [RVA 0x35858C8]
// Nekki.SF2.GUI.Map.MapScene$$PCDOAIDDKPP @ RVA 0x35858C8

void Nekki_SF2_GUI_Map_MapScene__PCDOAIDDKPP
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *__this_00;
  OOMHDDBCBJP_o *ODPEIFGHKNG;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_01;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).FLAMCGAKENN;
  if ((__this_00 != (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *)0x0) &&
     (ODPEIFGHKNG = Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__FLCKLDFJPGF(__this_00,(MethodInfo *)0x0)
     , ODPEIFGHKNG != (OOMHDDBCBJP_o *)0x0)) {
    __this_01 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    if (__this_01 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Map_MapContainer__SelectBattle(__this_01,ODPEIFGHKNG,0.0,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_MapScene__PIMIMOACBNG(__this,ODPEIFGHKNG,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void FNOPCFKAOEF()  [RVA 0x3585384]
// Nekki.SF2.GUI.Map.MapScene$$FNOPCFKAOEF @ RVA 0x3585384

/* WARNING: Removing unreachable block (ram,0x036855cc) */

void Nekki_SF2_GUI_Map_MapScene__FNOPCFKAOEF
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar2;
  MEJIKMPNBNL_o *__this_00;
  FightList_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MEJIKMPNBNL__o **ppSVar4;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568cfb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568cfb = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pSVar2 = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).JFANFALIFFE;
  *ppSVar4 = pSVar2;
  thunk_FUN_01c20e04(ppSVar4,pSVar2);
  if (*ppSVar4 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)*ppSVar4,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                             ), bVar1) {
      if ((OOMHDDBCBJP_o *)local_80.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = ((OOMHDDBCBJP_Fields *)((long)local_80.fields._current + 0x10))->IAJPHAAMKPC;
      if (__this_00 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = local_b8.fields._list;
      local_a0.fields._current = local_b8.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                               ), pIVar3 = local_a0.fields._current, bVar1) {
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = GameUtils__PHFFPADFANK((OOMHDDBCBJP_o *)pIVar3,(MethodInfo *)0x0);
        if ((__this_01 != (FightList_o *)0x0) &&
           (bVar1 = FightList__PHEKFMPOHBK(__this_01,(MethodInfo *)0x0), bVar1)) {
          __this_02 = (System_Collections_Generic_List_object__o *)
                      (*(__this_01->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                                (__this_01,(__this_01->klass->vtable)._4_NIKCNPMKAFK.method);
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             (__this_02,0,
                              Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
          if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             (__this_02,0,
                              Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
          if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    if (*ppSVar4 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
      if (((*ppSVar4)->fields)._size == 0) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = NLPJLHOEAOE__LMHNABHIFPK((MethodInfo *)0x0);
        *ppSVar4 = pSVar2;
        thunk_FUN_01c20e04(ppSVar4,pSVar2);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MapButtonsPanelSetSibling(int JACDAGALJHD)  [RVA 0x3586800]
// Nekki.SF2.GUI.Map.MapScene$$MapButtonsPanelSetSibling @ RVA 0x3586800

void Nekki_SF2_GUI_Map_MapScene__MapButtonsPanelSetSibling
               (Nekki_SF2_GUI_Map_MapScene_o *__this,int32_t JACDAGALJHD,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  if ((DAT_04568cfc & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    DAT_04568cfc = 1;
  }
  if ((__this->fields).super.HPPDLINDJKA != false) {
    return;
  }
  __this_00 = (__this->fields).MGIJJGGPFJB;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (JACDAGALJHD == -1) {
      if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      JACDAGALJHD = Nekki_SF2_GUI_Map_MapScene_TypeInfo->static_fields->AAGIOBBFCDN;
    }
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetSiblingIndex(__this_01,JACDAGALJHD,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override DBMPKPJGIPI get_SceneId()  [RVA 0x35868A4]
// Nekki.SF2.GUI.Map.MapScene$$get_SceneId @ RVA 0x35868A4

int32_t Nekki_SF2_GUI_Map_MapScene__get_SceneId
                  (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  return 5;
}


// ===== private void FBICEDIPMOL()  [RVA 0x35857A4]
// Nekki.SF2.GUI.Map.MapScene$$FBICEDIPMOL @ RVA 0x35857A4

void Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  MethodInfo *pMVar2;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar3;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar4;
  UnityEngine_UI_Button_o *pUVar5;
  
  if ((DAT_04568cfd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cfd = 1;
  }
  Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,false,in_x2);
  pNVar3 = (__this->fields).FMIFNIIJJNK;
  if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar4 = (pNVar3->fields).RaidToggleButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar2 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         (pNVar4 = (pNVar3->fields).RaidToggleButton,
         pNVar4 == (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) goto LAB_036858c4;
      pMVar2 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Map_RaidToggleButton__SetState(pNVar4,0,(MethodInfo *)0x0);
    }
    Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,true,pMVar2);
    __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      Nekki_SF2_GUI_Map_MapContainer__Open(__this_00,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).FMIFNIIJJNK;
      if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
        pUVar5 = (pNVar3->fields).RaidMapScrollButton;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
        pMVar2 = extraout_x1;
        if (bVar1) {
          pNVar3 = (__this->fields).FMIFNIIJJNK;
          if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
              (pUVar5 = (pNVar3->fields).RaidMapScrollButton,
              pUVar5 == (UnityEngine_UI_Button_o *)0x0)) ||
             (__this_01 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036858c4;
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          pMVar2 = extraout_x1_00;
        }
        if ((__this->fields).KFKABLNIFDP != 0) {
          (__this->fields).KFKABLNIFDP = 0;
          Nekki_SF2_GUI_Map_MapScene__EMFECCBKKGD(__this,pMVar2);
          pMVar2 = extraout_x1_01;
        }
        Nekki_SF2_GUI_Map_MapScene__EHJIAIJGNHJ(__this,pMVar2);
        return;
      }
    }
  }
LAB_036858c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnApplicationPause(bool DGBEEJNJCHH)  [RVA 0x358695C]
// Nekki.SF2.GUI.Map.MapScene$$OnApplicationPause @ RVA 0x358695C

void Nekki_SF2_GUI_Map_MapScene__OnApplicationPause
               (Nekki_SF2_GUI_Map_MapScene_o *__this,bool DGBEEJNJCHH,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar1;
  
  pNVar1 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    if ((pNVar1->fields).DBNNMLAONOF == false) {
      (__this->fields).CNKIBIHKLKA = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LNEFBMFLDDG()  [RVA 0x3585744]
// Nekki.SF2.GUI.Map.MapScene$$LNEFBMFLDDG @ RVA 0x3585744

void Nekki_SF2_GUI_Map_MapScene__LNEFBMFLDDG
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_ZoneScrollItem_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    ppNVar1 = &(__this->fields).CAJCGACFIHD;
    bVar2 = Nekki_SF2_GUI_Map_MapContainer__HasZone(__this_00,*ppNVar1,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (bVar2) {
      if (*ppNVar1 == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) goto LAB_036857a0;
      Nekki_SF2_GUI_Map_ZoneScrollItem__Enabled(*ppNVar1,false,(MethodInfo *)0x0);
      *ppNVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
      thunk_FUN_01c20e04(ppNVar1,0);
      method_00 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Map_MapScene__HNEBBPHILEA(__this,method_00);
    return;
  }
LAB_036857a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ALKKMBCDKJC()  [RVA 0x3585088]
// Nekki.SF2.GUI.Map.MapScene$$ALKKMBCDKJC @ RVA 0x3585088

void Nekki_SF2_GUI_Map_MapScene__ALKKMBCDKJC
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).MGIJJGGPFJB;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButtonsPanel__RemoveMapButtons(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__MKDPNEIAKBM(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void COLOEPLHHMJ()  [RVA 0x3586D08]
// Nekki.SF2.GUI.Map.MapScene$$COLOEPLHHMJ @ RVA 0x3586D08

void Nekki_SF2_GUI_Map_MapScene__COLOEPLHHMJ
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  UnityEngine_Events_UnityEvent_o *__this_02;
  
                    /* try { // try from 03686d08 to 03786d0b has its CatchHandler @ 03686d24 */
                    /* try { // try from 03686d0c to 03786d0f has its CatchHandler @ 03686b64 */
                    /* try { // try from 03686d10 to 03786d13 has its CatchHandler @ 03686d18 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686cb8 with catch @ 03686d14
                       try { // try from 03686d14 to 03786d43 has its CatchHandler @ 03686b64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686d10 with catch @ 03686d18
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686cd0 with catch @ 03686d1c
                        */
  if ((DAT_04568cfe & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686c7c with catch @ 03686d20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686d08 with catch @ 03686d24
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686d04 with catch @ 03686d28
                        */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_IEJPFOFGJLN__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686c54 with catch @ 03686d2c
                        */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568cfe = 1;
  }
  pNVar2 = (__this->fields).FMIFNIIJJNK;
                    /* try { // try from 03686d44 to 03786d47 has its CatchHandler @ 03686d68 */
                    /* try { // try from 03686d48 to 03786d6f has its CatchHandler @ 03686b64 */
  if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
     (pUVar1 = (pNVar2->fields).RaidMapScrollButton, pUVar1 != (UnityEngine_UI_Button_o *)0x0)) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pUVar1,true,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).FMIFNIIJJNK;
                    /* catch() { ... } // from try @ 03686d44 with catch @ 03686d68 */
                    /* try { // try from 03686d70 to 03786d77 has its CatchHandler @ 03686d8c */
    if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
       ((pUVar1 = (pNVar2->fields).RaidMapScrollButton, pUVar1 != (UnityEngine_UI_Button_o *)0x0 &&
        (__this_00 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
        __this_00 != (UnityEngine_GameObject_o *)0x0)))) {
                    /* try { // try from 03686d78 to 03786d83 has its CatchHandler @ 03686b64 */
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
                    /* try { // try from 03686d84 to 03786d8b has its CatchHandler @ 03686d8c */
      pNVar2 = (__this->fields).FMIFNIIJJNK;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03686d70 with catch @ 03686d8c
                       catch(type#2 @ 00000000) { ... } // from try @ 03686d84 with catch @ 03686d8c
                        */
      if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
         ((pUVar1 = (pNVar2->fields).RaidMapScrollButton, pUVar1 != (UnityEngine_UI_Button_o *)0x0
          && (__this_01 = (pUVar1->fields).m_OnClick,
             __this_01 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)))) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).FMIFNIIJJNK;
        if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
           (pUVar1 = (pNVar2->fields).RaidMapScrollButton, pUVar1 != (UnityEngine_UI_Button_o *)0x0)
           ) {
          __this_02 = (UnityEngine_Events_UnityEvent_o *)(pUVar1->fields).m_OnClick;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ACFKDEHDMFJ()  [RVA 0x3586E04]
// Nekki.SF2.GUI.Map.MapScene$$ACFKDEHDMFJ @ RVA 0x3586E04

void Nekki_SF2_GUI_Map_MapScene__ACFKDEHDMFJ
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Map_MapScene__FFPMJPGAIEN(__this,method);
  Nekki_SF2_GUI_Map_MapScene__ChangeRaid(__this,(__this->fields).KFKABLNIFDP + 1,in_x2);
  EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
  return;
}


// ===== private void FFFFAHJOOJP()  [RVA 0x3584EB4]
// Nekki.SF2.GUI.Map.MapScene$$FFFFAHJOOJP @ RVA 0x3584EB4

void Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_StoryMapContainer_o **ppNVar1;
  int iVar2;
  bool bVar3;
  int32_t DPJIDNBJIBG;
  MethodInfo *extraout_x1;
  MEJIKMPNBNL_o *pMVar4;
  System_String_o *DHMHOAAOHEK;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar5;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  
  if ((DAT_04568cff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cff = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields).CAJCGACFIHD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    iVar2 = (__this->fields).IAAABJBDEMK;
    ppNVar1 = &(__this->fields).DGPJKBMBBNN;
    if (iVar2 != 0) {
      ppNVar1 = (Nekki_SF2_GUI_Map_StoryMapContainer_o **)&(__this->fields).OPPIFBJOLBI;
    }
    __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar3) {
      pNVar5 = (__this->fields).CAJCGACFIHD;
      if (pNVar5 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
        Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattle(pNVar5,(MethodInfo *)0x0);
        pNVar5 = (__this->fields).CAJCGACFIHD;
        if (((pNVar5 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) &&
            (pMVar4 = (pNVar5->fields).IAJBEJGMIMM, pMVar4 != (MEJIKMPNBNL_o *)0x0)) &&
           (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0)) {
          DHMHOAAOHEK = (pMVar4->fields).DEKCPPOJFEH;
          DPJIDNBJIBG = Nekki_SF2_GUI_Map_MapContainer__GetCurrentItemIndex
                                  (__this_00,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_MapContainer__SetCurrentZone
                    (__this_00,DPJIDNBJIBG,DHMHOAAOHEK,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_MapContainer__SetLampsVisible(__this_00,iVar2 == 0,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void SetRaidMode()  [RVA 0x35863E0]
// Nekki.SF2.GUI.Map.MapScene$$SetRaidMode @ RVA 0x35863E0

void Nekki_SF2_GUI_Map_MapScene__SetRaidMode
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar1;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *__this_00;
  MethodInfo *in_x2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  
  Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,false,in_x2);
  pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__ToggleLampsPanelLocationName(pNVar1,false,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).FMIFNIIJJNK;
    if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
       (__this_00 = (pNVar2->fields).RaidToggleButton,
       __this_00 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
      method_00 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Map_RaidToggleButton__SetState(__this_00,1,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,false,method_00);
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
        Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled(pNVar1,false,(MethodInfo *)0x0);
        pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
        if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
          Nekki_SF2_GUI_Map_MapContainer__Close(pNVar1,(MethodInfo *)0x0);
          (__this->fields).IAAABJBDEMK = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x3586E5C]
// Nekki.SF2.GUI.Map.MapScene$$CLNAOMIIBLH @ RVA 0x3586E5C

void Nekki_SF2_GUI_Map_MapScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  System_Action_Color__o *CJNHFNHJHPE;
  System_Action_o *pSVar3;
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE_00;
  System_Action_ZoneScrollItem__o *CJNHFNHJHPE_01;
  MapButtonController_o *pNVar4;
  System_Action_FKNCNNOOOIO__o *pSVar5;
  FKDLCJJOGIP_o *__this_00;
  PBAKFOBIHEG_o *pPVar6;
  VirtualInvokeData *pVVar7;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  Roster_o *pAVar11;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar12;
  System_Collections_IEnumerator_o *pSVar13;
  
  if ((DAT_04568d00 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&System_Action<Color>_TypeInfo);
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_AIIOJJEPJMD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_BHLHBBKAFHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_IIDMBPKLJME__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_MEDCMFMKLED__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_NICMCKIBIAC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_OnClickBattle__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_OnStorySliderScroll__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_CLNAOMIIBLH__);
    DAT_04568d00 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<MapScene>_CLNAOMIIBLH__);
  pAVar11 = (__this->fields).OKNKKHGBECG;
  CJNHFNHJHPE = (System_Action_Color__o *)thunk_FUN_01bda818(System_Action<Color>_TypeInfo);
  System_Action<Color>___ctor();
                    /* try { // try from 03686f7c to 03787013 has its CatchHandler @ 03686f7c
                       catch() { ... } // from try @ 03686f7c with catch @ 03686f7c
                       catch() { ... } // from try @ 0368703c with catch @ 03686f7c
                       catch() { ... } // from try @ 0368708c with catch @ 03686f7c
                       catch() { ... } // from try @ 036870b4 with catch @ 03686f7c
                       catch() { ... } // from try @ 036870f4 with catch @ 03686f7c */
  if (pAVar11 != (Roster_o *)0x0) {
    Roster__MDEDBDFIFEM(pAVar11,CJNHFNHJHPE,(MethodInfo *)0x0);
    pAVar11 = (__this->fields).OKNKKHGBECG;
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pAVar11 != (Roster_o *)0x0) {
      Roster__MJJFLCIHGBO(pAVar11,pSVar3,(MethodInfo *)0x0);
      (__this->fields).OKNKKHGBECG = (Roster_o *)0x0;
      thunk_FUN_01c20e04(&(__this->fields).OKNKKHGBECG,0);
      pNVar12 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
      CJNHFNHJHPE_00 =
           (System_Action_OOMHDDBCBJP__o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
                    /* try { // try from 03687014 to 0378701b has its CatchHandler @ 03687094 */
      System_Action<object>___ctor();
      if (pNVar12 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
                    /* try { // try from 03687028 to 0378703b has its CatchHandler @ 03687098 */
        Nekki_SF2_GUI_Map_MapContainer__remove_OnBattleClicked
                  (pNVar12,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                    /* try { // try from 0368703c to 03787087 has its CatchHandler @ 03686f7c */
        pNVar12 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
        CJNHFNHJHPE_01 =
             (System_Action_ZoneScrollItem__o *)
             thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar12 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
          Nekki_SF2_GUI_Map_MapContainer__remove_OnZoneSelected
                    (pNVar12,CJNHFNHJHPE_01,(MethodInfo *)0x0);
          pNVar4 = MapButtonController__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03687088 to 0378708b has its CatchHandler @ 03687090 */
                    /* try { // try from 0368708c to 037870af has its CatchHandler @ 03686f7c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03687088 with catch @ 03687090
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03687014 with catch @ 03687094
                        */
          pSVar5 = (System_Action_FKNCNNOOOIO__o *)
                   thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03687028 with catch @ 03687098
                        */
          System_Action<object>___ctor();
          if (pNVar4 != (MapButtonController_o *)0x0) {
                    /* try { // try from 036870b0 to 037870b3 has its CatchHandler @ 036870dc */
                    /* try { // try from 036870b4 to 037870eb has its CatchHandler @ 03686f7c */
            MapButtonController__BDNPBMBKLKE(pNVar4,pSVar5,(MethodInfo *)0x0);
            pNVar4 = MapButtonController__AIHNLLGNBLC((MethodInfo *)0x0);
            pSVar5 = (System_Action_FKNCNNOOOIO__o *)
                     thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
                    /* catch() { ... } // from try @ 036870b0 with catch @ 036870dc */
            System_Action<object>___ctor();
                    /* try { // try from 036870ec to 037870f3 has its CatchHandler @ 03687108 */
            if (pNVar4 != (MapButtonController_o *)0x0) {
                    /* try { // try from 036870f4 to 037870ff has its CatchHandler @ 03686f7c */
              MapButtonController__CFPDPJKHALN(pNVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03687100 to 03787107 has its CatchHandler @ 03687108 */
              pNVar4 = MapButtonController__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036870ec with catch @ 03687108
                       catch(type#2 @ 00000000) { ... } // from try @ 03687100 with catch @ 03687108
                        */
              pSVar5 = (System_Action_FKNCNNOOOIO__o *)
                       thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
              System_Action<object>___ctor();
              if (pNVar4 != (MapButtonController_o *)0x0) {
                MapButtonController__DPBCMGAOJOP(pNVar4,pSVar5,(MethodInfo *)0x0);
                pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                System_Action___ctor();
                if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                Nekki_Utils_GlobalTimer__remove_OnTick(pSVar3,(MethodInfo *)0x0);
                __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
                pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                System_Action___ctor();
                if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
                  FKDLCJJOGIP__DAGFKDGOBBF(__this_00,pSVar3,(MethodInfo *)0x0);
                  if ((__this->fields).JNMOCNBAIMC == (System_Collections_IEnumerator_o *)0x0) {
                    return;
                  }
                  pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
                  if (pPVar6 != (PBAKFOBIHEG_o *)0x0) {
                    /* try { // try from 036871e4 to 0378738f has its CatchHandler @ 036871e4
                       catch() { ... } // from try @ 036871e4 with catch @ 036871e4
                       catch() { ... } // from try @ 036873a8 with catch @ 036871e4
                       catch() { ... } // from try @ 036873f8 with catch @ 036871e4
                       catch() { ... } // from try @ 03687438 with catch @ 036871e4 */
                    pPVar8 = pPVar6->klass;
                    ppSVar1 = &(__this->fields).JNMOCNBAIMC;
                    pSVar13 = *ppSVar1;
                    uVar2._0_1_ = (pPVar8->_2).rank;
                    uVar2._1_1_ = (pPVar8->_2).minimumAlignment;
                    uVar9 = (ulong)uVar2;
                    if (uVar9 != 0) {
                      piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
                      do {
                        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                          pVVar7 = pPVar8->vtable + (*piVar10 + 1);
                          goto LAB_0368725c;
                        }
                        uVar9 = uVar9 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar9 != 0);
                    }
                    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,1);
LAB_0368725c:
                    (*pVVar7->methodPtr)(pPVar6,pSVar13,pVVar7->method);
                    *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
                    thunk_FUN_01c20e04(ppSVar1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OpenRaids()  [RVA 0x3587290]
// Nekki.SF2.GUI.Map.MapScene$$OpenRaids @ RVA 0x3587290

void Nekki_SF2_GUI_Map_MapScene__OpenRaids(Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  System_Action_o *pSVar1;
  undefined1 auVar2 [16];
  
  Nekki_SF2_GUI_Map_MapScene__FNOPCFKAOEF(__this,method);
  Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_00);
  Nekki_SF2_GUI_Map_MapScene__LNEFBMFLDDG(__this,method_01);
  method_03 = method_02;
  if ((__this->fields).IAAABJBDEMK != 1) {
    Nekki_SF2_GUI_Map_MapScene__SetRaidMode(__this,method_02);
    (__this->fields).IAAABJBDEMK = 1;
    method_03 = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MapScene__PCDOAIDDKPP(__this,method_03);
  Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_04);
  Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_05);
  Nekki_SF2_GUI_Map_MapScene__DNKNGIHFMLC(__this,method_06);
  Nekki_SF2_GUI_Map_MapScene__MKDPNEIAKBM(__this,method_07);
  pSVar1 = (__this->fields).IGDMLILCCJP;
  if (pSVar1 != (System_Action_o *)0x0) {
    auVar2 = (*(code *)(pSVar1->fields).super.super.invoke_impl)
                       ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method
                       );
    Nekki_SF2_GUI_Map_MapScene__EADCMKDANAH(auVar2._0_8_,auVar2._8_8_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IIFBNHGGKBH()  [RVA 0x3584AEC]
// Nekki.SF2.GUI.Map.MapScene$$IIFBNHGGKBH @ RVA 0x3584AEC

void Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *pNVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Roster_o *pAVar2;
  DNELIPCHKLK_o *pDVar3;
  
  if ((DAT_04568d01 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568d01 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (Roster_o *)0x0) {
    pDVar3 = (pAVar2->fields).DHDPPCNPAIE;
    pNVar1 = (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *)
             thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_TypeInfo);
    Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ___ctor(pNVar1,pDVar3,(MethodInfo *)0x0);
    (__this->fields).JIPJNLEIIFC = pNVar1;
    thunk_FUN_01c20e04(&(__this->fields).JIPJNLEIIFC,pNVar1);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (Roster_o *)0x0) {
      pDVar3 = Roster__FNLFKFPFDKM(pAVar2,(MethodInfo *)0x0);
      pNVar1 = (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *)
               thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_TypeInfo);
      Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ___ctor(pNVar1,pDVar3,(MethodInfo *)0x0);
      (__this->fields).FLAMCGAKENN = pNVar1;
      thunk_FUN_01c20e04(&(__this->fields).FLAMCGAKENN,pNVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RaidToggleButton GetRaidToggleBtn()  [RVA 0x3587538]
// Nekki.SF2.GUI.Map.MapScene$$GetRaidToggleBtn @ RVA 0x3587538

Nekki_SF2_GUI_Map_RaidToggleButton_o *
Nekki_SF2_GUI_Map_MapScene__GetRaidToggleBtn
          (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar1;
  
  pNVar1 = (__this->fields).FMIFNIIJJNK;
  if (pNVar1 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    return (pNVar1->fields).RaidToggleButton;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EnableMapButtons(bool CMPKOOEKFKF)  [RVA 0x35850B0]
// Nekki.SF2.GUI.Map.MapScene$$EnableMapButtons @ RVA 0x35850B0

void Nekki_SF2_GUI_Map_MapScene__EnableMapButtons
               (Nekki_SF2_GUI_Map_MapScene_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *pNVar1;
  bool bVar2;
  
  pNVar1 = (__this->fields).MGIJJGGPFJB;
  if (CMPKOOEKFKF) {
    if (pNVar1 == (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) goto LAB_03685118;
    if ((__this->fields).IAAABJBDEMK != 0) {
      Nekki_SF2_GUI_Map_MapButtonsPanel__EnableStoryMapButtons(pNVar1,false,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).MGIJJGGPFJB;
      if (pNVar1 == (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) goto LAB_03685118;
      bVar2 = true;
      goto LAB_0368510c;
    }
    bVar2 = true;
  }
  else {
    if (pNVar1 == (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) goto LAB_03685118;
    bVar2 = false;
  }
  Nekki_SF2_GUI_Map_MapButtonsPanel__EnableStoryMapButtons(pNVar1,bVar2,(MethodInfo *)0x0);
  pNVar1 = (__this->fields).MGIJJGGPFJB;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
    bVar2 = false;
LAB_0368510c:
    Nekki_SF2_GUI_Map_MapButtonsPanel__EnableRaidMapButtons(pNVar1,bVar2,(MethodInfo *)0x0);
    return;
  }
LAB_03685118:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool IsZoneHaveDontCompleteBattle(MEJIKMPNBNL BHHBEIACGPB)  [RVA 0x3587554]
// Nekki.SF2.GUI.Map.MapScene$$IsZoneHaveDontCompleteBattle @ RVA 0x3587554

bool Nekki_SF2_GUI_Map_MapScene__IsZoneHaveDontCompleteBattle
               (MEJIKMPNBNL_o *BHHBEIACGPB,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  System_String_o *KGLJICLJHEL;
  OOMHDDBCBJP_o *__this;
  MethodInfo *extraout_x1;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar3;
  System_Collections_Generic_List_string__o *__this_00;
  int iVar4;
  bool bVar5;
  
  if ((DAT_04568d02 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    DAT_04568d02 = 1;
    method = extraout_x1;
  }
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MOAHCJAFGNJ_TypeInfo,method);
  }
  pMVar3 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
  if ((pMVar3 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) &&
     (__this_00 = (pMVar3->fields).IIDBLEBLLEM,
     __this_00 != (System_Collections_Generic_List_string__o *)0x0)) {
    iVar4 = (__this_00->fields)._size;
    bVar5 = 0 < iVar4;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        KGLJICLJHEL = (System_String_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,iVar4,
                                 Method_System_Collections_Generic_List<string>_get_Item__);
        if (BHHBEIACGPB == (MEJIKMPNBNL_o *)0x0) goto LAB_03687680;
        __this = MEJIKMPNBNL__KKPHCCBPIMN(BHHBEIACGPB,KGLJICLJHEL,(MethodInfo *)0x0);
        if (__this != (OOMHDDBCBJP_o *)0x0) {
          iVar2 = (*(__this->klass->vtable)._15_AAHLCCCONKI.methodPtr)
                            (__this,(__this->klass->vtable)._15_AAHLCCCONKI.method);
          bVar1 = OOMHDDBCBJP__KFMAFEPOEIB(__this,(MethodInfo *)0x0);
          if (((iVar2 == 2 && !bVar1) & (__this->fields).HHDBIGKBMEC) != 0) {
            return bVar5;
          }
        }
        iVar2 = (__this_00->fields)._size;
        iVar4 = iVar4 + 1;
        bVar5 = iVar4 < iVar2;
      } while (iVar4 < iVar2);
    }
    return bVar5;
  }
LAB_03687680:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EDBJMDJLCKH()  [RVA 0x3587684]
// Nekki.SF2.GUI.Map.MapScene$$EDBJMDJLCKH @ RVA 0x3587684

void Nekki_SF2_GUI_Map_MapScene__EDBJMDJLCKH
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar3;
  Nekki_SF2_GUI_Map_RaidMapContainer_o **ppNVar4;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *x;
  
  if ((DAT_04568d03 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d03 = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_Map_MapScene__IsSwitchingMapContainers(__this,method);
  if (bVar1) {
    return;
  }
  ppNVar4 = &(__this->fields).CLKPHCHEEJA;
  x = *ppNVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    if (*ppNVar4 == (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0) goto LAB_0368776c;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar4,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    *ppNVar4 = (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0;
    thunk_FUN_01c20e04(ppNVar4,0);
    method_00 = extraout_x1_01;
  }
  if ((__this->fields)._raidDailyButtonHideLogic == 1) {
    pNVar3 = (__this->fields).FMIFNIIJJNK;
    if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
        (__this_00 = (pNVar3->fields)._RaidDailyQuestsButton_k__BackingField,
        __this_00 == (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_0368776c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    method_00 = extraout_x1_02;
  }
  Nekki_SF2_GUI_Map_MapScene__MKEBFHLGMPO(__this,method_00);
  return;
}


// ===== private void AFIFPAJFKAA()  [RVA 0x3587878]
// Nekki.SF2.GUI.Map.MapScene$$AFIFPAJFKAA @ RVA 0x3587878

void Nekki_SF2_GUI_Map_MapScene__AFIFPAJFKAA
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar3;
  
  if ((DAT_04568d04 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_GHCILGEAFOP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_GoToRaidClick__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_NMADEIOJKKC__);
    DAT_04568d04 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).FMIFNIIJJNK;
  if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar3 = (pNVar2->fields).RaidToggleButton;
    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
    System_Action___ctor();
    if (pNVar3 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
      Nekki_SF2_GUI_Map_RaidToggleButton__add_OnGoToStoryClick(pNVar3,pSVar1,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).FMIFNIIJJNK;
      if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
        pNVar3 = (pNVar2->fields).RaidToggleButton;
        pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar3 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
          Nekki_SF2_GUI_Map_RaidToggleButton__add_OnGoToRaidClick(pNVar3,pSVar1,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).FMIFNIIJJNK;
          if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
            pNVar3 = (pNVar2->fields).RaidToggleButton;
            pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pNVar3 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
              Nekki_SF2_GUI_Map_RaidToggleButton__add_OnScrollRaidMapUp
                        (pNVar3,pSVar1,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Map_MapScene__UpdateRaidToggleBtn_EnableAndActive(__this,method_00);
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


// ===== private void DPGDEMPNFLD()  [RVA 0x3587A4C]
// Nekki.SF2.GUI.Map.MapScene$$DPGDEMPNFLD @ RVA 0x3587A4C

void Nekki_SF2_GUI_Map_MapScene__DPGDEMPNFLD
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar1;
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE;
  System_Action_ZoneScrollItem__o *CJNHFNHJHPE_00;
  System_Action_o *pSVar2;
  
  if ((DAT_04568d05 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_DJLEFJMMCMA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_OnClickBattle__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_OnStorySliderScroll__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_PMPKEJKFNOE__);
    DAT_04568d05 = 1;
  }
  pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__AddStoryZones(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    CJNHFNHJHPE = (System_Action_OOMHDDBCBJP__o *)
                  thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      Nekki_SF2_GUI_Map_MapContainer__add_OnBattleClicked(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
      CJNHFNHJHPE_00 =
           (System_Action_ZoneScrollItem__o *)
           thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
        Nekki_SF2_GUI_Map_MapContainer__add_OnZoneSelected(pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
        pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
          Nekki_SF2_GUI_Map_MapContainer__add_OnOpened(pNVar1,pSVar2,(MethodInfo *)0x0);
          pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
          pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
            Nekki_SF2_GUI_Map_MapContainer__add_OnClosed(pNVar1,pSVar2,(MethodInfo *)0x0);
            pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
            if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
              Nekki_SF2_GUI_Map_MapContainer__Close(pNVar1,(MethodInfo *)0x0);
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


// ===== public void SelectZone(MapContainer CCJPFANDJIJ, int FKKFOKKIGCE, float PNEIGGOFIOA)  [RVA 0x3586744]
// Nekki.SF2.GUI.Map.MapScene$$SelectZone @ RVA 0x3586744

void Nekki_SF2_GUI_Map_MapScene__SelectZone
               (Nekki_SF2_GUI_Map_MapScene_o *__this,Nekki_SF2_GUI_Map_MapContainer_o *CCJPFANDJIJ,
               int32_t FKKFOKKIGCE,float PNEIGGOFIOA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar2;
  MethodInfo *method_00;
  
  if ((DAT_04568d06 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d06 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)CCJPFANDJIJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (CCJPFANDJIJ != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pNVar2 = Nekki_SF2_GUI_Map_MapContainer__GetZone(CCJPFANDJIJ,FKKFOKKIGCE,(MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
      Nekki_SF2_GUI_Map_MapScene__SelectBattle
                (__this,(pNVar2->fields).KOGBPIPIKFA,PNEIGGOFIOA,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator GBJCFLOEJLF()  [RVA 0x3586314]
// Nekki.SF2.GUI.Map.MapScene$$GBJCFLOEJLF @ RVA 0x3586314

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Map_MapScene__GBJCFLOEJLF(Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *__this_00;
  Nekki_SF2_GUI_Map_MapScene_o **ppNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d07 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_TypeInfo);
    DAT_04568d07 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_TypeInfo,method);
  Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *)0x0) {
    ppNVar1 = &(__this_00->fields).__4__this;
    *ppNVar1 = __this;
    thunk_FUN_01c20e04(ppNVar1,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateCurrentZone()  [RVA 0x3584D74]
// Nekki.SF2.GUI.Map.MapScene$$UpdateCurrentZone @ RVA 0x3584D74

void Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_StoryMapContainer_o **ppNVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o **ppNVar3;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar4;
  
  if ((DAT_04568d08 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d08 = 1;
    method = extraout_x1;
  }
  ppNVar3 = &(__this->fields).CAJCGACFIHD;
  pNVar4 = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
  if (bVar2) {
    if (*ppNVar3 == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) goto LAB_03684eb0;
    Nekki_SF2_GUI_Map_ZoneScrollItem__Enabled(*ppNVar3,false,(MethodInfo *)0x0);
    *ppNVar3 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
    thunk_FUN_01c20e04(ppNVar3,0);
  }
  ppNVar1 = &(__this->fields).DGPJKBMBBNN;
  if ((__this->fields).IAAABJBDEMK != 0) {
    ppNVar1 = (Nekki_SF2_GUI_Map_StoryMapContainer_o **)&(__this->fields).OPPIFBJOLBI;
  }
  __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar2) {
    return;
  }
  if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    pNVar4 = Nekki_SF2_GUI_Map_MapContainer__GetCurrentZone(__this_00,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      return;
    }
    *ppNVar3 = pNVar4;
    thunk_FUN_01c20e04(ppNVar3,pNVar4);
    if (*ppNVar3 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
      Nekki_SF2_GUI_Map_ZoneScrollItem__Enabled(*ppNVar3,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03684eb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MJHDLJOINBP(MapScene.HODBNGIFLEJ GBPCPMGOBHC)  [RVA 0x3587BFC]
// Nekki.SF2.GUI.Map.MapScene$$MJHDLJOINBP @ RVA 0x3587BFC

void Nekki_SF2_GUI_Map_MapScene__MJHDLJOINBP
               (Nekki_SF2_GUI_Map_MapScene_o *__this,
               Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *GBPCPMGOBHC,MethodInfo *method)

{
  OOMHDDBCBJP_o *BANHBMINMMP;
  
  if (GBPCPMGOBHC != (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *)0x0) {
    BANHBMINMMP = Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__FLCKLDFJPGF(GBPCPMGOBHC,(MethodInfo *)0x0)
    ;
    Nekki_SF2_GUI_Map_MapScene__SelectBattle(__this,BANHBMINMMP,0.0,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NICMCKIBIAC(Color GKBNFBINIIP)  [RVA 0x3587C2C]
// Nekki.SF2.GUI.Map.MapScene$$NICMCKIBIAC @ RVA 0x3587C2C

void Nekki_SF2_GUI_Map_MapScene__NICMCKIBIAC
               (Nekki_SF2_GUI_Map_MapScene_o *__this,UnityEngine_Color_o GKBNFBINIIP,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Map_StoryMapContainer_o *pNVar1;
  
  pNVar1 = (__this->fields).DGPJKBMBBNN;
  if (pNVar1 != (Nekki_SF2_GUI_Map_StoryMapContainer_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03687c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._8_SetZonesBackgroundMask.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._8_SetZonesBackgroundMask.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(GKBNFBINIIP.fields.r,GKBNFBINIIP.fields.g,GKBNFBINIIP.fields.b,GKBNFBINIIP.fields.a);
}


// ===== public void UpdateBattleButtonHidden(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3587C4C]
// Nekki.SF2.GUI.Map.MapScene$$UpdateBattleButtonHidden @ RVA 0x3587C4C

void Nekki_SF2_GUI_Map_MapScene__UpdateBattleButtonHidden
               (Nekki_SF2_GUI_Map_MapScene_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this_00;
  MEJIKMPNBNL_o *pMVar2;
  
  if ((DAT_04568d09 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d09 = 1;
  }
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) {
LAB_03687cf4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (((BANHBMINMMP->fields).LFJPDELEIHG != (OLKPEJMEBPJ_o *)0x0) &&
     (pMVar2 = (BANHBMINMMP->fields).IAJPHAAMKPC, pMVar2 != (MEJIKMPNBNL_o *)0x0)) {
    __this_00 = Nekki_SF2_GUI_Map_MapScene__DAECLPKNLGE(__this,(pMVar2->fields).DEKCPPOJFEH,method);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
        Nekki_SF2_GUI_Map_ZoneScrollItem__UpdateBattleHidden
                  (__this_00,BANHBMINMMP,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03687cf4;
    }
  }
  return;
}


// ===== private void EADCMKDANAH()  [RVA 0x3587314]
// Nekki.SF2.GUI.Map.MapScene$$EADCMKDANAH @ RVA 0x3587314

void Nekki_SF2_GUI_Map_MapScene__EADCMKDANAH
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  long lVar1;
  KAKGABBLHGP_o *__this_00;
  System_Action_KHODJHFHCDE__o **ppSVar2;
  undefined8 *puVar3;
  MethodInfo *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  System_Action_KHODJHFHCDE__o *pSVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((DAT_04568d0a & 1) == 0) {
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<PackType>__);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_<>c_LJCDNPCPLED__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo);
    DAT_04568d0a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03687390 to 03787397 has its CatchHandler @ 036873dc */
  lVar1 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
  auVar10._8_8_ = method;
  auVar10._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 036873a0 to 037873a7 has its CatchHandler @ 036873d8 */
    auVar10 = FUN_01b81620(lVar1,method);
  }
                    /* try { // try from 036873a8 to 037873f3 has its CatchHandler @ 036871e4 */
  lVar1 = *(long *)(*(long *)(auVar10._0_8_ + 0xc0) + 0x10);
  auVar11._8_8_ = auVar10._8_8_;
  auVar11._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar11 = FUN_01b81620(lVar1,auVar10._8_8_);
  }
  lVar1 = Method_System_Array_Empty<PackType>__;
  uVar4 = auVar11._8_8_;
  lVar5 = *(long *)(Method_System_Array_Empty<PackType>__ + 0x38);
  plVar8 = (long *)**(undefined8 **)(auVar11._0_8_ + 0xb8);
  if (lVar5 == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036873a0 with catch @ 036873d8
                        */
    FUN_01b8167c(Method_System_Array_Empty<PackType>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03687390 with catch @ 036873dc
                        */
    lVar5 = *(long *)(lVar1 + 0x38);
    uVar4 = extraout_x1_00;
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620(lVar5,uVar4);
  }
                    /* try { // try from 036873f4 to 037873f7 has its CatchHandler @ 03687420 */
  if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* try { // try from 036873f8 to 0378742f has its CatchHandler @ 036871e4 */
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
                    /* catch() { ... } // from try @ 036873f4 with catch @ 03687420 */
  LFADLKGPBHC = (Core_Configs_Models_PackType_array *)**(undefined8 **)(lVar1 + 0xb8);
  __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
                    /* try { // try from 03687430 to 03787437 has its CatchHandler @ 0368744c */
                    /* try { // try from 03687438 to 03787443 has its CatchHandler @ 036871e4 */
  KAKGABBLHGP___ctor(__this_00,true,LFADLKGPBHC,(MethodInfo *)0x0);
                    /* try { // try from 03687444 to 0378744b has its CatchHandler @ 0368744c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03687430 with catch @ 0368744c
                       catch(type#2 @ 00000000) { ... } // from try @ 03687444 with catch @ 0368744c
                        */
  if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar9 = Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__99_0;
  if (pSVar9 == (System_Action_KHODJHFHCDE__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar9 = (System_Action_KHODJHFHCDE__o *)thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__99_0;
    *ppSVar2 = pSVar9;
    thunk_FUN_01c20e04(ppSVar2,pSVar9);
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar1 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(JNDFOKIMHPB_c **)(piVar7 + -2) == JNDFOKIMHPB_TypeInfo) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03687514;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01b81914(plVar8,JNDFOKIMHPB_TypeInfo,0);
LAB_03687514:
                    /* WARNING: Could not recover jumptable at 0x03687530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar8,__this_00,pSVar9,puVar3[1]);
  return;
}


// ===== public void ReloadZones()  [RVA 0x3587CF8]
// Nekki.SF2.GUI.Map.MapScene$$ReloadZones @ RVA 0x3587CF8

void Nekki_SF2_GUI_Map_MapScene__ReloadZones
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this_00;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  System_String_o *pSVar3;
  OOMHDDBCBJP_o *BANHBMINMMP;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *in_x2;
  Roster_o *pAVar4;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o **ppNVar5;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_04568d0b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568d0b = 1;
  }
  __this_00 = (__this->fields).MGIJJGGPFJB;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButtonsPanel__RemoveMapButtons(__this_00,(MethodInfo *)0x0);
    pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      Nekki_SF2_GUI_Map_MapContainer__Clear(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
        Nekki_SF2_GUI_Map_MapContainer__AddStoryZones(pNVar1,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Map_MapScene__HNEBBPHILEA(__this,method_00);
        ppNVar5 = &(__this->fields).CAJCGACFIHD;
        *ppNVar5 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
        thunk_FUN_01c20e04(ppNVar5,0);
        (__this->fields).IAAABJBDEMK = 0;
        pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          pPVar6 = (pNVar2->fields).QuestParameters;
          pSVar3 = MMOGKBGEPGM__GKMAFGODLLG(0x10,(MethodInfo *)0x0);
          if (pPVar6 != (PKHMIGFEJCL_o *)0x0) {
            ppSVar7 = &(pPVar6->fields).CHFDDNODLGP;
            *ppSVar7 = pSVar3;
            thunk_FUN_01c20e04(ppSVar7,pSVar3);
            Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_01);
            Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_02);
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar4 != (Roster_o *)0x0) {
              BANHBMINMMP = NLPJLHOEAOE__JIOEHAPGADN((pAVar4->fields).DHDPPCNPAIE,(MethodInfo *)0x0)
              ;
              Nekki_SF2_GUI_Map_MapScene__SelectBattle(__this,BANHBMINMMP,0.0,in_x2);
              Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_03);
              Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_04);
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


// ===== private void FLAPJEGKBIO(KHODJHFHCDE EKHNABFCAMM)  [RVA 0x3587E44]
// Nekki.SF2.GUI.Map.MapScene$$FLAPJEGKBIO @ RVA 0x3587E44

void Nekki_SF2_GUI_Map_MapScene__FLAPJEGKBIO
               (Nekki_SF2_GUI_Map_MapScene_o *__this,KHODJHFHCDE_o *EKHNABFCAMM,MethodInfo *method)

{
  bool bVar1;
  FKDLCJJOGIP_o *pFVar2;
  SFRequestSender_o *pKVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04568d0c & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568d0c = 1;
  }
  if (EKHNABFCAMM != (KHODJHFHCDE_o *)0x0) {
    if ((EKHNABFCAMM->fields)._NJFBLJHECFH_k__BackingField == false) {
      return;
    }
    pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pFVar2 != (FKDLCJJOGIP_o *)0x0) {
      if ((pFVar2->fields)._MEAPCEHFFHD_k__BackingField == false) {
        pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pFVar2 == (FKDLCJJOGIP_o *)0x0) goto LAB_03687fa8;
        method = (MethodInfo *)0x0;
        FKDLCJJOGIP__GIENGNEGHPJ(pFVar2,0,(MethodInfo *)0x0);
      }
      pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pFVar2 != (FKDLCJJOGIP_o *)0x0) {
        method_02 = extraout_x1;
        if ((pFVar2->fields)._NFAAGONINOL_k__BackingField != false) {
          pFVar2 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
          if (pFVar2 == (FKDLCJJOGIP_o *)0x0) goto LAB_03687fa8;
          bVar1 = FKDLCJJOGIP__PMINMFLPJCB(pFVar2,(MethodInfo *)0x0);
          method_02 = extraout_x1_00;
          if (bVar1) {
            if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = GameUtils__PKNDHONBNIF((MethodInfo *)0x0);
            if (bVar1) {
              bVar1 = Nekki_SF2_GUI_Map_MapScene__PAEKCOEHGMB(__this,method_00);
              if (bVar1) {
                return;
              }
              Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_01);
              Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,method);
              return;
            }
            Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_00);
            Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,method);
            pKVar3 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
            if (pKVar3 != (SFRequestSender_o *)0x0) {
              SFRequestSender__FHIODBIPGBG(pKVar3,(MethodInfo *)0x0);
              if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              GameUtils__OIPLCHEIFNJ((MethodInfo *)0x0);
              return;
            }
            goto LAB_03687fa8;
          }
        }
        Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_02);
        Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,method);
        pKVar3 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar3 != (SFRequestSender_o *)0x0) {
          SFRequestSender__FHIODBIPGBG(pKVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03687fa8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FJFDEAOHDBE(int CJGKODCGPGM)  [RVA 0x3586E30]
// Nekki.SF2.GUI.Map.MapScene$$FJFDEAOHDBE @ RVA 0x3586E30

void Nekki_SF2_GUI_Map_MapScene__FJFDEAOHDBE
               (Nekki_SF2_GUI_Map_MapScene_o *__this,int32_t CJGKODCGPGM,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapScene__FFPMJPGAIEN(__this,(MethodInfo *)(ulong)(uint)CJGKODCGPGM);
  Nekki_SF2_GUI_Map_MapScene__ChangeRaid(__this,(__this->fields).KFKABLNIFDP + CJGKODCGPGM,method);
  return;
}


// ===== private void FFPMJPGAIEN()  [RVA 0x3587FAC]
// Nekki.SF2.GUI.Map.MapScene$$FFPMJPGAIEN @ RVA 0x3587FAC

void Nekki_SF2_GUI_Map_MapScene__FFPMJPGAIEN
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *exists;
  UnityEngine_UI_Button_o *pUVar3;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar4;
  
  if ((DAT_04568d0d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d0d = 1;
    method = extraout_x1;
  }
  exists = (__this->fields).OPPIFBJOLBI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar2 = (__this->fields).FMIFNIIJJNK;
  if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pUVar3 = (pNVar2->fields).RaidMapScrollButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar2 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         (pUVar3 = (pNVar2->fields).RaidMapScrollButton, pUVar3 == (UnityEngine_UI_Button_o *)0x0))
      goto LAB_036880a8;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar3,false,(MethodInfo *)0x0);
    }
    pNVar2 = (__this->fields).FMIFNIIJJNK;
    if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
      pNVar4 = (pNVar2->fields).RaidToggleButton;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar2 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
         (pNVar4 = (pNVar2->fields).RaidToggleButton,
         pNVar4 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
        Nekki_SF2_GUI_Map_RaidToggleButton__set_interactable(pNVar4,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_036880a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MKEBFHLGMPO()  [RVA 0x3584230]
// Nekki.SF2.GUI.Map.MapScene$$MKEBFHLGMPO @ RVA 0x3584230

void Nekki_SF2_GUI_Map_MapScene__MKEBFHLGMPO
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar5;
  PKHMIGFEJCL_o *pPVar6;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *x;
  UnityEngine_UI_Button_o *pUVar7;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar8;
  
  if ((DAT_04568d0e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_PAODHPJCAPN<MEJIKMPNBNL>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d0e = 1;
    method = extraout_x1;
  }
  x = (__this->fields).OPPIFBJOLBI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar5 = (__this->fields).FMIFNIIJJNK;
    if (pNVar5 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) goto LAB_036843f4;
    pUVar7 = (pNVar5->fields).RaidMapScrollButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
    if (bVar2) {
      iVar1 = (__this->fields).KFKABLNIFDP;
      iVar3 = DJNBJHPDKDP__PAODHPJCAPN<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).JFANFALIFFE,
                         Method_DJNBJHPDKDP_PAODHPJCAPN<MEJIKMPNBNL>__);
      pNVar5 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar5 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         (pUVar7 = (pNVar5->fields).RaidMapScrollButton, pUVar7 == (UnityEngine_UI_Button_o *)0x0))
      goto LAB_036843f4;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar7,iVar1 != iVar3,(MethodInfo *)0x0);
      pNVar5 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar5 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         ((pUVar7 = (pNVar5->fields).RaidMapScrollButton, pUVar7 == (UnityEngine_UI_Button_o *)0x0
          || (__this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
             __this_00 == (UnityEngine_GameObject_o *)0x0)))) goto LAB_036843f4;
      UnityEngine_GameObject__SetActive(__this_00,iVar1 != iVar3,(MethodInfo *)0x0);
    }
    pNVar5 = (__this->fields).FMIFNIIJJNK;
    if (pNVar5 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) goto LAB_036843f4;
    pNVar8 = (pNVar5->fields).RaidToggleButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar8,(MethodInfo *)0x0);
    if (bVar2) {
      pNVar5 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar5 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         (pNVar8 = (pNVar5->fields).RaidToggleButton,
         pNVar8 == (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) goto LAB_036843f4;
      (pNVar8->fields).DIGKFGIEOAJ = (__this->fields).KFKABLNIFDP != 0;
      bVar2 = Nekki_SF2_GUI_Map_MapScene__IsSwitchingMapContainers(__this,method_00);
      Nekki_SF2_GUI_Map_RaidToggleButton__set_interactable
                (pNVar8,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
    }
  }
  if ((__this->fields).IAAABJBDEMK != 1) {
    return;
  }
  pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar4 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar6 = (pNVar4->fields).QuestParameters, pPVar6 != (PKHMIGFEJCL_o *)0x0)) {
    (pPVar6->fields).PGFEMFBAJAG = (__this->fields).KFKABLNIFDP;
    pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar4 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar4,0x45,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036843f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MKDPNEIAKBM()  [RVA 0x3586CC8]
// Nekki.SF2.GUI.Map.MapScene$$MKDPNEIAKBM @ RVA 0x3586CC8

void Nekki_SF2_GUI_Map_MapScene__MKDPNEIAKBM
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *pNVar1;
  
                    /* try { // try from 03686cd0 to 03786cdb has its CatchHandler @ 03686d1c */
  pNVar1 = (__this->fields).MGIJJGGPFJB;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
                    /* try { // try from 03686cdc to 03786d03 has its CatchHandler @ 03686b64 */
    Nekki_SF2_GUI_Map_MapButtonsPanel__AddMapButtons(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).MGIJJGGPFJB;
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_MapButtonsPanel__AddEventsButton(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).MGIJJGGPFJB;
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
        Nekki_SF2_GUI_Map_MapButtonsPanel__AddRouletteButton(pNVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03686d04 to 03786d07 has its CatchHandler @ 03686d28 */
  FUN_01bab8c8();
}


// ===== public void ScrollToItemByName(HPPDIEDAKEC HONPNKFABKF)  [RVA 0x35880AC]
// Nekki.SF2.GUI.Map.MapScene$$ScrollToItemByName @ RVA 0x35880AC

void Nekki_SF2_GUI_Map_MapScene__ScrollToItemByName
               (Nekki_SF2_GUI_Map_MapScene_o *__this,int32_t HONPNKFABKF,MethodInfo *method)

{
  bool_conflict bVar1;
  RaidManager_o *pCVar2;
  FKDLCJJOGIP_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04568d0f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d0f = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 != (RaidManager_o *)0x0) {
    bVar1 = (pCVar2->fields).BLELLCNDBHN;
    if (HONPNKFABKF == 0x11) {
      if (bVar1 == false) {
        Nekki_SF2_GUI_Map_MapScene__SetRaidMode(__this,method_00);
        __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
          FKDLCJJOGIP__LGBOGFICFPF(__this_00,(MethodInfo *)0x0);
          return;
        }
        goto LAB_0368816c;
      }
    }
    else if ((HONPNKFABKF == 0x10) && (bVar1 != false)) {
      Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_00);
      return;
    }
    return;
  }
LAB_0368816c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnRaidMapReloadedAction(Action CJNHFNHJHPE)  [RVA 0x3588170]
// Nekki.SF2.GUI.Map.MapScene$$remove_OnRaidMapReloadedAction @ RVA 0x3588170

void Nekki_SF2_GUI_Map_MapScene__remove_OnRaidMapReloadedAction
               (Nekki_SF2_GUI_Map_MapScene_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04568d10 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568d10 = 1;
  }
  ppSVar4 = &(__this->fields).IGDMLILCCJP;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void UpdateZoneLamps()  [RVA 0x358820C]
// Nekki.SF2.GUI.Map.MapScene$$UpdateZoneLamps @ RVA 0x358820C

void Nekki_SF2_GUI_Map_MapScene__UpdateZoneLamps
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_StoryMapContainer_o *x;
  
  if ((DAT_04568d11 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d11 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).DGPJKBMBBNN;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      Nekki_SF2_GUI_Map_MapContainer__UpdateLamps(__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void OnStorySliderScroll(ZoneScrollItem OCKFCPLEKAP)  [RVA 0x3588290]
// Nekki.SF2.GUI.Map.MapScene$$OnStorySliderScroll @ RVA 0x3588290

void Nekki_SF2_GUI_Map_MapScene__OnStorySliderScroll
               (Nekki_SF2_GUI_Map_MapScene_o *__this,Nekki_SF2_GUI_Map_ZoneScrollItem_o *OCKFCPLEKAP
               ,MethodInfo *method)

{
  int32_t FKKFOKKIGCE;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  MethodInfo *in_x3;
  
  __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    FKKFOKKIGCE = Nekki_SF2_GUI_Map_MapContainer__GetZoneIndex
                            (__this_00,OCKFCPLEKAP,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__SelectZone
              (__this,(Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN,FKKFOKKIGCE,
               0.0,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public InfoBattle get_InfoBattle()  [RVA 0x35882C4]
// Nekki.SF2.GUI.Map.MapScene$$get_InfoBattle @ RVA 0x35882C4

Nekki_SF2_GUI_Map_InfoBattle_o *
Nekki_SF2_GUI_Map_MapScene__get_InfoBattle(Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  return (__this->fields).OCBDFDALFLL;
}


// ===== private void DJLEFJMMCMA()  [RVA 0x35882CC]
// Nekki.SF2.GUI.Map.MapScene$$DJLEFJMMCMA @ RVA 0x35882CC

void Nekki_SF2_GUI_Map_MapScene__DJLEFJMMCMA
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *__this_00;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar4;
  RaidManager_o *pCVar5;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_02;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  MethodInfo *pMVar6;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar7;
  System_Action_o *pSVar8;
  PKHMIGFEJCL_o *pPVar9;
  System_String_o **ppSVar10;
  UnityEngine_UI_Button_o *pUVar11;
  
  if ((DAT_04568d12 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d12 = 1;
  }
  (__this->fields).IAAABJBDEMK = 1;
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    pPVar9 = (pNVar2->fields).QuestParameters;
    pSVar3 = MMOGKBGEPGM__GKMAFGODLLG(0x11,(MethodInfo *)0x0);
    if (pPVar9 != (PKHMIGFEJCL_o *)0x0) {
      ppSVar10 = &(pPVar9->fields).CHFDDNODLGP;
      *ppSVar10 = pSVar3;
      thunk_FUN_01c20e04(ppSVar10,pSVar3);
      Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_00);
      Nekki_SF2_GUI_Map_MapScene__MJHDLJOINBP(__this,(__this->fields).FLAMCGAKENN,in_x2);
      pNVar7 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar7 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
         (__this_00 = (pNVar7->fields).RaidToggleButton,
         __this_00 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
        Nekki_SF2_GUI_Map_RaidToggleButton__SetState(__this_00,1,(MethodInfo *)0x0);
        pNVar4 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
        if (pNVar4 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
          Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar4,false,(MethodInfo *)0x0);
          pNVar4 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
          if (pNVar4 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
            Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar4,true,(MethodInfo *)0x0);
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pCVar5 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
            if (pCVar5 != (RaidManager_o *)0x0) {
              pMVar6 = method_01;
              if ((pCVar5->fields).BLELLCNDBHN != false) {
                Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_01);
                pMVar6 = extraout_x1;
              }
              Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,pMVar6);
              Nekki_SF2_GUI_Map_MapScene__DNKNGIHFMLC(__this,method_02);
              pNVar4 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
              if (pNVar4 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
                Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled(pNVar4,false,(MethodInfo *)0x0);
                pNVar4 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
                if (pNVar4 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
                  pMVar6 = (MethodInfo *)0x0;
                  Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled(pNVar4,true,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,pMVar6);
                  Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,true,pMVar6);
                  pNVar7 = (__this->fields).FMIFNIIJJNK;
                  if (pNVar7 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
                    pUVar11 = (pNVar7->fields).RaidMapScrollButton;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar1 = UnityEngine_Object__op_Implicit
                                      ((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
                    pMVar6 = extraout_x1_00;
                    if (bVar1) {
                      pNVar7 = (__this->fields).FMIFNIIJJNK;
                      if (((pNVar7 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
                          (pUVar11 = (pNVar7->fields).RaidMapScrollButton,
                          pUVar11 == (UnityEngine_UI_Button_o *)0x0)) ||
                         (__this_01 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar11,
                                                 (MethodInfo *)0x0),
                         __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0368849c;
                      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
                      pMVar6 = extraout_x1_01;
                    }
                    Nekki_SF2_GUI_Map_MapScene__MKEBFHLGMPO(__this,pMVar6);
                    pSVar8 = (__this->fields).KFECPODMONB;
                    if (pSVar8 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03688498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)(pSVar8->fields).super.super.invoke_impl)
                                ((pSVar8->fields).super.super.method_code,
                                 (pSVar8->fields).super.super.method);
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
LAB_0368849c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LHHLFBBBJLD(RectTransform FPANKOCKNJA, string KLEGNFLIAPC)  [RVA 0x3585E04]
// Nekki.SF2.GUI.Map.MapScene$$LHHLFBBBJLD @ RVA 0x3585E04

void Nekki_SF2_GUI_Map_MapScene__LHHLFBBBJLD
               (Nekki_SF2_GUI_Map_MapScene_o *__this,UnityEngine_RectTransform_o *FPANKOCKNJA,
               System_String_o *KLEGNFLIAPC,MethodInfo *method)

{
  Nekki_SF2_GUI_HintBoxAutoKilled_o *pNVar1;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  UnityEngine_Vector3_o HHPABFGHALF;
  
  if ((DAT_04568d13 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_04568d13 = 1;
  }
  pNVar2 = (__this->fields).FMIFNIIJJNK;
  if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
     (pNVar1 = (pNVar2->fields).RaidHintPrefab, pNVar1 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0))
  {
    DKIDCBPNMPD = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    HOKHHGFLMNA = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (FPANKOCKNJA != (UnityEngine_RectTransform_o *)0x0) {
      HHPABFGHALF = UnityEngine_Transform__get_position
                              ((UnityEngine_Transform_o *)FPANKOCKNJA,(MethodInfo *)0x0);
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566664 == '\0') {
        FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
        DAT_04566664 = '\x01';
      }
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar1 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                         (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,
                          DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM,-1.0,-1.0,
                          (MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(pNVar1,KLEGNFLIAPC,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ(object IMMNELPBGIF)  [RVA 0x35884A0]
// Nekki.SF2.GUI.Map.MapScene$$GIENGNEGHPJ @ RVA 0x35884A0

void Nekki_SF2_GUI_Map_MapScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Map_MapScene_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar4;
  Nekki_SF2_GUI_Map_StoryMapContainer_o *pNVar5;
  Nekki_SF2_GUI_Map_InfoBattle_o *pNVar6;
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *pNVar7;
  RaidManager_o *pCVar8;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar9;
  System_Action_o *pSVar10;
  MapButtonController_o *pNVar11;
  System_Action_FKNCNNOOOIO__o *pSVar12;
  System_Action_Color__o *CJNHFNHJHPE;
  FKDLCJJOGIP_o *pFVar13;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar14;
  System_String_o *pSVar15;
  MethodInfo *pMVar16;
  System_Collections_IEnumerator_o *pSVar17;
  VirtualInvokeData *pVVar18;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *pMVar19;
  Roster_o *pAVar20;
  PBAKFOBIHEG_c *pPVar21;
  ulong uVar22;
  int32_t *piVar23;
  Nekki_SF2_GUI_Map_MapButtonsPanel_o **ppNVar24;
  Nekki_SF2_GUI_Map_StoryMapContainer_o **ppNVar25;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *exists;
  PKHMIGFEJCL_o *pPVar26;
  System_String_o **ppSVar27;
  
  if ((DAT_04568d14 & 1) == 0) {
    FUN_01bab630(&System_Action<Color>_TypeInfo);
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MFIKGMIDDIG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_AIIOJJEPJMD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_BHLHBBKAFHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_IIDMBPKLJME__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_MEDCMFMKLED__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_NICMCKIBIAC__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<InfoBattle>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<MapButtonsPanel>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<RaidMapUIModule>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<StoryMapContainer>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_GIENGNEGHPJ__);
    FUN_01bab630(&StringLiteral_19657/*"menu"*/);
    DAT_04568d14 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<MapScene>_GIENGNEGHPJ__);
  if (MFIKGMIDDIG_TypeInfo->static_fields->NHGIAGMKJKG == false) {
    MFIKGMIDDIG__DKLEOPOALEN(StringLiteral_19657/*"menu"*/,true,(MethodInfo *)0x0);
  }
  pNVar4 = (Nekki_SF2_GUI_RaidMapUIModule_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<RaidMapUIModule>__);
  (__this->fields).FMIFNIIJJNK = pNVar4;
  thunk_FUN_01c20e04();
  pNVar5 = (Nekki_SF2_GUI_Map_StoryMapContainer_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<StoryMapContainer>__);
  ppNVar25 = &(__this->fields).DGPJKBMBBNN;
  *ppNVar25 = pNVar5;
  thunk_FUN_01c20e04(ppNVar25,pNVar5);
  pNVar6 = (Nekki_SF2_GUI_Map_InfoBattle_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<InfoBattle>__);
  (__this->fields).OCBDFDALFLL = pNVar6;
  thunk_FUN_01c20e04();
  pNVar7 = (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<MapButtonsPanel>__);
  ppNVar24 = &(__this->fields).MGIJJGGPFJB;
  *ppNVar24 = pNVar7;
  thunk_FUN_01c20e04(ppNVar24,pNVar7);
  Nekki_SF2_GUI_Map_MapScene__FNOPCFKAOEF(__this,method_00);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar8 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar8 == (RaidManager_o *)0x0) goto LAB_03688ca0;
  (__this->fields).KFKABLNIFDP = (pCVar8->fields).ANDOENDCBPM;
  Nekki_SF2_GUI_Map_MapScene__DPGDEMPNFLD(__this,method_01);
  Nekki_SF2_GUI_Map_MapScene__EMFECCBKKGD(__this,method_02);
  exists = (__this->fields).OPPIFBJOLBI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  pMVar19 = extraout_x1;
  if (bVar2) {
    pNVar9 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    if (pNVar9 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03688ca0;
    Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar9,false,(MethodInfo *)0x0);
    pNVar9 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    if (pNVar9 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03688ca0;
    Nekki_SF2_GUI_Map_MapContainer__ShowUI(pNVar9,false,(MethodInfo *)0x0);
    pMVar19 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Map_MapScene__AFIFPAJFKAA(__this,pMVar19);
  Nekki_SF2_GUI_Map_MapScene__MKDPNEIAKBM(__this,method_03);
  pSVar10 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(pSVar10,(MethodInfo *)0x0);
  pNVar11 = MapButtonController__AIHNLLGNBLC((MethodInfo *)0x0);
  pSVar12 = (System_Action_FKNCNNOOOIO__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar11 == (MapButtonController_o *)0x0) goto LAB_03688ca0;
  MapButtonController__GAOPCGKKBFH(pNVar11,pSVar12,(MethodInfo *)0x0);
  pNVar11 = MapButtonController__AIHNLLGNBLC((MethodInfo *)0x0);
  pSVar12 = (System_Action_FKNCNNOOOIO__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar11 == (MapButtonController_o *)0x0) goto LAB_03688ca0;
  MapButtonController__GLDENAIADCG(pNVar11,pSVar12,(MethodInfo *)0x0);
  pNVar11 = MapButtonController__AIHNLLGNBLC((MethodInfo *)0x0);
  pSVar12 = (System_Action_FKNCNNOOOIO__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar11 == (MapButtonController_o *)0x0) goto LAB_03688ca0;
  MapButtonController__OAOEHBBPHND(pNVar11,pSVar12,(MethodInfo *)0x0);
  pNVar5 = *ppNVar25;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar20 == (Roster_o *)0x0) || (pNVar5 == (Nekki_SF2_GUI_Map_StoryMapContainer_o *)0x0))
  goto LAB_03688ca0;
  (*(pNVar5->klass->vtable)._8_SetZonesBackgroundMask.methodPtr)
            ((pAVar20->fields).OAFCNHEOKBM.fields.r,(pAVar20->fields).OAFCNHEOKBM.fields.g,
             (pAVar20->fields).OAFCNHEOKBM.fields.b,(pAVar20->fields).OAFCNHEOKBM.fields.a,pNVar5,
             (pNVar5->klass->vtable)._8_SetZonesBackgroundMask.method);
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (__this->fields).OKNKKHGBECG = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  thunk_FUN_01c20e04(&(__this->fields).OKNKKHGBECG);
  pAVar20 = (__this->fields).OKNKKHGBECG;
  CJNHFNHJHPE = (System_Action_Color__o *)thunk_FUN_01bda818(System_Action<Color>_TypeInfo);
  System_Action<Color>___ctor();
  if (pAVar20 == (Roster_o *)0x0) goto LAB_03688ca0;
  Roster__APFNIJABLEJ(pAVar20,CJNHFNHJHPE,(MethodInfo *)0x0);
  pAVar20 = (__this->fields).OKNKKHGBECG;
  pSVar10 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pAVar20 == (Roster_o *)0x0) goto LAB_03688ca0;
  Roster__CBBKFBLPJEI(pAVar20,pSVar10,(MethodInfo *)0x0);
  pFVar13 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  pSVar10 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pFVar13 == (FKDLCJJOGIP_o *)0x0) goto LAB_03688ca0;
  pMVar19 = (MethodInfo *)0x0;
  FKDLCJJOGIP__AJLLLOFFOHF(pFVar13,pSVar10,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_04);
  pNVar14 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar14 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03688ca0;
  pPVar26 = (pNVar14->fields).QuestParameters;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  pCVar8 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar8 == (RaidManager_o *)0x0) goto LAB_03688ca0;
  if ((pCVar8->fields).BLELLCNDBHN == false) {
LAB_03688af8:
    pNVar9 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    (__this->fields).IAAABJBDEMK = 0;
    if (pNVar9 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03688ca0;
    Nekki_SF2_GUI_Map_MapContainer__OpenRightNow(pNVar9,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__MJHDLJOINBP(__this,(__this->fields).JIPJNLEIIFC,pMVar19);
    pSVar15 = MMOGKBGEPGM__GKMAFGODLLG(0x10,(MethodInfo *)0x0);
    if (pPVar26 == (PKHMIGFEJCL_o *)0x0) goto LAB_03688ca0;
    ppSVar27 = &(pPVar26->fields).CHFDDNODLGP;
    *ppSVar27 = pSVar15;
    thunk_FUN_01c20e04(ppSVar27,pSVar15);
    Nekki_SF2_GUI_Map_MapScene__EHJIAIJGNHJ(__this,method_06);
    bVar2 = false;
  }
  else {
    pFVar13 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pFVar13 == (FKDLCJJOGIP_o *)0x0) goto LAB_03688ca0;
    bVar2 = FKDLCJJOGIP__PMINMFLPJCB(pFVar13,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar8 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar8 == (RaidManager_o *)0x0) goto LAB_03688ca0;
      pMVar19 = (MethodInfo *)0x0;
      RaidManager__GJPOEDJOAAM(pCVar8,false,(MethodInfo *)0x0);
      goto LAB_03688af8;
    }
    (__this->fields).IAAABJBDEMK = 1;
    pFVar13 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pFVar13 == (FKDLCJJOGIP_o *)0x0) goto LAB_03688ca0;
    FKDLCJJOGIP__LGBOGFICFPF(pFVar13,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar25 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0)
    goto LAB_03688ca0;
    Nekki_SF2_GUI_Map_MapContainer__CloseRightNow
              ((Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar25,(MethodInfo *)0x0);
    pNVar9 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    if (pNVar9 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03688ca0;
    Nekki_SF2_GUI_Map_MapContainer__OpenRightNow(pNVar9,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__MJHDLJOINBP(__this,(__this->fields).FLAMCGAKENN,pMVar19);
    pSVar15 = MMOGKBGEPGM__GKMAFGODLLG(0x11,(MethodInfo *)0x0);
    if (pPVar26 == (PKHMIGFEJCL_o *)0x0) goto LAB_03688ca0;
    ppSVar27 = &(pPVar26->fields).CHFDDNODLGP;
    *ppSVar27 = pSVar15;
    thunk_FUN_01c20e04(ppSVar27,pSVar15);
    Nekki_SF2_GUI_Map_MapScene__DNKNGIHFMLC(__this,method_05);
    bVar2 = true;
  }
  pMVar16 = (MethodInfo *)CoroutineManager__get_Current((MethodInfo *)0x0);
  pMVar19 = pMVar16;
  if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
    pMVar19 = (MethodInfo *)thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapScene_TypeInfo);
  }
  pSVar17 = Nekki_SF2_GUI_Map_MapScene__CNPHOIBCCOD(pMVar19);
  if (pMVar16 != (MethodInfo *)0x0) {
    pPVar21 = (PBAKFOBIHEG_c *)pMVar16->methodPointer;
    uVar1._0_1_ = (pPVar21->_2).rank;
    uVar1._1_1_ = (pPVar21->_2).minimumAlignment;
    uVar22 = (ulong)uVar1;
    if (uVar22 != 0) {
      piVar23 = &((pPVar21->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar23 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar18 = pPVar21->vtable + *piVar23;
          goto LAB_03688bcc;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    pVVar18 = (VirtualInvokeData *)FUN_01b81914(pMVar16,PBAKFOBIHEG_TypeInfo,0);
LAB_03688bcc:
    pMVar19 = (MethodInfo *)0x1;
    pSVar17 = (System_Collections_IEnumerator_o *)
              (*pVVar18->methodPtr)(pMVar16,pSVar17,1,pVVar18->method);
    (__this->fields).JNMOCNBAIMC = pSVar17;
    thunk_FUN_01c20e04(&(__this->fields).JNMOCNBAIMC);
    Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,true,pMVar19);
    Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_07);
    Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_08);
    Nekki_SF2_GUI_Map_MapScene__MKEBFHLGMPO(__this,method_09);
    if (!bVar2) {
      Nekki_SF2_GUI_Map_MapScene__COLOEPLHHMJ(__this,method_10);
    }
    if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Nekki_SF2_GUI_Map_MapScene_TypeInfo->static_fields->AAGIOBBFCDN == -1) {
      if ((*ppNVar24 == (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)*ppNVar24,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03688ca0;
      iVar3 = UnityEngine_Transform__GetSiblingIndex(__this_00,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapScene_TypeInfo);
      }
      Nekki_SF2_GUI_Map_MapScene_TypeInfo->static_fields->AAGIOBBFCDN = iVar3 + -1;
    }
    return;
  }
LAB_03688ca0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NMADEIOJKKC()  [RVA 0x3588CA4]
// Nekki.SF2.GUI.Map.MapScene$$NMADEIOJKKC @ RVA 0x3588CA4

void Nekki_SF2_GUI_Map_MapScene__NMADEIOJKKC
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Map_MapScene__FFPMJPGAIEN(__this,method);
  Nekki_SF2_GUI_Map_MapScene__ChangeRaid(__this,(__this->fields).KFKABLNIFDP + -1,in_x2);
  return;
}


// ===== public void GoToRaidClick()  [RVA 0x3588CC4]
// Nekki.SF2.GUI.Map.MapScene$$GoToRaidClick @ RVA 0x3588CC4

void Nekki_SF2_GUI_Map_MapScene__GoToRaidClick
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  long lVar1;
  KAKGABBLHGP_o *__this_00;
  undefined8 uVar2;
  undefined8 *puVar3;
  MethodInfo *extraout_x1;
  undefined8 extraout_x1_00;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((DAT_04568d15 & 1) == 0) {
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<PackType>__);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_FLAPJEGKBIO__);
    DAT_04568d15 = 1;
    method = extraout_x1;
  }
  lVar1 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
  auVar8._8_8_ = method;
  auVar8._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar8 = FUN_01b81620(lVar1,method);
  }
  lVar1 = *(long *)(*(long *)(auVar8._0_8_ + 0xc0) + 0x10);
  auVar9._8_8_ = auVar8._8_8_;
  auVar9._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar9 = FUN_01b81620(lVar1,auVar8._8_8_);
  }
  lVar1 = Method_System_Array_Empty<PackType>__;
  uVar2 = auVar9._8_8_;
  lVar4 = *(long *)(Method_System_Array_Empty<PackType>__ + 0x38);
  plVar7 = (long *)**(undefined8 **)(auVar9._0_8_ + 0xb8);
  if (lVar4 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<PackType>__);
    lVar4 = *(long *)(lVar1 + 0x38);
    uVar2 = extraout_x1_00;
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620(lVar4,uVar2);
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  LFADLKGPBHC = (Core_Configs_Models_PackType_array *)**(undefined8 **)(lVar1 + 0xb8);
  __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
  KAKGABBLHGP___ctor(__this_00,true,LFADLKGPBHC,(MethodInfo *)0x0);
  uVar2 = thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
  System_Action<object>___ctor();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar1 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(JNDFOKIMHPB_c **)(piVar6 + -2) == JNDFOKIMHPB_TypeInfo) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03688e6c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01b81914(plVar7,JNDFOKIMHPB_TypeInfo,0);
LAB_03688e6c:
                    /* WARNING: Could not recover jumptable at 0x03688e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,__this_00,uVar2,puVar3[1]);
  return;
}


// ===== public static bool IsZoneOpen(MEJIKMPNBNL BHHBEIACGPB)  [RVA 0x3588E94]
// Nekki.SF2.GUI.Map.MapScene$$IsZoneOpen @ RVA 0x3588E94

bool Nekki_SF2_GUI_Map_MapScene__IsZoneOpen(MEJIKMPNBNL_o *BHHBEIACGPB,MethodInfo *method)

{
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this;
  System_Collections_Generic_List_OOMHDDBCBJP__o *pSVar1;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_04568d16 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
    DAT_04568d16 = 1;
  }
  if (BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) {
    __this = MEJIKMPNBNL__LJOCPCHJNIJ(BHHBEIACGPB,2,false,(MethodInfo *)0x0);
    pSVar1 = MEJIKMPNBNL__LJOCPCHJNIJ(BHHBEIACGPB,0x15,false,(MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this,
                 (System_Collections_Generic_IEnumerable_T__o *)pSVar1,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_AddRange__);
      pSVar1 = MEJIKMPNBNL__LJOCPCHJNIJ(BHHBEIACGPB,8,false,(MethodInfo *)0x0);
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this,
                 (System_Collections_Generic_IEnumerable_T__o *)pSVar1,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_AddRange__);
      if ((__this->fields)._size < 1) {
        return false;
      }
      index = 0;
      while (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index,
                                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__),
            pIVar2 != (Il2CppObject *)0x0) {
        if ((*(char *)&pIVar2[0xb].klass != '\0') ||
           (index = index + 1, (__this->fields)._size <= index)) {
          return *(char *)&pIVar2[0xb].klass != '\0';
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== private void EMFECCBKKGD()  [RVA 0x35868AC]
// Nekki.SF2.GUI.Map.MapScene$$EMFECCBKKGD @ RVA 0x35868AC

void Nekki_SF2_GUI_Map_MapScene__EMFECCBKKGD
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_Map_RaidMapContainer_o **ppNVar2;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *pNVar3;
  
  if ((DAT_04568d17 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d17 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).OPPIFBJOLBI;
  pNVar3 = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 == (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  }
  pNVar3 = Nekki_SF2_GUI_Map_MapScene__CJIKOBCFOOF(__this,(__this->fields).KFKABLNIFDP,false,in_x3);
  (__this->fields).OPPIFBJOLBI = pNVar3;
  thunk_FUN_01c20e04(ppNVar2,pNVar3);
  return;
}


// ===== private void PIMIMOACBNG(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3584C40]
// Nekki.SF2.GUI.Map.MapScene$$PIMIMOACBNG @ RVA 0x3584C40

void Nekki_SF2_GUI_Map_MapScene__PIMIMOACBNG
               (Nekki_SF2_GUI_Map_MapScene_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Map_InfoBattle_o *pNVar2;
  FightList_o *pAVar3;
  Roster_o *__this_00;
  DNELIPCHKLK_o *CJNHFNHJHPE;
  
  if ((DAT_04568d18 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568d18 = 1;
  }
  pNVar2 = (__this->fields).OCBDFDALFLL;
  if (pNVar2 != (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0) {
    Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(pNVar2,BANHBMINMMP,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).OCBDFDALFLL;
    if (pNVar2 != (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0) {
      pAVar3 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentFight(pNVar2,(MethodInfo *)0x0);
      if (pAVar3 == (FightList_o *)0x0) {
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar3 = GameUtils__AHAHJGBMGNL(BANHBMINMMP,(MethodInfo *)0x0);
        if (pAVar3 == (FightList_o *)0x0) {
          return;
        }
      }
      iVar1 = (__this->fields).IAAABJBDEMK;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (Roster_o *)0x0) {
        CJNHFNHJHPE = (pAVar3->fields).KOILJHHCIEE;
        if (iVar1 != 0) {
          Roster__NEIDLAJCOEJ(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
        Roster__AAKJALHCIBB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HideEventButtonNotificator()  [RVA 0x3588FAC]
// Nekki.SF2.GUI.Map.MapScene$$HideEventButtonNotificator @ RVA 0x3588FAC

void Nekki_SF2_GUI_Map_MapScene__HideEventButtonNotificator
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this_00;
  
  __this_00 = (__this->fields).MGIJJGGPFJB;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButtonsPanel__HideEventButtonNotificator(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HNEBBPHILEA()  [RVA 0x358698C]
// Nekki.SF2.GUI.Map.MapScene$$HNEBBPHILEA @ RVA 0x358698C

void Nekki_SF2_GUI_Map_MapScene__HNEBBPHILEA
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Action_MEJIKMPNBNL__o **ppSVar6;
  MEJIKMPNBNL_o *BHHBEIACGPB;
  undefined8 uVar7;
  int index;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *__this_01;
  System_Action_MEJIKMPNBNL__o *action;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_04568d19 & 1) == 0) {
    FUN_01bab630(&System_Action<MEJIKMPNBNL>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_<>c_EFNKANEGAOF__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_9501/*"No raid zones found, but _currentRaidIndex is [{0}]"*/);
    FUN_01bab630(&StringLiteral_3260/*"Available zones:"*/);
    FUN_01bab630(&StringLiteral_16189/*"_currentRaidIndex [{0}] is greater then max _raidZones or less then zero and will be reset to 0"*/);
    DAT_04568d19 = 1;
  }
  __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__Clear(__this_00,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).JFANFALIFFE;
    if (pSVar2 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      if (iVar1 == 0) {
        pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        local_34 = (__this->fields).KFKABLNIFDP;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        if (pSVar3 == (System_Object_array *)0x0) goto LAB_03686cb4;
                    /* try { // try from 03686c54 to 03786c5b has its CatchHandler @ 03686d2c */
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class), lVar5 == 0
           )) {
LAB_03686cbc:
          uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar7,0);
        }
        if ((int)pSVar3->max_length == 0) {
LAB_03686cb8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03686cb8 to 03786ccb has its CatchHandler @ 03686d14 */
          FUN_01bab8d0();
        }
        pSVar3->m_Items[0] = pIVar4;
        thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
                    /* try { // try from 03686c7c to 03786c8f has its CatchHandler @ 03686d20 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_9501/*"No raid zones found, but _currentRaidIndex is [{0}]"*/,pSVar3,(MethodInfo *)0x0);
      }
      else {
        index = (__this->fields).KFKABLNIFDP;
        if ((index < 0) || (iVar1 + -1 < index)) {
          pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          local_38 = (__this->fields).KFKABLNIFDP;
          pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03686cb4;
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03686cbc;
          if ((int)pSVar3->max_length == 0) goto LAB_03686cb8;
          pSVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_16189/*"_currentRaidIndex [{0}] is greater then max _raidZones or less then zero and will be reset to 0"*/,pSVar3,(MethodInfo *)0x0);
          UnityEngine_Debug__LogError(StringLiteral_3260/*"Available zones:"*/,(MethodInfo *)0x0);
          pSVar2 = (__this->fields).JFANFALIFFE;
          if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          action = Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__53_0;
          if (action == (System_Action_MEJIKMPNBNL__o *)0x0) {
            if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 03686b64 to 03786c53 has its CatchHandler @ 03686b64
                       catch() { ... } // from try @ 03686b64 with catch @ 03686b64
                       catch() { ... } // from try @ 03686cdc with catch @ 03686b64
                       catch() { ... } // from try @ 03686d0c with catch @ 03686b64
                       catch() { ... } // from try @ 03686d14 with catch @ 03686b64
                       catch() { ... } // from try @ 03686d48 with catch @ 03686b64
                       catch() { ... } // from try @ 03686d78 with catch @ 03686b64 */
            action = (System_Action_MEJIKMPNBNL__o *)
                     thunk_FUN_01bda818(System_Action<MEJIKMPNBNL>_TypeInfo);
            System_Action<object>___ctor();
            ppSVar6 = &Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__53_0;
            *ppSVar6 = action;
            thunk_FUN_01c20e04(ppSVar6,action);
          }
          if (pSVar2 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) goto LAB_03686cb4;
          System_Collections_Generic_List<object>__ForEach
                    ((System_Collections_Generic_List_object__o *)pSVar2,
                     (System_Action_T__o *)action,
                     Method_System_Collections_Generic_List<MEJIKMPNBNL>_ForEach__);
          pSVar2 = (__this->fields).JFANFALIFFE;
          (__this->fields).KFKABLNIFDP = 0;
          if (pSVar2 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) goto LAB_03686cb4;
          index = 0;
        }
        __this_01 = (__this->fields).OPPIFBJOLBI;
        BHHBEIACGPB = (MEJIKMPNBNL_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                 Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
        if (__this_01 == (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0) goto LAB_03686cb4;
        Nekki_SF2_GUI_Map_RaidMapContainer__AddRaidZone(__this_01,BHHBEIACGPB,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_03686cb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BHLHBBKAFHH()  [RVA 0x3588FC8]
// Nekki.SF2.GUI.Map.MapScene$$BHLHBBKAFHH @ RVA 0x3588FC8

void Nekki_SF2_GUI_Map_MapScene__BHLHBBKAFHH
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((__this->fields).CNKIBIHKLKA != false) {
    Nekki_SF2_GUI_Map_MapScene__ALKKMBCDKJC(__this,method);
    Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,true,in_x2);
    (__this->fields).CNKIBIHKLKA = false;
  }
  return;
}


// ===== internal static bool IOFENOLJOOO()  [RVA 0x3588FF4]
// Nekki.SF2.GUI.Map.MapScene$$IOFENOLJOOO @ RVA 0x3588FF4

bool Nekki_SF2_GUI_Map_MapScene__IOFENOLJOOO(MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  RaidQuestsManager_o *pGVar4;
  DialogsManager_o *pGVar5;
  PlayerData_o *__this;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  Roster_o *pAVar6;
  LPAPAMPGDFN_o *pLVar7;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  
  if ((DAT_04568d1a & 1) == 0) {
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d1a = 1;
  }
  bVar2 = RaidQuestsManager__EBPPGDNPHGG((MethodInfo *)0x0);
  if (bVar2) {
    if (DAT_04565e5a == '\0') {
      FUN_01bab630(&SceneManagerSF_TypeInfo);
      DAT_04565e5a = '\x01';
    }
    iVar1 = SceneManagerSF_TypeInfo->static_fields->DLOIHNBNGDB;
    if ((iVar1 == 5) || (iVar1 == 3)) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pGVar4 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
      if (pGVar4 == (RaidQuestsManager_o *)0x0) {
LAB_036891e4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pGVar4->fields)._MBJGPIOFAEE_k__BackingField != (BPBGAAHBFKH_o *)0x0) {
        pGVar5 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pGVar5 == (DialogsManager_o *)0x0) goto LAB_036891e4;
        x = (pGVar5->fields)._AOOFDKJAALA_k__BackingField;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar6 == (Roster_o *)0x0) ||
             (pLVar7 = (pAVar6->fields).LMCDOMHENMC, pLVar7 == (LPAPAMPGDFN_o *)0x0))
          goto LAB_036891e4;
          if ((pLVar7->fields).AMIMEMOELHE == 0x32) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (__this == (PlayerData_o *)0x0) goto LAB_036891e4;
            iVar3 = PlayerData__NJNJAECEPCP(__this,(MethodInfo *)0x0);
            if (iVar3 != 3) {
              __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
              if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_036891e4;
              iVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_ScheduledQuestsCount
                                (__this_00,(MethodInfo *)0x0);
              if (iVar3 == 0) {
                if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar2 = MainSettings__PBHLPMFKMAH((MethodInfo *)0x0);
                return bVar2;
              }
            }
          }
        }
      }
    }
  }
  return false;
}


// ===== private void GHCILGEAFOP()  [RVA 0x35891E8]
// Nekki.SF2.GUI.Map.MapScene$$GHCILGEAFOP @ RVA 0x35891E8

void Nekki_SF2_GUI_Map_MapScene__GHCILGEAFOP
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t ELHAJJAHLHM;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PKHMIGFEJCL_o *pPVar3;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar4;
  
  if ((DAT_04568d1b & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568d1b = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
    ELHAJJAHLHM = MMOGKBGEPGM__GFLCMDMEOBN((pPVar3->fields).CHFDDNODLGP,(MethodInfo *)0x0);
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GameUtils_TypeInfo);
    }
    method_01 = (MethodInfo *)0x0;
    bVar1 = GameUtils__BIFPGEGFDLK(ELHAJJAHLHM,0x10,(MethodInfo *)0x0);
    if (!bVar1) {
      Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_00);
      return;
    }
    Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,method_01);
    pNVar4 = (__this->fields).FMIFNIIJJNK;
    if ((pNVar4 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
       (__this_00 = (pNVar4->fields).RaidToggleButton,
       __this_00 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
      Nekki_SF2_GUI_Map_RaidToggleButton__SetState(__this_00,1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateNotificatorState(FKNCNNOOOIO MEOCIDLOMGD)  [RVA 0x35892AC]
// Nekki.SF2.GUI.Map.MapScene$$UpdateNotificatorState @ RVA 0x35892AC

void Nekki_SF2_GUI_Map_MapScene__UpdateNotificatorState
               (Nekki_SF2_GUI_Map_MapScene_o *__this,FKNCNNOOOIO_o *MEOCIDLOMGD,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this_00;
  
  __this_00 = (__this->fields).MGIJJGGPFJB;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButtonsPanel__UpdateNotificatorState
              (__this_00,MEOCIDLOMGD,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsSwitchingMapContainers()  [RVA 0x3587770]
// Nekki.SF2.GUI.Map.MapScene$$IsSwitchingMapContainers @ RVA 0x3587770

bool Nekki_SF2_GUI_Map_MapScene__IsSwitchingMapContainers
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *pNVar3;
  Nekki_SF2_GUI_Map_StoryMapContainer_o *x;
  
  if ((DAT_04568d1c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d1c = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).CLKPHCHEEJA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).CLKPHCHEEJA;
    if (pNVar2 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03687874;
    bVar1 = Nekki_SF2_GUI_Map_MapContainer__IsMovingNow(pNVar2,(MethodInfo *)0x0);
    if (!bVar1) goto LAB_036877e0;
LAB_0368781c:
    bVar1 = true;
  }
  else {
LAB_036877e0:
    pNVar3 = (__this->fields).OPPIFBJOLBI;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
      if (pNVar2 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03687874;
      bVar1 = Nekki_SF2_GUI_Map_MapContainer__IsMovingNow(pNVar2,(MethodInfo *)0x0);
      if (bVar1) goto LAB_0368781c;
    }
    x = (__this->fields).DGPJKBMBBNN;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
      if (pNVar2 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
        bVar1 = Nekki_SF2_GUI_Map_MapContainer__IsMovingNow(pNVar2,(MethodInfo *)0x0);
        return bVar1;
      }
LAB_03687874:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = false;
  }
  return bVar1;
}


// ===== public static void SwitchToMapSceneAndOpenRaidMap(Action LILIJINNGNC)  [RVA 0x35892C8]
// Nekki.SF2.GUI.Map.MapScene$$SwitchToMapSceneAndOpenRaidMap @ RVA 0x35892C8

void Nekki_SF2_GUI_Map_MapScene__SwitchToMapSceneAndOpenRaidMap
               (System_Action_o *LILIJINNGNC,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_o *__this;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04568d1d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568d1d = 1;
    method = extraout_x1;
  }
  __this = (Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_o *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_TypeInfo,method);
  Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_o *)0x0) {
    (__this->fields).onComplete = LILIJINNGNC;
    thunk_FUN_01c20e04(&__this->fields,LILIJINNGNC);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar3 = Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF__GJKKOFFPNJG(__this,(MethodInfo *)0x0);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + *piVar7;
            goto LAB_036893a4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_036893a4:
                    /* WARNING: Could not recover jumptable at 0x036893bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ActiveBattleByFightIDS(DNELIPCHKLK DBIAAJNKHLH, bool MJDICHGKPGE, bool DKEIBNDDFOM = True, bool NLBIOFGMMOO = False)  [RVA 0x35893C4]
// Nekki.SF2.GUI.Map.MapScene$$ActiveBattleByFightIDS @ RVA 0x35893C4

void Nekki_SF2_GUI_Map_MapScene__ActiveBattleByFightIDS
               (Nekki_SF2_GUI_Map_MapScene_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,bool MJDICHGKPGE,
               bool DKEIBNDDFOM,bool NLBIOFGMMOO,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)MJDICHGKPGE;
  if ((DAT_04568d1e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d1e = 1;
  }
  if (DBIAAJNKHLH != (DNELIPCHKLK_o *)0x0) {
    __this_00 = Nekki_SF2_GUI_Map_MapScene__DAECLPKNLGE
                          (__this,(DBIAAJNKHLH->fields).GDPFBDIJNHA,method_00);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this_00 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
      Nekki_SF2_GUI_Map_ZoneScrollItem__ActiveBattle
                (__this_00,(DBIAAJNKHLH->fields).GJFJPLHCBKJ,MJDICHGKPGE,DKEIBNDDFOM,NLBIOFGMMOO,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateRaidToggleBtn_EnableAndActive()  [RVA 0x35879B8]
// Nekki.SF2.GUI.Map.MapScene$$UpdateRaidToggleBtn_EnableAndActive @ RVA 0x35879B8

void Nekki_SF2_GUI_Map_MapScene__UpdateRaidToggleBtn_EnableAndActive
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool value;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar1;
  
  if ((DAT_04568d1f & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568d1f = 1;
    method = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  value = GameUtils__MPGHOPABJNB((MethodInfo *)0x0);
  pNVar1 = (__this->fields).FMIFNIIJJNK;
  if (((pNVar1 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
      (__this_00 = (pNVar1->fields).RaidToggleButton,
      __this_00 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_01,value,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Update()  [RVA 0x3589494]
// Nekki.SF2.GUI.Map.MapScene$$Update @ RVA 0x3589494

void Nekki_SF2_GUI_Map_MapScene__Update(Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar4;
  Nekki_SF2_GUI_Map_StoryMapContainer_o *pNVar5;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar6;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *pNVar7;
  
  if ((DAT_04568d20 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_Update__);
    DAT_04568d20 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__Update
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<MapScene>_Update__);
  if ((__this->fields).super.DHKAODBNGNJ == false) {
    return;
  }
  pNVar5 = (__this->fields).DGPJKBMBBNN;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_0368967c;
    Nekki_SF2_GUI_Map_MapContainer__Flashing(pNVar3,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  bVar1 = Nekki_SF2_GUI_Map_MapScene__IsSwitchingMapContainers(__this,method_00);
  pNVar4 = (__this->fields).FMIFNIIJJNK;
  if (pNVar4 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar6 = (pNVar4->fields)._RaidDailyQuestsButton_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar6,(MethodInfo *)0x0);
    if (bVar2) {
      pNVar4 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar4 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         (pNVar6 = (pNVar4->fields)._RaidDailyQuestsButton_k__BackingField,
         pNVar6 == (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) goto LAB_0368967c;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pNVar6,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
    }
    pNVar7 = (__this->fields).OPPIFBJOLBI;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      if (bVar2) {
        pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
        if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_0368967c;
        Nekki_SF2_GUI_Map_MapContainer__ShowUI(pNVar3,true,(MethodInfo *)0x0);
      }
      pNVar7 = (__this->fields).CLKPHCHEEJA;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).CLKPHCHEEJA;
      if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_0368967c;
      bVar1 = true;
    }
    else {
      if (bVar2) {
        pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
        if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_0368967c;
        Nekki_SF2_GUI_Map_MapContainer__ShowUI
                  (pNVar3,(__this->fields).IAAABJBDEMK == 1,(MethodInfo *)0x0);
      }
      pNVar5 = (__this->fields).DGPJKBMBBNN;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
      if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_0368967c;
      bVar1 = (__this->fields).IAAABJBDEMK == 0;
    }
    Nekki_SF2_GUI_Map_MapContainer__ShowUI(pNVar3,bVar1,(MethodInfo *)0x0);
    return;
  }
LAB_0368967c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

