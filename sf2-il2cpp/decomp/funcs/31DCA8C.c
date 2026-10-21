// KHIBJFLBJNH$$HNIHOIAMDPC @ RVA 0x31DCA8C

void KHIBJFLBJNH__HNIHOIAMDPC
               (KHIBJFLBJNH_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *NPLGCIFGFOK_00;
  System_Xml_XmlNode_o *NPLGCIFGFOK_01;
  System_Action_o *pSVar2;
  LCKCDEKNLOA_o *pLVar3;
  
  if ((DAT_04566d1f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KHIBJFLBJNH_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_12524);
    FUN_01bab630(&StringLiteral_5840);
    DAT_04566d1f = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).KBMOPEKFNNN = pSVar1;
      thunk_FUN_01c20e04();
      NPLGCIFGFOK_00 =
           (System_Xml_XmlNode_o *)
           (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                     (NPLGCIFGFOK,StringLiteral_12524,
                      (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
      NPLGCIFGFOK_01 =
           (System_Xml_XmlNode_o *)
           (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                     (NPLGCIFGFOK,StringLiteral_5840,
                      (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
      pLVar3 = (__this->fields).PGLINMCHKGC;
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      BOFEMGGNODC__KIBBEDPGMBB
                ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_00,pLVar3,pSVar2,(MethodInfo *)0x0);
      pLVar3 = (__this->fields).EBAHJECPAHA;
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      BOFEMGGNODC__KIBBEDPGMBB
                ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_01,pLVar3,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

