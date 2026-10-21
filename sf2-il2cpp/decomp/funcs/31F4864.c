// NLPJLHOEAOE$$FFHLPMINJII @ RVA 0x31F4864

int32_t NLPJLHOEAOE__FFHLPMINJII(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlDocument_o *pSVar2;
  long *plVar3;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  undefined1 auVar4 [16];
  
  if ((DAT_04566dc4 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_4954);
    FUN_01bab630(&StringLiteral_7230);
    DAT_04566dc4 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).OFIPPHJGMNK;
  if (pSVar2 != (System_Xml_XmlDocument_o *)0x0) {
    auVar4 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar2,StringLiteral_11416,(pSVar2->klass->vtable)._51_get_Item.method);
    method = auVar4._8_8_;
    plVar3 = auVar4._0_8_;
    if (plVar3 != (long *)0x0) {
      auVar4 = (**(code **)(*plVar3 + 0x468))
                         (plVar3,StringLiteral_4954,*(undefined8 *)(*plVar3 + 0x470));
      method = auVar4._8_8_;
      plVar3 = auVar4._0_8_;
      if (plVar3 != (long *)0x0) {
        auVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
        method = auVar4._8_8_;
        if (auVar4._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (auVar4._0_8_,StringLiteral_7230,(MethodInfo *)0x0);
          iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
          return iVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

