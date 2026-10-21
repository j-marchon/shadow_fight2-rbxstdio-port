// NLPJLHOEAOE$$OIHMMDEELDP @ RVA 0x31F78F0

void NLPJLHOEAOE__OIHMMDEELDP(NLPJLHOEAOE_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlDocument_o *pSVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar3;
  ACHLOMELAJE_o *__this_01;
  
  if ((DAT_04566df6 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_5196);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_14775);
    DAT_04566df6 = 1;
  }
  pSVar1 = (__this->fields).OFIPPHJGMNK;
  if (pSVar1 != (System_Xml_XmlDocument_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_11416,
                                (pSVar1->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x468))
                                 (plVar2,StringLiteral_14775,*(undefined8 *)(*plVar2 + 0x470));
      if (plVar2 != (long *)0x0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x468))
                                   (plVar2,StringLiteral_5196,*(undefined8 *)(*plVar2 + 0x470));
        if (plVar2 == (long *)0x0) goto LAB_032f7a60;
        __this_00 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
        if ((__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) ||
           (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (__this_00,StringLiteral_14694,(MethodInfo *)0x0),
           pSVar3 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_032f7a60;
        (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar3,CJNHFNHJHPE,(pSVar3->klass->vtable)._10_set_Value.method);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_01 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_032f7a60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

