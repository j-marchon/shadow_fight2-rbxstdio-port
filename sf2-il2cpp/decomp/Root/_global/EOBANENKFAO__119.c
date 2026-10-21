// TypeDefIndex 119
// Namespace: 
// public class EOBANENKFAO : HPEENDCCJND
// Fields:

// ===== protected override void ODGFCLOEKJD()  [RVA 0x3011778]
// EOBANENKFAO$$ODGFCLOEKJD @ RVA 0x3011778

void EOBANENKFAO__ODGFCLOEKJD(EOBANENKFAO_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int iVar2;
  double local_28;
  
  if ((DAT_04565bae & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04565bae = 1;
  }
  iVar2 = 5;
  do {
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,1,500,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,pIVar1,(MethodInfo *)0x0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 2;
  do {
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,1,3,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,pIVar1,(MethodInfo *)0x0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x3011840]
// EOBANENKFAO$$AKPPNIPNKDH @ RVA 0x3011840

System_String_o * EOBANENKFAO__AKPPNIPNKDH(EOBANENKFAO_o *__this,MethodInfo *method)

{
  if ((DAT_04565baf & 1) == 0) {
    FUN_01bab630(&StringLiteral_16273/*"abs(sqrt(v1)  + ((cos(v2)))  - sin(v3))  + lg(v4)   - ((ln(v5) * (pow(v6, v7)) ))"*/);
    DAT_04565baf = 1;
  }
  return StringLiteral_16273/*"abs(sqrt(v1)  + ((cos(v2)))  - sin(v3))  + lg(v4)   - ((ln(v5) * (pow(v6, v7)) ))"*/;
}


// ===== public void .ctor()  [RVA 0x3011880]
// EOBANENKFAO$$.ctor @ RVA 0x3011880

void EOBANENKFAO___ctor(EOBANENKFAO_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x3011888]
// EOBANENKFAO$$CJOHHBMFAAG @ RVA 0x3011888

Il2CppObject * EOBANENKFAO__CJOHHBMFAAG(EOBANENKFAO_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double y;
  double local_48;
  
  if ((DAT_04565bb0 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04565bb0 = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar3 = cos(dVar3);
  dVar4 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  dVar4 = sin(dVar4);
  dVar5 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  dVar5 = log10(dVar5);
  dVar6 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
  dVar6 = System_Math__Log(dVar6,2.718281828459045,(MethodInfo *)0x0);
  dVar7 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,6,(MethodInfo *)0x0);
  y = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,7,(MethodInfo *)0x0);
  dVar7 = System_Math__Pow(dVar7,y,(MethodInfo *)0x0);
  local_48 = HPEENDCCJND__AJKIGPMHEEO
                       ((HPEENDCCJND_o *)__this,
                        (dVar5 + ABS((SQRT(dVar2) + dVar3) - dVar4)) - dVar6 * dVar7,
                        (MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_48);
  return pIVar1;
}

