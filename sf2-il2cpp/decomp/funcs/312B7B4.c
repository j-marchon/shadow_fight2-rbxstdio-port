// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$RemoveListener @ RVA 0x312B7B4

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__RemoveListener
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,
               UnityEngine_Events_UnityAction_o *IELDNEAAPBE,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields).JLKPBAGACID;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__RemoveListener(__this_00,IELDNEAAPBE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

