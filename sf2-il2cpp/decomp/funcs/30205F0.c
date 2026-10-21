// PAMEPBLOLPB$$HMMOOLJEJOJ @ RVA 0x30205F0

void PAMEPBLOLPB__HMMOOLJEJOJ(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  AFFHKININGD_o *__this_00;
  int32_t *piVar6;
  
                    /* try { // try from 03120608 to 0322061f has its CatchHandler @ 03120ba0 */
  if ((DAT_04565c41 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11010);
    DAT_04565c41 = 1;
  }
  piVar6 = &(__this->fields).KOANEAEMOOP;
  *piVar6 = CJNHFNHJHPE;
                    /* try { // try from 03120628 to 0322062f has its CatchHandler @ 03120b60 */
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0312064c to 0322064f has its CatchHandler @ 03120b0c */
                    /* try { // try from 03120650 to 0322065f has its CatchHandler @ 03120b5c */
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11010,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03120660 to 0322066b has its CatchHandler @ 03120b58 */
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (bVar1) {
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(pSVar2,StringLiteral_11010,(MethodInfo *)0x0);
      }
      else {
                    /* try { // try from 0312068c to 03220697 has its CatchHandler @ 03120b1c */
        if ((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
           (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
           pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031206f0;
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_11010,(MethodInfo *)0x0);
      }
      pSVar5 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* try { // try from 031206b4 to 032206c7 has its CatchHandler @ 03120b34 */
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
        __this_00 = (__this->fields).JFFPIOMOOPF;
        if (__this_00 != (AFFHKININGD_o *)0x0) {
                    /* try { // try from 031206d4 to 032206e3 has its CatchHandler @ 03120b54 */
          AFFHKININGD__DBLLCDJCJIJ(__this_00,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_031206f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

