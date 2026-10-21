// TypeDefIndex 2317
// Namespace: 
// public class ONMBPNGKBBO : Rule
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x58

// ===== public string KCHJCGEMCGE()  [RVA 0x331C4DC]
// ONMBPNGKBBO$$KCHJCGEMCGE @ RVA 0x331C4DC

System_String_o * ONMBPNGKBBO__KCHJCGEMCGE(ONMBPNGKBBO_o *__this,MethodInfo *method)

{
                    /* try { // try from 0341c4dc to 0351c67b has its CatchHandler @ 0341c4dc
                       catch() { ... } // from try @ 0341c4dc with catch @ 0341c4dc
                       catch() { ... } // from try @ 0341c778 with catch @ 0341c4dc
                       catch() { ... } // from try @ 0341c8b0 with catch @ 0341c4dc
                       catch() { ... } // from try @ 0341c8b8 with catch @ 0341c4dc
                       catch() { ... } // from try @ 0341c98c with catch @ 0341c4dc */
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x331C4E4]
// ONMBPNGKBBO$$.ctor @ RVA 0x331C4E4

void ONMBPNGKBBO___ctor(ONMBPNGKBBO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456781f & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456781f = 1;
  }
  Rule___ctor((Rule_o *)__this,0x27,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x331C594]
// ONMBPNGKBBO$$HCOCAAIGNNL @ RVA 0x331C594

void ONMBPNGKBBO__HCOCAAIGNNL(ONMBPNGKBBO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

