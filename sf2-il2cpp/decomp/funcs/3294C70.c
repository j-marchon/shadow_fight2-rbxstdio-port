// Nekki.SF2.GUI.SidePanelScroll$$OnEndDrag @ RVA 0x3294C70

void Nekki_SF2_GUI_SidePanelScroll__OnEndDrag
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *IMMNELPBGIF,MethodInfo *method)

{
  Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *__this_00;
  
  if ((DAT_04567358 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<PointerEventData>_Invoke__);
    DAT_04567358 = 1;
  }
  *(undefined1 *)((long)&(__this->fields).JNFBDGALDJJ + 1) = 0;
  (__this->fields).onScrollDragEnd = (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).onScrollDragEnd,0);
  UnityEngine_UI_ScrollRect__OnEndDrag
            ((UnityEngine_UI_ScrollRect_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  __this_00 = (__this->fields).onScrollDragBegin;
  if (__this_00 != (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)IMMNELPBGIF,
               Method_UnityEngine_Events_UnityEvent<PointerEventData>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

