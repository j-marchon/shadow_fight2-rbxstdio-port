// KCFIOKDFHIB$$DLGLNFNKONH @ RVA 0x30948A0

void KCFIOKDFHIB__DLGLNFNKONH(KCFIOKDFHIB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_045660c3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11735);
    DAT_045660c3 = 1;
  }
  piVar4 = &(__this->fields).JKMLPKKLIDP;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).JHFENACKNPG;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031948e4 to 032948fb has its CatchHandler @ 03194e58 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_11735,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03194930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

