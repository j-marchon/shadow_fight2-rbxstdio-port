// ACHLOMELAJE$$EICGOCNDMNI @ RVA 0x305FE18

bool ACHLOMELAJE__EICGOCNDMNI(ACHLOMELAJE_o *__this,System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  System_String_o *xpath;
  System_Xml_XmlNode_o *pSVar1;
  
  if ((DAT_04565eb8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_902);
    FUN_01bab630(&StringLiteral_14801);
    DAT_04565eb8 = 1;
  }
  pSVar1 = (__this->fields).super.HJKLIDCAEOE;
  xpath = System_String__Concat(StringLiteral_14801,CNIELFLIKJB,StringLiteral_902,(MethodInfo *)0x0)
  ;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = System_Xml_XmlNode__SelectSingleNode(pSVar1,xpath,(MethodInfo *)0x0);
    return pSVar1 != (System_Xml_XmlNode_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

