// HNFFPPPDKDK$$DJJHOOKLHHL @ RVA 0x3297FA4

void HNFFPPPDKDK__DJJHOOKLHHL(HNFFPPPDKDK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t __this_00;
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04567379 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14589);
    DAT_04567379 = 1;
  }
  piVar4 = &(__this->fields).IPFKFHHBDDI;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_01,StringLiteral_14589,(MethodInfo *)0x0);
      __this_00 = (int32_t)piVar4;
      if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) {
        pSVar2 = EIABCPKDEBD__HBGAGFJBGKD
                           ((__this->fields).HJKLIDCAEOE,StringLiteral_14589,(MethodInfo *)0x0);
        pSVar3 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
        if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_0339806c;
      }
      else {
        pSVar3 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
      }
                    /* WARNING: Could not recover jumptable at 0x03398068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
      return;
    }
  }
LAB_0339806c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

