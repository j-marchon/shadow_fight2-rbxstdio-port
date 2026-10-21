// TypeDefIndex 2848
// Namespace: 
// public class JAHFLFBFOID : HPEENDCCJND
// Fields:

// ===== protected override void ODGFCLOEKJD()  [RVA 0x34320E8]
// JAHFLFBFOID$$ODGFCLOEKJD @ RVA 0x34320E8

void JAHFLFBFOID__ODGFCLOEKJD(JAHFLFBFOID_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_04568176 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04568176 = 1;
  }
  iVar1 = 4;
  do {
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,0,2,(MethodInfo *)0x0);
    MNODCIGLHEL = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x3432170]
// JAHFLFBFOID$$CJOHHBMFAAG @ RVA 0x3432170

Il2CppObject * JAHFLFBFOID__CJOHHBMFAAG(JAHFLFBFOID_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool CJNHFNHJHPE;
  double dVar2;
  double dVar3;
  int32_t local_24;
  
  if ((DAT_04568177 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_04568177 = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  if (dVar3 <= dVar2) {
    CJNHFNHJHPE = false;
  }
  else {
    dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
    dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
    CJNHFNHJHPE = dVar3 < dVar2;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_24 = GJFEBGNFFBA__MELICHAIADL(CJNHFNHJHPE,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  return pIVar1;
}


// ===== public void .ctor()  [RVA 0x3432264]
// JAHFLFBFOID$$.ctor @ RVA 0x3432264

void JAHFLFBFOID___ctor(JAHFLFBFOID_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x343226C]
// JAHFLFBFOID$$AKPPNIPNKDH @ RVA 0x343226C

System_String_o * JAHFLFBFOID__AKPPNIPNKDH(JAHFLFBFOID_o *__this,MethodInfo *method)

{
  if ((DAT_04568178 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1087/*"(v1 less v2) and (v3 more v4)"*/);
    DAT_04568178 = 1;
  }
  return StringLiteral_1087/*"(v1 less v2) and (v3 more v4)"*/;
}

