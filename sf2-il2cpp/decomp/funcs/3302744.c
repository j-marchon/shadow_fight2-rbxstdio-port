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

