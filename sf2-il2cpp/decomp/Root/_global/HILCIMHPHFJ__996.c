// TypeDefIndex 996
// Namespace: 
// public class HILCIMHPHFJ : HPEENDCCJND
// Fields:

// ===== public void .ctor()  [RVA 0x30BCE04]
// HILCIMHPHFJ$$.ctor @ RVA 0x30BCE04

void HILCIMHPHFJ___ctor(HILCIMHPHFJ_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x30BCE0C]
// HILCIMHPHFJ$$AKPPNIPNKDH @ RVA 0x30BCE0C

System_String_o * HILCIMHPHFJ__AKPPNIPNKDH(HILCIMHPHFJ_o *__this,MethodInfo *method)

{
  if ((DAT_04566255 & 1) == 0) {
    FUN_01bab630(&StringLiteral_16274/*"abs(v1 - v2 * v3 + v4 / v5 * v5 - v6)"*/);
    DAT_04566255 = 1;
  }
  return StringLiteral_16274/*"abs(v1 - v2 * v3 + v4 / v5 * v5 - v6)"*/;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x30BCE4C]
// HILCIMHPHFJ$$ODGFCLOEKJD @ RVA 0x30BCE4C

void HILCIMHPHFJ__ODGFCLOEKJD(HILCIMHPHFJ_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_04566256 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04566256 = 1;
  }
  iVar1 = 6;
  do {
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,1,0xff,(MethodInfo *)0x0);
    MNODCIGLHEL = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x30BCED4]
// HILCIMHPHFJ$$CJOHHBMFAAG @ RVA 0x30BCED4

Il2CppObject * HILCIMHPHFJ__CJOHHBMFAAG(HILCIMHPHFJ_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_58;
  
  if ((DAT_04566257 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04566257 = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar4 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  dVar5 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  dVar6 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
  dVar7 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
  dVar8 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,6,(MethodInfo *)0x0);
  dVar8 = ((dVar2 - dVar3 * dVar4) + (dVar5 / dVar6) * dVar7) - dVar8;
  dVar2 = -dVar8;
  if (0.0 <= dVar8) {
    dVar2 = dVar8;
  }
  local_58 = HPEENDCCJND__AJKIGPMHEEO((HPEENDCCJND_o *)__this,dVar2,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_58);
  return pIVar1;
}

