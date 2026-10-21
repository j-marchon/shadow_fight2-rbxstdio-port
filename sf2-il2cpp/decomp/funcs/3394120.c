// KDADMJGPAOM$$Clone @ RVA 0x3394120

KDADMJGPAOM_o * KDADMJGPAOM__Clone(KDADMJGPAOM_o *__this,MethodInfo *method)

{
  KDADMJGPAOM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567c41 & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    DAT_04567c41 = 1;
    method = extraout_x1;
  }
  __this_00 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo,method);
  KDADMJGPAOM___ctor(__this_00,__this,in_x2);
  return __this_00;
}

