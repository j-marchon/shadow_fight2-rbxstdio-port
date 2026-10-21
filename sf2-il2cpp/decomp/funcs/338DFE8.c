// NJPBBPOABKP$$HNIHOIAMDPC @ RVA 0x338DFE8

void NJPBBPOABKP__HNIHOIAMDPC
               (NJPBBPOABKP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Xml_XmlNode_o *AHDGNOJPPIB_01;
  System_Xml_XmlNode_o *AHDGNOJPPIB_02;
  System_Collections_Generic_List_NKPJLEMPIKD__o *pSVar2;
  System_Collections_Generic_List_ILGLOCBJFEG__o *pSVar3;
  System_Collections_Generic_List_HJNEOLCKEMD__o *pSVar4;
  System_Collections_Generic_List_HJNEOLCKEMD__o **ppSVar5;
  
  if ((DAT_04567bfd & 1) == 0) {
    FUN_01bab630(&StringLiteral_4577);
    FUN_01bab630(&StringLiteral_2731);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_5995);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567bfd = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar1;
      thunk_FUN_01c20e04();
      AHDGNOJPPIB_00 =
           (System_Xml_XmlNode_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_5995,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      AHDGNOJPPIB_01 =
           (System_Xml_XmlNode_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_4577,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      AHDGNOJPPIB_02 =
           (System_Xml_XmlNode_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_2731,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      pSVar2 = NKPJLEMPIKD__EOHMFJFFFIN
                         (AHDGNOJPPIB_00,(__this->fields)._MEFGNAIILBJ_k__BackingField,
                          (MethodInfo *)0x0);
      (__this->fields)._NAGALBFLGCA_k__BackingField = pSVar2;
      thunk_FUN_01c20e04();
      pSVar3 = ILGLOCBJFEG__EOHMFJFFFIN
                         (AHDGNOJPPIB_01,(__this->fields)._MEFGNAIILBJ_k__BackingField,
                          (MethodInfo *)0x0);
      (__this->fields)._FMMIIPHCHOH_k__BackingField = pSVar3;
      thunk_FUN_01c20e04();
      pSVar4 = HJNEOLCKEMD__EOHMFJFFFIN
                         (AHDGNOJPPIB_02,(__this->fields)._MEFGNAIILBJ_k__BackingField,__this,
                          (MethodInfo *)0x0);
      ppSVar5 = &(__this->fields)._DEKNAHBMHGA_k__BackingField;
      *ppSVar5 = pSVar4;
      thunk_FUN_01c20e04(ppSVar5,pSVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

