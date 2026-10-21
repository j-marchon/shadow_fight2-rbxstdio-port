// PAMEPBLOLPB$$HJPCKFNFNCP @ RVA 0x30207AC

void PAMEPBLOLPB__HJPCKFNFNCP(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
                    /* try { // try from 031207c4 to 032207df has its CatchHandler @ 03120b9c */
  if ((DAT_04565c43 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5621);
    DAT_04565c43 = 1;
  }
  piVar4 = &(__this->fields).NFGAGEIDGPJ;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031207e8 to 032207ff has its CatchHandler @ 03120b98 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_5621,(MethodInfo *)0x0);
                    /* try { // try from 03120810 to 03220827 has its CatchHandler @ 03120b2c */
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03120834 to 0322083f has its CatchHandler @ 03120b00 */
                    /* WARNING: Could not recover jumptable at 0x0312083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03120840 to 0322085b has its CatchHandler @ 03120b28 */
  FUN_01bab8c8();
}

