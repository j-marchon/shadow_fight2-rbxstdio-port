// Nekki.SF2.GUI.SidePanelScroll$$OnBeginDrag @ RVA 0x32947DC

void Nekki_SF2_GUI_SidePanelScroll__OnBeginDrag
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *IMMNELPBGIF,MethodInfo *method)

{
  long lVar1;
  
  if ((DAT_04567354 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<PointerEventData>_Invoke__);
    DAT_04567354 = 1;
  }
  if (*(char *)&(__this->fields).JNFBDGALDJJ == '\0') {
    *(undefined1 *)((long)&(__this->fields).JNFBDGALDJJ + 1) = 1;
    (__this->fields).onScrollDragEnd =
         (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)IMMNELPBGIF;
    thunk_FUN_01c20e04(&(__this->fields).onScrollDragEnd,IMMNELPBGIF);
    UnityEngine_UI_ScrollRect__OnBeginDrag
              ((UnityEngine_UI_ScrollRect_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
    if (__this[1].klass != (Nekki_SF2_GUI_SidePanelScroll_c *)0x0) {
      UnityEngine_Events_UnityEvent<object>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this[1].klass,(Il2CppObject *)IMMNELPBGIF,
                 Method_UnityEngine_Events_UnityEvent<PointerEventData>_Invoke__);
      return;
    }
  }
  else {
    (__this->fields).onScrollDragEnd = (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)0x0;
    thunk_FUN_01c20e04(&(__this->fields).onScrollDragEnd,0);
    lVar1 = *(long *)&(__this->fields).IgnoreDragging;
    *(undefined1 *)((long)&(__this->fields).JNFBDGALDJJ + 1) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03394844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

