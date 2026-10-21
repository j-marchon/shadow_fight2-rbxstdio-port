// CocosAnimation$$LerpAnimation01 @ RVA 0x33F8360

void CocosAnimation__LerpAnimation01(CocosAnimation_o *__this,float MMOKLAAAIPP,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  float fVar3;
  
  fVar3 = (float)(__this->fields)._BNKDPKMAPPM_k__BackingField;
  (__this->fields).BJIKPLGMOMI = (__this->fields)._PPEGDOHGLJJ_k__BackingField * fVar3 * MMOKLAAAIPP
  ;
  if (DAT_0456033b == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_0456033b = '\x01';
    method = extraout_x1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  fVar3 = fVar3 * MMOKLAAAIPP;
  iVar2 = (__this->fields).OFNNCOJAFJB;
  iVar1 = -0x80000000;
  if ((float)(int)fVar3 != INFINITY) {
    iVar1 = (int)fVar3;
  }
  iVar1 = (__this->fields).PAGAGEMKILK + iVar1;
  if (iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
  (__this->fields).FJJPFEGPEFA = iVar1;
  CocosAnimation__DHEBEHGMBOA(__this,iVar1,in_x2);
  return;
}

