// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$StartAnimation @ RVA 0x312BC50

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__StartAnimation
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *in_x2;
  
  if ((__this->fields).ABIOEEDDMJN == false) {
    Nekki_SF2_GUI_Fight_ExpAndMoneyLine__ICONPKJNHCP(__this,method);
    return;
  }
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine__VisibleExpAndMoney(__this,true,in_x2);
  __this_00 = (__this->fields).JLKPBAGACID;
  (__this->fields).ABIOEEDDMJN = false;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

