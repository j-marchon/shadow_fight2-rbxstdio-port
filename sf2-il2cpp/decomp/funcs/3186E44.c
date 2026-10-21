// CKCJCNFBOLB.<>c$$JGBLDGIPKHM @ RVA 0x3186E44

System_String_o * CKCJCNFBOLB_<>c__JGBLDGIPKHM(CKCJCNFBOLB___c_o *__this,MethodInfo *method)

{
  NLPJLHOEAOE_o *__this_00;
  AFFHKININGD_o *pAVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  PAMEPBLOLPB_o *pPVar3;
  int local_24;
  
  if ((DAT_045669e1 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_18233);
                    /* try { // try from 03286e8c to 03386e97 has its CatchHandler @ 03286b08 */
    FUN_01bab630(&StringLiteral_15241);
    DAT_045669e1 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03286e98 to 03386e9f has its CatchHandler @ 03286ea0 */
  pSVar2 = StringLiteral_15241;
                    /* catch() { ... } // from try @ 03286e24 with catch @ 03286ea0
                       catch() { ... } // from try @ 03286e98 with catch @ 03286ea0 */
                    /* try { // try from 03286ea4 to 0338702b has its CatchHandler @ 03286ea4
                       catch() { ... } // from try @ 03286ea4 with catch @ 03286ea4
                       catch() { ... } // from try @ 032873b8 with catch @ 03286ea4
                       catch() { ... } // from try @ 032873fc with catch @ 03286ea4
                       catch() { ... } // from try @ 03287554 with catch @ 03286ea4
                       catch() { ... } // from try @ 0328755c with catch @ 03286ea4
                       catch() { ... } // from try @ 03287658 with catch @ 03286ea4 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pAVar1 = NLPJLHOEAOE__POGAPHAJGBC(__this_00,pSVar2,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_18233;
  if (pAVar1 != (AFFHKININGD_o *)0x0) {
    pPVar3 = (pAVar1->fields).JPBIBBBMCCD;
    if (pPVar3 == (PAMEPBLOLPB_o *)0x0) {
      local_24 = 5;
    }
    else {
      local_24 = (pPVar3->fields).AAECGBAMDEL + 5;
    }
    pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  }
  return pSVar2;
}

