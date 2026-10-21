// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$OnPointerUp @ RVA 0x3171568

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__OnPointerUp
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o *__this_00;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  
  if ((DAT_04566927 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<DMMJFKCBHEK>_Invoke__);
    DAT_04566927 = 1;
    MELGPLLNBGH = extraout_x1;
  }
  if ((__this->fields).CEPACCGIINO != false) {
    __this_00 = (__this->fields)._OnReleased;
    if (__this_00 !=
        (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_ControlQuadrantEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(__this->fields)._ControlQuadrant,
                 Method_UnityEngine_Events_UnityEvent<DMMJFKCBHEK>_Invoke__);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,MELGPLLNBGH);
  }
  return;
}

