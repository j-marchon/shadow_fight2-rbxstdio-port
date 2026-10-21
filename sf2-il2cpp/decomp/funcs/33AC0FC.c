// OLKPEJMEBPJ$$MJDAFBEALIP @ RVA 0x33AC0FC

void OLKPEJMEBPJ__MJDAFBEALIP(OLKPEJMEBPJ_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

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
  
                    /* try { // try from 034ac114 to 035ac11b has its CatchHandler @ 034acc58 */
  if ((DAT_04567d12 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11237);
    DAT_04567d12 = 1;
  }
                    /* try { // try from 034ac12c to 035ac133 has its CatchHandler @ 034acc2c */
                    /* try { // try from 034ac134 to 035ac14f has its CatchHandler @ 034acc8c */
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  pCVar6 = &(__this->fields).EBIIDPEAEPH;
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  pCVar6->fields = CVar7;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 034ac15c to 035ac163 has its CatchHandler @ 034acc30 */
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11237,(MethodInfo *)0x0);
                    /* try { // try from 034ac174 to 035ac17b has its CatchHandler @ 034acc24 */
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 034ac17c to 035ac187 has its CatchHandler @ 034acc60 */
      if (bVar1) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_11237,(MethodInfo *)0x0)
        ;
      }
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034ac19c to 035ac1a3 has its CatchHandler @ 034acc34 */
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
                    /* try { // try from 034ac1b4 to 035ac1bb has its CatchHandler @ 034acc28 */
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_11237,(MethodInfo *)0x0);
          __this_00.fields.fakeValue = 0;
          __this_00.fields.fakeValueActive = false;
          __this_00.fields.inited = false;
          __this_00.fields._14_2_ = 0;
          __this_00.fields._0_8_ = pCVar6;
                    /* try { // try from 034ac1bc to 035ac1d7 has its CatchHandler @ 034acc84 */
          pSVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_00,method_00);
          if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034ac1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 034ac1e4 to 035ac1eb has its CatchHandler @ 034acc14 */
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

