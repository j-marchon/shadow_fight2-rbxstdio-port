// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$RemoveListener @ RVA 0x3150FD0

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__RemoveListener
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,
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

