// JHHBFBCJOOB$$.ctor @ RVA 0x34CAC00

void JHHBFBCJOOB___ctor(JHHBFBCJOOB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  
  if ((DAT_04568665 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    DAT_04568665 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).DEKCPPOJFEH = pSVar1;
      thunk_FUN_01c20e04(&__this->fields,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

