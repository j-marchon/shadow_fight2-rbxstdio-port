// HMKNNONIOGK$$HNIHOIAMDPC @ RVA 0x31676FC

void HMKNNONIOGK__HNIHOIAMDPC
               (HMKNNONIOGK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *a;
  
  if ((DAT_045668c9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_8775);
    FUN_01bab630(&StringLiteral_5582);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10807);
    DAT_045668c9 = 1;
  }
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_13991,(MethodInfo *)0x0);
      a = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,StringLiteral_8775,(MethodInfo *)0x0);
      if (bVar2) {
        *(undefined4 *)&(__this->fields).super.field_0x34 = 0;
      }
      else {
        bVar2 = System_String__op_Equality(a,StringLiteral_10807,(MethodInfo *)0x0);
        if (bVar2) {
          *(undefined4 *)&(__this->fields).super.field_0x34 = 1;
        }
        else {
                    /* try { // try from 03267834 to 0336785b has its CatchHandler @ 03267ac0 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_5582,(MethodInfo *)0x0);
        }
      }
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_14694,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
        uVar1 = *(uint *)&(__this->fields).super.field_0x34;
        (__this->fields).JBNGADJBDHB = iVar3;
                    /* try { // try from 03267890 to 033678b7 has its CatchHandler @ 03267abc */
        if (uVar1 < 2) {
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                             (MGNPHCAAEIO_TypeInfo->static_fields->OCCMHDBJPJM).fields,
                             (MethodInfo *)0x0);
          if (bVar2) {
            (__this->fields).JBNGADJBDHB = 0;
          }
        }
                    /* try { // try from 032678d0 to 033678d7 has its CatchHandler @ 03267aa4 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032678e0 to 03367907 has its CatchHandler @ 03267ab4 */
  FUN_01bab8c8();
}

