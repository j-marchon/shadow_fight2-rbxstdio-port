// MGNPHCAAEIO$$AHIPAMALCCN @ RVA 0x3405534

int32_t MGNPHCAAEIO__AHIPAMALCCN(int32_t CJNHFNHJHPE,int32_t GOEOIIODCCP,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  
  if ((DAT_04568010 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568010 = 1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar2 = (float)CJNHFNHJHPE / (float)GOEOIIODCCP + 0.5;
  iVar1 = -0x80000000;
  if ((double)(long)fVar2 != INFINITY) {
    iVar1 = (int)fVar2;
  }
  return iVar1 * GOEOIIODCCP;
}

