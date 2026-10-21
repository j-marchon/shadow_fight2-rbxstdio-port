// TypeDefIndex 1718
// Namespace: 
// public class BCLIMJMEMPJ : HPEENDCCJND
// Fields:

// ===== protected override object CJOHHBMFAAG()  [RVA 0x31D6C90]
// BCLIMJMEMPJ$$CJOHHBMFAAG @ RVA 0x31D6C90

Il2CppObject * BCLIMJMEMPJ__CJOHHBMFAAG(BCLIMJMEMPJ_o *__this,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  int32_t local_24;
  
  if ((DAT_04566cec & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_04566cec = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  if (dVar2 <= dVar3) {
    dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
    dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
    CJNHFNHJHPE = dVar3 <= dVar2;
  }
  else {
    CJNHFNHJHPE = false;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_24 = GJFEBGNFFBA__MELICHAIADL(CJNHFNHJHPE,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  return pIVar1;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x31D6D84]
// BCLIMJMEMPJ$$AKPPNIPNKDH @ RVA 0x31D6D84

System_String_o * BCLIMJMEMPJ__AKPPNIPNKDH(BCLIMJMEMPJ_o *__this,MethodInfo *method)

{
  if ((DAT_04566ced & 1) == 0) {
    FUN_01bab630(&StringLiteral_1088/*"(v1 lessequal v2) and (v3 moreequal v4)"*/);
    DAT_04566ced = 1;
  }
  return StringLiteral_1088/*"(v1 lessequal v2) and (v3 moreequal v4)"*/;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x31D6DC4]
// BCLIMJMEMPJ$$ODGFCLOEKJD @ RVA 0x31D6DC4

void BCLIMJMEMPJ__ODGFCLOEKJD(BCLIMJMEMPJ_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_04566cee & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04566cee = 1;
  }
  iVar1 = 4;
  do {
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,0,4,(MethodInfo *)0x0);
    MNODCIGLHEL = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ===== public void .ctor()  [RVA 0x31D6E4C]
// BCLIMJMEMPJ$$.ctor @ RVA 0x31D6E4C

void BCLIMJMEMPJ___ctor(BCLIMJMEMPJ_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}

