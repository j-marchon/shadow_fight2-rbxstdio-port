// Nekki.SF2.Core.Exceptions.HackDetectedException$$.ctor @ RVA 0x30C4CF8

void Nekki_SF2_Core_Exceptions_HackDetectedException___ctor
               (Nekki_SF2_Core_Exceptions_HackDetectedException_o *__this,
               System_Runtime_Serialization_SerializationInfo_o *DKMMBMBMJBO,
               System_Runtime_Serialization_StreamingContext_o OHKEKFCKBED,MethodInfo *method)

{
  System_Runtime_Serialization_SerializationInfo_o *extraout_x1;
  
  if ((DAT_045662a7 & 1) == 0) {
    FUN_01bab630(&System_Exception_TypeInfo,DKMMBMBMJBO,OHKEKFCKBED.fields.m_additionalContext,
                 OHKEKFCKBED.fields._8_8_);
    DAT_045662a7 = 1;
    DKMMBMBMJBO = extraout_x1;
  }
  if ((System_Exception_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Exception_TypeInfo,DKMMBMBMJBO);
  }
  System_Exception___ctor((System_Exception_o *)__this,(MethodInfo *)0x0);
  return;
}

