// NBOACIABNIG$$.ctor @ RVA 0x3583EC0

void NBOACIABNIG___ctor(NBOACIABNIG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar1;
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o **ppEVar2;
  
  if ((DAT_04568ce9 & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    DAT_04568ce9 = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,0x15,(MethodInfo *)0x0);
  if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = CGALNIOABHK__COCMBLDPDIM(AHDGNOJPPIB,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).MAJHBNINPDI;
  *ppEVar2 = pEVar1;
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
  return;
}

