// GCBHGPMLFBA$$HNIHOIAMDPC @ RVA 0x2FEDA1C

void GCBHGPMLFBA__HNIHOIAMDPC
               (GCBHGPMLFBA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_38;
  
  if ((DAT_04565a43 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5069);
    DAT_04565a43 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0xf,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_5069,(MethodInfo *)0x0);
      CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_38,CJNHFNHJHPE,
                 (MethodInfo *)0x0);
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValueActive =
           local_38.fakeValueActive;
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.inited = local_38.inited;
      *(undefined2 *)&(__this->fields)._APGGCIMBEBJ_k__BackingField.fields.field_0x12 =
           local_38._18_2_;
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValueOldByte4 =
           (CodeStage_AntiCheat_Common_ACTkByte4_o)local_38.hiddenValueOldByte4.fields;
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValue = local_38.fakeValue;
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.currentCryptoKey =
           local_38.currentCryptoKey;
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValue = local_38.hiddenValue;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

