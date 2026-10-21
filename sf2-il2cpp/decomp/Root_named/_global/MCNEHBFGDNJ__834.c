// TypeDefIndex 834
// Namespace: 
// public class MCNEHBFGDNJ : HPEENDCCJND
// Fields:

// ===== protected override void ODGFCLOEKJD()  [RVA 0x3081714]
// MCNEHBFGDNJ$$ODGFCLOEKJD @ RVA 0x3081714

void MCNEHBFGDNJ__ODGFCLOEKJD(MCNEHBFGDNJ_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_04565ff7 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04565ff7 = 1;
  }
  iVar1 = 4;
  do {
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,1,0xff,(MethodInfo *)0x0);
    MNODCIGLHEL = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x308179C]
// MCNEHBFGDNJ$$AKPPNIPNKDH @ RVA 0x308179C

System_String_o * MCNEHBFGDNJ__AKPPNIPNKDH(MCNEHBFGDNJ_o *__this,MethodInfo *method)

{
  if ((DAT_04565ff8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_21922/*"v1 * v2 + v3 - v4 * v4 / v4"*/);
    DAT_04565ff8 = 1;
  }
  return StringLiteral_21922/*"v1 * v2 + v3 - v4 * v4 / v4"*/;
}


// ===== public void .ctor()  [RVA 0x30817DC]
// MCNEHBFGDNJ$$.ctor @ RVA 0x30817DC

void MCNEHBFGDNJ___ctor(MCNEHBFGDNJ_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x30817E4]
// MCNEHBFGDNJ$$CJOHHBMFAAG @ RVA 0x30817E4

Il2CppObject * MCNEHBFGDNJ__CJOHHBMFAAG(MCNEHBFGDNJ_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_48;
  
  if ((DAT_04565ff9 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04565ff9 = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar4 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  dVar5 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  dVar6 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  dVar7 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  local_48 = HPEENDCCJND__AJKIGPMHEEO
                       ((HPEENDCCJND_o *)__this,(dVar2 * dVar3 + dVar4) - (dVar5 * dVar6) / dVar7,
                        (MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_48);
  return pIVar1;
}

