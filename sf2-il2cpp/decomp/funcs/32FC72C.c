// CJECMLGNCIC$$HNIHOIAMDPC @ RVA 0x32FC72C

void CJECMLGNCIC__HNIHOIAMDPC
               (CJECMLGNCIC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  
  if ((DAT_045676eb & 1) == 0) {
    FUN_01bab630(&StringLiteral_3606);
    FUN_01bab630(&StringLiteral_6584);
    FUN_01bab630(&StringLiteral_1);
    DAT_045676eb = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x14,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_6584,(MethodInfo *)0x0);
      CJNHFNHJHPE = EIABCPKDEBD__EHJNCGCICMP(pSVar2,0,(MethodInfo *)0x0);
      CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        (CJNHFNHJHPE,(MethodInfo *)0x0);
      (__this->fields)._PGFADODBAKD_k__BackingField.fields = CVar5;
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_3606,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields)._IAAGFGNCLHB_k__BackingField;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

