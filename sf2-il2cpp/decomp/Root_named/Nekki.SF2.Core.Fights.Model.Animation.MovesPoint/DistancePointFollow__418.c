// Original name: Nekki.SF2.Core.Fights.Model.Animation.MovesPoint.DistancePointFollow  (obfuscated EHEHBPFEIKB)
// TypeDefIndex 418
// Namespace: 
// public class DistancePointFollow : DistancePoint
// Fields:
//   private bool NNAIOLJMNBM; // 0x68
//   private bool JAAANDACPHJ; // 0x69
//   private Vector3 DLEDNBFKGNJ; // 0x6C

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3487C5C]
// DistancePointFollow$$.ctor @ RVA 0x3487C5C

void DistancePointFollow___ctor(DistancePointFollow_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  DistancePoint___ctor((DistancePoint_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  (__this->fields).JAAANDACPHJ = false;
  return;
}


// ===== private void LGCEDHIEFFN(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3487C78]
// DistancePointFollow$$LGCEDHIEFFN @ RVA 0x3487C78

void DistancePointFollow__LGCEDHIEFFN(DistancePointFollow_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  if (((__this->fields).NNAIOLJMNBM != false) || ((__this->fields).JAAANDACPHJ == false)) {
    UVar1 = DistancePoint__KILOIOEILFL((DistancePoint_o *)__this,AHEFOIOKDOK,(MethodInfo *)0x0);
    (__this->fields).DLEDNBFKGNJ.fields.x = UVar1.fields.x;
    (__this->fields).DLEDNBFKGNJ.fields.y = UVar1.fields.y;
    (__this->fields).DLEDNBFKGNJ.fields.z = UVar1.fields.z;
    (__this->fields).JAAANDACPHJ = true;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3487CB4]
// DistancePointFollow$$.ctor @ RVA 0x3487CB4

void DistancePointFollow___ctor(DistancePointFollow_o *__this,MethodInfo *method)

{
  DistancePoint___ctor((DistancePoint_o *)__this,(MethodInfo *)0x0);
  (__this->fields).JAAANDACPHJ = false;
  return;
}


// ===== public override float LHPFGLOFHBL(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3487CD0]
// DistancePointFollow$$LHPFGLOFHBL @ RVA 0x3487CD0

float DistancePointFollow__LHPFGLOFHBL(DistancePointFollow_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  float fVar1;
  
  DistancePointFollow__LGCEDHIEFFN(__this,AHEFOIOKDOK,method);
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
// DistancePointFollow$$CJHJMGGINHP @ RVA 0x3487D10

float DistancePointFollow__CJHJMGGINHP(DistancePointFollow_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  float fVar1;
  
  DistancePointFollow__LGCEDHIEFFN(__this,AHEFOIOKDOK,method);
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
// DistancePointFollow$$EOHMFJFFFIN @ RVA 0x3487D4C

void DistancePointFollow__EOHMFJFFFIN
               (DistancePointFollow_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_045683c3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6507/*"Follow"*/);
    DAT_045683c3 = 1;
  }
  DistancePoint__EOHMFJFFFIN((DistancePoint_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
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
// DistancePointFollow$$KILOIOEILFL @ RVA 0x3487DE0

UnityEngine_Vector3_o
DistancePointFollow__KILOIOEILFL(DistancePointFollow_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  DistancePointFollow__LGCEDHIEFFN(__this,AHEFOIOKDOK,method);
  return (UnityEngine_Vector3_o)(__this->fields).DLEDNBFKGNJ.fields;
}

