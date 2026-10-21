// TypeDefIndex 2767
// Namespace: 
// public class MGNPHCAAEIO.GNBEOEJBMKL
// Fields:
//   public string NHPDFFAIJMF; // 0x10
//   public ObscuredFloat MKANNAKGEEC; // 0x18

// ===== public void .ctor()  [RVA 0x33FDDA8]
// MGNPHCAAEIO.GNBEOEJBMKL$$.ctor @ RVA 0x33FDDA8

void MGNPHCAAEIO_GNBEOEJBMKL___ctor(MGNPHCAAEIO_GNBEOEJBMKL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x340EC20]
// MGNPHCAAEIO.GNBEOEJBMKL$$HNIHOIAMDPC @ RVA 0x340EC20

void MGNPHCAAEIO_GNBEOEJBMKL__HNIHOIAMDPC
               (MGNPHCAAEIO_GNBEOEJBMKL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58 [2];
  
  if ((DAT_04568068 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3202/*"Attribute"*/);
    FUN_01bab630(&StringLiteral_3400/*"Base"*/);
    FUN_01bab630(&StringLiteral_3696/*"COM"*/);
    DAT_04568068 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3202/*"Attribute"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_3696/*"COM"*/,(MethodInfo *)0x0);
      (__this->fields).NHPDFFAIJMF = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_3400/*"Base"*/,(MethodInfo *)0x0);
        CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_58,CJNHFNHJHPE,
                   (MethodInfo *)0x0);
        (__this->fields).MKANNAKGEEC.fields.fakeValueActive = local_58[0].fakeValueActive;
        (__this->fields).MKANNAKGEEC.fields.inited = local_58[0].inited;
        *(undefined2 *)&(__this->fields).MKANNAKGEEC.fields.field_0x12 = local_58[0]._18_2_;
        (__this->fields).MKANNAKGEEC.fields.hiddenValueOldByte4 =
             (CodeStage_AntiCheat_Common_ACTkByte4_o)local_58[0].hiddenValueOldByte4.fields;
        (__this->fields).MKANNAKGEEC.fields.fakeValue = local_58[0].fakeValue;
        (__this->fields).MKANNAKGEEC.fields.currentCryptoKey = local_58[0].currentCryptoKey;
        (__this->fields).MKANNAKGEEC.fields.hiddenValue = local_58[0].hiddenValue;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x34067B8]
// MGNPHCAAEIO.GNBEOEJBMKL$$RandomizeObscuredVars @ RVA 0x34067B8

void MGNPHCAAEIO_GNBEOEJBMKL__RandomizeObscuredVars
               (MGNPHCAAEIO_GNBEOEJBMKL_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).MKANNAKGEEC,(MethodInfo *)0x0);
  return;
}

