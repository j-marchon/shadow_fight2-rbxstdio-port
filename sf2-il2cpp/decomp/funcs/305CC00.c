// ACHLOMELAJE$$DAELLILNEIN @ RVA 0x305CC00

System_String_o * ACHLOMELAJE__DAELLILNEIN(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar2;
  MethodInfo *in_x2;
  
  if ((DAT_04565ee7 & 1) == 0) {
    FUN_01bab630(&POHNPIMJDOI_TypeInfo);
    FUN_01bab630(&StringLiteral_7463);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565ee7 = 1;
  }
  LBJNDMNEJJB = ACHLOMELAJE__EHEEJLHPICC(__this,StringLiteral_7463,in_x2);
  pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    return StringLiteral_1;
  }
  if ((POHNPIMJDOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = POHNPIMJDOI__CLACEPEKAIM(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}

