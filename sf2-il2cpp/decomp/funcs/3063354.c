// ACHLOMELAJE$$NOILDCIGGJB @ RVA 0x3063354

System_String_o *
ACHLOMELAJE__NOILDCIGGJB(ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  
  if ((DAT_04565ef2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11874);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565ef2 = 1;
  }
  pSVar1 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_11874,
                                (pSVar1->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x468))
                                 (plVar2,KGLJICLJHEL,*(undefined8 *)(*plVar2 + 0x470));
      if (plVar2 != (long *)0x0) {
        __this_00 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
        if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (__this_00,StringLiteral_14694,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

