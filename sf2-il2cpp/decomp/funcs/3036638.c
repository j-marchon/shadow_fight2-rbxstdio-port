// GGCMECLCOMJ$$.ctor @ RVA 0x3036638

void GGCMECLCOMJ___ctor(GGCMECLCOMJ_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  undefined8 uVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CVar7;
  
                    /* catch() { ... } // from try @ 0313642c with catch @ 03136644 */
                    /* catch() { ... } // from try @ 0313641c with catch @ 03136648 */
  if ((DAT_04565d46 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694);
                    /* try { // try from 03136664 to 03236667 has its CatchHandler @ 0313669c */
    FUN_01bab630(&StringLiteral_8891);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_9067);
                    /* try { // try from 03136688 to 0323669b has its CatchHandler @ 031368d0 */
    DAT_04565d46 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03136664 with catch @ 0313669c
                       try { // try from 0313669c to 03236703 has its CatchHandler @ 03136048 */
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 031365d8 with catch @ 031366a8 */
                    /* catch() { ... } // from try @ 03136360 with catch @ 031366ac */
                    /* catch() { ... } // from try @ 03136344 with catch @ 031366b0 */
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03136314 with catch @ 031366b4 */
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 031365c8 with catch @ 031366b8 */
                    /* catch() { ... } // from try @ 03136248 with catch @ 031366bc */
                    /* catch() { ... } // from try @ 031364cc with catch @ 031366c0
                       catch() { ... } // from try @ 031365dc with catch @ 031366c0 */
                    /* catch() { ... } // from try @ 0313618c with catch @ 031366c4 */
                    /* catch() { ... } // from try @ 03136380 with catch @ 031366c8 */
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_8409,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03136200 with catch @ 031366cc */
                    /* catch() { ... } // from try @ 031363c0 with catch @ 031366d0
                       catch() { ... } // from try @ 031365fc with catch @ 031366d0 */
                    /* catch() { ... } // from try @ 03136234 with catch @ 031366d4
                       catch() { ... } // from try @ 03136408 with catch @ 031366d4 */
                    /* catch() { ... } // from try @ 03136330 with catch @ 031366d8
                       catch() { ... } // from try @ 031365d4 with catch @ 031366d8 */
                    /* catch() { ... } // from try @ 03136298 with catch @ 031366dc */
                    /* catch() { ... } // from try @ 031362cc with catch @ 031366e0
                       catch() { ... } // from try @ 031365d0 with catch @ 031366e0
                       catch() { ... } // from try @ 031365f0 with catch @ 031366e0 */
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03136268 with catch @ 031366e4
                       catch() { ... } // from try @ 031365c0 with catch @ 031366e4
                       catch() { ... } // from try @ 031365e4 with catch @ 031366e4 */
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9067,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
          CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            (iVar2,(MethodInfo *)0x0);
          (__this->fields).DDGIAHKNGEJ.fields = CVar6;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 0313675c to 03236793 has its CatchHandler @ 03136820 */
          if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031367e8;
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_8891,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0x7fffffff,(MethodInfo *)0x0);
          CVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            (iVar2,(MethodInfo *)0x0);
          uVar5 = CVar7.fields._8_8_;
          pCVar1 = &(__this->fields).KEJPPMKBOBN;
          (__this->fields).KEJPPMKBOBN.fields.currentCryptoKey = (int)CVar7.fields._0_8_;
          (__this->fields).KEJPPMKBOBN.fields.hiddenValue = (int)((ulong)CVar7.fields._0_8_ >> 0x20)
          ;
        }
        else {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_8409,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                    /* try { // try from 03136704 to 03236707 has its CatchHandler @ 03136810 */
          CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            (iVar2,(MethodInfo *)0x0);
          uVar5 = CVar6._8_8_;
          (__this->fields).KEJPPMKBOBN.fields = CVar6;
          (__this->fields).DDGIAHKNGEJ.fields.currentCryptoKey = (int)CVar6._0_8_;
          (__this->fields).DDGIAHKNGEJ.fields.hiddenValue = (int)((ulong)CVar6._0_8_ >> 0x20);
          pCVar1 = &(__this->fields).DDGIAHKNGEJ;
        }
        (pCVar1->fields).fakeValue = (int)uVar5;
        (pCVar1->fields).fakeValueActive = (bool_conflict)(char)((ulong)uVar5 >> 0x20);
        (pCVar1->fields).inited = (bool_conflict)(char)((ulong)uVar5 >> 0x28);
        *(short *)&(pCVar1->fields).field_0xe = (short)((ulong)uVar5 >> 0x30);
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_14694,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
          CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            (iVar2,(MethodInfo *)0x0);
          (__this->fields)._AJBLFMPFEIO_k__BackingField.fields = CVar6;
                    /* try { // try from 031367dc to 0323680f has its CatchHandler @ 031368d0 */
          return;
        }
      }
    }
  }
LAB_031367e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

