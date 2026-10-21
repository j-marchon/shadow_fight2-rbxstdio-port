// DBOOKMFPFNI$$Clone @ RVA 0x34DAE18

DBOOKMFPFNI_o * DBOOKMFPFNI__Clone(DBOOKMFPFNI_o *__this,MethodInfo *method)

{
  DBOOKMFPFNI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456870a & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_TypeInfo);
    DAT_0456870a = 1;
    method = extraout_x1;
  }
  __this_00 = (DBOOKMFPFNI_o *)thunk_FUN_01bda818(DBOOKMFPFNI_TypeInfo,method);
  DBOOKMFPFNI___ctor(__this_00,__this,in_x2);
  return __this_00;
}

