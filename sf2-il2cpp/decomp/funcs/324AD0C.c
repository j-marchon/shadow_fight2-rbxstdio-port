// HFCOLPLEANG$$AIKNOFBLKIM @ RVA 0x324AD0C

int64_t HFCOLPLEANG__AIKNOFBLKIM(HFCOLPLEANG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  if ((DAT_045670f0 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045670f0 = 1;
  }
  if (CJNHFNHJHPE == 0) {
    CJNHFNHJHPE = 1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar4 = log10((double)CJNHFNHJHPE);
  dVar4 = dVar4 + 1.0;
  if (dVar4 != 1.0) {
    if (dVar4 <= 2.0) {
      lVar2 = 1;
      lVar3 = CJNHFNHJHPE;
    }
    else {
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      dVar4 = System_Math__Pow(10.0,dVar4 + -2.0,(MethodInfo *)0x0);
      lVar2 = -0x8000000000000000;
      if (dVar4 != INFINITY) {
        lVar2 = (long)dVar4;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = CJNHFNHJHPE / lVar2;
      }
    }
    lVar1 = lVar3 % 5;
    if (lVar1 != 0) {
      if (lVar1 < 3) {
        lVar3 = lVar3 - lVar1;
      }
      else {
        lVar3 = (lVar3 - lVar1) + 5;
      }
    }
    CJNHFNHJHPE = lVar3 * lVar2;
  }
  return CJNHFNHJHPE;
}

