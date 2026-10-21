// BLCNFNMKAFF$$CJOHHBMFAAG @ RVA 0x31CF458

Il2CppObject * BLCNFNMKAFF__CJOHHBMFAAG(BLCNFNMKAFF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  System_String_o *str3;
  NLPJLHOEAOE_o *__this_00;
  AFFHKININGD_o *pAVar3;
  Il2CppObject *pIVar4;
  PAMEPBLOLPB_o *pPVar5;
  double dVar6;
  double local_48;
  int32_t local_34;
  
  if ((DAT_04566c97 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_22490);
    FUN_01bab630(&StringLiteral_18233);
    FUN_01bab630(&StringLiteral_15235);
    DAT_04566c97 = 1;
  }
  local_34 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  local_34 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  str3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat
                     (StringLiteral_15235,pSVar2,StringLiteral_22490,str3,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pAVar3 = NLPJLHOEAOE__POGAPHAJGBC(__this_00,pSVar2,(MethodInfo *)0x0);
  pIVar4 = StringLiteral_18233;
  if (pAVar3 != (AFFHKININGD_o *)0x0) {
    pPVar5 = (pAVar3->fields).JPBIBBBMCCD;
    if (pPVar5 == (PAMEPBLOLPB_o *)0x0) {
      dVar6 = 0.0;
    }
    else {
      dVar6 = (double)(pPVar5->fields).AAECGBAMDEL;
    }
    iVar1 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    dVar6 = System_Math__Pow(dVar6,(double)iVar1,(MethodInfo *)0x0);
    local_48 = HPEENDCCJND__AJKIGPMHEEO((HPEENDCCJND_o *)__this,dVar6,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_48);
  }
  return pIVar4;
}

