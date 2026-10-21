// MPADAHNNFJH$$HNIHOIAMDPC @ RVA 0x33A4E70

void MPADAHNNFJH__HNIHOIAMDPC
               (MPADAHNNFJH_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **ppCVar2;
  
                    /* catch() { ... } // from try @ 034a4e4c with catch @ 034a4e74 */
  if ((DAT_04567ce5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10204);
    DAT_04567ce5 = 1;
  }
  EAAHMDAMHNI__HNIHOIAMDPC((EAAHMDAMHNI_o *)__this,IIBFFEPEHPF,(MethodInfo *)0x0);
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                          (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034a4ed4 to 035a4edf has its CatchHandler @ 034a4a54 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_10204,(MethodInfo *)0x0);
                    /* try { // try from 034a4ee0 to 035a4ee7 has its CatchHandler @ 034a4ee8 */
                    /* catch() { ... } // from try @ 034a4d54 with catch @ 034a4ee8
                       catch() { ... } // from try @ 034a4e0c with catch @ 034a4ee8
                       catch() { ... } // from try @ 034a4e5c with catch @ 034a4ee8
                       catch() { ... } // from try @ 034a4ee0 with catch @ 034a4ee8 */
      CJNHFNHJHPE = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      pCVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                         (CJNHFNHJHPE,(MethodInfo *)0x0);
      ppCVar2 = &(__this->fields).JILFPJEKMDL;
      *ppCVar2 = pCVar1;
      thunk_FUN_01c20e04(ppCVar2,pCVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

