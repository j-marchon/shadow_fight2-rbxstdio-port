// CGALNIOABHK$$ACKGIKOKLEP @ RVA 0x3446C08

ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_o *
CGALNIOABHK__ACKGIKOKLEP(System_Xml_XmlNode_o *OBDMHHJBLKL,MethodInfo *method)

{
  ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_o *__this;
  long lVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456823e & 1) == 0) {
    FUN_01bab630(&ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_TypeInfo);
    FUN_01bab630(&StringLiteral_9420);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_11480);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456823e = 1;
    method = extraout_x1;
  }
  __this = (ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_o *)
           thunk_FUN_01bda818(ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_TypeInfo,method);
  ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB___ctor(__this,(MethodInfo *)0x0);
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
    lVar1 = (*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)
                      (OBDMHHJBLKL,StringLiteral_11480,
                       (OBDMHHJBLKL->klass->vtable)._51_get_Item.method);
    if (__this != (ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_o *)0x0) {
      (__this->fields).EGFDEAJLNND = lVar1 != 0;
      plVar2 = (long *)(*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)
                                 (OBDMHHJBLKL,StringLiteral_9420,
                                  (OBDMHHJBLKL->klass->vtable)._51_get_Item.method);
      if (plVar2 != (long *)0x0) {
        __this_00 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
        if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
          (__this->fields).KBHJKPDKNMA = pSVar3;
          thunk_FUN_01c20e04();
          (__this->fields).OKONAOJIODE = true;
          return __this;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

