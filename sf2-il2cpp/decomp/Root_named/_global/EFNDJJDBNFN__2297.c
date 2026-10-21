// TypeDefIndex 2297
// Namespace: 
// public class EFNDJJDBNFN : Rule
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x58

// ===== protected void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x330C67C]
// EFNDJJDBNFN$$HCOCAAIGNNL @ RVA 0x330C67C

void EFNDJJDBNFN__HCOCAAIGNNL(EFNDJJDBNFN_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x330C684]
// EFNDJJDBNFN$$KCHJCGEMCGE @ RVA 0x330C684

System_String_o * EFNDJJDBNFN__KCHJCGEMCGE(EFNDJJDBNFN_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x330C68C]
// EFNDJJDBNFN$$.ctor @ RVA 0x330C68C

void EFNDJJDBNFN___ctor(EFNDJJDBNFN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456778b & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456778b = 1;
  }
  Rule___ctor((Rule_o *)__this,0x26,AHDGNOJPPIB,(MethodInfo *)0x0);
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

