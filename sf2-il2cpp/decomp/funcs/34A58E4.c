// KFOPKHPGAAK$$HNIHOIAMDPC @ RVA 0x34A58E4

void KFOPKHPGAAK__HNIHOIAMDPC
               (KFOPKHPGAAK_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  KFOPKHPGAAK_o *__this_01;
  System_Xml_XmlNode_o *NPLGCIFGFOK_00;
  System_Xml_XmlNode_o *NPLGCIFGFOK_01;
  System_Action_o *pSVar2;
  MethodInfo *method_00;
  LCKCDEKNLOA_o *pLVar3;
  
  if ((DAT_045684e9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KFOPKHPGAAK_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_12524);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_5840);
    DAT_045684e9 = 1;
  }
                    /* try { // try from 035a5958 to 036a595f has its CatchHandler @ 035a5aa4 */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 035a5974 to 036a5977 has its CatchHandler @ 035a5a8c */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 035a5990 to 036a5997 has its CatchHandler @ 035a5a98 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991,(MethodInfo *)0x0);
                    /* try { // try from 035a59b0 to 036a59bf has its CatchHandler @ 035a5a94 */
      method_00 = (MethodInfo *)0x0;
      __this_01 = (KFOPKHPGAAK_o *)
                  EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      iVar1 = KFOPKHPGAAK__CNOMHMIIEAB(__this_01,(System_String_o *)__this_01,method_00);
      *(int32_t *)&(__this->fields).super.field_0x54 = iVar1;
                    /* try { // try from 035a59d0 to 036a59d3 has its CatchHandler @ 035a5a78 */
      NPLGCIFGFOK_00 =
           (System_Xml_XmlNode_o *)
           (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                     (NPLGCIFGFOK,StringLiteral_12524,
                      (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
                    /* try { // try from 035a59dc to 036a59f7 has its CatchHandler @ 035a5a7c */
      NPLGCIFGFOK_01 =
           (System_Xml_XmlNode_o *)
           (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                     (NPLGCIFGFOK,StringLiteral_5840,
                      (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
      pLVar3 = *(LCKCDEKNLOA_o **)&(__this->fields).ACCIHBHMFPN;
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 035a5a10 to 036a5a1b has its CatchHandler @ 035a5a88 */
                    /* try { // try from 035a5a1c to 036a5a5f has its CatchHandler @ 035a585c */
      System_Action___ctor();
      BOFEMGGNODC__KIBBEDPGMBB
                ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_00,pLVar3,pSVar2,(MethodInfo *)0x0);
      pLVar3 = (__this->fields).FNOJIPMNDPJ;
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
                    /* try { // try from 035a5a60 to 036a5a63 has its CatchHandler @ 035a5aa0 */
                    /* try { // try from 035a5a64 to 036a5a67 has its CatchHandler @ 035a5a9c */
                    /* try { // try from 035a5a68 to 036a5a6b has its CatchHandler @ 035a5a90 */
                    /* try { // try from 035a5a6c to 036a5a6f has its CatchHandler @ 035a5a84 */
                    /* try { // try from 035a5a70 to 036a5a73 has its CatchHandler @ 035a5a80 */
                    /* try { // try from 035a5a74 to 036a5abb has its CatchHandler @ 035a585c */
                    /* catch() { ... } // from try @ 035a59d0 with catch @ 035a5a78 */
                    /* catch() { ... } // from try @ 035a59dc with catch @ 035a5a7c */
      BOFEMGGNODC__KIBBEDPGMBB
                ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_01,pLVar3,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035a5a70 with catch @ 035a5a80 */
  FUN_01bab8c8();
}

