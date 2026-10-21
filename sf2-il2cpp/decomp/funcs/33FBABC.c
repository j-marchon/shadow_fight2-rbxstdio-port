// MJACKBKADMN$$.ctor @ RVA 0x33FBABC

void MJACKBKADMN___ctor(MJACKBKADMN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_04567fbb & 1) == 0) {
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567fbb = 1;
  }
  if ((JCHNBADDBGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JCHNBADDBGO___ctor((JCHNBADDBGO_o *)__this,AHDGNOJPPIB,false,(MethodInfo *)0x0);
  AJNNHGGLGIF__GNLPNKGBAFL((AJNNHGGLGIF_o *)__this,2,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).OAKCHEGKLBP = pSVar1;
      thunk_FUN_01c20e04();
      MJACKBKADMN__KFPIKBGFKBC(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

