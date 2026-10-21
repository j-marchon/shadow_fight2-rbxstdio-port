// OPNFCOGALLI$$HONNLNIEELE @ RVA 0x3107EA0

void OPNFCOGALLI__HONNLNIEELE(OPNFCOGALLI_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456651d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_20763);
    DAT_0456651d = 1;
  }
  if (CJNHFNHJHPE < 0) {
    (__this->fields).DMJAJGGGHPF = -1;
  }
  else {
    (__this->fields).DMJAJGGGHPF = 1;
    if (CJNHFNHJHPE == 0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_20763,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

