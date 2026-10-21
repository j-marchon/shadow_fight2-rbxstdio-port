// TypeDefIndex 1987
// Namespace: 
// public class PFBOJPAIAKF : HPEENDCCJND
// Fields:

// ===== protected override string AKPPNIPNKDH()  [RVA 0x32916E0]
// PFBOJPAIAKF$$AKPPNIPNKDH @ RVA 0x32916E0

System_String_o * PFBOJPAIAKF__AKPPNIPNKDH(PFBOJPAIAKF_o *__this,MethodInfo *method)

{
  if ((DAT_04567326 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1337/*"-abs(-cos(-sin(v1) ) ) - +sqrt( +abs( +sin(v2) ) )"*/);
    DAT_04567326 = 1;
  }
  return StringLiteral_1337/*"-abs(-cos(-sin(v1) ) ) - +sqrt( +abs( +sin(v2) ) )"*/;
}


// ===== public void .ctor()  [RVA 0x3291720]
// PFBOJPAIAKF$$.ctor @ RVA 0x3291720

void PFBOJPAIAKF___ctor(PFBOJPAIAKF_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x3291728]
// PFBOJPAIAKF$$ODGFCLOEKJD @ RVA 0x3291728

void PFBOJPAIAKF__ODGFCLOEKJD(PFBOJPAIAKF_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_04567327 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04567327 = 1;
  }
  iVar1 = 5;
  do {
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,1,500,(MethodInfo *)0x0);
    MNODCIGLHEL = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x32917B0]
// PFBOJPAIAKF$$CJOHHBMFAAG @ RVA 0x32917B0

Il2CppObject * PFBOJPAIAKF__CJOHHBMFAAG(PFBOJPAIAKF_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  double local_28;
  
  if ((DAT_04567328 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567328 = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar2 = sin(dVar2);
  dVar2 = cos(dVar2);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar3 = sin(dVar3);
  local_28 = HPEENDCCJND__AJKIGPMHEEO
                       ((HPEENDCCJND_o *)__this,-ABS(dVar2) - SQRT(ABS(dVar3)),(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
  return pIVar1;
}

