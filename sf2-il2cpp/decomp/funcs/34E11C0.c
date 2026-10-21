// ANFOHCGLHID$$OHHANEKKNJJ @ RVA 0x34E11C0

void ANFOHCGLHID__OHHANEKKNJJ(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  MethodInfo *extraout_x1;
  MMIIDELPHLP_o *__this;
  
  if ((DAT_04568731 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_10999);
    DAT_04568731 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this = MGNPHCAAEIO_TypeInfo->static_fields->KCEBJCOAHDA;
    AHDGNOJPPIB_00 =
         (System_Xml_XmlNode_o *)
         (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                   (AHDGNOJPPIB,StringLiteral_10999,(AHDGNOJPPIB->klass->vtable)._51_get_Item.method
                   );
    if (__this != (MMIIDELPHLP_o *)0x0) {
      MMIIDELPHLP__HNIHOIAMDPC(__this,AHDGNOJPPIB_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

