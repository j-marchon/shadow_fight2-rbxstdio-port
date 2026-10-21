// GDMHNGKMPDJ$$HNIHOIAMDPC @ RVA 0x35BFEB8

void GDMHNGKMPDJ__HNIHOIAMDPC
               (GDMHNGKMPDJ_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *ACCIHBHMFPN;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar4;
  
                    /* try { // try from 036bfeb8 to 037bfebf has its CatchHandler @ 036bffcc */
  if ((DAT_04568f13 & 1) == 0) {
                    /* try { // try from 036bfed4 to 037bfedf has its CatchHandler @ 036bffc4 */
    FUN_01bab630(&StringLiteral_6575);
    FUN_01bab630(&StringLiteral_8907);
    FUN_01bab630(&StringLiteral_10305);
    DAT_04568f13 = 1;
  }
  EAAHMDAMHNI__HNIHOIAMDPC((EAAHMDAMHNI_o *)__this,IIBFFEPEHPF,(MethodInfo *)0x0);
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 036bff14 to 037bff1f has its CatchHandler @ 036bffb4 */
                    /* try { // try from 036bff24 to 037bff2f has its CatchHandler @ 036bffbc */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                       (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_10305,(MethodInfo *)0x0);
      ACCIHBHMFPN = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_8907,(MethodInfo *)0x0);
      iVar1 = LCAJGLLBBEC__HGMMJIIEOLF(ACCIHBHMFPN,(MethodInfo *)0x0);
      (__this->fields).AOIGHJKIBAA = iVar1;
                    /* try { // try from 036bff64 to 037bff6f has its CatchHandler @ 036bffb0 */
                    /* try { // try from 036bff70 to 037bff97 has its CatchHandler @ 036bfd88 */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                         (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_6575,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
                    /* try { // try from 036bff98 to 037bff9b has its CatchHandler @ 036bffc8 */
                    /* try { // try from 036bff9c to 037bffa3 has its CatchHandler @ 036bffc0 */
        CVar4 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
        (__this->fields).EGBBJDLHOMJ.fields = CVar4;
                    /* try { // try from 036bffa4 to 037bffab has its CatchHandler @ 036bffb8 */
                    /* try { // try from 036bffac to 037bffe3 has its CatchHandler @ 036bfd88 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bff64 with catch @ 036bffb0
                        */
  FUN_01bab8c8();
}

