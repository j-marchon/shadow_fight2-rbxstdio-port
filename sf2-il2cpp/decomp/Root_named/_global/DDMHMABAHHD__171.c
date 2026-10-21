// TypeDefIndex 171
// Namespace: 
// public class DDMHMABAHHD
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private int <HFPMLGFDOKC>k__BackingField; // 0x18
//   private float <GOPKIGPPKCB>k__BackingField; // 0x1C
//   private float <BKOJHCAOKBO>k__BackingField; // 0x20
//   private DDMHMABAHHD.AJKNCGANAMJ <GMPAEDFIIHF>k__BackingField; // 0x24

// ===== public DDMHMABAHHD.AJKNCGANAMJ NHGGBEACKBD()  [RVA 0x3110BE8]
// DDMHMABAHHD$$NHGGBEACKBD @ RVA 0x3110BE8

int32_t DDMHMABAHHD__NHGGBEACKBD(DDMHMABAHHD_o *__this,MethodInfo *method)

{
  return (__this->fields)._GMPAEDFIIHF_k__BackingField;
}


// ===== public float NODBECJPBDC()  [RVA 0x3110BF0]
// DDMHMABAHHD$$NODBECJPBDC @ RVA 0x3110BF0

float DDMHMABAHHD__NODBECJPBDC(DDMHMABAHHD_o *__this,MethodInfo *method)

{
  return (__this->fields)._GOPKIGPPKCB_k__BackingField;
}


// ===== public int DGOEDGMGAHF()  [RVA 0x3110BF8]
// DDMHMABAHHD$$DGOEDGMGAHF @ RVA 0x3110BF8

int32_t DDMHMABAHHD__DGOEDGMGAHF(DDMHMABAHHD_o *__this,MethodInfo *method)

{
  return (__this->fields)._HFPMLGFDOKC_k__BackingField;
}


// ===== public void .ctor(XmlNode PPOGPLAOHGI)  [RVA 0x3110C00]
// DDMHMABAHHD$$.ctor @ RVA 0x3110C00

void DDMHMABAHHD___ctor(DDMHMABAHHD_o *__this,System_Xml_XmlNode_o *PPOGPLAOHGI,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  float fVar5;
  
  if ((DAT_04566580 & 1) == 0) {
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<DDMHMABAHHD_AJKNCGANAMJ>__);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_14891/*"Weight"*/);
    FUN_01bab630(&StringLiteral_10477/*"Probability"*/);
    DAT_04566580 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (PPOGPLAOHGI != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.methodPtr)
                       (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = (System_String_o *)
               (*(PPOGPLAOHGI->klass->vtable)._8_unknown.methodPtr)
                         (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._8_unknown.method);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,pSVar4,(MethodInfo *)0x0);
      (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.methodPtr)
                         (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
        (__this->fields)._HFPMLGFDOKC_k__BackingField = iVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.methodPtr)
                           (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_14891/*"Weight"*/,(MethodInfo *)0x0);
          fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          (__this->fields)._GOPKIGPPKCB_k__BackingField = fVar5;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.methodPtr)
                             (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_10477/*"Probability"*/,(MethodInfo *)0x0);
            fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,1.0,(MethodInfo *)0x0);
            (__this->fields)._BKOJHCAOKBO_k__BackingField = fVar5;
            pSVar4 = (System_String_o *)
                     (*(PPOGPLAOHGI->klass->vtable)._8_unknown.methodPtr)
                               (PPOGPLAOHGI,(PPOGPLAOHGI->klass->vtable)._8_unknown.method);
            iVar1 = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                              (pSVar4,0,Method_PCOEHCPGBBG_AICKIDLLIBK<DDMHMABAHHD_AJKNCGANAMJ>__);
            (__this->fields)._GMPAEDFIIHF_k__BackingField = iVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ABIKDJCCGJF(int CJNHFNHJHPE)  [RVA 0x3110DBC]
// DDMHMABAHHD$$ABIKDJCCGJF @ RVA 0x3110DBC

void DDMHMABAHHD__ABIKDJCCGJF(DDMHMABAHHD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HFPMLGFDOKC_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void BCEAICNLDID(float CJNHFNHJHPE)  [RVA 0x3110DC4]
// DDMHMABAHHD$$BCEAICNLDID @ RVA 0x3110DC4

void DDMHMABAHHD__BCEAICNLDID(DDMHMABAHHD_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GOPKIGPPKCB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x3110DCC]
// DDMHMABAHHD$$HCOCAAIGNNL @ RVA 0x3110DCC

void DDMHMABAHHD__HCOCAAIGNNL(DDMHMABAHHD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void GNLPNKGBAFL(DDMHMABAHHD.AJKNCGANAMJ CJNHFNHJHPE)  [RVA 0x3110DD4]
// DDMHMABAHHD$$GNLPNKGBAFL @ RVA 0x3110DD4

void DDMHMABAHHD__GNLPNKGBAFL(DDMHMABAHHD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GMPAEDFIIHF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void ILMDJLPGAMD(float CJNHFNHJHPE)  [RVA 0x3110DDC]
// DDMHMABAHHD$$ILMDJLPGAMD @ RVA 0x3110DDC

void DDMHMABAHHD__ILMDJLPGAMD(DDMHMABAHHD_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BKOJHCAOKBO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3110DE4]
// DDMHMABAHHD$$KCHJCGEMCGE @ RVA 0x3110DE4

System_String_o * DDMHMABAHHD__KCHJCGEMCGE(DDMHMABAHHD_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public float NLGJGDLMFAE()  [RVA 0x3110DEC]
// DDMHMABAHHD$$NLGJGDLMFAE @ RVA 0x3110DEC

float DDMHMABAHHD__NLGJGDLMFAE(DDMHMABAHHD_o *__this,MethodInfo *method)

{
  return (__this->fields)._BKOJHCAOKBO_k__BackingField;
}

