// JGHEMMGMLND$$.ctor @ RVA 0x33DE190

void JGHEMMGMLND___ctor(JGHEMMGMLND_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       GEBHIBIEAJE_o *AEAMAIHIFKL,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  CNDPAJOLKFN_o **ppCVar4;
  float fVar5;
  
  if ((DAT_04567e82 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8849);
    FUN_01bab630(&StringLiteral_8848);
    FUN_01bab630(&StringLiteral_10793);
    DAT_04567e82 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_String_o *)
             (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
    (__this->fields).DEKCPPOJFEH = pSVar1;
    thunk_FUN_01c20e04();
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_8848,(MethodInfo *)0x0);
      fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
      (__this->fields).MHJPFONADDM = fVar5;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_8849,(MethodInfo *)0x0);
        fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
        (__this->fields).MEKAEJEAAGJ = fVar5;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_10793,(MethodInfo *)0x0);
          fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          (__this->fields).ADOKPILEFJH = fVar5 + fVar5;
          if (AEAMAIHIFKL != (GEBHIBIEAJE_o *)0x0) {
            (__this->fields).PBMIHHHBAFI = (AEAMAIHIFKL->fields)._HMIPFMPCHII_k__BackingField;
            thunk_FUN_01c20e04();
            ppCVar4 = &(__this->fields).BFBNMPMNABM;
            *ppCVar4 = (AEAMAIHIFKL->fields)._MHGCPMPILGC_k__BackingField;
            thunk_FUN_01c20e04(ppCVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

