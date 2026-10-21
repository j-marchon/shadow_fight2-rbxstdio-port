// MFELPDAPJGO$$.ctor @ RVA 0x342D9EC

void MFELPDAPJGO___ctor(MFELPDAPJGO_o *__this,System_Xml_XmlNode_o *CJPHHMIHOGD,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568152 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_9947);
    FUN_01bab630(&StringLiteral_4513);
    DAT_04568152 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (CJPHHMIHOGD != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.methodPtr)
                       (CJPHHMIHOGD,(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.method);
    if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
       (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9327,(MethodInfo *)0x0),
       pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
      pSVar4 = (System_String_o *)
               (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.methodPtr)
                         (CJPHHMIHOGD,(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.method);
      if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_4513,(MethodInfo *)0x0),
         pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
        pSVar4 = (System_String_o *)
                 (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
        (__this->fields)._JJPFNGHOBLJ_k__BackingField = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.methodPtr)
                           (CJPHHMIHOGD,(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_9947,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          (__this->fields)._BADKCCPAOAC_k__BackingField = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

