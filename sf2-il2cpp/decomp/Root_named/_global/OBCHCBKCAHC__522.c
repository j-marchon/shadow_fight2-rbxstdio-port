// TypeDefIndex 522
// Namespace: 
// public class OBCHCBKCAHC : HJNEOLCKEMD
// Fields:
//   private Color <BFEKLJGLHEH>k__BackingField; // 0x60
//   private int <FAMPPCNLDJI>k__BackingField; // 0x70
//   private bool <JIDINBPLOPJ>k__BackingField; // 0x74

// ===== public void .ctor()  [RVA 0x35946D0]
// OBCHCBKCAHC$$.ctor @ RVA 0x35946D0

void OBCHCBKCAHC___ctor(OBCHCBKCAHC_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int FMBOJFEHBDJ()  [RVA 0x35946D8]
// OBCHCBKCAHC$$FMBOJFEHBDJ @ RVA 0x35946D8

int32_t OBCHCBKCAHC__FMBOJFEHBDJ(OBCHCBKCAHC_o *__this,MethodInfo *method)

{
  return (__this->fields)._FAMPPCNLDJI_k__BackingField;
}


// ===== protected void OCECBDHFGJL(int CJNHFNHJHPE)  [RVA 0x35946E0]
// OBCHCBKCAHC$$OCECBDHFGJL @ RVA 0x35946E0

void OBCHCBKCAHC__OCECBDHFGJL(OBCHCBKCAHC_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FAMPPCNLDJI_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== protected void LJGIFDBOCNN(Color CJNHFNHJHPE)  [RVA 0x35946E8]
// OBCHCBKCAHC$$LJGIFDBOCNN @ RVA 0x35946E8

void OBCHCBKCAHC__LJGIFDBOCNN
               (OBCHCBKCAHC_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.r = CJNHFNHJHPE.fields.r;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.g = CJNHFNHJHPE.fields.g;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.b = CJNHFNHJHPE.fields.b;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.a = CJNHFNHJHPE.fields.a;
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x35946F4]
// OBCHCBKCAHC$$HNIHOIAMDPC @ RVA 0x35946F4

void OBCHCBKCAHC__HNIHOIAMDPC
               (OBCHCBKCAHC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  
  if ((DAT_04568d94 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4476/*"Color"*/);
    FUN_01bab630(&StringLiteral_12067/*"Show"*/);
    FUN_01bab630(&StringLiteral_6583/*"FrameTimer"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_9937/*"Opacity"*/);
    DAT_04568d94 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  (__this->fields).super._KPCCNJJEIAN_k__BackingField = false;
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x1a,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9937/*"Opacity"*/,(MethodInfo *)0x0);
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar3,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        if (pSVar5 != (System_String_o *)0x0) {
          pSVar5 = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
          UVar7 = CFBGPBCDAGA__DJEMAAMAJHF(pSVar5,(MethodInfo *)0x0);
          fVar6 = UVar7.fields.a;
          if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03694820 to 03794827 has its CatchHandler @ 03695338 */
            fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,1.0,(MethodInfo *)0x0);
          }
          (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.r = UVar7.fields.r;
          (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.g = UVar7.fields.g;
                    /* try { // try from 03694834 to 0379483f has its CatchHandler @ 03695330 */
          (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.b = UVar7.fields.b;
          (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.a = fVar6;
                    /* try { // try from 03694840 to 03794f67 has its CatchHandler @ 0369430c */
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_6583/*"FrameTimer"*/,(MethodInfo *)0x0);
            iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
            (__this->fields)._FAMPPCNLDJI_k__BackingField = iVar2;
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_12067/*"Show"*/,(MethodInfo *)0x0);
              bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
              (__this->fields)._JIDINBPLOPJ_k__BackingField = bVar1;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(OBCHCBKCAHC IBKIPBJJCPG)  [RVA 0x35948D0]
// OBCHCBKCAHC$$.ctor @ RVA 0x35948D0

void OBCHCBKCAHC___ctor(OBCHCBKCAHC_o *__this,OBCHCBKCAHC_o *IBKIPBJJCPG,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (OBCHCBKCAHC_o *)0x0) {
    fVar1 = (IBKIPBJJCPG->fields)._BFEKLJGLHEH_k__BackingField.fields.a;
    fVar2 = (IBKIPBJJCPG->fields)._BFEKLJGLHEH_k__BackingField.fields.r;
    fVar3 = (IBKIPBJJCPG->fields)._BFEKLJGLHEH_k__BackingField.fields.g;
    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.b =
         (IBKIPBJJCPG->fields)._BFEKLJGLHEH_k__BackingField.fields.b;
    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.a = fVar1;
    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.r = fVar2;
    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.g = fVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Color GLIBGECPOPG()  [RVA 0x3594904]
// OBCHCBKCAHC$$GLIBGECPOPG @ RVA 0x3594904

UnityEngine_Color_o OBCHCBKCAHC__GLIBGECPOPG(OBCHCBKCAHC_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._BFEKLJGLHEH_k__BackingField.fields;
}


// ===== protected void LDEHLIBDPOG(bool CJNHFNHJHPE)  [RVA 0x3594910]
// OBCHCBKCAHC$$LDEHLIBDPOG @ RVA 0x3594910

void OBCHCBKCAHC__LDEHLIBDPOG(OBCHCBKCAHC_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JIDINBPLOPJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool JPNCOAPOOGO()  [RVA 0x359491C]
// OBCHCBKCAHC$$JPNCOAPOOGO @ RVA 0x359491C

bool OBCHCBKCAHC__JPNCOAPOOGO(OBCHCBKCAHC_o *__this,MethodInfo *method)

{
  return (__this->fields)._JIDINBPLOPJ_k__BackingField;
}

