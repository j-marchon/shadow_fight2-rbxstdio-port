// OLKPEJMEBPJ$$CPIINGDCHIH @ RVA 0x33ACA7C

void OLKPEJMEBPJ__CPIINGDCHIH(OLKPEJMEBPJ_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int64_t *__this_00;
  
                    /* try { // try from 034aca94 to 035acb0b has its CatchHandler @ 034acd6c */
  if ((DAT_04567d17 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11006);
    DAT_04567d17 = 1;
  }
  __this_00 = &(__this->fields).IKGEDJDFCBA;
  *__this_00 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  (__this->fields).LJNPEJNOIPB = true;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_11006,(MethodInfo *)0x0);
      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_11006,(MethodInfo *)0x0)
        ;
      }
      pSVar1 = (__this->fields).HJKLIDCAEOE;
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034acb0c to 035acb13 has its CatchHandler @ 034acca0 */
                    /* try { // try from 034acb14 to 035acb17 has its CatchHandler @ 034acc54 */
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 034acb18 to 035acb1b has its CatchHandler @ 034acc50 */
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034acb1c to 035acb1f has its CatchHandler @ 034acc4c */
                    /* try { // try from 034acb20 to 035acb23 has its CatchHandler @ 034acc48 */
                    /* try { // try from 034acb24 to 035acb27 has its CatchHandler @ 034acc44 */
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_11006,(MethodInfo *)0x0);
                    /* try { // try from 034acb28 to 035acb2b has its CatchHandler @ 034acc40 */
                    /* try { // try from 034acb2c to 035acb2f has its CatchHandler @ 034acc3c */
                    /* try { // try from 034acb30 to 035acb33 has its CatchHandler @ 034acbf4 */
                    /* try { // try from 034acb34 to 035acb37 has its CatchHandler @ 034acbf0 */
          pSVar4 = System_Int64__ToString((int64_t)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034acb38 to 035acb3b has its CatchHandler @ 034acbec */
          if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 034acb3c to 035acb3f has its CatchHandler @ 034acbe8 */
                    /* try { // try from 034acb40 to 035acb43 has its CatchHandler @ 034acbe4 */
                    /* try { // try from 034acb44 to 035acb47 has its CatchHandler @ 034acbe0 */
                    /* try { // try from 034acb48 to 035acb4b has its CatchHandler @ 034acbdc */
                    /* try { // try from 034acb4c to 035acb4f has its CatchHandler @ 034acbd8 */
                    /* try { // try from 034acb50 to 035acb53 has its CatchHandler @ 034acbd4 */
                    /* WARNING: Could not recover jumptable at 0x034acb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 034acb54 to 035acb5b has its CatchHandler @ 034acba8 */
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

