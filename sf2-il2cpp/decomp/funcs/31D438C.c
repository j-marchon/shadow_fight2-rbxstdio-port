// FCFEFEBAILK$$INAPKENHIEC @ RVA 0x31D438C

int32_t FCFEFEBAILK__INAPKENHIEC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = AHDGNOJPPIB;
  if ((DAT_04566d58 & 1) == 0) {
                    /* try { // try from 032d43a4 to 033d44ab has its CatchHandler @ 032d43a4
                       catch() { ... } // from try @ 032d43a4 with catch @ 032d43a4
                       catch() { ... } // from try @ 032d44d8 with catch @ 032d43a4
                       catch() { ... } // from try @ 032d4630 with catch @ 032d43a4
                       catch() { ... } // from try @ 032d4660 with catch @ 032d43a4 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_13972);
    FUN_01bab630(&StringLiteral_11461);
    FUN_01bab630(&StringLiteral_7019);
    FUN_01bab630(&StringLiteral_4848);
    FUN_01bab630(&StringLiteral_2789);
    FUN_01bab630(&StringLiteral_6273);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_1);
    auVar4 = FUN_01bab630(&StringLiteral_3572);
    DAT_04566d58 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    auVar5 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar5._8_8_;
    auVar4 = auVar1 << 0x40;
    if (auVar5._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (auVar5._0_8_,StringLiteral_13991,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar3,StringLiteral_13972,(MethodInfo *)0x0);
      if (!bVar2) {
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_7019,(MethodInfo *)0x0);
        if (bVar2) {
          return 1;
        }
                    /* try { // try from 032d44bc to 033d44bf has its CatchHandler @ 032d4610 */
                    /* try { // try from 032d44c0 to 033d44d7 has its CatchHandler @ 032d460c */
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_3572,(MethodInfo *)0x0);
        if (bVar2) {
          return 2;
        }
                    /* try { // try from 032d44d8 to 033d462b has its CatchHandler @ 032d43a4 */
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_2789,(MethodInfo *)0x0);
        if (bVar2) {
          return 3;
        }
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_4848,(MethodInfo *)0x0);
        if (bVar2) {
          return 4;
        }
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_6273,(MethodInfo *)0x0);
        if (bVar2) {
          return 5;
        }
        pSVar3 = System_String__Concat(StringLiteral_11461,pSVar3,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}

