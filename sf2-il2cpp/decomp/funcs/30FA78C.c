// MLNACIEDMNN$$JBICIAFLDGH @ RVA 0x30FA78C

bool MLNACIEDMNN__JBICIAFLDGH
               (MLNACIEDMNN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *__this_01;
  System_Char_array *separator;
  System_String_array *source;
  
  if ((DAT_04566495 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Contains<string>__);
    FUN_01bab630(&StringLiteral_8314);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566495 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_8314,(MethodInfo *)0x0);
      __this_01 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      separator = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
      if (separator != (System_Char_array *)0x0) {
                    /* try { // try from 031fa844 to 032fa86b has its CatchHandler @ 031fab20 */
        if ((int)separator->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        separator->m_Items[0] = 0x7c;
        if ((__this_01 != (System_String_o *)0x0) &&
           (source = System_String__Split(__this_01,separator,1,(MethodInfo *)0x0),
           source != (System_String_array *)0x0)) {
          if (source->max_length != 0) {
            bVar1 = System_Linq_Enumerable__Contains<object>
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (Il2CppObject *)(__this->fields).FPIFOICEKCI,
                               Method_System_Linq_Enumerable_Contains<string>__);
            return bVar1;
          }
                    /* try { // try from 031fa8a0 to 032fa8cb has its CatchHandler @ 031fab1c */
          return true;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

