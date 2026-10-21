// AJNNHGGLGIF$$FEEFOMDIENJ @ RVA 0x35ADAB0

void AJNNHGGLGIF__FEEFOMDIENJ
               (AJNNHGGLGIF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  
  if ((DAT_04568e66 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5618);
    DAT_04568e66 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_5618,(MethodInfo *)0x0);
      bVar2 = EIABCPKDEBD__OBECCOPBADO(pSVar5,(MethodInfo *)0x0);
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_5618,(MethodInfo *)0x0);
        bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar5,false,(MethodInfo *)0x0);
        uVar1 = 2;
        if (!bVar2) {
          uVar1 = ~(uint)bVar3 & 1;
        }
        (__this->fields).PJEIFMBEAKH = uVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

