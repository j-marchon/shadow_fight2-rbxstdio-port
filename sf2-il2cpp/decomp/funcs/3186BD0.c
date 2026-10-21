// CKCJCNFBOLB.<>c$$FKEEJEECOHP @ RVA 0x3186BD0

System_String_o * CKCJCNFBOLB_<>c__FKEEJEECOHP(CKCJCNFBOLB___c_o *__this,MethodInfo *method)

{
  CFGLKHFFEKA_o *__this_00;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  int32_t local_14;
  
                    /* try { // try from 03286bd8 to 03386bff has its CatchHandler @ 03286df0 */
  if ((DAT_045669de & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045669de = 1;
    method = extraout_x1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
  }
  __this_00 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
  if (__this_00 != (CFGLKHFFEKA_o *)0x0) {
    local_14 = CFGLKHFFEKA__KEAMCFNFPHB(__this_00,(MethodInfo *)0x0);
    pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
                    /* try { // try from 03286c34 to 03386c5f has its CatchHandler @ 03286dec */
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

