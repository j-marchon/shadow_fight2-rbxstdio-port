// FGKGKDEJCOG$$CMAKHKNDMMH @ RVA 0x3333BA4

void FGKGKDEJCOG__CMAKHKNDMMH
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04567933 & 1) == 0) {
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CKFILIOCLJE>__);
    FUN_01bab630(&StringLiteral_6901);
    DAT_04567933 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_6901,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                        (LBJNDMNEJJB,1,Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CKFILIOCLJE>__);
      (__this->fields).FIIKIHJHLNJ = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

