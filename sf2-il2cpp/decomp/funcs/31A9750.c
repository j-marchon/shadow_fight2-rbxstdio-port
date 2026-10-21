// PHGBGGEGMLE$$CJOHHBMFAAG @ RVA 0x31A9750

Il2CppObject * PHGBGGEGMLE__CJOHHBMFAAG(PHGBGGEGMLE_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool CJNHFNHJHPE;
  double dVar2;
  double dVar3;
  int32_t local_24;
  
  if ((DAT_04566b27 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566b27 = 1;
  }
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  if (ABS(dVar2) <= ABS(dVar3)) {
    dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
    CJNHFNHJHPE = SQRT(ABS(dVar2)) < SQRT(ABS(dVar3));
  }
  else {
    CJNHFNHJHPE = true;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_24 = GJFEBGNFFBA__MELICHAIADL(CJNHFNHJHPE,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  return pIVar1;
}

