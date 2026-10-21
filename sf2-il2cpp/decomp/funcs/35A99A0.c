// FIPOABEGELK$$HNIHOIAMDPC @ RVA 0x35A99A0

void FIPOABEGELK__HNIHOIAMDPC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  FIPOABEGELK_StaticFields *pFVar4;
  GODDDLLLOLB_o *pGVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = AHDGNOJPPIB;
  if ((DAT_04568e3c & 1) == 0) {
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    FUN_01bab630(&StringLiteral_12297);
    FUN_01bab630(&StringLiteral_11791);
    FUN_01bab630(&StringLiteral_10231);
    auVar7 = FUN_01bab630(&StringLiteral_2979);
    DAT_04568e3c = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_2979,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pSVar3 = EIABCPKDEBD__IOBEKBNCOMI(pSVar2,(MethodInfo *)0x0);
    iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,1,(MethodInfo *)0x0);
    if ((FIPOABEGELK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FIPOABEGELK_TypeInfo);
    }
    pFVar4 = FIPOABEGELK_TypeInfo->static_fields;
    pFVar4->EBHMIOHJIJJ = iVar1;
    pGVar5 = pFVar4->FCHIMNCGKJF;
    auVar7 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_10231,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (pGVar5 != (GODDDLLLOLB_o *)0x0) {
      GODDDLLLOLB__HNIHOIAMDPC(pGVar5,auVar7._0_8_,1.0,1.0,(MethodInfo *)0x0);
      pGVar5 = FIPOABEGELK_TypeInfo->static_fields->PNKKLHDNAGP;
      auVar7 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                         (AHDGNOJPPIB,StringLiteral_11791,
                          (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      if (pGVar5 != (GODDDLLLOLB_o *)0x0) {
        GODDDLLLOLB__HNIHOIAMDPC(pGVar5,auVar7._0_8_,1.0,1.0,(MethodInfo *)0x0);
        pSVar2 = (System_Xml_XmlNode_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                           (AHDGNOJPPIB,StringLiteral_12297,
                            (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        pSVar3 = EIABCPKDEBD__IOBEKBNCOMI(pSVar2,(MethodInfo *)0x0);
        fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* try { // try from 036a9b38 to 037a9b3f has its CatchHandler @ 036a9bec */
        FIPOABEGELK_TypeInfo->static_fields->BCBHBHADEJL = fVar6 / 60.0;
                    /* try { // try from 036a9b40 to 037a9b43 has its CatchHandler @ 036a9bd8 */
                    /* try { // try from 036a9b44 to 037a9b47 has its CatchHandler @ 036a9bd4 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036a9b48 to 037a9b4b has its CatchHandler @ 036a92a0 */
  FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
}

