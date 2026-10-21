// IDDIABHBDEE$$ABGKMMFJEPE @ RVA 0x3388124

System_Xml_XmlNode_o *
IDDIABHBDEE__ABGKMMFJEPE(System_Xml_XmlNode_o *HPFNHDMAFAJ,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *OBDMHHJBLKL;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  
  if ((DAT_04567bb0 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Cast<XmlNode>__);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    DAT_04567bb0 = 1;
    method = extraout_x1;
  }
  if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  pSVar1 = IDDIABHBDEE__JOHPEAKPFMA(HPFNHDMAFAJ,method);
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    source = (System_Collections_IEnumerable_o *)
             (*(pSVar1->klass->vtable)._13_get_ChildNodes.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._13_get_ChildNodes.method);
    OBDMHHJBLKL = System_Linq_Enumerable__Cast<object>
                            (source,Method_System_Linq_Enumerable_Cast<XmlNode>__);
    method_00 = extraout_x1_01;
    if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IDDIABHBDEE_TypeInfo);
      method_00 = extraout_x1_02;
    }
    pSVar1 = IDDIABHBDEE__ABGKMMFJEPE
                       ((System_Collections_Generic_IEnumerable_XmlNode__o *)OBDMHHJBLKL,method_00);
    return pSVar1;
  }
  return (System_Xml_XmlNode_o *)0x0;
}

