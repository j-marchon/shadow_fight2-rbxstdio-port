// NFGLEDADCGL$$DMCFMJJKIDN @ RVA 0x316C624

HNFFPPPDKDK_o *
NFGLEDADCGL__DMCFMJJKIDN(NFGLEDADCGL_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlElement_o *pSVar2;
  HNFFPPPDKDK_o *__this_00;
  
  if ((DAT_045668fe & 1) == 0) {
    FUN_01bab630(&HNFFPPPDKDK_TypeInfo);
    FUN_01bab630(&StringLiteral_10239);
    FUN_01bab630(&StringLiteral_10213);
    DAT_045668fe = 1;
  }
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlElement_o *)
             (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_10239,(pSVar1->klass->vtable)._51_get_Item.method);
    if (pSVar2 == (System_Xml_XmlElement_o *)0x0) {
      pSVar2 = EIABCPKDEBD__BHPIHHJHELJ
                         ((__this->fields).HJKLIDCAEOE,StringLiteral_10239,(MethodInfo *)0x0);
    }
    pSVar2 = EIABCPKDEBD__BHPIHHJHELJ
                       ((System_Xml_XmlNode_o *)pSVar2,StringLiteral_10213,(MethodInfo *)0x0);
    __this_00 = (HNFFPPPDKDK_o *)thunk_FUN_01bda818(HNFFPPPDKDK_TypeInfo);
    HNFFPPPDKDK___ctor(__this_00,(System_Xml_XmlNode_o *)pSVar2,(MethodInfo *)0x0);
    if ((EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) && (__this_00 != (HNFFPPPDKDK_o *)0x0)) {
      HNFFPPPDKDK__HCOCAAIGNNL(__this_00,(EIKFGOCCOIE->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
      CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (EIKFGOCCOIE->fields).NOPGBJNLFHM.fields,(MethodInfo *)0x0);
      HNFFPPPDKDK__AKJBHHAHMPG(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      HNFFPPPDKDK__DJJHOOKLHHL(__this_00,(EIKFGOCCOIE->fields).AEIJFFBOBCP,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

