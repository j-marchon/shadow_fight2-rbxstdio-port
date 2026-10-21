// TypeDefIndex 2017
// Namespace: 
// public class PPABOCBJHCB : IENLNOEDCFF
// Fields:
//   private string NPFMOEOIEKM; // 0x28

// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x329B9F4]
// PPABOCBJHCB$$EPBENPDCBFE @ RVA 0x329B9F4

bool PPABOCBJHCB__EPBENPDCBFE(PPABOCBJHCB_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  
  if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((AHEFOIOKDOK->fields).GHNIAGEHGEP,(__this->fields).NPFMOEOIEKM,
                       (MethodInfo *)0x0);
    return bVar1 != ((__this->fields).super.GBBHFPBFOPI != false);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x329BA30]
// PPABOCBJHCB$$.ctor @ RVA 0x329BA30

void PPABOCBJHCB___ctor(PPABOCBJHCB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567394 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567394 = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,0x11,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
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

