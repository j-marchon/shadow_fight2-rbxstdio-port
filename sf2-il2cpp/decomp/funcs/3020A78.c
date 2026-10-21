// PAMEPBLOLPB$$HHCDIDGFNHI @ RVA 0x3020A78

void PAMEPBLOLPB__HHCDIDGFNHI(PAMEPBLOLPB_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int64_t *__this_01;
  
  if ((DAT_04565c47 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11013);
    DAT_04565c47 = 1;
  }
  __this_01 = &(__this->fields).JJDACOBBFNB;
  *__this_01 = CJNHFNHJHPE;
                    /* try { // try from 03120aac to 03220aaf has its CatchHandler @ 03120b7c */
  pSVar1 = (__this->fields).HJKLIDCAEOE;
                    /* try { // try from 03120ab0 to 03220ab3 has its CatchHandler @ 03120b78 */
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03120ab4 to 03220ab7 has its CatchHandler @ 03120b74 */
                    /* try { // try from 03120ab8 to 03220abb has its CatchHandler @ 03120b70 */
                    /* try { // try from 03120abc to 03220abf has its CatchHandler @ 03120b6c */
                    /* try { // try from 03120ac0 to 03220ac3 has its CatchHandler @ 03120b68 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03120ac4 to 03220ac7 has its CatchHandler @ 03120b64 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03120ac8 to 03220acb has its CatchHandler @ 03120b4c */
                    /* try { // try from 03120acc to 03220acf has its CatchHandler @ 03120b48 */
                    /* try { // try from 03120ad0 to 03220ad3 has its CatchHandler @ 03120b44 */
                    /* try { // try from 03120ad4 to 03220ad7 has its CatchHandler @ 03120b40 */
                    /* try { // try from 03120ad8 to 03220adb has its CatchHandler @ 03120b38 */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_11013,(MethodInfo *)0x0);
                    /* try { // try from 03120adc to 03220adf has its CatchHandler @ 03120b08 */
                    /* try { // try from 03120ae0 to 03220ae3 has its CatchHandler @ 03120b04 */
                    /* try { // try from 03120ae4 to 03220ae7 has its CatchHandler @ 03120afc */
                    /* catch() { ... } // from try @ 03120a34 with catch @ 03120ae8
                       try { // try from 03120ae8 to 03220be7 has its CatchHandler @ 031203d4 */
      pSVar3 = System_Int64__ToString((int64_t)__this_01,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031209fc with catch @ 03120aec */
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* catch() { ... } // from try @ 0312094c with catch @ 03120af0 */
                    /* catch() { ... } // from try @ 03120914 with catch @ 03120af4 */
                    /* catch() { ... } // from try @ 03120930 with catch @ 03120af8 */
                    /* catch() { ... } // from try @ 03120ae4 with catch @ 03120afc */
                    /* catch() { ... } // from try @ 03120834 with catch @ 03120b00 */
                    /* catch() { ... } // from try @ 03120ae0 with catch @ 03120b04 */
                    /* WARNING: Could not recover jumptable at 0x03120b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 03120adc with catch @ 03120b08 */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0312064c with catch @ 03120b0c */
  FUN_01bab8c8();
}

