// LJLLAKHOFFF$$AKKDDJDBIBD @ RVA 0x32EAD8C

void LJLLAKHOFFF__AKKDDJDBIBD(UnityEngine_UI_Selectable_o *PFNMDNHEFEC,MethodInfo *method)

{
  UnityEngine_EventSystems_EventSystem_o *eventSystem;
  UnityEngine_EventSystems_PointerEventData_o *__this;
  UnityEngine_GameObject_o *target;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567639 & 1) == 0) {
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerClickHandler>__);
    FUN_01bab630(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    DAT_04567639 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_EventSystems_EventSystem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_EventSystems_EventSystem_TypeInfo,method);
  }
  eventSystem = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  __this = (UnityEngine_EventSystems_PointerEventData_o *)
           thunk_FUN_01bda818(UnityEngine_EventSystems_PointerEventData_TypeInfo);
  UnityEngine_EventSystems_PointerEventData___ctor(__this,eventSystem,(MethodInfo *)0x0);
  if (PFNMDNHEFEC != (UnityEngine_UI_Selectable_o *)0x0) {
    target = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)PFNMDNHEFEC,(MethodInfo *)0x0);
    if ((UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    }
    if (DAT_04565b85 == '\0') {
      FUN_01bab630(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      DAT_04565b85 = '\x01';
    }
    if ((UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033eae9c to 034eaf23 has its CatchHandler @ 033eae9c
                       catch() { ... } // from try @ 033eae9c with catch @ 033eae9c
                       catch() { ... } // from try @ 033eaf88 with catch @ 033eae9c
                       catch() { ... } // from try @ 033eafc8 with catch @ 033eae9c
                       catch() { ... } // from try @ 033eb028 with catch @ 033eae9c */
    UnityEngine_EventSystems_ExecuteEvents__Execute<object>
              (target,(UnityEngine_EventSystems_BaseEventData_o *)__this,
               (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)
               UnityEngine_EventSystems_ExecuteEvents_TypeInfo->static_fields->s_PointerClickHandler
               ,Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerClickHandler>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

