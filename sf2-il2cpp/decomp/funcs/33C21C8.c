// HFLNADKHFLG$$FOAAADFCOHK @ RVA 0x33C21C8

int32_t HFLNADKHFLG__FOAAADFCOHK
                  (System_Xml_XmlNode_o *AHDGNOJPPIB,
                  System_Collections_Generic_List_string__o *KENFFDHLNDA,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *__this_00;
  System_String_array *collection;
  
  if ((DAT_04567dda & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&StringLiteral_12864);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567dda = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_12864,(MethodInfo *)0x0);
      __this_00 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      if (((__this_00 != (System_String_o *)0x0) &&
          (collection = System_String__Split(__this_00,0x7c,0,(MethodInfo *)0x0),
          KENFFDHLNDA != (System_Collections_Generic_List_string__o *)0x0)) &&
         (System_Collections_Generic_List<object>__AddRange
                    ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                     Method_System_Collections_Generic_List<string>_AddRange__),
         collection != (System_String_array *)0x0)) {
        return (int32_t)collection->max_length;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

