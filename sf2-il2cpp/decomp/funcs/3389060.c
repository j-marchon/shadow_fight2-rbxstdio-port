// IDDIABHBDEE.<>c$$JBECKNJGKBB @ RVA 0x3389060

bool IDDIABHBDEE_<>c__JBECKNJGKBB
               (IDDIABHBDEE___c_o *__this,System_Xml_XmlNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04567bcf & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_565);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_566);
    __this = (IDDIABHBDEE___c_o *)FUN_01bab630(&byte___TypeInfo);
    DAT_04567bcf = 1;
  }
  if (node != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(node->klass->vtable)._16_get_Attributes.methodPtr)
                          (node,(node->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_565,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_566,(MethodInfo *)0x0);
    __this = (IDDIABHBDEE___c_o *)
             OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,(System_String_o *)__this,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__OBECCOPBADO(LBJNDMNEJJB,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

