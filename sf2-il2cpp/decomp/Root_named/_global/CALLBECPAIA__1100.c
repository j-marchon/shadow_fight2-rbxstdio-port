// TypeDefIndex 1100
// Namespace: 
// public class CALLBECPAIA : Rule
// Fields:
//   protected float JOBMIFFFCLB; // 0x58
//   protected float PCFDLFAJOLE; // 0x5C
//   protected float GOOJGDKIINN; // 0x60
//   protected float MGNDAIOKHLN; // 0x64
//   protected float GIIKEFKEBIK; // 0x68
//   protected float EDPIKHAEGJB; // 0x6C
//   protected float PMAJGIMDOEA; // 0x70

// ===== public float DJHGLPJHGMI()  [RVA 0x30E30B8]
// CALLBECPAIA$$DJHGLPJHGMI @ RVA 0x30E30B8

float CALLBECPAIA__DJHGLPJHGMI(CALLBECPAIA_o *__this,MethodInfo *method)

{
  return (__this->fields).MGNDAIOKHLN;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x30E30C0]
// CALLBECPAIA$$.ctor @ RVA 0x30E30C0

void CALLBECPAIA___ctor(CALLBECPAIA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  
  if ((DAT_045663ca & 1) == 0) {
    FUN_01bab630(&StringLiteral_5766/*"EnemyRatingMagic"*/);
    FUN_01bab630(&StringLiteral_5765/*"EnemyRating"*/);
    FUN_01bab630(&StringLiteral_10327/*"PlayerRatingMagic"*/);
    FUN_01bab630(&StringLiteral_10328/*"PlayerRatingRanged"*/);
    FUN_01bab630(&StringLiteral_5767/*"EnemyRatingRanged"*/);
    FUN_01bab630(&StringLiteral_10326/*"PlayerRating"*/);
    FUN_01bab630(&StringLiteral_11029/*"RatingCorrection"*/);
    DAT_045663ca = 1;
  }
  Rule___ctor((Rule_o *)__this,0x21,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_10326/*"PlayerRating"*/,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
      (__this->fields).JOBMIFFFCLB = fVar3;
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_5765/*"EnemyRating"*/,(MethodInfo *)0x0);
        fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).PCFDLFAJOLE = fVar3;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_10327/*"PlayerRatingMagic"*/,(MethodInfo *)0x0);
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          (__this->fields).GOOJGDKIINN = fVar3;
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_5766/*"EnemyRatingMagic"*/,(MethodInfo *)0x0);
            fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
            (__this->fields).MGNDAIOKHLN = fVar3;
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_10328/*"PlayerRatingRanged"*/,(MethodInfo *)0x0);
              fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
              (__this->fields).GIIKEFKEBIK = fVar3;
              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar1,StringLiteral_5767/*"EnemyRatingRanged"*/,(MethodInfo *)0x0);
                fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                (__this->fields).EDPIKHAEGJB = fVar3;
                pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar1,StringLiteral_11029/*"RatingCorrection"*/,(MethodInfo *)0x0);
                  fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                  (__this->fields).PMAJGIMDOEA = fVar3;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float DIIOKAFGONN()  [RVA 0x30E3304]
// CALLBECPAIA$$DIIOKAFGONN @ RVA 0x30E3304

float CALLBECPAIA__DIIOKAFGONN(CALLBECPAIA_o *__this,MethodInfo *method)

{
  return (__this->fields).GOOJGDKIINN;
}


// ===== public float OOKDPBFEOIN()  [RVA 0x30E330C]
// CALLBECPAIA$$OOKDPBFEOIN @ RVA 0x30E330C

float CALLBECPAIA__OOKDPBFEOIN(CALLBECPAIA_o *__this,MethodInfo *method)

{
  return (__this->fields).PMAJGIMDOEA;
}


// ===== public float FAIHOJLKJCK()  [RVA 0x30E3314]
// CALLBECPAIA$$FAIHOJLKJCK @ RVA 0x30E3314

float CALLBECPAIA__FAIHOJLKJCK(CALLBECPAIA_o *__this,MethodInfo *method)

{
  return (__this->fields).GIIKEFKEBIK;
}


// ===== public float PNKOMEHNAJK()  [RVA 0x30E331C]
// CALLBECPAIA$$PNKOMEHNAJK @ RVA 0x30E331C

float CALLBECPAIA__PNKOMEHNAJK(CALLBECPAIA_o *__this,MethodInfo *method)

{
  return (__this->fields).EDPIKHAEGJB;
}


// ===== public float AHBDJDDKIDE()  [RVA 0x30E3324]
// CALLBECPAIA$$AHBDJDDKIDE @ RVA 0x30E3324

float CALLBECPAIA__AHBDJDDKIDE(CALLBECPAIA_o *__this,MethodInfo *method)

{
  return (__this->fields).PCFDLFAJOLE;
}


// ===== public float FEAOKABPACP()  [RVA 0x30E332C]
// CALLBECPAIA$$FEAOKABPACP @ RVA 0x30E332C

float CALLBECPAIA__FEAOKABPACP(CALLBECPAIA_o *__this,MethodInfo *method)

{
  return (__this->fields).JOBMIFFFCLB;
}

