// TypeDefIndex 1547
// Namespace: 
// public class PHGBGGEGMLE : HPEENDCCJND
// Fields:

// ===== public void .ctor()  [RVA 0x31A9748]
// PHGBGGEGMLE$$.ctor @ RVA 0x31A9748

void PHGBGGEGMLE___ctor(PHGBGGEGMLE_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x31A9750]
// PHGBGGEGMLE$$CJOHHBMFAAG @ RVA 0x31A9750

Il2CppObject * PHGBGGEGMLE__CJOHHBMFAAG(PHGBGGEGMLE_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool CJNHFNHJHPE;
  double dVar2;
  double dVar3;
  int32_t local_24;
  
  if ((DAT_04566b27 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566b27 = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  if (ABS(dVar2) <= ABS(dVar3)) {
    dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
    CJNHFNHJHPE = SQRT(ABS(dVar2)) < SQRT(ABS(dVar3));
  }
  else {
    CJNHFNHJHPE = true;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_24 = GJFEBGNFFBA__MELICHAIADL(CJNHFNHJHPE,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  return pIVar1;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x31A9888]
// PHGBGGEGMLE$$AKPPNIPNKDH @ RVA 0x31A9888

System_String_o * PHGBGGEGMLE__AKPPNIPNKDH(PHGBGGEGMLE_o *__this,MethodInfo *method)

{
  if ((DAT_04566b28 & 1) == 0) {
    FUN_01bab630(&StringLiteral_982/*"( abs(---(v1)) more (abs(+(+v2))) ) or ( sqrt(abs(---v3)) less ( sqrt(+abs(+v4)) ) )"*/);
    DAT_04566b28 = 1;
  }
  return StringLiteral_982/*"( abs(---(v1)) more (abs(+(+v2))) ) or ( sqrt(abs(---v3)) less ( sqrt(+abs(+v4)) ) )"*/;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x31A98C8]
// PHGBGGEGMLE$$ODGFCLOEKJD @ RVA 0x31A98C8

void PHGBGGEGMLE__ODGFCLOEKJD(PHGBGGEGMLE_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_04566b29 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04566b29 = 1;
  }
  iVar1 = 10;
  do {
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,-1000,1000,(MethodInfo *)0x0);
    MNODCIGLHEL = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

