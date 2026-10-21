// TypeDefIndex 858
// Namespace: 
// public class OJGIIPOFCIB : HPEENDCCJND
// Fields:

// ===== protected override void ODGFCLOEKJD()  [RVA 0x3089BF4]
// OJGIIPOFCIB$$ODGFCLOEKJD @ RVA 0x3089BF4

void OJGIIPOFCIB__ODGFCLOEKJD(OJGIIPOFCIB_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_04566043 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04566043 = 1;
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


// ===== public void .ctor()  [RVA 0x3089C7C]
// OJGIIPOFCIB$$.ctor @ RVA 0x3089C7C

void OJGIIPOFCIB___ctor(OJGIIPOFCIB_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x3089C84]
// OJGIIPOFCIB$$AKPPNIPNKDH @ RVA 0x3089C84

System_String_o * OJGIIPOFCIB__AKPPNIPNKDH(OJGIIPOFCIB_o *__this,MethodInfo *method)

{
  if ((DAT_04566044 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1086/*"(v1 equal v2) or (v3 notequal v4)"*/);
    DAT_04566044 = 1;
  }
  return StringLiteral_1086/*"(v1 equal v2) or (v3 notequal v4)"*/;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x3089CC4]
// OJGIIPOFCIB$$CJOHHBMFAAG @ RVA 0x3089CC4

Il2CppObject * OJGIIPOFCIB__CJOHHBMFAAG(OJGIIPOFCIB_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool CJNHFNHJHPE;
  double dVar2;
  double dVar3;
  int32_t local_24;
  
  if ((DAT_04566045 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_04566045 = 1;
  }
  CJNHFNHJHPE = true;
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  if (dVar2 != dVar3) {
    dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
    dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
    CJNHFNHJHPE = dVar2 != dVar3;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_24 = GJFEBGNFFBA__MELICHAIADL(CJNHFNHJHPE,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  return pIVar1;
}

