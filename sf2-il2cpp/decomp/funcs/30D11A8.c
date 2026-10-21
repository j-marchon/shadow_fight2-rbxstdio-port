// Nekki.SF2.GUI.ItemsScroll$$OnBeginDrag @ RVA 0x30D11A8

void Nekki_SF2_GUI_ItemsScroll__OnBeginDrag
               (Nekki_SF2_GUI_ItemsScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *method_00;
  
  if ((__this->fields).super.field_0x111 == '\0') {
    return;
  }
  Nekki_SF2_GUI_SFScrollRect__OnBeginDrag
            ((Nekki_SF2_GUI_SFScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  Nekki_SF2_GUI_ItemsScroll__CCPABLFBFFA(__this,method_00);
  __this_00 = (__this->fields).onDragBegin;
  (__this->fields).CLEJOEBNAHF = true;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

