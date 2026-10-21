// JMDPBFOCHHP.FNILDHLJBBJ$$ToString @ RVA 0x2FF9C3C

System_String_o *
JMDPBFOCHHP_FNILDHLJBBJ__ToString(JMDPBFOCHHP_FNILDHLJBBJ_o *__this,MethodInfo *method)

{
  System_String_o *str2;
  MethodInfo *extraout_x1;
  System_String_o *pSVar1;
  
  if ((DAT_04565ac6 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&StringLiteral_294);
    DAT_04565ac6 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).JFDGLPNMELO;
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(bool_TypeInfo,method);
  }
  str2 = System_Boolean__ToString((bool)((char)__this + 'P'),(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_294,str2,(MethodInfo *)0x0);
  return pSVar1;
}

