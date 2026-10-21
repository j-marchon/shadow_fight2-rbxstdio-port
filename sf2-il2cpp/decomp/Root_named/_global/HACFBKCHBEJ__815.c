// TypeDefIndex 815
// Namespace: 
// public class HACFBKCHBEJ : OANBNKOOJFH
// Fields:
//   private string JDNKKGPNHPB; // 0x18
//   private COALAGILPBO LKHEEKKLPCB; // 0x20

// ===== public override bool EPBENPDCBFE(IFBJEEAJGEO AHEFOIOKDOK)  [RVA 0x3077C5C]
// HACFBKCHBEJ$$EPBENPDCBFE @ RVA 0x3077C5C

bool HACFBKCHBEJ__EPBENPDCBFE(HACFBKCHBEJ_o *__this,IFBJEEAJGEO_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  
  if (AHEFOIOKDOK != (IFBJEEAJGEO_o *)0x0) {
    bVar1 = OANBNKOOJFH__PNMBBPHANIK
                      ((OANBNKOOJFH_o *)__this,
                       (AHEFOIOKDOK->fields).COALAGILPBO == (__this->fields).LKHEEKKLPCB,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void ENMHDGDKLJD()  [RVA 0x3077C84]
// HACFBKCHBEJ$$ENMHDGDKLJD @ RVA 0x3077C84

void HACFBKCHBEJ__ENMHDGDKLJD(HACFBKCHBEJ_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  NLPJLHOEAOE_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565fb9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565fb9 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
    iVar1 = NLPJLHOEAOE__JCFMJBBOPMH(__this_00,(__this->fields).JDNKKGPNHPB,(MethodInfo *)0x0);
    (__this->fields).LKHEEKKLPCB = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3077CF4]
// HACFBKCHBEJ$$.ctor @ RVA 0x3077CF4

void HACFBKCHBEJ___ctor(HACFBKCHBEJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  OANBNKOOJFH___ctor((OANBNKOOJFH_o *)__this,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03177d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._4_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._4_HNIHOIAMDPC.method);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3077D2C]
// HACFBKCHBEJ$$HNIHOIAMDPC @ RVA 0x3077D2C

void HACFBKCHBEJ__HNIHOIAMDPC
               (HACFBKCHBEJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
                    /* catch() { ... } // from try @ 031779d0 with catch @ 03177d38 */
                    /* catch() { ... } // from try @ 031776a0 with catch @ 03177d3c */
                    /* catch() { ... } // from try @ 0317796c with catch @ 03177d40 */
                    /* catch() { ... } // from try @ 03177638 with catch @ 03177d44 */
  if ((DAT_04565fba & 1) == 0) {
                    /* catch() { ... } // from try @ 03177900 with catch @ 03177d48 */
                    /* catch() { ... } // from try @ 031775d0 with catch @ 03177d4c */
                    /* catch() { ... } // from try @ 03177950 with catch @ 03177d50 */
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
                    /* catch() { ... } // from try @ 031779fc with catch @ 03177d54 */
                    /* catch() { ... } // from try @ 03177990 with catch @ 03177d58 */
                    /* catch() { ... } // from try @ 03177924 with catch @ 03177d5c */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch() { ... } // from try @ 031777bc with catch @ 03177d60 */
                    /* catch() { ... } // from try @ 03177568 with catch @ 03177d64 */
    DAT_04565fba = 1;
  }
                    /* catch() { ... } // from try @ 031779d4 with catch @ 03177d68 */
                    /* catch() { ... } // from try @ 031776a4 with catch @ 03177d6c */
                    /* catch() { ... } // from try @ 03177970 with catch @ 03177d70 */
                    /* catch() { ... } // from try @ 0317763c with catch @ 03177d74 */
  OANBNKOOJFH__HNIHOIAMDPC((OANBNKOOJFH_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03177904 with catch @ 03177d78 */
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 031775d4 with catch @ 03177d7c */
                    /* catch() { ... } // from try @ 03177730 with catch @ 03177d80 */
                    /* catch() { ... } // from try @ 03177500 with catch @ 03177d84 */
                    /* catch() { ... } // from try @ 031777e8 with catch @ 03177d88 */
                    /* catch() { ... } // from try @ 031779bc with catch @ 03177d8c */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03177954 with catch @ 03177d90 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 03177a00 with catch @ 03177d94 */
                    /* catch() { ... } // from try @ 03177928 with catch @ 03177d98 */
                    /* catch() { ... } // from try @ 031777c0 with catch @ 03177d9c */
                    /* catch() { ... } // from try @ 0317756c with catch @ 03177da0 */
                    /* catch() { ... } // from try @ 03177674 with catch @ 03177da4 */
                    /* catch() { ... } // from try @ 0317760c with catch @ 03177da8 */
                    /* catch() { ... } // from try @ 031775a4 with catch @ 03177dac */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03177c14 with catch @ 03177db0 */
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).JDNKKGPNHPB;
      *ppSVar2 = pSVar1;
                    /* try { // try from 03177dc8 to 03277ddf has its CatchHandler @ 03178070 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

