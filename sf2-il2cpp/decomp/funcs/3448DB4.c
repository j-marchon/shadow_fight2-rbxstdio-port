// Nekki.SF2.GUI.Tutorial.Controls.TutorialScrollTouch$$NKGGEIDHNJA @ RVA 0x3448DB4

void Nekki_SF2_GUI_Tutorial_Controls_TutorialScrollTouch__NKGGEIDHNJA
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialScrollTouch_o *__this,
               UnityEngine_Vector2_o EEGKJKNENDE,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_EventSystems_EventSystem_o *eventSystem;
  UnityEngine_EventSystems_PointerEventData_o *__this_00;
  Il2CppObject *pIVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568253 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<IDragHandler>__);
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_IDragHandler_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    DAT_04568253 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_EventSystems_EventSystem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_EventSystems_EventSystem_TypeInfo,method);
  }
  eventSystem = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
                    /* try { // try from 03548e38 to 03648e3f has its CatchHandler @ 03548ef0 */
  __this_00 = (UnityEngine_EventSystems_PointerEventData_o *)
              thunk_FUN_01bda818(UnityEngine_EventSystems_PointerEventData_TypeInfo);
                    /* try { // try from 03548e50 to 03648e5b has its CatchHandler @ 03548edc */
  UnityEngine_EventSystems_PointerEventData___ctor(__this_00,eventSystem,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03548f0c to 03648f33 has its CatchHandler @ 03548b8c */
    FUN_01bab8c8();
  }
                    /* try { // try from 03548e60 to 03648e67 has its CatchHandler @ 03548ee0 */
  (__this_00->fields)._button_k__BackingField = 0;
  (__this_00->fields)._position_k__BackingField.fields.x = EEGKJKNENDE.fields.x;
                    /* try { // try from 03548e70 to 03648e7f has its CatchHandler @ 03548ee4 */
  (__this_00->fields)._position_k__BackingField.fields.y = EEGKJKNENDE.fields.y;
  (__this_00->fields)._dragging_k__BackingField = true;
                    /* try { // try from 03548e80 to 03648ecf has its CatchHandler @ 03548b8c */
  pIVar2 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<IDragHandler>__);
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* try { // try from 03548ed4 to 03648ed7 has its CatchHandler @ 03548ee8 */
                    /* try { // try from 03548ed8 to 03648f07 has its CatchHandler @ 03548b8c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03548e50 with catch @ 03548edc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03548e60 with catch @ 03548ee0
                        */
    return;
  }
  pIVar4 = pIVar2->klass;
  uVar1._0_1_ = (pIVar4->_2).rank;
  uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pIVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)UnityEngine_EventSystems_IDragHandler_TypeInfo) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03548e70 with catch @ 03548ee4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03548ed4 with catch @ 03548ee8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03548ed0 with catch @ 03548eec
                        */
        pVVar3 = pIVar4->vtable + *piVar6;
        goto LAB_03548ef0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pIVar2,UnityEngine_EventSystems_IDragHandler_TypeInfo,0);
                    /* try { // try from 03548ed0 to 03648ed3 has its CatchHandler @ 03548eec */
LAB_03548ef0:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03548e38 with catch @ 03548ef0
                        */
                    /* WARNING: Could not recover jumptable at 0x03548f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 03548f08 to 03648f0b has its CatchHandler @ 03548f2c */
  (*pVVar3->methodPtr)(pIVar2,__this_00,pVVar3->method);
  return;
}

