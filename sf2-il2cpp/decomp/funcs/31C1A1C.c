// ADJEBFOPFFF$$DFDCJAKKDIP @ RVA 0x31C1A1C

void ADJEBFOPFFF__DFDCJAKKDIP(ADJEBFOPFFF_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  Il2CppObject *extraout_x1;
  ADJEBFOPFFF_Fields *pAVar1;
  
  if ((DAT_04566c1e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10941);
    DAT_04566c1e = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pAVar1 = &__this->fields;
  if (pAVar1->KPIJKNDCENG != (BKKPAKHJDKB_o *)0x0) {
    BKKPAKHJDKB__FGNINNOOCCL(pAVar1->KPIJKNDCENG,(MethodInfo *)0x0);
    pAVar1->KPIJKNDCENG = (BKKPAKHJDKB_o *)0x0;
    thunk_FUN_01c20e04(pAVar1,0);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,IMMNELPBGIF);
  }
  UnityEngine_Debug__LogError(StringLiteral_10941,(MethodInfo *)0x0);
  return;
}

