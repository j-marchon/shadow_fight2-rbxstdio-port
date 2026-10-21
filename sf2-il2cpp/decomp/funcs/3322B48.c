// IAGNPGHOAIC$$DCLCMBBOGDD @ RVA 0x3322B48

System_String_o * IAGNPGHOAIC__DCLCMBBOGDD(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03422b48 to 03522b5f has its CatchHandler @ 034232cc */
                    /* try { // try from 03422b60 to 03522b7b has its CatchHandler @ 034232d0 */
  if ((DAT_04567859 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
                    /* try { // try from 03422b7c to 035232a7 has its CatchHandler @ 034229e4 */
    FUN_01bab630(&StringLiteral_1492);
    DAT_04567859 = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar1 = MGENAMAJALB__JKLFLNNFEMP((MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (pSVar1,StringLiteral_1492,(__this->fields).OMJHOKDPLKI,(MethodInfo *)0x0);
  return pSVar1;
}

