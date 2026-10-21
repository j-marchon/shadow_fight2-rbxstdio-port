// PDFMAHPKIEI$$CDMBIPHFADD @ RVA 0x319EB04

bool PDFMAHPKIEI__CDMBIPHFADD(PDFMAHPKIEI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b07 & 1) == 0) {
                    /* try { // try from 0329eb20 to 0339eb47 has its CatchHandler @ 0329f1d4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4079);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4080);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566b07 = 1;
    method = extraout_x1;
  }
  PDFMAHPKIEI__GIENGNEGHPJ(__this,method);
  pSVar2 = (__this->fields).LDGGIOJMLLD;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 0329eb7c to 0339eba7 has its CatchHandler @ 0329f1d0 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4079,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4080,(MethodInfo *)0x0)
    ;
    name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf(__this_00,name,(MethodInfo *)0x0);
                    /* try { // try from 0329ebe8 to 0339ebef has its CatchHandler @ 0329f1b8 */
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0329ec00 to 0339ec07 has its CatchHandler @ 0329f1bc */
  FUN_01bab8c8();
}

