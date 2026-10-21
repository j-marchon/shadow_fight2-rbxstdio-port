// ACHLOMELAJE$$BLJJKMIEHFG @ RVA 0x30604F4

MEMHEPBAJJA_o *
ACHLOMELAJE__BLJJKMIEHFG
          (ACHLOMELAJE_o *__this,System_String_o *HJALCEKDBIM,System_String_o *LFGKEPCBPKF,
          MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  long lVar2;
  System_Xml_XmlElement_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  MEMHEPBAJJA_o *pMVar6;
  MethodInfo *method_00;
  
  if ((DAT_04565ec0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10724);
    FUN_01bab630(&StringLiteral_6396);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_10642);
    DAT_04565ec0 = 1;
  }
  pSVar1 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    lVar2 = (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                      (pSVar1,StringLiteral_10724,(pSVar1->klass->vtable)._51_get_Item.method);
    pSVar1 = (__this->fields).super.HJKLIDCAEOE;
    if (lVar2 == 0) {
      pSVar3 = EIABCPKDEBD__BHPIHHJHELJ(pSVar1,StringLiteral_10724,(MethodInfo *)0x0);
    }
    else {
      if (pSVar1 == (System_Xml_XmlNode_o *)0x0) goto LAB_03160694;
      pSVar3 = (System_Xml_XmlElement_o *)
               (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                         (pSVar1,StringLiteral_10724,(pSVar1->klass->vtable)._51_get_Item.method);
    }
    if (pSVar3 != (System_Xml_XmlElement_o *)0x0) {
      lVar2 = (*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar3,StringLiteral_10724,(pSVar3->klass->vtable)._51_get_Item.method);
      if (lVar2 == 0) {
        pSVar3 = EIABCPKDEBD__BHPIHHJHELJ
                           ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_10724,(MethodInfo *)0x0);
      }
      else {
        pSVar3 = (System_Xml_XmlElement_o *)
                 (*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar3,StringLiteral_10724,(pSVar3->klass->vtable)._51_get_Item.method);
      }
      pSVar3 = EIABCPKDEBD__BHPIHHJHELJ
                         ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_10642,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                         ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,HJALCEKDBIM,(pSVar4->klass->vtable)._10_set_Value.method);
        pSVar5 = LCOODJKAICL__DDGMDKMKBHH(LFGKEPCBPKF,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                           ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_6396,(MethodInfo *)0x0);
        if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
          method_00 = (pSVar4->klass->vtable)._10_set_Value.method;
          (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)(pSVar4,pSVar5);
                    /* try { // try from 03160690 to 03260747 has its CatchHandler @ 03160690
                       catch() { ... } // from try @ 03160690 with catch @ 03160690
                       catch() { ... } // from try @ 03160778 with catch @ 03160690
                       catch() { ... } // from try @ 031607c0 with catch @ 03160690
                       catch() { ... } // from try @ 031607e8 with catch @ 03160690
                       catch() { ... } // from try @ 03160828 with catch @ 03160690 */
          pMVar6 = ACHLOMELAJE__IDFEGHDENFD(__this,(System_Xml_XmlNode_o *)pSVar3,method_00);
          return pMVar6;
        }
      }
    }
  }
LAB_03160694:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

