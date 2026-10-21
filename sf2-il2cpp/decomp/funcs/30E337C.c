// LEKPMNDHDNH$$HNIHOIAMDPC @ RVA 0x30E337C

void LEKPMNDHDNH__HNIHOIAMDPC
               (LEKPMNDHDNH_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58 [2];
  
  if ((DAT_045663cb & 1) == 0) {
    FUN_01bab630(&StringLiteral_8907);
    FUN_01bab630(&StringLiteral_5759);
    FUN_01bab630(&StringLiteral_13833);
    FUN_01bab630(&StringLiteral_6609);
    FUN_01bab630(&StringLiteral_5423);
    DAT_045663cb = 1;
  }
  EAAHMDAMHNI__HNIHOIAMDPC((EAAHMDAMHNI_o *)__this,IIBFFEPEHPF,(MethodInfo *)0x0);
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                       (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_6609,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_8907,(MethodInfo *)0x0);
      iVar1 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar4,(MethodInfo *)0x0);
      (__this->fields).EOPBEKGNABN = iVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                         (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_13833,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_5759,(MethodInfo *)0x0);
        iVar1 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar4,(MethodInfo *)0x0);
        (__this->fields).NKDEEKELFLN = iVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                           (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_5423,(MethodInfo *)0x0);
          CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_58,CJNHFNHJHPE,
                     (MethodInfo *)0x0);
          (__this->fields).LFEPLFBMMDG.fields.fakeValueActive = local_58[0].fakeValueActive;
          (__this->fields).LFEPLFBMMDG.fields.inited = local_58[0].inited;
          *(undefined2 *)&(__this->fields).LFEPLFBMMDG.fields.field_0x12 = local_58[0]._18_2_;
          (__this->fields).LFEPLFBMMDG.fields.hiddenValueOldByte4 =
               (CodeStage_AntiCheat_Common_ACTkByte4_o)local_58[0].hiddenValueOldByte4.fields;
          (__this->fields).LFEPLFBMMDG.fields.fakeValue = local_58[0].fakeValue;
          (__this->fields).LFEPLFBMMDG.fields.currentCryptoKey = local_58[0].currentCryptoKey;
          (__this->fields).LFEPLFBMMDG.fields.hiddenValue = local_58[0].hiddenValue;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

