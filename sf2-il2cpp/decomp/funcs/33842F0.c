// IDDIABHBDEE$$KDJIFLGLKCJ @ RVA 0x33842F0

void IDDIABHBDEE__KDJIFLGLKCJ
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)GGDPPDFOEOH;
  if ((DAT_04567bb4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_497);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_498);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_499);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_500);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    DAT_04567bb4 = 1;
    method_00 = extraout_x1;
  }
  if (GGDPPDFOEOH != (System_Xml_XmlNode_o *)0x0) {
    if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    pSVar2 = IDDIABHBDEE__JOHPEAKPFMA(GGDPPDFOEOH,method_00);
    pSVar5 = (System_String_o *)0x0;
    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                            (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
      pSVar5 = (System_String_o *)0x0;
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_497,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_498,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,pSVar5,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      }
    }
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar5,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_499,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_500,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar5,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

