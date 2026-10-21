// FFDBJONGOLC.<>c$$PELHJKCGEMC @ RVA 0x355C58C

System_String_o * FFDBJONGOLC_<>c__PELHJKCGEMC(FFDBJONGOLC___c_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  undefined4 local_14;
  
  if ((DAT_04568b84 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568b84 = 1;
    method = extraout_x1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  local_14 = 0x2d;
  pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  return pSVar1;
}

