// IDDIABHBDEE.<>c$$NLBHOPDMMGI @ RVA 0x3388DBC

bool IDDIABHBDEE_<>c__NLBHOPDMMGI
               (IDDIABHBDEE___c_o *__this,System_Xml_XmlNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *ICJLOJKGDOM;
  
                    /* try { // try from 03488dc0 to 03588dcb has its CatchHandler @ 034888a4 */
                    /* try { // try from 03488dcc to 03588dd3 has its CatchHandler @ 03488dd4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03488db8 with catch @ 03488dd4
                       catch(type#2 @ 00000000) { ... } // from try @ 03488dcc with catch @ 03488dd4
                        */
  if ((DAT_04567bcc & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_561);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_562);
    __this = (IDDIABHBDEE___c_o *)FUN_01bab630(&byte___TypeInfo);
    DAT_04567bcc = 1;
  }
  if (node != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(node->klass->vtable)._16_get_Attributes.methodPtr)
                          (node,(node->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_561,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_562,(MethodInfo *)0x0);
    __this = (IDDIABHBDEE___c_o *)
             OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,(System_String_o *)__this,(MethodInfo *)0x0);
      ICJLOJKGDOM = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      bVar1 = EEPIOPGPFLN__NHOOJOIEMIM(ICJLOJKGDOM,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

