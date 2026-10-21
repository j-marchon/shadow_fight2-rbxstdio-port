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

