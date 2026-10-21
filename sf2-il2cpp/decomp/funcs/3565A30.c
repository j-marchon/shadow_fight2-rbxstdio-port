// CADIGFIBFEN$$Clone @ RVA 0x3565A30

CADIGFIBFEN_o * CADIGFIBFEN__Clone(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  CADIGFIBFEN_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568bf0 & 1) == 0) {
    FUN_01bab630(&CADIGFIBFEN_TypeInfo);
    DAT_04568bf0 = 1;
    method = extraout_x1;
  }
  __this_00 = (CADIGFIBFEN_o *)thunk_FUN_01bda818(CADIGFIBFEN_TypeInfo,method);
  CADIGFIBFEN___ctor(__this_00,__this,in_x2);
  return __this_00;
}

