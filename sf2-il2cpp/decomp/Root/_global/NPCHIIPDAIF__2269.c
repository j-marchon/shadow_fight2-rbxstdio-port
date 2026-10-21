// TypeDefIndex 2269
// Namespace: 
// public class NPCHIIPDAIF : HPEENDCCJND
// Fields:

// ===== public void .ctor()  [RVA 0x3302674]
// NPCHIIPDAIF$$.ctor @ RVA 0x3302674

void NPCHIIPDAIF___ctor(NPCHIIPDAIF_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x330267C]
// NPCHIIPDAIF$$AKPPNIPNKDH @ RVA 0x330267C

System_String_o * NPCHIIPDAIF__AKPPNIPNKDH(NPCHIIPDAIF_o *__this,MethodInfo *method)

{
  if ((DAT_0456772b & 1) == 0) {
    FUN_01bab630(&StringLiteral_21925/*"v1 / v2  + v3 % v4"*/);
    DAT_0456772b = 1;
  }
  return StringLiteral_21925/*"v1 / v2  + v3 % v4"*/;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x33026BC]
// NPCHIIPDAIF$$ODGFCLOEKJD @ RVA 0x33026BC

void NPCHIIPDAIF__ODGFCLOEKJD(NPCHIIPDAIF_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_0456772c & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_0456772c = 1;
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


// ===== protected override object CJOHHBMFAAG()  [RVA 0x3302744]
// NPCHIIPDAIF$$CJOHHBMFAAG @ RVA 0x3302744

Il2CppObject * NPCHIIPDAIF__CJOHHBMFAAG(NPCHIIPDAIF_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double __y;
  double local_38;
  
  if ((DAT_0456772d & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_0456772d = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar4 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  __y = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  dVar4 = fmod(dVar4,__y);
  local_38 = HPEENDCCJND__AJKIGPMHEEO
                       ((HPEENDCCJND_o *)__this,dVar2 / dVar3 + dVar4,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_38);
  return pIVar1;
}

