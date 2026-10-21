// ECAJEFMDDMA$$OFPHPMGMCAL @ RVA 0x314A7F8

System_String_o * ECAJEFMDDMA__OFPHPMGMCAL(ECAJEFMDDMA_o *__this,MethodInfo *method)

{
  System_String_o *str2;
  MethodInfo *extraout_x1;
  System_String_o *pSVar1;
  
  if ((DAT_045667b1 & 1) == 0) {
                    /* try { // try from 0324a820 to 0334a827 has its CatchHandler @ 0324a89c */
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&StringLiteral_211);
    DAT_045667b1 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).MLLMBEEDACP;
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0324a850 to 0334a85b has its CatchHandler @ 0324a894 */
    thunk_FUN_01ba7564(bool_TypeInfo,method);
  }
                    /* try { // try from 0324a85c to 0334a88b has its CatchHandler @ 0324a71c */
  str2 = System_Boolean__ToString((bool)((char)__this + 'b'),(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_211,str2,(MethodInfo *)0x0);
  return pSVar1;
}

