// CGALNIOABHK$$CMDOHLDFLLF @ RVA 0x3443740

System_String_o * CGALNIOABHK__CMDOHLDFLLF(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlDocument_o *EPHIMGPGNPK;
  
  if ((DAT_04568236 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1534);
    FUN_01bab630(&StringLiteral_1142);
    DAT_04568236 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__AAELNNJNDIF((MethodInfo *)0x0);
  EPHIMGPGNPK = GIAMPEGMNHE__IBJOMPOLPCC
                          (pSVar1,StringLiteral_1534,1,true,true,false,(MethodInfo *)0x0);
  if (EPHIMGPGNPK != (System_Xml_XmlDocument_o *)0x0) {
    pSVar1 = EIABCPKDEBD__KGPPJAHDJEH(EPHIMGPGNPK,(MethodInfo *)0x0);
    return pSVar1;
  }
  return StringLiteral_1142;
}

