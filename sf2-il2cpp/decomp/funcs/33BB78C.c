// Nekki.SF2.GUI.TimerLabel$$KLELDGNFOKF @ RVA 0x33BB78C

void Nekki_SF2_GUI_TimerLabel__KLELDGNFOKF(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x2;
  
                    /* try { // try from 034bb78c to 035bb793 has its CatchHandler @ 034bb8dc */
  bVar1 = System_String__IsNullOrEmpty((__this->fields).FFNCOGLLCND,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_DaysStringAlias(__this,(__this->fields).FFNCOGLLCND,in_x2);
  }
                    /* try { // try from 034bb7b0 to 035bb7bf has its CatchHandler @ 034bb8c0 */
  bVar1 = System_String__IsNullOrEmpty((__this->fields).ILHPJGKPFAP,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 034bb7c4 to 035bb7eb has its CatchHandler @ 034bb8d8 */
    Nekki_SF2_GUI_TimerLabel__set_HoursStringAlias(__this,(__this->fields).ILHPJGKPFAP,in_x2);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).MJKJEFPDBCK,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_TimerLabel__set_MinutesStringAlias(__this,(__this->fields).MJKJEFPDBCK,in_x2);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).IGNOECHEJCJ,(MethodInfo *)0x0);
                    /* try { // try from 034bb7f4 to 035bb7fb has its CatchHandler @ 034bb8c8 */
  if (!bVar1) {
                    /* try { // try from 034bb800 to 035bb80b has its CatchHandler @ 034bb8cc */
    Nekki_SF2_GUI_TimerLabel__set_SecondsStringAlias(__this,(__this->fields).IGNOECHEJCJ,in_x2);
  }
  bVar1 = System_String__IsNullOrEmpty
                    (*(System_String_o **)&(__this->fields).ShowZeroDays,(MethodInfo *)0x0);
                    /* try { // try from 034bb810 to 035bb81b has its CatchHandler @ 034bb8c4 */
  if (bVar1) {
    return;
  }
                    /* try { // try from 034bb81c to 035bb887 has its CatchHandler @ 034bb368 */
  Nekki_SF2_GUI_TimerLabel__set_DelimiterAlias
            (__this,*(System_String_o **)&(__this->fields).ShowZeroDays,in_x2);
  return;
}

