// PDFMAHPKIEI$$DEDGNGHOMBN @ RVA 0x319EEC8

bool PDFMAHPKIEI__DEDGNGHOMBN(PDFMAHPKIEI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0329eed4 to 0339ef43 has its CatchHandler @ 0329f180 */
  if ((DAT_04566b02 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4065);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4066);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566b02 = 1;
    method = extraout_x1;
  }
  PDFMAHPKIEI__GIENGNEGHPJ(__this,method);
  pSVar2 = (__this->fields).LDGGIOJMLLD;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 0329ef50 to 0339ef67 has its CatchHandler @ 0329f170 */
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4065,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0329ef6c to 0339ef73 has its CatchHandler @ 0329efb4 */
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0329ef78 to 0339ef7b has its CatchHandler @ 0329efa8 */
                    /* try { // try from 0329ef80 to 0339ef83 has its CatchHandler @ 0329efa4 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4066,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0329ef88 to 0339ef8b has its CatchHandler @ 0329ef90 */
                    /* try { // try from 0329ef8c to 0339efc7 has its CatchHandler @ 0329e9cc */
                    /* catch() { ... } // from try @ 0329ef88 with catch @ 0329ef90 */
                    /* catch() { ... } // from try @ 0329eea8 with catch @ 0329ef94 */
    name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0329ee98 with catch @ 0329ef98 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 0329ee7c with catch @ 0329ef9c */
                    /* catch() { ... } // from try @ 0329ee8c with catch @ 0329efa0 */
                    /* catch() { ... } // from try @ 0329ef80 with catch @ 0329efa4 */
                    /* catch() { ... } // from try @ 0329ef78 with catch @ 0329efa8 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf(__this_00,name,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0329ee14 with catch @ 0329efac */
                    /* catch() { ... } // from try @ 0329edb8 with catch @ 0329efb0 */
                    /* catch() { ... } // from try @ 0329ef6c with catch @ 0329efb4 */
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

