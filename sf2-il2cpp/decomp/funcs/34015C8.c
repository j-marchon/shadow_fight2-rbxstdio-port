// MGNPHCAAEIO$$ADEEECDDBPN @ RVA 0x34015C8

int64_t MGNPHCAAEIO__ADEEECDDBPN(int64_t CJNHFNHJHPE,int32_t GMALOFEKAHI,MethodInfo *method)

{
  int64_t iVar1;
  int iVar2;
  ACHLOMELAJE_o *pAVar3;
  double dVar4;
  
  if ((DAT_04567ff3 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567ff3 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = (pAVar3->fields).FLJFBLEOGDG;
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar4 = System_Math__Pow(10.0,(double)(iVar2 - GMALOFEKAHI),(MethodInfo *)0x0);
    iVar1 = -0x8000000000000000;
    if ((double)(long)((double)CJNHFNHJHPE / dVar4) != INFINITY) {
      iVar1 = (long)((double)CJNHFNHJHPE / dVar4);
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

