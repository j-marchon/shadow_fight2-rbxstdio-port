// TypeDefIndex 2472
// Namespace: 
// public class JFMLOEMEKLI
// Fields:
//   public string KGLJICLJHEL; // 0x10
//   public string PKJEMIDJPAG; // 0x18
//   public string DGGHNFBCNGI; // 0x20

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3371B58]
// JFMLOEMEKLI$$.ctor @ RVA 0x3371B58

void JFMLOEMEKLI___ctor(JFMLOEMEKLI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
                    /* catch() { ... } // from try @ 03471b3c with catch @ 03471b68 */
  if ((DAT_04567b27 & 1) == 0) {
                    /* try { // try from 03471b78 to 03571b7f has its CatchHandler @ 03471b94 */
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 03471b80 to 03571b8b has its CatchHandler @ 034714a4 */
    FUN_01bab630(&StringLiteral_10450/*"PreviewImage"*/);
                    /* try { // try from 03471b8c to 03571b93 has its CatchHandler @ 03471b94 */
                    /* catch() { ... } // from try @ 03471af0 with catch @ 03471b94
                       catch() { ... } // from try @ 03471b78 with catch @ 03471b94
                       catch() { ... } // from try @ 03471b8c with catch @ 03471b94 */
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567b27 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).KGLJICLJHEL = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).PKJEMIDJPAG = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_10450/*"PreviewImage"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          ppSVar4 = &(__this->fields).DGGHNFBCNGI;
          *ppSVar4 = pSVar3;
          thunk_FUN_01c20e04(ppSVar4,pSVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

