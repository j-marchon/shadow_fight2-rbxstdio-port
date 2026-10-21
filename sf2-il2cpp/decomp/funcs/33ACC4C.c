// OLKPEJMEBPJ$$KPFJEDDJKKH @ RVA 0x33ACC4C

void OLKPEJMEBPJ__KPFJEDDJKKH(OLKPEJMEBPJ_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
                    /* catch() { ... } // from try @ 034acb1c with catch @ 034acc4c */
                    /* catch() { ... } // from try @ 034acb18 with catch @ 034acc50 */
                    /* catch() { ... } // from try @ 034acb14 with catch @ 034acc54 */
                    /* catch() { ... } // from try @ 034ac114 with catch @ 034acc58 */
                    /* catch() { ... } // from try @ 034ac098 with catch @ 034acc5c */
                    /* catch() { ... } // from try @ 034ac17c with catch @ 034acc60 */
                    /* catch() { ... } // from try @ 034ac0cc with catch @ 034acc64 */
  if ((DAT_04567d19 & 1) == 0) {
                    /* catch() { ... } // from try @ 034ac080 with catch @ 034acc68 */
                    /* catch() { ... } // from try @ 034acb5c with catch @ 034acc6c */
                    /* catch() { ... } // from try @ 034ac328 with catch @ 034acc70 */
    FUN_01bab630(&StringLiteral_6310);
                    /* catch() { ... } // from try @ 034ac2e0 with catch @ 034acc74 */
                    /* catch() { ... } // from try @ 034ac204 with catch @ 034acc78 */
    DAT_04567d19 = 1;
  }
                    /* catch() { ... } // from try @ 034ac0ec with catch @ 034acc7c */
                    /* catch() { ... } // from try @ 034ac298 with catch @ 034acc80 */
                    /* catch() { ... } // from try @ 034ac1bc with catch @ 034acc84 */
                    /* catch() { ... } // from try @ 034ac250 with catch @ 034acc88 */
  (__this->fields).LCIGBGGCCAH = true;
                    /* catch() { ... } // from try @ 034ac134 with catch @ 034acc8c */
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ac0a0 with catch @ 034acc90 */
                    /* catch() { ... } // from try @ 034ac060 with catch @ 034acc94 */
  pCVar6 = &(__this->fields).ANOLCJDAGPJ;
                    /* catch() { ... } // from try @ 034ac044 with catch @ 034acc98 */
  pSVar2 = (__this->fields).HJKLIDCAEOE;
                    /* catch() { ... } // from try @ 034ac7d4 with catch @ 034acc9c */
  pCVar6->fields = CVar7;
                    /* catch() { ... } // from try @ 034acb0c with catch @ 034acca0 */
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 034abfe4 with catch @ 034acca4 */
                    /* catch() { ... } // from try @ 034abf88 with catch @ 034acca8 */
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_6310,(MethodInfo *)0x0);
                    /* try { // try from 034accd0 to 035accd3 has its CatchHandler @ 034acce0 */
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
      if (bVar1) {
                    /* catch() { ... } // from try @ 034accd0 with catch @ 034acce0 */
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_6310,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034accf0 to 035acd57 has its CatchHandler @ 034acd6c */
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_6310,(MethodInfo *)0x0);
          __this_00.fields.fakeValue = 0;
          __this_00.fields.fakeValueActive = false;
          __this_00.fields.inited = false;
          __this_00.fields._14_2_ = 0;
          __this_00.fields._0_8_ = pCVar6;
          pSVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_00,method_00);
          if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034acd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

