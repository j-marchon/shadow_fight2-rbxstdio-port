// TypeDefIndex 1891
// Namespace: 
// public class ILHDEFKHAIE : HPEENDCCJND
// Fields:

// ===== protected override void ODGFCLOEKJD()  [RVA 0x3253208]
// ILHDEFKHAIE$$ODGFCLOEKJD @ RVA 0x3253208

void ILHDEFKHAIE__ODGFCLOEKJD(ILHDEFKHAIE_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_04567141 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04567141 = 1;
  }
  iVar1 = 5;
  do {
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,10,10000,(MethodInfo *)0x0);
    MNODCIGLHEL = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ===== public void .ctor()  [RVA 0x3253290]
// ILHDEFKHAIE$$.ctor @ RVA 0x3253290

void ILHDEFKHAIE___ctor(ILHDEFKHAIE_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x3253298]
// ILHDEFKHAIE$$CJOHHBMFAAG @ RVA 0x3253298

Il2CppObject * ILHDEFKHAIE__CJOHHBMFAAG(ILHDEFKHAIE_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_38;
  
  if ((DAT_04567142 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567142 = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar3 = log10(dVar3);
  dVar4 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  dVar4 = System_Math__Log(dVar4,2.718281828459045,(MethodInfo *)0x0);
  local_38 = HPEENDCCJND__AJKIGPMHEEO
                       ((HPEENDCCJND_o *)__this,ABS((SQRT(dVar2) + dVar3) - dVar4),(MethodInfo *)0x0
                       );
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_38);
  return pIVar1;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x3253380]
// ILHDEFKHAIE$$AKPPNIPNKDH @ RVA 0x3253380

System_String_o * ILHDEFKHAIE__AKPPNIPNKDH(ILHDEFKHAIE_o *__this,MethodInfo *method)

{
                    /* try { // try from 03353394 to 0345339b has its CatchHandler @ 033535fc */
  if ((DAT_04567143 & 1) == 0) {
    FUN_01bab630(&StringLiteral_64/*"\n   abs	   (		sqrt(v1)	+(\n(lg(v2)\n))  - ln(v3))\n 	 \n"*/);
                    /* try { // try from 033533a8 to 034533af has its CatchHandler @ 033535f8 */
    DAT_04567143 = 1;
  }
                    /* try { // try from 033533b8 to 034533bb has its CatchHandler @ 033535ec */
  return StringLiteral_64/*"\n   abs	   (		sqrt(v1)	+(\n(lg(v2)\n))  - ln(v3))\n 	 \n"*/;
}

