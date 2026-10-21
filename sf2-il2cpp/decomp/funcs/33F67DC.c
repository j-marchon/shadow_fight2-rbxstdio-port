// DEENPPDACAD$$HNIHOIAMDPC @ RVA 0x33F67DC

void DEENPPDACAD__HNIHOIAMDPC
               (DEENPPDACAD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *KGLJICLJHEL;
  System_Collections_Generic_List_ECENNHNBAME__o *KENFFDHLNDA;
  float fVar3;
  
  if ((DAT_04567f98 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&StringLiteral_6197);
    FUN_01bab630(&StringLiteral_2968);
    FUN_01bab630(&StringLiteral_11233);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567f98 = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_2968,(MethodInfo *)0x0);
      KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      KENFFDHLNDA = (__this->fields).super.KOFLFFPDOMO;
      if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo);
      }
      LDHBHPILNMA__CADFKPKODCI(KGLJICLJHEL,KENFFDHLNDA,(MethodInfo *)0x0);
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_6197,(MethodInfo *)0x0);
        fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,1.0,(MethodInfo *)0x0);
        (__this->fields).DCGPDDJFMKE = fVar3;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_11233,(MethodInfo *)0x0);
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,1.0,(MethodInfo *)0x0);
          (__this->fields).KIOEADKABMP = fVar3;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

