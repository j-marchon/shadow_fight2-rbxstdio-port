// MatchingDialog$$DAPAJLBAJPJ @ RVA 0x342D420

void MatchingDialog__DAPAJLBAJPJ(MatchingDialog_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_0456814e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_5961);
    DAT_0456814e = 1;
    method = extraout_x1;
  }
  MatchingDialog__DAKEBOMPALG(__this,method);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_5961,(MethodInfo *)0x0);
  MatchingDialog__LGMIPDOLEBO(__this,method_00);
  return;
}

