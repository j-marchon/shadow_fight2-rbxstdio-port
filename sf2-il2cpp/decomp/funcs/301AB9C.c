// ECENNHNBAME.HJPFANEPGJF.FFGJMEOGPEA$$HMCBPDICONH @ RVA 0x301AB9C

int32_t ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA__HMCBPDICONH
                  (System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *a;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04565c07 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7357);
    FUN_01bab630(&StringLiteral_11366);
    DAT_04565c07 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    a = (System_String_o *)
        (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                  (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
    bVar1 = System_String__op_Equality(a,StringLiteral_7357,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_11366,(MethodInfo *)0x0);
      iVar2 = GIAMPEGMNHE__NANCFCIGNEE(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      if (iVar2 < 1) {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}

