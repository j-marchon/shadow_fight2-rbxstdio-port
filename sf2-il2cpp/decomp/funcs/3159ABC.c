// LKPNOBFEAKD$$EOCKLMCDLEK @ RVA 0x3159ABC

void LKPNOBFEAKD__EOCKLMCDLEK
               (LKPNOBFEAKD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *a;
  int32_t iVar4;
  
                    /* try { // try from 03259ac0 to 03359acb has its CatchHandler @ 03259cbc */
  if ((DAT_0456685c & 1) == 0) {
                    /* try { // try from 03259ad8 to 03359ae3 has its CatchHandler @ 03259ca8 */
    FUN_01bab630(&StringLiteral_10933);
                    /* try { // try from 03259aec to 03359af3 has its CatchHandler @ 03259ca4 */
    FUN_01bab630(&StringLiteral_5622);
    FUN_01bab630(&StringLiteral_1606);
                    /* try { // try from 03259b04 to 03359b07 has its CatchHandler @ 03259ca0 */
    FUN_01bab630(&StringLiteral_1567);
    DAT_0456685c = 1;
  }
                    /* try { // try from 03259b14 to 03359b1b has its CatchHandler @ 03259cac */
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 03259b30 to 03359b37 has its CatchHandler @ 03259bd4 */
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_10933,(MethodInfo *)0x0);
                    /* try { // try from 03259b48 to 03359b57 has its CatchHandler @ 03259bd0 */
    bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
    if (bVar1) {
      iVar4 = 2;
    }
    else {
                    /* try { // try from 03259b60 to 03359b6b has its CatchHandler @ 03259bc8 */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03259bec;
                    /* try { // try from 03259b70 to 03359b77 has its CatchHandler @ 03259bcc */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5622,(MethodInfo *)0x0);
                    /* try { // try from 03259b84 to 03359b8b has its CatchHandler @ 03259bc4 */
      a = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03259b9c to 03359ba3 has its CatchHandler @ 03259cc0 */
      bVar1 = System_String__op_Equality(a,StringLiteral_1606,(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields).DPLMPLDJKKB = 0;
        return;
      }
                    /* try { // try from 03259bb8 to 03359bbb has its CatchHandler @ 03259bc0 */
                    /* try { // try from 03259bbc to 03359be3 has its CatchHandler @ 03259920 */
                    /* catch() { ... } // from try @ 03259bb8 with catch @ 03259bc0 */
                    /* catch() { ... } // from try @ 03259b84 with catch @ 03259bc4 */
                    /* catch() { ... } // from try @ 03259b60 with catch @ 03259bc8 */
      bVar1 = System_String__op_Equality(a,StringLiteral_1567,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03259b70 with catch @ 03259bcc */
      if (bVar1) {
                    /* catch() { ... } // from try @ 03259b48 with catch @ 03259bd0 */
        iVar4 = 1;
                    /* catch() { ... } // from try @ 03259b30 with catch @ 03259bd4 */
      }
      else {
        iVar4 = 3;
      }
    }
    (__this->fields).DPLMPLDJKKB = iVar4;
                    /* try { // try from 03259be4 to 03359be7 has its CatchHandler @ 03259c90 */
                    /* try { // try from 03259be8 to 03359c5b has its CatchHandler @ 03259920 */
    return;
  }
LAB_03259bec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

