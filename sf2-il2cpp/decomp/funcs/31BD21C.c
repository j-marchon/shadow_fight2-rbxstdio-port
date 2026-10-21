// Nekki.SF2.GUI.TableViewCell$$OnDestroy @ RVA 0x31BD21C

void Nekki_SF2_GUI_TableViewCell__OnDestroy
               (Nekki_SF2_GUI_TableViewCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableViewCellDidSelectEvent_o *__this_00;
  Nekki_SF2_GUI_TableViewCellDidHighlightEvent_o *__this_01;
  Nekki_SF2_GUI_TableViewCellDoubleClickEvent_o *__this_02;
  
  __this_00 = (__this->fields).DidSelectEvent;
  if (__this_00 != (Nekki_SF2_GUI_TableViewCellDidSelectEvent_o *)0x0) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).DidHighlightEvent;
    if (__this_01 != (Nekki_SF2_GUI_TableViewCellDidHighlightEvent_o *)0x0) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
      __this_02 = (__this->fields).DoubleClickEvent;
      if (__this_02 != (Nekki_SF2_GUI_TableViewCellDoubleClickEvent_o *)0x0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

