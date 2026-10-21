// TypeDefIndex 520
// Namespace: 
// public class FAFFHLJEDAN : IENLNOEDCFF
// Fields:
//   private string NPFMOEOIEKM; // 0x28

// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3594124]
// FAFFHLJEDAN$$EPBENPDCBFE @ RVA 0x3594124

bool FAFFHLJEDAN__EPBENPDCBFE(FAFFHLJEDAN_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      ((__this->fields).NPFMOEOIEKM,(AHEFOIOKDOK->fields).GHNIAGEHGEP,
                       (MethodInfo *)0x0);
  }
  return (bool)(bVar1 ^ (__this->fields).super.GBBHFPBFOPI != false);
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3594184]
// FAFFHLJEDAN$$.ctor @ RVA 0x3594184

void FAFFHLJEDAN___ctor(FAFFHLJEDAN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04568d90 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d90 = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,0x10,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).NPFMOEOIEKM;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

