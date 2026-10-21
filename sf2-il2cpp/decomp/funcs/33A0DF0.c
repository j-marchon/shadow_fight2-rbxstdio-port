// HDNBOMFNDFJ$$HNIHOIAMDPC @ RVA 0x33A0DF0

void HDNBOMFNDFJ__HNIHOIAMDPC
               (HDNBOMFNDFJ_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **ppCVar6;
  
                    /* try { // try from 034a0df8 to 035a0e03 has its CatchHandler @ 034a1114 */
                    /* try { // try from 034a0e08 to 035a0e0f has its CatchHandler @ 034a10d4 */
  if ((DAT_04567cb7 & 1) == 0) {
                    /* try { // try from 034a0e14 to 035a0e1f has its CatchHandler @ 034a111c */
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_14870);
                    /* try { // try from 034a0e24 to 035a0e2f has its CatchHandler @ 034a10f8 */
    FUN_01bab630(&StringLiteral_8907);
                    /* try { // try from 034a0e34 to 035a0e3f has its CatchHandler @ 034a1104 */
    FUN_01bab630(&StringLiteral_12187);
                    /* try { // try from 034a0e44 to 035a0e4b has its CatchHandler @ 034a10fc */
    FUN_01bab630(&StringLiteral_12509);
                    /* try { // try from 034a0e50 to 035a0e57 has its CatchHandler @ 034a10c4 */
    FUN_01bab630(&StringLiteral_8110);
    FUN_01bab630(&StringLiteral_10305);
    DAT_04567cb7 = 1;
  }
  EAAHMDAMHNI__HNIHOIAMDPC((EAAHMDAMHNI_o *)__this,IIBFFEPEHPF,(MethodInfo *)0x0);
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                       (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034a0e9c to 035a0eab has its CatchHandler @ 034a10b8 */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_10305,(MethodInfo *)0x0);
                    /* try { // try from 034a0eb0 to 035a0ebb has its CatchHandler @ 034a10c8 */
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_8907,(MethodInfo *)0x0);
      iVar1 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar4,(MethodInfo *)0x0);
      (__this->fields).EOPBEKGNABN = iVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                         (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_12187,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_14870,(MethodInfo *)0x0);
                    /* try { // try from 034a0f0c to 035a0f2f has its CatchHandler @ 034a1140 */
        pCVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                           (pSVar4,(MethodInfo *)0x0);
        (__this->fields).ABHLDGFCJJB = pCVar5;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                           (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_12509,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                             (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
          pCVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                             (pSVar4,(MethodInfo *)0x0);
          (__this->fields).HANDJABEIBK = pCVar5;
          thunk_FUN_01c20e04();
                    /* try { // try from 034a0f80 to 035a0f9b has its CatchHandler @ 034a1144 */
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                             (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_8110,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            pCVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                               (pSVar4,(MethodInfo *)0x0);
            ppCVar6 = &(__this->fields).MLPKGJACOFA;
            *ppCVar6 = pCVar5;
                    /* try { // try from 034a0fd8 to 035a0fdf has its CatchHandler @ 034a1154 */
            thunk_FUN_01c20e04(ppCVar6,pCVar5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

