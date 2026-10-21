// ACHLOMELAJE$$HBPLGHPBMGE @ RVA 0x305D2BC

OLKPEJMEBPJ_o *
ACHLOMELAJE__HBPLGHPBMGE(ACHLOMELAJE_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  System_String_o *AFKICLAFDKC;
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlElement_o *pSVar3;
  System_String_o *pSVar4;
  System_Xml_XmlElement_o *AHDGNOJPPIB;
  OLKPEJMEBPJ_o *__this_00;
  ACHLOMELAJE_MDHCBOFHAEL_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04565ed7 & 1) == 0) {
    FUN_01bab630(&OLKPEJMEBPJ_TypeInfo);
    FUN_01bab630(&StringLiteral_3445);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_22485);
    FUN_01bab630(&StringLiteral_3426);
    DAT_04565ed7 = 1;
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
        if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_0315d458;
        pSVar3 = (System_Xml_XmlElement_o *)
                 (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar2,pSVar4,(pSVar2->klass->vtable)._51_get_Item.method);
      }
      if (DBIAAJNKHLH != (DNELIPCHKLK_o *)0x0) {
        pSVar4 = System_String__Concat
                           ((DBIAAJNKHLH->fields).GDPFBDIJNHA,StringLiteral_22485,
                            (DBIAAJNKHLH->fields).GJFJPLHCBKJ,StringLiteral_22485,(MethodInfo *)0x0)
        ;
        AHDGNOJPPIB = (System_Xml_XmlElement_o *)
                      EIABCPKDEBD__MHJPHEMBOLK
                                ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_3426,
                                 StringLiteral_9327,pSVar4,(MethodInfo *)0x0);
        if (AHDGNOJPPIB == (System_Xml_XmlElement_o *)0x0) {
          AHDGNOJPPIB = EIABCPKDEBD__BHPIHHJHELJ
                                  ((System_Xml_XmlNode_o *)pSVar3,AFKICLAFDKC,(MethodInfo *)0x0);
        }
        __this_00 = (OLKPEJMEBPJ_o *)thunk_FUN_01bda818(OLKPEJMEBPJ_TypeInfo);
        OLKPEJMEBPJ___ctor(__this_00,(System_Xml_XmlNode_o *)AHDGNOJPPIB,(MethodInfo *)0x0);
        if (__this_00 != (OLKPEJMEBPJ_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          OLKPEJMEBPJ__PPCDKKPGEGI(__this_00,DBIAAJNKHLH,(MethodInfo *)0x0);
          __this_01 = (__this->fields).KBCAIBPDIKB;
          if (__this_01 != (ACHLOMELAJE_MDHCBOFHAEL_o *)0x0) {
            ACHLOMELAJE_MDHCBOFHAEL__LFENGGKOJDO(__this_01,__this_00,method_00);
            return __this_00;
          }
        }
      }
    }
  }
LAB_0315d458:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

