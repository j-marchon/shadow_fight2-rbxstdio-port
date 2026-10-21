// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$KFJOHIAICNM @ RVA 0x358D950

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__KFJOHIAICNM
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Action_o *pSVar3;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this_00;
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this_01;
  UnityEngine_EventSystems_EventTrigger_Entry_o *__this_02;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_EventSystems_EventTrigger_o *__this_03;
  System_Collections_Generic_List_EventTrigger_Entry__o *__this_04;
  MethodInfo *pMVar4;
  UnityEngine_EventSystems_EventTrigger_Entry_array *pUVar5;
  UnityEngine_UI_Slider_o *pUVar6;
  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *__this_05;
  float fVar7;
  
  if ((DAT_04568d56 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<EventTrigger>__);
    FUN_01bab630(&UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EventTrigger_Entry>_Add__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_CAOHKDDEHDD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_LIOAMIJBMGN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_OALAKEKPEEH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<BaseEventData>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseEventData>_AddListener__);
    DAT_04568d56 = 1;
  }
  pUVar6 = (__this->fields).soundTrackBar;
  fVar7 = MFIKGMIDDIG__IBNHGIOPFNP((MethodInfo *)0x0);
  pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  pMVar4 = (MethodInfo *)0x0;
  System_Action___ctor();
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__NOLAKHFHEBH(__this_00,pUVar6,fVar7,pSVar3,pMVar4);
  pUVar6 = (__this->fields).musicTrackBar;
  fVar7 = MFIKGMIDDIG__IEONOAEPPCN((MethodInfo *)0x0);
  pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  pMVar4 = (MethodInfo *)0x0;
  System_Action___ctor();
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__NOLAKHFHEBH(__this_01,pUVar6,fVar7,pSVar3,pMVar4);
  __this_02 = (UnityEngine_EventSystems_EventTrigger_Entry_o *)
              thunk_FUN_01bda818(UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo);
  UnityEngine_EventSystems_EventTrigger_Entry___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
    (__this_02->fields).eventID = 5;
    __this_05 = (__this_02->fields).callback;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseEventData>_TypeInfo);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_05 != (UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_05,call,
                 Method_UnityEngine_Events_UnityEvent<BaseEventData>_AddListener__);
      pUVar6 = (__this->fields).musicTrackBar;
      if (((pUVar6 != (UnityEngine_UI_Slider_o *)0x0) &&
          (__this_03 = (UnityEngine_EventSystems_EventTrigger_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pUVar6,
                                  Method_UnityEngine_Component_GetComponent<EventTrigger>__),
          __this_03 != (UnityEngine_EventSystems_EventTrigger_o *)0x0)) &&
         (__this_04 = UnityEngine_EventSystems_EventTrigger__get_triggers
                                (__this_03,(MethodInfo *)0x0),
         lVar2 = Method_System_Collections_Generic_List<EventTrigger_Entry>_Add__,
         __this_04 != (System_Collections_Generic_List_EventTrigger_Entry__o *)0x0)) {
        pUVar5 = (__this_04->fields)._items;
        (__this_04->fields)._version = (__this_04->fields)._version + 1;
        if (pUVar5 != (UnityEngine_EventSystems_EventTrigger_Entry_array *)0x0) {
          uVar1 = (__this_04->fields)._size;
          if (uVar1 < (uint)pUVar5->max_length) {
            (__this_04->fields)._size = uVar1 + 1;
            pUVar5->m_Items[(int)uVar1] = __this_02;
            thunk_FUN_01c20e04(pUVar5->m_Items + (int)uVar1,__this_02);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,
                     (Il2CppObject *)__this_02,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

