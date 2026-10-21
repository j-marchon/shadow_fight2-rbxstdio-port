// TypeDefIndex 3070
// Namespace: 
// public class NBKJINDFDDM : HPEENDCCJND
// Fields:

// ===== protected override object CJOHHBMFAAG()  [RVA 0x34C4F84]
// NBKJINDFDDM$$CJOHHBMFAAG @ RVA 0x34C4F84

Il2CppObject * NBKJINDFDDM__CJOHHBMFAAG(NBKJINDFDDM_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_38;
  
  if ((DAT_0456862c & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_0456862c = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar4 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  local_38 = HPEENDCCJND__AJKIGPMHEEO
                       ((HPEENDCCJND_o *)__this,dVar2 - dVar3 / dVar4,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_38);
  return pIVar1;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x34C5030]
// NBKJINDFDDM$$AKPPNIPNKDH @ RVA 0x34C5030

System_String_o * NBKJINDFDDM__AKPPNIPNKDH(NBKJINDFDDM_o *__this,MethodInfo *method)

{
  if ((DAT_0456862d & 1) == 0) {
    FUN_01bab630(&StringLiteral_21924/*"v1 - v2 / v3"*/);
    DAT_0456862d = 1;
  }
  return StringLiteral_21924/*"v1 - v2 / v3"*/;
}


// ===== public void .ctor()  [RVA 0x34C5070]
// NBKJINDFDDM$$.ctor @ RVA 0x34C5070

void NBKJINDFDDM___ctor(NBKJINDFDDM_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x34C5078]
// NBKJINDFDDM$$ODGFCLOEKJD @ RVA 0x34C5078

void NBKJINDFDDM__ODGFCLOEKJD(NBKJINDFDDM_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_0456862e & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_0456862e = 1;
  }
  iVar1 = 3;
  do {
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,1,0xff,(MethodInfo *)0x0);
    MNODCIGLHEL = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

