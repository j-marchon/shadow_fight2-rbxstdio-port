// PAMEPBLOLPB$$HOONFLPHAIL @ RVA 0x30206F4

void PAMEPBLOLPB__HOONFLPHAIL(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
                    /* try { // try from 031206f4 to 0322071b has its CatchHandler @ 03120b8c */
  if ((DAT_04565c42 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5620);
    DAT_04565c42 = 1;
  }
  piVar4 = &(__this->fields).EMDEPINBPMF;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 0312073c to 0322073f has its CatchHandler @ 03120bb8 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03120740 to 03220747 has its CatchHandler @ 03120b50 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_5620,(MethodInfo *)0x0);
                    /* try { // try from 03120758 to 0322077b has its CatchHandler @ 03120b30 */
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03120784. Too many branches */
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

