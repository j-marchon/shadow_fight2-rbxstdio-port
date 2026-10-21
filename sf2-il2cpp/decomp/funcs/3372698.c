// MEFNOMDAJBF$$ADNJKCLFCFH @ RVA 0x3372698

void MEFNOMDAJBF__ADNJKCLFCFH(System_Xml_XmlElement_o *EMICHNICCIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  GCAKLDNBADP_Fields GVar2;
  
  if ((DAT_04567b2f & 1) == 0) {
    FUN_01bab630(&StringLiteral_4891);
    FUN_01bab630(&StringLiteral_8796);
    FUN_01bab630(&StringLiteral_11175);
    DAT_04567b2f = 1;
  }
  if (EMICHNICCIB != (System_Xml_XmlElement_o *)0x0) {
    auVar1 = (*(EMICHNICCIB->klass->vtable)._51_get_Item.methodPtr)
                       (EMICHNICCIB,StringLiteral_11175,
                        (EMICHNICCIB->klass->vtable)._51_get_Item.method);
    GVar2 = (GCAKLDNBADP_Fields)MEFNOMDAJBF__NDAHBJOBBFF(auVar1._0_8_,auVar1._8_8_);
    if (DAT_04567bc0 == '\0') {
      FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
      DAT_04567bc0 = '\x01';
    }
    (MEFNOMDAJBF_TypeInfo->static_fields->_DBJOBPJPHIL_k__BackingField).fields = GVar2;
    auVar1 = (*(EMICHNICCIB->klass->vtable)._51_get_Item.methodPtr)
                       (EMICHNICCIB,StringLiteral_4891,
                        (EMICHNICCIB->klass->vtable)._51_get_Item.method);
    GVar2 = (GCAKLDNBADP_Fields)MEFNOMDAJBF__NDAHBJOBBFF(auVar1._0_8_,auVar1._8_8_);
    if (DAT_04567bc1 == '\0') {
      FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
      DAT_04567bc1 = '\x01';
    }
    (MEFNOMDAJBF_TypeInfo->static_fields->_LCJLHGAGFEF_k__BackingField).fields = GVar2;
    auVar1 = (*(EMICHNICCIB->klass->vtable)._51_get_Item.methodPtr)
                       (EMICHNICCIB,StringLiteral_8796,
                        (EMICHNICCIB->klass->vtable)._51_get_Item.method);
    GVar2 = (GCAKLDNBADP_Fields)MEFNOMDAJBF__NDAHBJOBBFF(auVar1._0_8_,auVar1._8_8_);
    if (DAT_04567bc2 == '\0') {
      FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
      DAT_04567bc2 = '\x01';
    }
    (MEFNOMDAJBF_TypeInfo->static_fields->_PPNPLFEPMNM_k__BackingField).fields = GVar2;
  }
  return;
}

