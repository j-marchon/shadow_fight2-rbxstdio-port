// TypeDefIndex 3398
// Namespace: 
// public class MGAKCABPDII : QuestAction
// Fields:
//   private float PCNEDMAJMOJ; // 0x64

// ===== public void .ctor()  [RVA 0x3552D78]
// MGAKCABPDII$$.ctor @ RVA 0x3552D78

void MGAKCABPDII___ctor(MGAKCABPDII_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3552D80]
// MGAKCABPDII$$HNIHOIAMDPC @ RVA 0x3552D80

void MGAKCABPDII__HNIHOIAMDPC
               (MGAKCABPDII_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  float fVar1;
  
  if ((DAT_04568b4c & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_04568b4c = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      fVar1 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,1.0,(MethodInfo *)0x0);
      *(float *)&(__this->fields).super.field_0x54 = fVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x3552E10]
// MGAKCABPDII$$OFPHPMGMCAL @ RVA 0x3552E10

System_String_o * MGAKCABPDII__OFPHPMGMCAL(MGAKCABPDII_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  float in_s0;
  
  if ((DAT_04568b4d & 1) == 0) {
    in_s0 = (float)FUN_01bab630(&StringLiteral_14698/*"Value = "*/);
    DAT_04568b4d = 1;
  }
  pSVar1 = System_Single__ToString(in_s0,(MethodInfo *)&(__this->fields).super.field_0x54);
  pSVar1 = System_String__Concat(StringLiteral_14698/*"Value = "*/,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3552E6C]
// MGAKCABPDII$$MAHFCKJGBPP @ RVA 0x3552E6C

void MGAKCABPDII__MAHFCKJGBPP(MGAKCABPDII_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Roster_o *__this_00;
  
  if ((DAT_04568b4e & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568b4e = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (Roster_o *)0x0) {
    Roster__JACAHGECAEK
              (__this_00,*(float *)&(__this->fields).super.field_0x54,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

