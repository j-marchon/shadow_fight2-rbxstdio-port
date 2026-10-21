// TypeDefIndex 88
// Namespace: 
// public class JFAGMCHGOEH : AJNNHGGLGIF
// Fields:
//   private string JCOIMPAOPAO; // 0x58

// ===== public string KOJOCHFNMLM()  [RVA 0x3000620]
// JFAGMCHGOEH$$KOJOCHFNMLM @ RVA 0x3000620

System_String_o * JFAGMCHGOEH__KOJOCHFNMLM(JFAGMCHGOEH_o *__this,MethodInfo *method)

{
  return (__this->fields).JCOIMPAOPAO;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3000628]
// JFAGMCHGOEH$$.ctor @ RVA 0x3000628

void JFAGMCHGOEH___ctor(JFAGMCHGOEH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565b20 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565b20 = 1;
  }
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,4,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).JCOIMPAOPAO;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

