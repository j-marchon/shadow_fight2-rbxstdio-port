// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$NOLAKHFHEBH @ RVA 0x358DBA0

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__NOLAKHFHEBH
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,
               UnityEngine_UI_Slider_o *BJAFLPFDLDB,float CJNHFNHJHPE,System_Action_o *IELDNEAAPBE,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_EventSystems_EventTrigger_Entry_o *pUVar3;
  UnityEngine_Events_UnityAction_T0__o *pUVar4;
  UnityEngine_EventSystems_EventTrigger_o *pUVar5;
  System_Collections_Generic_List_EventTrigger_Entry__o *pSVar6;
  UnityEngine_EventSystems_EventTrigger_Entry_array *pUVar7;
  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *pUVar8;
  undefined4 in_register_00005004;
  
  if ((DAT_04568d60 & 1) == 0) {
                    /* try { // try from 0368dbdc to 0378dd4b has its CatchHandler @ 0368dbdc
                       catch() { ... } // from try @ 0368dbdc with catch @ 0368dbdc
                       catch() { ... } // from try @ 0368dd74 with catch @ 0368dbdc
                       catch() { ... } // from try @ 0368e088 with catch @ 0368dbdc
                       catch() { ... } // from try @ 0368e0c8 with catch @ 0368dbdc */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<EventTrigger>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN_BLOFGINLIFA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN_NOOFOPIMFLO__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EventTrigger_Entry>_Add__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<BaseEventData>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseEventData>_AddListener__);
    DAT_04568d60 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_ELICPGLNCBN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)IELDNEAAPBE;
    thunk_FUN_01c20e04(__this_00 + 1,IELDNEAAPBE);
    if ((BJAFLPFDLDB != (UnityEngine_UI_Slider_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)BJAFLPFDLDB,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      UnityEngine_UI_Slider__set_minValue(BJAFLPFDLDB,0.0,(MethodInfo *)0x0);
      UnityEngine_UI_Slider__set_maxValue(BJAFLPFDLDB,1.0,(MethodInfo *)0x0);
      (*(BJAFLPFDLDB->klass->vtable)._47_set_value.methodPtr)
                (CONCAT44(in_register_00005004,CJNHFNHJHPE),BJAFLPFDLDB,
                 (BJAFLPFDLDB->klass->vtable)._47_set_value.method);
      pUVar3 = (UnityEngine_EventSystems_EventTrigger_Entry_o *)
               thunk_FUN_01bda818(UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo);
      UnityEngine_EventSystems_EventTrigger_Entry___ctor(pUVar3,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
        (pUVar3->fields).eventID = 0xe;
        pUVar8 = (pUVar3->fields).callback;
        pUVar4 = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseEventData>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (pUVar8 != (UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)pUVar8,pUVar4,
                     Method_UnityEngine_Events_UnityEvent<BaseEventData>_AddListener__);
          pUVar5 = (UnityEngine_EventSystems_EventTrigger_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)BJAFLPFDLDB,
                              Method_UnityEngine_Component_GetComponent<EventTrigger>__);
                    /* try { // try from 0368dd4c to 0378dd53 has its CatchHandler @ 0368e06c */
          if ((pUVar5 != (UnityEngine_EventSystems_EventTrigger_o *)0x0) &&
             (pSVar6 = UnityEngine_EventSystems_EventTrigger__get_triggers(pUVar5,(MethodInfo *)0x0)
             , lVar2 = Method_System_Collections_Generic_List<EventTrigger_Entry>_Add__,
             pSVar6 != (System_Collections_Generic_List_EventTrigger_Entry__o *)0x0)) {
                    /* try { // try from 0368dd5c to 0378dd73 has its CatchHandler @ 0368e068 */
            pUVar7 = (pSVar6->fields)._items;
                    /* try { // try from 0368dd74 to 0378e083 has its CatchHandler @ 0368dbdc */
            (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
            if (pUVar7 != (UnityEngine_EventSystems_EventTrigger_Entry_array *)0x0) {
              uVar1 = (pSVar6->fields)._size;
              if (uVar1 < (uint)pUVar7->max_length) {
                (pSVar6->fields)._size = uVar1 + 1;
                pUVar7->m_Items[(int)uVar1] = pUVar3;
                thunk_FUN_01c20e04(pUVar7->m_Items + (int)uVar1,pUVar3);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar6,
                           (Il2CppObject *)pUVar3,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              pUVar3 = (UnityEngine_EventSystems_EventTrigger_Entry_o *)
                       thunk_FUN_01bda818(UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo);
              UnityEngine_EventSystems_EventTrigger_Entry___ctor(pUVar3,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
                (pUVar3->fields).eventID = 4;
                pUVar8 = (pUVar3->fields).callback;
                pUVar4 = (UnityEngine_Events_UnityAction_T0__o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseEventData>_TypeInfo);
                UnityEngine_Events_UnityAction<object>___ctor();
                if (pUVar8 != (UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent<object>__AddListener
                            ((UnityEngine_Events_UnityEvent_T0__o *)pUVar8,pUVar4,
                             Method_UnityEngine_Events_UnityEvent<BaseEventData>_AddListener__);
                  pUVar5 = (UnityEngine_EventSystems_EventTrigger_o *)
                           UnityEngine_Component__GetComponent<object>
                                     ((UnityEngine_Component_o *)BJAFLPFDLDB,
                                      Method_UnityEngine_Component_GetComponent<EventTrigger>__);
                  if ((pUVar5 != (UnityEngine_EventSystems_EventTrigger_o *)0x0) &&
                     (pSVar6 = UnityEngine_EventSystems_EventTrigger__get_triggers
                                         (pUVar5,(MethodInfo *)0x0),
                     lVar2 = Method_System_Collections_Generic_List<EventTrigger_Entry>_Add__,
                     pSVar6 != (System_Collections_Generic_List_EventTrigger_Entry__o *)0x0)) {
                    pUVar7 = (pSVar6->fields)._items;
                    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                    if (pUVar7 != (UnityEngine_EventSystems_EventTrigger_Entry_array *)0x0) {
                      uVar1 = (pSVar6->fields)._size;
                      if (uVar1 < (uint)pUVar7->max_length) {
                        (pSVar6->fields)._size = uVar1 + 1;
                        pUVar7->m_Items[(int)uVar1] = pUVar3;
                        thunk_FUN_01c20e04(pUVar7->m_Items + (int)uVar1,pUVar3);
                        return;
                      }
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar6,
                                 (Il2CppObject *)pUVar3,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
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

