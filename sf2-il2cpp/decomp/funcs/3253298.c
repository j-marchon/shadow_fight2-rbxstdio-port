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

