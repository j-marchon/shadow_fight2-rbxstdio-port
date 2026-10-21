// LEPAFKDPIKP$$HNIHOIAMDPC @ RVA 0x3415A44

void LEPAFKDPIKP__HNIHOIAMDPC
               (LEPAFKDPIKP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *__this_00;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *__this_01;
  float fVar3;
  
  if ((DAT_045680a3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_1);
    DAT_045680a3 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_14694,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
      (__this->fields).JAICMIMBIOA = fVar3;
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_13991,(MethodInfo *)0x0);
        __this_00 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
        if (__this_00 == (System_String_o *)0x0) {
          return;
        }
        collection = System_String__Split(__this_00,0x7c,0,(MethodInfo *)0x0);
        __this_01 = (__this->fields).MNJCMDFOOHH;
        if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List<object>__AddRange
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                     Method_System_Collections_Generic_List<string>_AddRange__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

