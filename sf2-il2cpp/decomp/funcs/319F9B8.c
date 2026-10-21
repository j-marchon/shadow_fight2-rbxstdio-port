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
    FUN_01bab630(&StringLiteral_8868);
                    /* try { // try from 0329f9e4 to 0339f9e7 has its CatchHandler @ 0329fa18 */
                    /* try { // try from 0329f9e8 to 0339f9eb has its CatchHandler @ 0329fa14 */
    FUN_01bab630(&StringLiteral_9058);
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
                         (pSVar2,StringLiteral_9058,(MethodInfo *)0x0);
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
                           (pSVar2,StringLiteral_8868,(MethodInfo *)0x0);
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

