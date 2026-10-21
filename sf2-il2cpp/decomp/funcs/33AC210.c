// OLKPEJMEBPJ$$KCPGEFEMHJB @ RVA 0x33AC210

void OLKPEJMEBPJ__KCPGEFEMHJB(OLKPEJMEBPJ_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int64_t *__this_00;
  
  if ((DAT_04567d13 & 1) == 0) {
                    /* try { // try from 034ac22c to 035ac233 has its CatchHandler @ 034acc00 */
    FUN_01bab630(&StringLiteral_5750);
    DAT_04567d13 = 1;
  }
  __this_00 = &(__this->fields).DAJFCLOOMDM;
                    /* try { // try from 034ac244 to 035ac24b has its CatchHandler @ 034acbc4 */
  *__this_00 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034ac250 to 035ac267 has its CatchHandler @ 034acc88 */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac274 to 035ac27b has its CatchHandler @ 034acbcc */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5750,(MethodInfo *)0x0);
      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_5750,(MethodInfo *)0x0);
      }
                    /* try { // try from 034ac28c to 035ac293 has its CatchHandler @ 034acbb0 */
      pSVar1 = (__this->fields).HJKLIDCAEOE;
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034ac298 to 035ac2af has its CatchHandler @ 034acc80 */
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_5750,(MethodInfo *)0x0);
                    /* try { // try from 034ac2bc to 035ac2c3 has its CatchHandler @ 034acbb8 */
          pSVar4 = System_Int64__ToString((int64_t)__this_00,(MethodInfo *)0x0);
          if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 034ac2d4 to 035ac2db has its CatchHandler @ 034acc1c */
                    /* WARNING: Could not recover jumptable at 0x034ac2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 034ac2e0 to 035ac2f7 has its CatchHandler @ 034acc74 */
            (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar3,pSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

