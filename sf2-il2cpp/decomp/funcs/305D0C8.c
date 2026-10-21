// ACHLOMELAJE$$BGGEAOHJAJL @ RVA 0x305D0C8

void ACHLOMELAJE__BGGEAOHJAJL(ACHLOMELAJE_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  System_String_o *AFKICLAFDKC;
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlElement_o *pSVar3;
  System_String_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  
  if ((DAT_04565eb1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3445);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_22485);
    FUN_01bab630(&StringLiteral_3426);
    DAT_04565eb1 = 1;
  }
  pSVar4 = StringLiteral_3445;
  AFKICLAFDKC = StringLiteral_3426;
  pSVar2 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlElement_o *)
             (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar2,StringLiteral_3445,(pSVar2->klass->vtable)._51_get_Item.method);
    if (pSVar3 != (System_Xml_XmlElement_o *)0x0) {
      bVar1 = System_Xml_XmlElement__get_IsEmpty(pSVar3,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).super.HJKLIDCAEOE;
      if (bVar1) {
        pSVar3 = EIABCPKDEBD__BHPIHHJHELJ(pSVar2,pSVar4,(MethodInfo *)0x0);
      }
      else {
        if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_0315d230;
        pSVar3 = (System_Xml_XmlElement_o *)
                 (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar2,pSVar4,(pSVar2->klass->vtable)._51_get_Item.method);
      }
      if (DBIAAJNKHLH != (DNELIPCHKLK_o *)0x0) {
        pSVar4 = System_String__Concat
                           ((DBIAAJNKHLH->fields).GDPFBDIJNHA,StringLiteral_22485,
                            (DBIAAJNKHLH->fields).GJFJPLHCBKJ,StringLiteral_22485,(MethodInfo *)0x0)
        ;
        pSVar2 = EIABCPKDEBD__MHJPHEMBOLK
                           ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_3426,StringLiteral_9327,
                            pSVar4,(MethodInfo *)0x0);
        if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
          return;
        }
        pSVar3 = EIABCPKDEBD__BHPIHHJHELJ
                           ((System_Xml_XmlNode_o *)pSVar3,AFKICLAFDKC,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__HBGAGFJBGKD
                           ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
        if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0315d22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar5->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar5,pSVar4,(pSVar5->klass->vtable)._10_set_Value.method);
          return;
        }
      }
    }
  }
LAB_0315d230:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

