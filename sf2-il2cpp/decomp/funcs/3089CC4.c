// OJGIIPOFCIB$$CJOHHBMFAAG @ RVA 0x3089CC4

Il2CppObject * OJGIIPOFCIB__CJOHHBMFAAG(OJGIIPOFCIB_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool CJNHFNHJHPE;
  double dVar2;
  double dVar3;
  int32_t local_24;
  
  if ((DAT_04566045 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_04566045 = 1;
  }
  CJNHFNHJHPE = true;
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  if (dVar2 != dVar3) {
    dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
    dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
    CJNHFNHJHPE = dVar2 != dVar3;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_24 = GJFEBGNFFBA__MELICHAIADL(CJNHFNHJHPE,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  return pIVar1;
}

