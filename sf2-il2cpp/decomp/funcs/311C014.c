// NAKKKCKOHGH$$HNIHOIAMDPC @ RVA 0x311C014

void NAKKKCKOHGH__HNIHOIAMDPC
               (NAKKKCKOHGH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  undefined4 uVar2;
  
  if ((DAT_045665f0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508);
    FUN_01bab630(&StringLiteral_3160);
    FUN_01bab630(&StringLiteral_9568);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_11798);
    FUN_01bab630(&StringLiteral_14411);
    FUN_01bab630(&StringLiteral_7903);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_14546);
    DAT_045665f0 = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_13991,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,StringLiteral_3160,(MethodInfo *)0x0);
    if (bVar1) {
      uVar2 = 4;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_3508,(MethodInfo *)0x0);
      if (bVar1) {
        uVar2 = 5;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_7903,(MethodInfo *)0x0);
        if (bVar1) {
          uVar2 = 6;
        }
        else {
          bVar1 = System_String__op_Equality(a,StringLiteral_9568,(MethodInfo *)0x0);
          if (bVar1) {
            uVar2 = 0;
          }
          else {
            bVar1 = System_String__op_Equality(a,StringLiteral_11798,(MethodInfo *)0x0);
            if (bVar1) {
              uVar2 = 3;
            }
            else {
              bVar1 = System_String__op_Equality(a,StringLiteral_14411,(MethodInfo *)0x0);
              if (bVar1) {
                uVar2 = 2;
              }
              else {
                bVar1 = System_String__op_Equality(a,StringLiteral_14546,(MethodInfo *)0x0);
                if (!bVar1) {
                  return;
                }
                uVar2 = 1;
              }
            }
          }
        }
      }
    }
    *(undefined4 *)&(__this->fields).super.field_0x5c = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

