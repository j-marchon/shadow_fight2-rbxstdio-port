// JMDPBFOCHHP.FNILDHLJBBJ$$PACHAPMCMEC @ RVA 0x2FF9BD8

bool JMDPBFOCHHP_FNILDHLJBBJ__PACHAPMCMEC(System_Xml_XmlNode_o *GCMHMONNHII,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = GCMHMONNHII;
  if ((DAT_04565ac5 & 1) == 0) {
    auVar3 = FUN_01bab630(&StringLiteral_4622);
    DAT_04565ac5 = 1;
  }
  if (GCMHMONNHII != (System_Xml_XmlNode_o *)0x0) {
    auVar4 = (*(GCMHMONNHII->klass->vtable)._8_unknown.methodPtr)
                       (GCMHMONNHII,(GCMHMONNHII->klass->vtable)._8_unknown.method);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar4._8_8_;
    auVar3 = auVar1 << 0x40;
    if (auVar4._0_8_ != (System_String_o *)0x0) {
      bVar2 = System_String__Contains(auVar4._0_8_,StringLiteral_4622,(MethodInfo *)0x0);
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

