// HOOAAGABMBL$$EFPEJLHDNHB @ RVA 0x30E7A6C

System_String_o * HOOAAGABMBL__EFPEJLHDNHB(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  Il2CppObject *unmatchedValue;
  MethodInfo *extraout_x1;
  undefined8 *puVar2;
  int32_t local_24;
  
  if ((DAT_045663fd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_RuntimePlatform_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_2957);
    FUN_01bab630(&StringLiteral_7908);
    DAT_045663fd = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  local_24 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (1 < local_24 - 7U) {
    if (local_24 == 0xb) {
      if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) goto LAB_031e7bbc;
      __this = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031e7bbc;
      puVar2 = &StringLiteral_2957;
      goto LAB_031e7b58;
    }
    if (local_24 != 0) {
      unmatchedValue =
           (Il2CppObject *)thunk_FUN_01bda448(UnityEngine_RuntimePlatform_TypeInfo,&local_24);
      <PrivateImplementationDetails>__ThrowSwitchExpressionException
                (unmatchedValue,(MethodInfo *)0x0);
      return (System_String_o *)0x0;
    }
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
      puVar2 = &StringLiteral_7908;
LAB_031e7b58:
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,(System_String_o *)*puVar2,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM
                         (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
LAB_031e7bbc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

