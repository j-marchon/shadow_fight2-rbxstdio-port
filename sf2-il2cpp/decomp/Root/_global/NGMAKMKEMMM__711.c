// TypeDefIndex 711
// Namespace: 
// public class NGMAKMKEMMM : HPEENDCCJND
// Fields:

// ===== protected override object CJOHHBMFAAG()  [RVA 0x303B004]
// NGMAKMKEMMM$$CJOHHBMFAAG @ RVA 0x303B004

Il2CppObject * NGMAKMKEMMM__CJOHHBMFAAG(NGMAKMKEMMM_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_48;
  
  if ((DAT_04565d7f & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04565d7f = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar4 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  dVar5 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  dVar6 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
  local_48 = HPEENDCCJND__AJKIGPMHEEO
                       ((HPEENDCCJND_o *)__this,((dVar2 * -dVar3 - dVar4) - dVar5) + dVar6,
                        (MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_48);
  return pIVar1;
}


// ===== public void .ctor()  [RVA 0x303B0EC]
// NGMAKMKEMMM$$.ctor @ RVA 0x303B0EC

void NGMAKMKEMMM___ctor(NGMAKMKEMMM_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x303B0F4]
// NGMAKMKEMMM$$ODGFCLOEKJD @ RVA 0x303B0F4

void NGMAKMKEMMM__ODGFCLOEKJD(NGMAKMKEMMM_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_04565d80 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04565d80 = 1;
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


// ===== protected override string AKPPNIPNKDH()  [RVA 0x303B17C]
// NGMAKMKEMMM$$AKPPNIPNKDH @ RVA 0x303B17C

System_String_o * NGMAKMKEMMM__AKPPNIPNKDH(NGMAKMKEMMM_o *__this,MethodInfo *method)

{
  if ((DAT_04565d81 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1241/*"-(+(-(v1))) * ---(v2) + -v3 - +v4 ++--++--v5"*/);
    DAT_04565d81 = 1;
  }
  return StringLiteral_1241/*"-(+(-(v1))) * ---(v2) + -v3 - +v4 ++--++--v5"*/;
}

