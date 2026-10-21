// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$OnSkipDeliveryButtonClick @ RVA 0x34C4224

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__OnSkipDeliveryButtonClick
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields)._OnSkipDeliveryButtonClicked;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

