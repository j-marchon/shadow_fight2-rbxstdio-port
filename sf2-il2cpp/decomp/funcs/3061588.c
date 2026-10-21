// ACHLOMELAJE$$PLEHMNAALGE @ RVA 0x3061588

void ACHLOMELAJE__PLEHMNAALGE(ACHLOMELAJE_o *__this,System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlElement_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
  if ((DAT_04565ecc & 1) == 0) {
    FUN_01bab630(&StringLiteral_14800);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8095);
    DAT_04565ecc = 1;
  }
  bVar1 = ACHLOMELAJE__EICGOCNDMNI(__this,CNIELFLIKJB,method);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlElement_o *)
             (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar2,StringLiteral_14800,(pSVar2->klass->vtable)._51_get_Item.method);
    if (pSVar3 == (System_Xml_XmlElement_o *)0x0) {
      pSVar3 = EIABCPKDEBD__BHPIHHJHELJ
                         ((__this->fields).super.HJKLIDCAEOE,StringLiteral_14800,(MethodInfo *)0x0);
    }
    pSVar3 = EIABCPKDEBD__BHPIHHJHELJ
                       ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_8095,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                       ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
    if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                (pSVar4,CNIELFLIKJB,(pSVar4->klass->vtable)._10_set_Value.method);
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

