// IDDIABHBDEE$$KBEIKOHDFCL @ RVA 0x3380604

void IDDIABHBDEE__KBEIKOHDFCL
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)AHDGNOJPPIB;
  if ((DAT_04567ba5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_395);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_396);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    DAT_04567ba5 = 1;
    method_00 = extraout_x1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    pSVar2 = IDDIABHBDEE__JOHPEAKPFMA(AHDGNOJPPIB,method_00);
    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                            (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_395,(MethodInfo *)0x0
                );
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_396,(MethodInfo *)0x0
                );
      name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf(__this_00,name,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      (__this->fields)._LFOKPMKIOKA_k__BackingField = bVar1;
    }
  }
  return;
}

