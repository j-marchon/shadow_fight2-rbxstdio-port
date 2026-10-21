// Nekki.SF2.GUI.TimerLabel$$set_CurrentTime @ RVA 0x33BB368

void Nekki_SF2_GUI_TimerLabel__set_CurrentTime
               (Nekki_SF2_GUI_TimerLabel_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 034bb368 to 035bb5cf has its CatchHandler @ 034bb368
                       catch() { ... } // from try @ 034bb368 with catch @ 034bb368
                       catch() { ... } // from try @ 034bb62c with catch @ 034bb368
                       catch() { ... } // from try @ 034bb6d4 with catch @ 034bb368
                       catch() { ... } // from try @ 034bb704 with catch @ 034bb368
                       catch() { ... } // from try @ 034bb81c with catch @ 034bb368
                       catch() { ... } // from try @ 034bb8ac with catch @ 034bb368
                       catch() { ... } // from try @ 034bb8c0 with catch @ 034bb368
                       catch() { ... } // from try @ 034bb8fc with catch @ 034bb368 */
  if ((__this->fields).SecondsString == (System_String_o *)CJNHFNHJHPE) {
    return;
  }
  (__this->fields).SecondsString = (System_String_o *)CJNHFNHJHPE;
  Nekki_SF2_GUI_TimerLabel__CPMHIEJENLD(__this,(MethodInfo *)CJNHFNHJHPE);
  return;
}

