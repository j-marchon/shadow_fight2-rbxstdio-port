// BNCEMOJHFEP$$HNIHOIAMDPC @ RVA 0x3441918

void BNCEMOJHFEP__HNIHOIAMDPC
               (BNCEMOJHFEP_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int32_t *piVar5;
  
  if ((DAT_04568222 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4464);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_5296);
    DAT_04568222 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5296,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
      *(int32_t *)&(__this->fields).super.field_0x54 = iVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_4464,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
        piVar5 = &(__this->fields).FLJFBLEOGDG;
        *(System_String_o **)piVar5 = pSVar4;
                    /* try { // try from 03541a04 to 03641b43 has its CatchHandler @ 03541a04
                       catch() { ... } // from try @ 03541a04 with catch @ 03541a04
                       catch() { ... } // from try @ 03541b60 with catch @ 03541a04
                       catch() { ... } // from try @ 03541bfc with catch @ 03541a04
                       catch() { ... } // from try @ 03541c20 with catch @ 03541a04
                       catch() { ... } // from try @ 03541d0c with catch @ 03541a04
                       catch() { ... } // from try @ 03541d2c with catch @ 03541a04
                       catch() { ... } // from try @ 03541dcc with catch @ 03541a04
                       catch() { ... } // from try @ 03541e30 with catch @ 03541a04
                       catch() { ... } // from try @ 03541e50 with catch @ 03541a04
                       catch() { ... } // from try @ 03541e90 with catch @ 03541a04 */
        thunk_FUN_01c20e04(piVar5,pSVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

