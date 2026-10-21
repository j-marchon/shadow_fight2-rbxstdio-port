// Nekki.SF2.Core.Exceptions.HackDetectedException$$.ctor @ RVA 0x30C4C88

void Nekki_SF2_Core_Exceptions_HackDetectedException___ctor
               (Nekki_SF2_Core_Exceptions_HackDetectedException_o *__this,
               System_String_o *NONPLOOOOAG,System_Exception_o *AFBGGBGCDDO,MethodInfo *method)

{
  if ((DAT_045662a6 & 1) == 0) {
    FUN_01bab630(&System_Exception_TypeInfo);
    DAT_045662a6 = 1;
  }
  if ((System_Exception_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_Exception___ctor((System_Exception_o *)__this,NONPLOOOOAG,AFBGGBGCDDO,(MethodInfo *)0x0);
  return;
}

