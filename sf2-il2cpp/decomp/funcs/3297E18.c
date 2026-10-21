// HNFFPPPDKDK$$HCOCAAIGNNL @ RVA 0x3297E18

void HNFFPPPDKDK__HCOCAAIGNNL(HNFFPPPDKDK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o **ppSVar3;
  
  if ((DAT_04567377 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    DAT_04567377 = 1;
  }
  ppSVar3 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar3 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar3,CJNHFNHJHPE);
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
      if ((pSVar2 != (System_Xml_XmlAttribute_o *)0x0) ||
         (pSVar2 = EIABCPKDEBD__HBGAGFJBGKD
                             ((__this->fields).HJKLIDCAEOE,StringLiteral_9327,(MethodInfo *)0x0),
         pSVar2 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x03397eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,*ppSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

