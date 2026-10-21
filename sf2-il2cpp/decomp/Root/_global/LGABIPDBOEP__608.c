// TypeDefIndex 608
// Namespace: 
// public class LGABIPDBOEP
// Fields:
//   public string JIJLBFGKNJK; // 0x10
//   public float OLDKPBCPOLP; // 0x18
//   public float MHENCNPBING; // 0x1C
//   public float INIFNCOHJBN; // 0x20
//   public float IACLMNCJFAO; // 0x24
//   public float NHNHGKPONPP; // 0x28
//   public HOOAAGABMBL FHCMNOHPBFG; // 0x30

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x35BFBEC]
// LGABIPDBOEP$$.ctor @ RVA 0x35BFBEC

void LGABIPDBOEP___ctor(LGABIPDBOEP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  DOPEEDABNEK_o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  HOOAAGABMBL_o **ppHVar5;
  float fVar6;
  
                    /* catch() { ... } // from try @ 036bfbc8 with catch @ 036bfbf4 */
                    /* try { // try from 036bfc04 to 037bfc17 has its CatchHandler @ 036bfd84 */
  if ((DAT_04568f12 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 036bfa40 with catch @ 036bfc18
                       try { // try from 036bfc18 to 037bfc27 has its CatchHandler @ 036bf6d4 */
    FUN_01bab630(&StringLiteral_11713/*"Scale"*/);
                    /* try { // try from 036bfc28 to 037bfc2b has its CatchHandler @ 036bfc54 */
    FUN_01bab630(&StringLiteral_11427/*"Rotate"*/);
                    /* try { // try from 036bfc2c to 037bfc63 has its CatchHandler @ 036bf6d4 */
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_7292/*"IconsY"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
                    /* catch() { ... } // from try @ 036bfc28 with catch @ 036bfc54 */
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
                    /* try { // try from 036bfc64 to 037bfc77 has its CatchHandler @ 036bfd84 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568f12 = 1;
  }
                    /* catch() { ... } // from try @ 036bf9a8 with catch @ 036bfc78
                       try { // try from 036bfc78 to 037bfc87 has its CatchHandler @ 036bf6d4 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 036bfc88 to 037bfc8b has its CatchHandler @ 036bfcb4 */
                    /* try { // try from 036bfc8c to 037bfcc3 has its CatchHandler @ 036bf6d4 */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036bfc88 with catch @ 036bfcb4 */
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 036bfcc4 to 037bfcd7 has its CatchHandler @ 036bfd84 */
      (__this->fields).JIJLBFGKNJK = pSVar3;
      thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 036bf920 with catch @ 036bfcd8
                       try { // try from 036bfcd8 to 037bfce7 has its CatchHandler @ 036bf6d4 */
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 036bfce8 to 037bfceb has its CatchHandler @ 036bfd0c */
                    /* try { // try from 036bfcec to 037bfd13 has its CatchHandler @ 036bf6d4 */
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_11713/*"Scale"*/,(MethodInfo *)0x0);
        fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).OLDKPBCPOLP = fVar6;
                    /* catch() { ... } // from try @ 036bfce8 with catch @ 036bfd0c */
                    /* try { // try from 036bfd14 to 037bfd27 has its CatchHandler @ 036bfd84 */
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 036bf898 with catch @ 036bfd28
                       try { // try from 036bfd28 to 037bfd37 has its CatchHandler @ 036bf6d4 */
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_11427/*"Rotate"*/,(MethodInfo *)0x0);
                    /* try { // try from 036bfd38 to 037bfd3b has its CatchHandler @ 036bfd60 */
                    /* try { // try from 036bfd3c to 037bfd67 has its CatchHandler @ 036bf6d4 */
          fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          (__this->fields).MHENCNPBING = fVar6;
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 036bfd38 with catch @ 036bfd60 */
                    /* try { // try from 036bfd68 to 037bfd6f has its CatchHandler @ 036bfd84 */
                    /* try { // try from 036bfd70 to 037bfd7b has its CatchHandler @ 036bf6d4 */
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
                    /* try { // try from 036bfd7c to 037bfd83 has its CatchHandler @ 036bfd84 */
            fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
            (__this->fields).INIFNCOHJBN = fVar6;
                    /* catch() { ... } // from try @ 036bfc04 with catch @ 036bfd84
                       catch() { ... } // from try @ 036bfc64 with catch @ 036bfd84
                       catch() { ... } // from try @ 036bfcc4 with catch @ 036bfd84
                       catch() { ... } // from try @ 036bfd14 with catch @ 036bfd84
                       catch() { ... } // from try @ 036bfd68 with catch @ 036bfd84
                       catch() { ... } // from try @ 036bfd7c with catch @ 036bfd84 */
                    /* try { // try from 036bfd88 to 037bfeb7 has its CatchHandler @ 036bfd88
                       catch() { ... } // from try @ 036bfd88 with catch @ 036bfd88
                       catch() { ... } // from try @ 036bff70 with catch @ 036bfd88
                       catch() { ... } // from try @ 036bffac with catch @ 036bfd88
                       catch() { ... } // from try @ 036bffe8 with catch @ 036bfd88
                       catch() { ... } // from try @ 036c0018 with catch @ 036bfd88 */
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
              fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
              (__this->fields).IACLMNCJFAO = fVar6;
              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar1,StringLiteral_7292/*"IconsY"*/,(MethodInfo *)0x0);
                fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                (__this->fields).NHNHGKPONPP = fVar6;
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (DAT_04563eaa == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_04563eaa = '\x01';
                }
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                if (__this_00 != (DOPEEDABNEK_o *)0x0) {
                  pHVar4 = DOPEEDABNEK__CKKIPBAIEMN
                                     (__this_00,(__this->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
                  ppHVar5 = &(__this->fields).FHCMNOHPBFG;
                  *ppHVar5 = pHVar4;
                  thunk_FUN_01c20e04(ppHVar5,pHVar4);
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

