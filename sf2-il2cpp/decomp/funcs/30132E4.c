// AJOGJBFNELI$$PKAPCJACGOA @ RVA 0x30132E4

System_String_o * AJOGJBFNELI__PKAPCJACGOA(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 031132fc to 032132ff has its CatchHandler @ 03113324 */
  if ((DAT_04565bb3 & 1) == 0) {
                    /* try { // try from 03113300 to 0321330b has its CatchHandler @ 03113328 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2927);
                    /* try { // try from 0311330c to 0321330f has its CatchHandler @ 03113314 */
                    /* try { // try from 03113310 to 03213343 has its CatchHandler @ 031130a0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0311330c with catch @ 03113314
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2928);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113214 with catch @ 03113318
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031132a0 with catch @ 0311331c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113290 with catch @ 03113320
                        */
    FUN_01bab630(&byte___TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031132fc with catch @ 03113324
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113300 with catch @ 03113328
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113258 with catch @ 0311332c
                        */
    FUN_01bab630(&StringLiteral_1);
    DAT_04565bb3 = 1;
    method = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
  pSVar1 = (__this->fields).LDGGIOJMLLD;
                    /* try { // try from 03113344 to 03213347 has its CatchHandler @ 03113374 */
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03113348 to 03213383 has its CatchHandler @ 031130a0 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03113344 with catch @ 03113374 */
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03113384 to 0321338f has its CatchHandler @ 031133a4 */
                    /* try { // try from 03113390 to 0321339b has its CatchHandler @ 031130a0 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2927,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0311339c to 032133a3 has its CatchHandler @ 031133a4 */
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03113384 with catch @ 031133a4
                       catch(type#2 @ 00000000) { ... } // from try @ 0311339c with catch @ 031133a4
                        */
                    /* try { // try from 031133a8 to 032134eb has its CatchHandler @ 031133a8
                       catch() { ... } // from try @ 031133a8 with catch @ 031133a8
                       catch() { ... } // from try @ 0311357c with catch @ 031133a8
                       catch() { ... } // from try @ 031135e0 with catch @ 031133a8
                       catch() { ... } // from try @ 0311361c with catch @ 031133a8
                       catch() { ... } // from try @ 03113664 with catch @ 031133a8 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2928,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,pSVar2,(MethodInfo *)0x0);
      pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

