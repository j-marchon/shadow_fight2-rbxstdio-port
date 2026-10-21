// TypeDefIndex 1736
// Namespace: 
// public class PFMHIGFMAJJ
// Fields:
//   private float PCNEDMAJMOJ; // 0x10
//   private int MCGBOKPNBLD; // 0x14

// ===== public int BKLKCMMLFAF()  [RVA 0x31DB544]
// PFMHIGFMAJJ$$BKLKCMMLFAF @ RVA 0x31DB544

int32_t PFMHIGFMAJJ__BKLKCMMLFAF(PFMHIGFMAJJ_o *__this,MethodInfo *method)

{
  return (__this->fields).MCGBOKPNBLD;
}


// ===== public float CNKOOLDMAGC()  [RVA 0x31DB54C]
// PFMHIGFMAJJ$$CNKOOLDMAGC @ RVA 0x31DB54C

float PFMHIGFMAJJ__CNKOOLDMAGC(PFMHIGFMAJJ_o *__this,MethodInfo *method)

{
  return (__this->fields).PCNEDMAJMOJ;
}


// ===== public void .ctor()  [RVA 0x31DB554]
// PFMHIGFMAJJ$$.ctor @ RVA 0x31DB554

void PFMHIGFMAJJ___ctor(PFMHIGFMAJJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31DB55C]
// PFMHIGFMAJJ$$HNIHOIAMDPC @ RVA 0x31DB55C

void PFMHIGFMAJJ__HNIHOIAMDPC
               (PFMHIGFMAJJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  float fVar4;
  
  if ((DAT_04566d14 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8422/*"LevelStep"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_04566d14 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
      (__this->fields).PCNEDMAJMOJ = fVar4;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_8422/*"LevelStep"*/,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
        (__this->fields).MCGBOKPNBLD = iVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

