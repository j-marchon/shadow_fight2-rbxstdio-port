// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionPlayer  (obfuscated ALIDPKFDNBA)
// TypeDefIndex 1299
// Namespace: 
// public class ConditionPlayer : ConditionAnimation
// Fields:
//   private bool JNJDPELALAA; // 0x25

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3154C8C]
// ConditionPlayer$$.ctor @ RVA 0x3154C8C

void ConditionPlayer___ctor(ConditionPlayer_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_0456682c & 1) == 0) {
    FUN_01bab630(&StringLiteral_9653/*"Number"*/);
    DAT_0456682c = 1;
  }
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,6,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9653/*"Number"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,1,(MethodInfo *)0x0);
      (__this->fields).super.field_0x15 = iVar1 == 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3154D24]
// ConditionPlayer$$EPBENPDCBFE @ RVA 0x3154D24

bool ConditionPlayer__EPBENPDCBFE(ConditionPlayer_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    return ((bool_conflict)(__this->fields).super.field_0x15 == (AHEFOIOKDOK->fields).HJPOJOPKEKI)
           != ((__this->fields).super.GBBHFPBFOPI != false);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

