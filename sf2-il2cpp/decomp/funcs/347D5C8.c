// IAGKPNAGKLA$$HNIHOIAMDPC @ RVA 0x347D5C8

void IAGKPNAGKLA__HNIHOIAMDPC
               (IAGKPNAGKLA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04568363 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9345);
    FUN_01bab630(&StringLiteral_9327);
                    /* try { // try from 0357d5fc to 0367d623 has its CatchHandler @ 0357db34 */
    FUN_01bab630(&StringLiteral_1);
    DAT_04568363 = 1;
  }
  NKPJLEMPIKD__HNIHOIAMDPC((NKPJLEMPIKD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327,(MethodInfo *)0x0);
                    /* try { // try from 0357d660 to 0367d687 has its CatchHandler @ 0357db30 */
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields)._MMNODECCMJK_k__BackingField = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0357d69c to 0367d6ab has its CatchHandler @ 0357db38 */
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_9345,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields)._HFALHOCIDCH_k__BackingField;
        *ppSVar4 = pSVar3;
                    /* try { // try from 0357d6bc to 0367d6c3 has its CatchHandler @ 0357db0c */
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

