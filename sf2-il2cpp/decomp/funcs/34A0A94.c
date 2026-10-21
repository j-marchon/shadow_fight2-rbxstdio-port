// CMDDLMAPPMD$$HNIHOIAMDPC @ RVA 0x34A0A94

void CMDDLMAPPMD__HNIHOIAMDPC
               (CMDDLMAPPMD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  if ((DAT_04568498 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12408);
    DAT_04568498 = 1;
  }
  NKPJLEMPIKD__HNIHOIAMDPC((NKPJLEMPIKD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_12408,(MethodInfo *)0x0);
      CJNHFNHJHPE = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        (CJNHFNHJHPE,(MethodInfo *)0x0);
      (__this->fields)._GOMOBAPCMOM_k__BackingField.fields = CVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

