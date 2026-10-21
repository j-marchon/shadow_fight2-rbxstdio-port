// TypeDefIndex 418
// Namespace: 
// public class EHEHBPFEIKB : PNGKLCHKPEO
// Fields:
//   private bool NNAIOLJMNBM; // 0x68
//   private bool JAAANDACPHJ; // 0x69
//   private Vector3 DLEDNBFKGNJ; // 0x6C

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3487C5C]
// EHEHBPFEIKB$$.ctor @ RVA 0x3487C5C

void EHEHBPFEIKB___ctor(EHEHBPFEIKB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  PNGKLCHKPEO___ctor((PNGKLCHKPEO_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  (__this->fields).JAAANDACPHJ = false;
  return;
}


// ===== private void LGCEDHIEFFN(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3487C78]
// EHEHBPFEIKB$$LGCEDHIEFFN @ RVA 0x3487C78

void EHEHBPFEIKB__LGCEDHIEFFN(EHEHBPFEIKB_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  if (((__this->fields).NNAIOLJMNBM != false) || ((__this->fields).JAAANDACPHJ == false)) {
    UVar1 = PNGKLCHKPEO__KILOIOEILFL((PNGKLCHKPEO_o *)__this,AHEFOIOKDOK,(MethodInfo *)0x0);
    (__this->fields).DLEDNBFKGNJ.fields.x = UVar1.fields.x;
    (__this->fields).DLEDNBFKGNJ.fields.y = UVar1.fields.y;
    (__this->fields).DLEDNBFKGNJ.fields.z = UVar1.fields.z;
    (__this->fields).JAAANDACPHJ = true;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3487CB4]
// EHEHBPFEIKB$$.ctor @ RVA 0x3487CB4

void EHEHBPFEIKB___ctor(EHEHBPFEIKB_o *__this,MethodInfo *method)

{
  PNGKLCHKPEO___ctor((PNGKLCHKPEO_o *)__this,(MethodInfo *)0x0);
  (__this->fields).JAAANDACPHJ = false;
  return;
}


// ===== public override float LHPFGLOFHBL(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3487CD0]
// EHEHBPFEIKB$$LHPFGLOFHBL @ RVA 0x3487CD0

float EHEHBPFEIKB__LHPFGLOFHBL(EHEHBPFEIKB_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  float fVar1;
  
  EHEHBPFEIKB__LGCEDHIEFFN(__this,AHEFOIOKDOK,method);
  if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    if ((AHEFOIOKDOK->fields).PNLLLBCNLAG == false) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = -(__this->fields).DLEDNBFKGNJ.fields.y;
    }
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override float CJHJMGGINHP(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3487D10]
// EHEHBPFEIKB$$CJHJMGGINHP @ RVA 0x3487D10

float EHEHBPFEIKB__CJHJMGGINHP(EHEHBPFEIKB_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  float fVar1;
  
  EHEHBPFEIKB__LGCEDHIEFFN(__this,AHEFOIOKDOK,method);
  if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    if ((AHEFOIOKDOK->fields).PNLLLBCNLAG == false) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (__this->fields).DLEDNBFKGNJ.fields.x;
    }
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void EOHMFJFFFIN(XmlNode AHDGNOJPPIB)  [RVA 0x3487D4C]
// EHEHBPFEIKB$$EOHMFJFFFIN @ RVA 0x3487D4C

void EHEHBPFEIKB__EOHMFJFFFIN
               (EHEHBPFEIKB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_045683c3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6507/*"Follow"*/);
    DAT_045683c3 = 1;
  }
  PNGKLCHKPEO__EOHMFJFFFIN((PNGKLCHKPEO_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_6507/*"Follow"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      (__this->fields).NNAIOLJMNBM = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override Vector3 KILOIOEILFL(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3487DE0]
// EHEHBPFEIKB$$KILOIOEILFL @ RVA 0x3487DE0

UnityEngine_Vector3_o
EHEHBPFEIKB__KILOIOEILFL(EHEHBPFEIKB_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  EHEHBPFEIKB__LGCEDHIEFFN(__this,AHEFOIOKDOK,method);
  return (UnityEngine_Vector3_o)(__this->fields).DLEDNBFKGNJ.fields;
}

