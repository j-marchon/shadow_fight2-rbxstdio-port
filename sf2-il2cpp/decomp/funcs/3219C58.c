// EKNJMFJJLBG$$CJOHHBMFAAG @ RVA 0x3219C58

Il2CppObject * EKNJMFJJLBG__CJOHHBMFAAG(EKNJMFJJLBG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_48;
  
  if ((DAT_04566ef1 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566ef1 = 1;
  }
  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = BKOHHDBBJML__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar4 = BKOHHDBBJML__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  dVar5 = BKOHHDBBJML__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  dVar6 = BKOHHDBBJML__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_48 = HPEENDCCJND__AJKIGPMHEEO
                       ((HPEENDCCJND_o *)__this,SQRT(ABS(dVar3 + dVar4 + dVar5 + dVar6)),
                        (MethodInfo *)0x0);
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_48);
  return pIVar2;
}

