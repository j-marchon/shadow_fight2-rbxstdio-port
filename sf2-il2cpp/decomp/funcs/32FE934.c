// JCHNBADDBGO$$OOCAAJLDADI @ RVA 0x32FE934

void JCHNBADDBGO__OOCAAJLDADI
               (JCHNBADDBGO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  int32_t iVar2;
  
  if ((DAT_0456770a & 1) == 0) {
    FUN_01bab630(&StringLiteral_3023);
    FUN_01bab630(&StringLiteral_10305);
    FUN_01bab630(&StringLiteral_2810);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_3550);
    DAT_0456770a = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_3023,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,StringLiteral_10305,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_3550,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 2;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_2810,(MethodInfo *)0x0);
        iVar2 = 3;
        if (!bVar1) {
          iVar2 = 1;
        }
      }
    }
    (__this->fields).IDNBELKLCEL = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

