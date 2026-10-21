// Nekki.SF2.GUI.TimerLabel$$GAAKFAMKBPN @ RVA 0x33BBC70

void Nekki_SF2_GUI_TimerLabel__GAAKFAMKBPN
               (Nekki_SF2_GUI_TimerLabel_o *__this,undefined8 param_2,MethodInfo *param_3)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields).FFNCOGLLCND,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_DaysStringAlias(__this,(__this->fields).FFNCOGLLCND,param_3);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).ILHPJGKPFAP,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_HoursStringAlias(__this,(__this->fields).ILHPJGKPFAP,param_3);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).MJKJEFPDBCK,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_MinutesStringAlias(__this,(__this->fields).MJKJEFPDBCK,param_3);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).IGNOECHEJCJ,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_SecondsStringAlias(__this,(__this->fields).IGNOECHEJCJ,param_3);
  }
  bVar1 = System_String__IsNullOrEmpty
                    (*(System_String_o **)&(__this->fields).ShowZeroDays,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_TimerLabel__set_DelimiterAlias
            (__this,*(System_String_o **)&(__this->fields).ShowZeroDays,param_3);
  return;
}

