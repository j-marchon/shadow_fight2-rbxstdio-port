// HBNENINHPGF$$.ctor @ RVA 0x31D8A8C

void HBNENINHPGF___ctor(HBNENINHPGF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int32_t iVar5;
  
  if ((DAT_04566cff & 1) == 0) {
    FUN_01bab630(&StringLiteral_10794);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_6544);
    FUN_01bab630(&StringLiteral_6922);
    FUN_01bab630(&StringLiteral_7289);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566cff = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
    (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar4;
    thunk_FUN_01c20e04();
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_7289,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      pSVar4 = OFFIONDOEPM__CNLBHLNMCCI(pSVar4,(MethodInfo *)0x0);
      (__this->fields)._PGCEKJLODEJ_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_6922,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_6544,(MethodInfo *)0x0);
        if (bVar1) {
          iVar5 = 1;
        }
        else {
          bVar1 = System_String__op_Equality(pSVar4,StringLiteral_10794,(MethodInfo *)0x0);
          if (!bVar1) {
            (__this->fields).EAJKEHPLGMP = 0;
            return;
          }
          iVar5 = 2;
        }
        (__this->fields).EAJKEHPLGMP = iVar5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

