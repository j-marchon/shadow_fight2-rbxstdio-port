// PAMEPBLOLPB$$CPIINGDCHIH @ RVA 0x3020978

void PAMEPBLOLPB__CPIINGDCHIH(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  int32_t *piVar6;
  
                    /* try { // try from 03120978 to 03220997 has its CatchHandler @ 03120bc8 */
  if ((DAT_04565c46 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11006);
                    /* try { // try from 031209a4 to 032209ab has its CatchHandler @ 03120b18 */
    DAT_04565c46 = 1;
  }
  piVar6 = &(__this->fields).IKGEDJDFCBA;
                    /* try { // try from 031209ac to 032209fb has its CatchHandler @ 031203d4 */
  *piVar6 = CJNHFNHJHPE;
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11006,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (bVar1) {
                    /* try { // try from 031209fc to 03220a03 has its CatchHandler @ 03120aec */
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(pSVar2,StringLiteral_11006,(MethodInfo *)0x0);
      }
      else {
                    /* try { // try from 03120a1c to 03220a1f has its CatchHandler @ 03120bb8 */
        if ((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
           (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
           pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_03120a5c;
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_11006,(MethodInfo *)0x0);
      }
                    /* try { // try from 03120a34 to 03220a3b has its CatchHandler @ 03120ae8 */
      pSVar5 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03120a54 to 03220a57 has its CatchHandler @ 03120bb8 */
                    /* WARNING: Could not recover jumptable at 0x03120a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 03120a58 to 03220a63 has its CatchHandler @ 031203d4 */
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
LAB_03120a5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

