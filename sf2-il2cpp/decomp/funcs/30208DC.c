// PAMEPBLOLPB$$LCDKIBDIDPA @ RVA 0x30208DC

void PAMEPBLOLPB__LCDKIBDIDPA(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04565c45 & 1) == 0) {
                    /* try { // try from 031208f4 to 032208fb has its CatchHandler @ 03120b14 */
    FUN_01bab630(&StringLiteral_12431);
    DAT_04565c45 = 1;
  }
  piVar4 = &(__this->fields).PDGFJEOGJOB;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
                    /* try { // try from 03120914 to 0322091b has its CatchHandler @ 03120af4 */
  *piVar4 = *piVar4 + 1;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03120930 to 03220937 has its CatchHandler @ 03120af8 */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_12431,(MethodInfo *)0x0);
                    /* try { // try from 0312094c to 03220953 has its CatchHandler @ 03120af0 */
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 0312096c to 0322096f has its CatchHandler @ 03120bb8 */
                    /* WARNING: Could not recover jumptable at 0x03120970. Too many branches */
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

