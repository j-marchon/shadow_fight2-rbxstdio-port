// PDFMAHPKIEI$$KMGABJDPMBD @ RVA 0x31A58C0

System_String_o * PDFMAHPKIEI__KMGABJDPMBD(PDFMAHPKIEI_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 032a58d8 to 033a58db has its CatchHandler @ 032a5904 */
  if ((DAT_04566b08 & 1) == 0) {
                    /* try { // try from 032a58e0 to 033a58e3 has its CatchHandler @ 032a5900 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4081);
                    /* try { // try from 032a58e8 to 033a58f3 has its CatchHandler @ 032a58f8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4082);
                    /* try { // try from 032a58f4 to 033a5923 has its CatchHandler @ 032a4ea8 */
                    /* catch() { ... } // from try @ 032a5884 with catch @ 032a58f8
                       catch() { ... } // from try @ 032a58e8 with catch @ 032a58f8 */
                    /* catch() { ... } // from try @ 032a5830 with catch @ 032a58fc */
    FUN_01bab630(&byte___TypeInfo);
                    /* catch() { ... } // from try @ 032a58e0 with catch @ 032a5900 */
                    /* catch() { ... } // from try @ 032a58d8 with catch @ 032a5904 */
    DAT_04566b08 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 032a5810 with catch @ 032a5908 */
  PDFMAHPKIEI__GIENGNEGHPJ(__this,method);
  pSVar1 = (__this->fields).LDGGIOJMLLD;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 032a5924 to 033a5927 has its CatchHandler @ 032a5bc8 */
                    /* try { // try from 032a5928 to 033a5a5b has its CatchHandler @ 032a4ea8 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4081,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4082,(MethodInfo *)0x0)
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

