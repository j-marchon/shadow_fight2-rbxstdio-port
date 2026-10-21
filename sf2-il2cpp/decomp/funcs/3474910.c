// Nekki.SF2.GUI.Map.BattleButton$$OnPointerClick @ RVA 0x3474910

void Nekki_SF2_GUI_Map_BattleButton__OnPointerClick
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.super.m_OnClick;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

