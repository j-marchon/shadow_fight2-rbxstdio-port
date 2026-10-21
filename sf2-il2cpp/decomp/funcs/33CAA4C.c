// FCPAHDIGJGN$$.ctor @ RVA 0x33CAA4C

void FCPAHDIGJGN___ctor(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e17 & 1) == 0) {
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    DAT_04567e17 = 1;
    method = extraout_x1;
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NHJCFGACFDF_TypeInfo,method);
  }
  NHJCFGACFDF___ctor((NHJCFGACFDF_o *)__this,(MethodInfo *)0x0);
  return;
}

