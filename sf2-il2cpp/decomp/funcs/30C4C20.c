// Nekki.SF2.Core.Exceptions.HackDetectedException$$.ctor @ RVA 0x30C4C20

void Nekki_SF2_Core_Exceptions_HackDetectedException___ctor
               (Nekki_SF2_Core_Exceptions_HackDetectedException_o *__this,
               System_String_o *NONPLOOOOAG,MethodInfo *method)

{
  if ((DAT_045662a5 & 1) == 0) {
    FUN_01bab630(&System_Exception_TypeInfo);
    DAT_045662a5 = 1;
  }
  if ((System_Exception_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_Exception___ctor((System_Exception_o *)__this,NONPLOOOOAG,(MethodInfo *)0x0);
  return;
}

