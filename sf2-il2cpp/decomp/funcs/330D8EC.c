// GIAMPEGMNHE$$GMNIIJJFIJK @ RVA 0x330D8EC

System_Xml_XmlDocument_o *
GIAMPEGMNHE__GMNIIJJFIJK
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,int32_t CFHHLCMKGCH,
          bool ADDHOAPEIJI,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlDocument_o *ILENGCADNIH_00;
  System_String_o *pSVar2;
  MethodInfo *in_x6;
  
  if ((DAT_04567798 & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567798 = 1;
  }
  ILENGCADNIH_00 =
       GIAMPEGMNHE__IBJOMPOLPCC(EIJDDKJONFO,ILENGCADNIH,CFHHLCMKGCH,ADDHOAPEIJI,true,false,in_x6);
  if ((ILENGCADNIH_00 != (System_Xml_XmlDocument_o *)0x0) && ((CFHHLCMKGCH | 2U) == 2)) {
    bVar1 = System_String__op_Inequality(ILENGCADNIH,StringLiteral_1,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_1;
    if (bVar1) {
      pSVar2 = System_String__Concat(StringLiteral_1492,ILENGCADNIH,(MethodInfo *)0x0);
    }
    pSVar2 = System_String__Concat(EIJDDKJONFO,pSVar2,(MethodInfo *)0x0);
    if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
    }
    CFJANHACGMG__AMELFFLEPNF(ILENGCADNIH_00,pSVar2,true,(MethodInfo *)0x0);
  }
  return ILENGCADNIH_00;
}

