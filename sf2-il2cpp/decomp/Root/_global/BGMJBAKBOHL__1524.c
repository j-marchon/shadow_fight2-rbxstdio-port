// TypeDefIndex 1524
// Namespace: 
// public class BGMJBAKBOHL : OMNMIEMIMKC
// Fields:
//   private ObscuredInt DDGIAHKNGEJ; // 0x14
//   private ObscuredInt KEJPPMKBOBN; // 0x24

// ===== internal void .ctor(XmlNode JHMENEKPIBO)  [RVA 0x319F9B8]
// BGMJBAKBOHL$$.ctor @ RVA 0x319F9B8

void BGMJBAKBOHL___ctor(BGMJBAKBOHL_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar4;
  
                    /* try { // try from 0329f9d0 to 0339f9d7 has its CatchHandler @ 0329fa44 */
  if ((DAT_04566ad6 & 1) == 0) {
                    /* try { // try from 0329f9d8 to 0339f9db has its CatchHandler @ 0329fa34 */
                    /* try { // try from 0329f9dc to 0339f9e3 has its CatchHandler @ 0329fa2c */
    FUN_01bab630(&StringLiteral_8868/*"Max"*/);
                    /* try { // try from 0329f9e4 to 0339f9e7 has its CatchHandler @ 0329fa18 */
                    /* try { // try from 0329f9e8 to 0339f9eb has its CatchHandler @ 0329fa14 */
    FUN_01bab630(&StringLiteral_9058/*"Min"*/);
                    /* try { // try from 0329f9ec to 0339f9ef has its CatchHandler @ 0329f4bc */
                    /* try { // try from 0329f9f0 to 0339f9f3 has its CatchHandler @ 0329fa08 */
    DAT_04566ad6 = 1;
  }
                    /* try { // try from 0329f9f4 to 0339fa5f has its CatchHandler @ 0329f4bc */
                    /* catch() { ... } // from try @ 0329f8f4 with catch @ 0329f9fc */
  OMNMIEMIMKC___ctor((OMNMIEMIMKC_o *)__this,2,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 0329f9f0 with catch @ 0329fa08 */
                    /* catch() { ... } // from try @ 0329f794 with catch @ 0329fa0c */
                    /* catch() { ... } // from try @ 0329f88c with catch @ 0329fa10 */
                    /* catch() { ... } // from try @ 0329f9e8 with catch @ 0329fa14 */
                    /* catch() { ... } // from try @ 0329f9e4 with catch @ 0329fa18 */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 0329f780 with catch @ 0329fa1c */
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 0329f7b8 with catch @ 0329fa20 */
                    /* catch() { ... } // from try @ 0329f768 with catch @ 0329fa24 */
                    /* catch() { ... } // from try @ 0329f7a0 with catch @ 0329fa28 */
                    /* catch() { ... } // from try @ 0329f9dc with catch @ 0329fa2c */
                    /* catch() { ... } // from try @ 0329f748 with catch @ 0329fa30 */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9058/*"Min"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0329f9d8 with catch @ 0329fa34 */
                    /* catch() { ... } // from try @ 0329f72c with catch @ 0329fa38 */
                    /* catch() { ... } // from try @ 0329f6b4 with catch @ 0329fa3c */
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0329f658 with catch @ 0329fa40 */
                    /* catch() { ... } // from try @ 0329f9d0 with catch @ 0329fa44 */
      CVar4 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
      (__this->fields).DDGIAHKNGEJ.fields = CVar4;
                    /* try { // try from 0329fa60 to 0339fa63 has its CatchHandler @ 0329fa74 */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 0329fa60 with catch @ 0329fa74 */
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_8868/*"Max"*/,(MethodInfo *)0x0);
                    /* try { // try from 0329fa84 to 0339faf3 has its CatchHandler @ 0329fb08 */
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0x7fffffff,(MethodInfo *)0x0);
        CVar4 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
        (__this->fields).KEJPPMKBOBN.fields = CVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool PPBANLLIGDK(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x319FAA8]
// BGMJBAKBOHL$$PPBANLLIGDK @ RVA 0x319FAA8

bool BGMJBAKBOHL__PPBANLLIGDK
               (BGMJBAKBOHL_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  ACHLOMELAJE_o *__this_00;
  IGFGDDANEPE_o *extraout_x1;
  IGFGDDANEPE_o *extraout_x1_00;
  IGFGDDANEPE_o *extraout_x1_01;
  
  if ((DAT_04566ad7 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo,NKCMBEFHFII,DPCEFBCDHPA);
    DAT_04566ad7 = 1;
    NKCMBEFHFII = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,NKCMBEFHFII);
    NKCMBEFHFII = extraout_x1_00;
  }
                    /* try { // try from 0329faf4 to 0339faff has its CatchHandler @ 0329f4bc */
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 0329fb00 to 0339fb07 has its CatchHandler @ 0329fb08 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 0329f9b0 with catch @ 0329fb08
                       catch() { ... } // from try @ 0329fa84 with catch @ 0329fb08
                       catch() { ... } // from try @ 0329fb00 with catch @ 0329fb08 */
    DAT_04565b7d = '\x01';
    NKCMBEFHFII = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,NKCMBEFHFII);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).DDGIAHKNGEJ.fields,(MethodInfo *)0x0);
    if (iVar2 < iVar3) {
      bVar1 = false;
    }
    else {
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KEJPPMKBOBN.fields,(MethodInfo *)0x0);
      bVar1 = iVar2 <= iVar3;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x319FB84]
// BGMJBAKBOHL$$RandomizeObscuredVars @ RVA 0x319FB84

void BGMJBAKBOHL__RandomizeObscuredVars(BGMJBAKBOHL_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  
  OMNMIEMIMKC__RandomizeObscuredVars((OMNMIEMIMKC_o *)__this,(MethodInfo *)0x0);
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).DDGIAHKNGEJ;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).KEJPPMKBOBN;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  return;
}

