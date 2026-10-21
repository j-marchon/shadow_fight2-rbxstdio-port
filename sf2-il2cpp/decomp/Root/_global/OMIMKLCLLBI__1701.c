// TypeDefIndex 1701
// Namespace: 
// public class OMIMKLCLLBI : BOFEMGGNODC
// Fields:
//   private string LOEKILNCFAJ; // 0x68
//   private string DEKCPPOJFEH; // 0x70

// ===== public void .ctor()  [RVA 0x31D3840]
// OMIMKLCLLBI$$.ctor @ RVA 0x31D3840

void OMIMKLCLLBI___ctor(OMIMKLCLLBI_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x31D3848]
// OMIMKLCLLBI$$HNIHOIAMDPC @ RVA 0x31D3848

void OMIMKLCLLBI__HNIHOIAMDPC
               (OMIMKLCLLBI_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
                    /* try { // try from 032d384c to 033d3867 has its CatchHandler @ 032d40e0 */
  if ((DAT_04566cc5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_19993/*"on"*/);
                    /* try { // try from 032d3880 to 033d3883 has its CatchHandler @ 032d4164 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 032d3890 to 033d38b3 has its CatchHandler @ 032d3ff0 */
    FUN_01bab630(&StringLiteral_13847/*"Toggle"*/);
    DAT_04566cc5 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 032d38d4 to 033d38d7 has its CatchHandler @ 032d3fec */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_13847/*"Toggle"*/,(MethodInfo *)0x0);
                    /* try { // try from 032d38e4 to 033d38e7 has its CatchHandler @ 032d4164 */
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_19993/*"on"*/,(MethodInfo *)0x0);
                    /* try { // try from 032d38f4 to 033d3917 has its CatchHandler @ 032d4018 */
      (__this->fields).LOEKILNCFAJ = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).DEKCPPOJFEH;
                    /* try { // try from 032d3940 to 033d394b has its CatchHandler @ 032d4058 */
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31D395C]
// OMIMKLCLLBI$$MAHFCKJGBPP @ RVA 0x31D395C

void OMIMKLCLLBI__MAHFCKJGBPP(OMIMKLCLLBI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool EAPGKJCLEAN;
  System_String_o *__this_00;
  System_String_o *KGLJICLJHEL;
  ACHLOMELAJE_o *pAVar1;
  
                    /* try { // try from 032d395c to 033d3977 has its CatchHandler @ 032d40dc */
                    /* try { // try from 032d397c to 033d398b has its CatchHandler @ 032d4048 */
  if ((DAT_04566cc6 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_19993/*"on"*/);
                    /* try { // try from 032d399c to 033d39a3 has its CatchHandler @ 032d4020 */
    DAT_04566cc6 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 032d39d4 to 033d39df has its CatchHandler @ 032d4028 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
                    /* try { // try from 032d39e8 to 033d39ef has its CatchHandler @ 032d4020 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = (__this->fields).LOEKILNCFAJ;
  if (__this_00 != (System_String_o *)0x0) {
    KGLJICLJHEL = (__this->fields).DEKCPPOJFEH;
                    /* try { // try from 032d3a14 to 033d3a2b has its CatchHandler @ 032d4164 */
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    EAPGKJCLEAN = System_String__Equals(__this_00,StringLiteral_19993/*"on"*/,(MethodInfo *)0x0);
    if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 032d3a2c to 033d3a33 has its CatchHandler @ 032d4040 */
      ACHLOMELAJE__JLAKNEFJJJE(pAVar1,KGLJICLJHEL,EAPGKJCLEAN,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
                    /* try { // try from 032d3a58 to 033d3a9f has its CatchHandler @ 032d4074 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,true,(MethodInfo *)0x0);
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

