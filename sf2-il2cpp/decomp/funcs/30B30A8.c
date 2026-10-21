// EDELKOLBNDG$$LOGLPMMHIED @ RVA 0x30B30A8

void EDELKOLBNDG__LOGLPMMHIED
               (EDELKOLBNDG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  undefined4 uVar2;
  
  if ((DAT_045661ef & 1) == 0) {
    FUN_01bab630(&StringLiteral_3531);
    FUN_01bab630(&StringLiteral_5266);
    FUN_01bab630(&StringLiteral_7046);
    FUN_01bab630(&StringLiteral_1);
    DAT_045661ef = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_5266,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,StringLiteral_1,(MethodInfo *)0x0);
    if (bVar1) {
      uVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_3531,(MethodInfo *)0x0);
      if (bVar1) {
        uVar2 = 1;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_7046,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        uVar2 = 0;
      }
    }
    (__this->fields).KGFPLKMNLGB = (bool_conflict)(char)uVar2;
    (__this->fields).FBGFNGLLNMG = (bool_conflict)(char)((uint)uVar2 >> 8);
    (__this->fields).EPIIDGFAAFB = (bool_conflict)(char)((uint)uVar2 >> 0x10);
    (__this->fields).field_0x7b = (char)((uint)uVar2 >> 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

