// AJOGJBFNELI$$NKGPBKKCLBH @ RVA 0x3012E98

System_String_o * AJOGJBFNELI__NKGPBKKCLBH(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03112ea4 to 03212eab has its CatchHandler @ 03112ee8 */
                    /* try { // try from 03112eac to 03212eb3 has its CatchHandler @ 03112dc4 */
  if ((DAT_04565bc2 & 1) == 0) {
                    /* try { // try from 03112eb4 to 03212eb7 has its CatchHandler @ 03112ee8 */
                    /* try { // try from 03112eb8 to 03212ecf has its CatchHandler @ 03112ed0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2972);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2973);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03112eb8 with catch @ 03112ed0
                       try { // try from 03112ed0 to 03212f03 has its CatchHandler @ 03112dc4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03112e58 with catch @ 03112ed4
                        */
    FUN_01bab630(&byte___TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03112e18 with catch @ 03112ed8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03112e10 with catch @ 03112edc
                        */
    DAT_04565bc2 = 1;
    method = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03112ea4 with catch @ 03112ee8
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03112eb4 with catch @ 03112ee8
                        */
  pSVar1 = (__this->fields).LDGGIOJMLLD;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03112f04 to 03212f07 has its CatchHandler @ 03112f28 */
                    /* try { // try from 03112f08 to 03212f2b has its CatchHandler @ 03112dc4 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03112f04 with catch @ 03112f28 */
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03112f2c to 03212f3b has its CatchHandler @ 03112f50 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2972,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03112f3c to 03212f47 has its CatchHandler @ 03112dc4 */
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03112f48 to 03212f4f has its CatchHandler @ 03112f50 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03112f2c with catch @ 03112f50
                       catch(type#2 @ 00000000) { ... } // from try @ 03112f48 with catch @ 03112f50
                        */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2973,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,pSVar2,(MethodInfo *)0x0);
      pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

