// OMBBEJKHLAF$$CJOHHBMFAAG @ RVA 0x31BC714

Il2CppObject * OMBBEJKHLAF__CJOHHBMFAAG(OMBBEJKHLAF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  Il2CppObject *pIVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_48;
  
  if ((DAT_04566bf5 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566bf5 = 1;
  }
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    dVar4 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
    dVar5 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
    dVar6 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
    dVar7 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
    dVar8 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,6,(MethodInfo *)0x0);
    local_48 = HPEENDCCJND__AJKIGPMHEEO
                         ((HPEENDCCJND_o *)__this,
                          dVar3 * (double)iVar1 + (-dVar4 - dVar5) + dVar6 * (dVar7 - dVar8),
                          (MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_48);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

