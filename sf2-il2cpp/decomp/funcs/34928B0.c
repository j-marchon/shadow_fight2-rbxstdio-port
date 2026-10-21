// ALOGBMGGBEP$$Clone @ RVA 0x34928B0

ALOGBMGGBEP_o * ALOGBMGGBEP__Clone(ALOGBMGGBEP_o *__this,MethodInfo *method)

{
  ALOGBMGGBEP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456842c & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    DAT_0456842c = 1;
    method = extraout_x1;
  }
  __this_00 = (ALOGBMGGBEP_o *)thunk_FUN_01bda818(ALOGBMGGBEP_TypeInfo,method);
  ALOGBMGGBEP___ctor(__this_00,__this,in_x2);
  return __this_00;
}

