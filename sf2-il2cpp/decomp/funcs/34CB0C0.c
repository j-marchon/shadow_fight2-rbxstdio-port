// Nekki.SF2.GUI.BaseScrollItem$$OnReturnToPool @ RVA 0x34CB0C0

void Nekki_SF2_GUI_BaseScrollItem__OnReturnToPool
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  
  __this_00 = (__this->fields)._HCMPFAOMMHO_k__BackingField;
  if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

