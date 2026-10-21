// NFNBHPOJFNJ$$OMENJAFAEAA @ RVA 0x335EB68

System_String_o * NFNBHPOJFNJ__OMENJAFAEAA(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567a6b & 1) == 0) {
                    /* try { // try from 0345eb84 to 0355ed03 has its CatchHandler @ 0345e6d4 */
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1519);
    DAT_04567a6b = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__CAACPGEHHFC((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1519,(MethodInfo *)0x0);
  return pSVar1;
}

