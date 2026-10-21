// NFNBHPOJFNJ$$IOPLIMJLKKE @ RVA 0x335DA34

System_String_o * NFNBHPOJFNJ__IOPLIMJLKKE(MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* try { // try from 0345da44 to 0355da4b has its CatchHandler @ 0345dbac */
  if ((DAT_04567a6d & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1520);
                    /* try { // try from 0345da68 to 0355da8b has its CatchHandler @ 0345dbc8 */
    DAT_04567a6d = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__CAACPGEHHFC((MethodInfo *)0x0);
                    /* try { // try from 0345da9c to 0355dac3 has its CatchHandler @ 0345dbc4 */
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1520,(MethodInfo *)0x0);
  return pSVar1;
}

