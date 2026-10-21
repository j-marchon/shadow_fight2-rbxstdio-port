// IENLNOEDCFF$$HNIHOIAMDPC @ RVA 0x30F263C

void IENLNOEDCFF__HNIHOIAMDPC
               (IENLNOEDCFF_o *__this,System_Xml_XmlNode_o *NHMPCKIPOJE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *ACCIHBHMFPN;
  
  if ((DAT_04566434 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8907);
    FUN_01bab630(&StringLiteral_10305);
    FUN_01bab630(&StringLiteral_9577);
    DAT_04566434 = 1;
  }
  if (NHMPCKIPOJE != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                       (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9577,(MethodInfo *)0x0);
      bVar1 = GIAMPEGMNHE__FAEBPLENEGK(pSVar4,false,(MethodInfo *)0x0);
      (__this->fields).GBBHFPBFOPI = bVar1;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                         (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_10305,(MethodInfo *)0x0);
        ACCIHBHMFPN = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,StringLiteral_8907,(MethodInfo *)0x0);
        iVar2 = LCAJGLLBBEC__HGMMJIIEOLF(ACCIHBHMFPN,(MethodInfo *)0x0);
                    /* try { // try from 031f2714 to 032f271b has its CatchHandler @ 031f2804 */
        (__this->fields).LOAFPIOGJAF = iVar2;
                    /* WARNING: Could not recover jumptable at 0x031f2728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._9_GIENGNEGHPJ.methodPtr)
                  (__this,(__this->klass->vtable)._9_GIENGNEGHPJ.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

