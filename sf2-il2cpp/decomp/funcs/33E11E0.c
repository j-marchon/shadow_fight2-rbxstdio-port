// HDBNGIBFEBA$$HNIHOIAMDPC @ RVA 0x33E11E0

void HDBNGIBFEBA__HNIHOIAMDPC
               (HDBNGIBFEBA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  HDBNGIBFEBA_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04567ea2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10305);
    FUN_01bab630(&StringLiteral_9577);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567ea2 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_10305,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      __this_00 = (HDBNGIBFEBA_o *)
                  EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      iVar1 = HDBNGIBFEBA__MGGHPGELKIP(__this_00,(System_String_o *)__this_00,method_00);
      (__this->fields).BEMCNJHEADJ = iVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9577,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
        (__this->fields).GBBHFPBFOPI = iVar1 != 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

