// IDDIABHBDEE.<>c$$FOHPLCKIPOO @ RVA 0x3388F44

bool IDDIABHBDEE_<>c__FOHPLCKIPOO
               (IDDIABHBDEE___c_o *__this,System_Xml_XmlNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04567bce & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_563);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_564);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567bce = 1;
  }
  bVar1 = EIABCPKDEBD__LGKNNMNPKGD(node,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if (node != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(node->klass->vtable)._16_get_Attributes.methodPtr)
                          (node,(node->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_563,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_564,(MethodInfo *)0x0);
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,pSVar2,(MethodInfo *)0x0);
      pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      bVar1 = EEPIOPGPFLN__NHOOJOIEMIM(pSVar2,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

