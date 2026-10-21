// AGCDKMOOJGI$$HLJABMJMGFI @ RVA 0x32D6314

bool AGCDKMOOJGI__HLJABMJMGFI(AGCDKMOOJGI_o *__this,int32_t ODIAFMNGOLA,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_04567590 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_11008);
    DAT_04567590 = 1;
  }
  iVar1 = (__this->fields).EIMDJHJAHKK;
  if (iVar1 == 2) {
    bVar2 = true;
  }
  else if (iVar1 == 1) {
    bVar2 = ODIAFMNGOLA == 1;
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11008,(MethodInfo *)0x0);
    bVar2 = false;
  }
  return bVar2;
}

