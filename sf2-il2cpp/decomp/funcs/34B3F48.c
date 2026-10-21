// KAFMFFDFDBL$$.ctor @ RVA 0x34B3F48

void KAFMFFDFDBL___ctor(KAFMFFDFDBL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,
                       MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  System_Collections_Generic_List_IENLNOEDCFF__o **ppSVar2;
  
  if ((DAT_04568573 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&StringLiteral_9975);
    FUN_01bab630(&StringLiteral_13991);
    DAT_04568573 = 1;
  }
  __this_00 = (System_Collections_Generic_List_IENLNOEDCFF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  ppSVar2 = &(__this->fields).INAJMPIJJOG;
  *ppSVar2 = __this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,8,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,StringLiteral_13991,(MethodInfo *)0x0);
      a = GIAMPEGMNHE__LFCNNAGLPHO(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,StringLiteral_9975,(MethodInfo *)0x0);
      (__this->fields).HHHHNPIKMMJ = (uint)bVar1;
      (__this->fields).INAJMPIJJOG = AHEFOIOKDOK;
      thunk_FUN_01c20e04(ppSVar2,AHEFOIOKDOK);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

