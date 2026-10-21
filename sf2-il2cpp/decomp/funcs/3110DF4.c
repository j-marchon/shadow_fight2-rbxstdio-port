// Nekki.SF2.GUI.TableViewScroll$$OnEndDrag @ RVA 0x3110DF4

void Nekki_SF2_GUI_TableViewScroll__OnEndDrag
               (Nekki_SF2_GUI_TableViewScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  Nekki_SF2_GUI_SFScrollRect__OnEndDrag
            ((Nekki_SF2_GUI_SFScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  __this_00 = (__this->fields).onDragEnd;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

