// CNDPAJOLKFN$$FAOBHLCDKJI @ RVA 0x307C270

CNDPAJOLKFN_o * CNDPAJOLKFN__FAOBHLCDKJI(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  MethodInfo *extraout_x1;
  PKHLGDMJPMF_Fields PVar1;
  float fVar2;
  
  if ((DAT_04565fda & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565fda = 1;
    method = extraout_x1;
  }
  PVar1 = (__this->fields).super;
  fVar2 = (__this->fields).PPOPAMHBMGG;
  __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)__this_00,0.0,0.0,(MethodInfo *)0x0);
  (__this_00->fields).super = PVar1;
  (__this_00->fields).PPOPAMHBMGG = fVar2;
  return __this_00;
}

