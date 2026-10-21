// FDJKKAFIEFB$$GIJOGIIDEGO @ RVA 0x35B4314

void FDJKKAFIEFB__GIJOGIIDEGO
               (System_Collections_Generic_HashSet_char__o *IIJNDCLFEFC,
               System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint16_t item;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  int index;
  
  if ((DAT_04568eb5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>_Clear__);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568eb5 = 1;
  }
  if (IIJNDCLFEFC != (System_Collections_Generic_HashSet_char__o *)0x0) {
    System_Collections_Generic_HashSet<char>__Clear
              (IIJNDCLFEFC,Method_System_Collections_Generic_HashSet<char>_Clear__);
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_14694,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      if ((pSVar1 != (System_String_o *)0x0) &&
         (pSVar1 = System_String__Replace
                             (pSVar1,StringLiteral_167,StringLiteral_1,(MethodInfo *)0x0),
         pSVar1 != (System_String_o *)0x0)) {
        if ((pSVar1->fields)._stringLength < 1) {
          return;
        }
        index = 0;
        do {
          item = System_String__get_Chars(pSVar1,index,(MethodInfo *)0x0);
          System_Collections_Generic_HashSet<char>__Add
                    (IIJNDCLFEFC,item,Method_System_Collections_Generic_HashSet<char>_Add__);
          index = index + 1;
        } while (index < (pSVar1->fields)._stringLength);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

