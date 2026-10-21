// OCFAAFJGLBO$$CJOHHBMFAAG @ RVA 0x332236C

Il2CppObject * OCFAAFJGLBO__CJOHHBMFAAG(OCFAAFJGLBO_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_48;
  
  if ((DAT_04567852 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567852 = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar4 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar5 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
  dVar6 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
  dVar7 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
  dVar5 = System_Math__Pow(dVar5,dVar6 - dVar7,(MethodInfo *)0x0);
  local_48 = HPEENDCCJND__AJKIGPMHEEO
                       ((HPEENDCCJND_o *)__this,dVar2 + dVar3 + ABS(dVar4) + dVar5,(MethodInfo *)0x0
                       );
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_48);
  return pIVar1;
}

