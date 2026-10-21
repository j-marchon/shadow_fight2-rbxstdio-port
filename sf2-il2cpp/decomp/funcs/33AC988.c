// OLKPEJMEBPJ$$NMPBPALANND @ RVA 0x33AC988

void OLKPEJMEBPJ__NMPBPALANND(OLKPEJMEBPJ_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
                    /* catch() { ... } // from try @ 034ac690 with catch @ 034ac988 */
                    /* catch() { ... } // from try @ 034ac6ac with catch @ 034ac98c */
                    /* catch() { ... } // from try @ 034ac688 with catch @ 034ac990 */
                    /* catch() { ... } // from try @ 034ac704 with catch @ 034ac994 */
                    /* catch() { ... } // from try @ 034ac6c4 with catch @ 034ac998 */
                    /* catch() { ... } // from try @ 034ac904 with catch @ 034ac99c
                       catch() { ... } // from try @ 034ac92c with catch @ 034ac99c */
                    /* catch() { ... } // from try @ 034ac5fc with catch @ 034ac9a0 */
  if ((DAT_04567d16 & 1) == 0) {
                    /* catch() { ... } // from try @ 034ac610 with catch @ 034ac9a4 */
                    /* catch() { ... } // from try @ 034ac8e0 with catch @ 034ac9a8 */
                    /* catch() { ... } // from try @ 034ac59c with catch @ 034ac9ac */
    FUN_01bab630(&StringLiteral_8602);
                    /* catch() { ... } // from try @ 034ac540 with catch @ 034ac9b0 */
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
                    /* try { // try from 034ac9cc to 035ac9cf has its CatchHandler @ 034acb74 */
    DAT_04567d16 = 1;
  }
                    /* try { // try from 034ac9d0 to 035aca93 has its CatchHandler @ 034abafc */
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  (__this->fields).PABIMIFJJKF = CJNHFNHJHPE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_8602,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_8602,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
           (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_8602,(MethodInfo *)0x0),
           pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
          puVar1 = &StringLiteral_1567;
          if ((__this->fields).PABIMIFJJKF != false) {
            puVar1 = &StringLiteral_1606;
          }
                    /* WARNING: Could not recover jumptable at 0x034aca74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar4,*puVar1,(pSVar4->klass->vtable)._10_set_Value.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

