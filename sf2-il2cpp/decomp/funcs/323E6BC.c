// Nekki.SF2.GUI.SFScrollRect$$OnEnable @ RVA 0x323E6BC

void Nekki_SF2_GUI_SFScrollRect__OnEnable(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  UnityEngine_Events_UnityEvent_float__o *pUVar4;
  
  if ((DAT_04567074 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333d8ac with catch @ 0333e6e0
                        */
    FUN_01bab630(&UnityEngine_UI_CanvasUpdateRegistry_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0333e6f8 to 0343e70f has its CatchHandler @ 0333e7ec */
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFScrollRect_JIKDDHFNLDE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFScrollRect_LCIOHKDCJPH__);
                    /* try { // try from 0333e710 to 0343e7db has its CatchHandler @ 0333d4c4 */
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
    DAT_04567074 = 1;
  }
  UnityEngine_EventSystems_UIBehaviour__OnEnable
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).m_HorizontalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields).m_HorizontalScrollbar;
    if (pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333e85c;
    pUVar4 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar3->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
    UnityEngine_Events_UnityAction<float>___ctor();
    if (pUVar4 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto LAB_0333e85c;
    UnityEngine_Events_UnityEvent<float>__AddListener
              (pUVar4,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
  }
  pUVar3 = (__this->fields).m_VerticalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields).m_VerticalScrollbar;
                    /* try { // try from 0333e7dc to 0343e7eb has its CatchHandler @ 0333e7ec */
    if (pUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      pUVar4 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar3->fields).m_OnValueChanged;
                    /* catch() { ... } // from try @ 0333e6f8 with catch @ 0333e7ec
                       catch() { ... } // from try @ 0333e7dc with catch @ 0333e7ec */
                    /* try { // try from 0333e7f0 to 0343e7f3 has its CatchHandler @ 0333e7fc */
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
                    /* try { // try from 0333e7f4 to 0343e7ff has its CatchHandler @ 0333d4c4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0333e7f0 with catch @ 0333e7fc
                        */
      UnityEngine_Events_UnityAction<float>___ctor();
      if (pUVar4 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
        UnityEngine_Events_UnityEvent<float>__AddListener
                  (pUVar4,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
        goto LAB_0333e82c;
      }
    }
LAB_0333e85c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0333e82c:
  if ((UnityEngine_UI_CanvasUpdateRegistry_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_UI_CanvasUpdateRegistry__RegisterCanvasElementForLayoutRebuild
            ((UnityEngine_UI_ICanvasElement_o *)__this,(MethodInfo *)0x0);
  return;
}

