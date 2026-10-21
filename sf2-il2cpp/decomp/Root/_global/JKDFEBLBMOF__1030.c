// TypeDefIndex 1030
// Namespace: 
// public class JKDFEBLBMOF
// Fields:
//   public int OLGNPLGBNDJ; // 0x10
//   public float CGBFEMGKFGC; // 0x14
//   public string LEJBNEIJJIF; // 0x18

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x30CCC80]
// JKDFEBLBMOF$$.ctor @ RVA 0x30CCC80

void JKDFEBLBMOF___ctor(JKDFEBLBMOF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  float fVar6;
  
  if ((DAT_045662e5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8672/*"LootContainerName"*/);
    FUN_01bab630(&StringLiteral_10359/*"PosTo"*/);
    FUN_01bab630(&StringLiteral_10358/*"PosRatingScaler"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045662e5 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_10359/*"PosTo"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
      (__this->fields).OLGNPLGBNDJ = iVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_10358/*"PosRatingScaler"*/,(MethodInfo *)0x0);
        fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
        (__this->fields).CGBFEMGKFGC = fVar6;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_8672/*"LootContainerName"*/,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          ppSVar5 = &(__this->fields).LEJBNEIJJIF;
          *ppSVar5 = pSVar4;
          thunk_FUN_01c20e04(ppSVar5,pSVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(int FKPKEIHMCIP, float OHLJBGKLJAD, string AIGPKBDKFON)  [RVA 0x30CCDB8]
// JKDFEBLBMOF$$.ctor @ RVA 0x30CCDB8

void JKDFEBLBMOF___ctor(JKDFEBLBMOF_o *__this,int32_t FKPKEIHMCIP,float OHLJBGKLJAD,
                       System_String_o *AIGPKBDKFON,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).LEJBNEIJJIF;
  *ppSVar1 = AIGPKBDKFON;
  (__this->fields).OLGNPLGBNDJ = FKPKEIHMCIP;
  (__this->fields).CGBFEMGKFGC = OHLJBGKLJAD;
  thunk_FUN_01c20e04(ppSVar1,AIGPKBDKFON);
  return;
}

