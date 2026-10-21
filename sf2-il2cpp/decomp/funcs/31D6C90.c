// BCLIMJMEMPJ$$CJOHHBMFAAG @ RVA 0x31D6C90

Il2CppObject * BCLIMJMEMPJ__CJOHHBMFAAG(BCLIMJMEMPJ_o *__this,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  int32_t local_24;
  
  if ((DAT_04566cec & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_04566cec = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  if (dVar2 <= dVar3) {
    dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
    dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
    CJNHFNHJHPE = dVar3 <= dVar2;
  }
  else {
    CJNHFNHJHPE = false;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_24 = GJFEBGNFFBA__MELICHAIADL(CJNHFNHJHPE,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  return pIVar1;
}

