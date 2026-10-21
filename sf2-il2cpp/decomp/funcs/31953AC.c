// ICBKPCDHONO$$CJOHHBMFAAG @ RVA 0x31953AC

Il2CppObject * ICBKPCDHONO__CJOHHBMFAAG(ICBKPCDHONO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str3;
  NLPJLHOEAOE_o *__this_00;
  AFFHKININGD_o *pAVar2;
  PAMEPBLOLPB_o *pPVar3;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_04566a68 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_22490);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_18233);
    FUN_01bab630(&StringLiteral_15235);
    FUN_01bab630(&StringLiteral_21620);
    DAT_04566a68 = 1;
  }
  local_34 = 0;
  local_38 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  pSVar1 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
  local_38 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  str3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (StringLiteral_15235,pSVar1,StringLiteral_22490,str3,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pAVar2 = NLPJLHOEAOE__POGAPHAJGBC(__this_00,pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_18233;
  if (pAVar2 != (AFFHKININGD_o *)0x0) {
    pPVar3 = (pAVar2->fields).JPBIBBBMCCD;
    local_34 = 0;
    if (pPVar3 != (PAMEPBLOLPB_o *)0x0) {
      local_34 = (pPVar3->fields).AAECGBAMDEL;
    }
    pSVar1 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(StringLiteral_21620,pSVar1,StringLiteral_22500,(MethodInfo *)0x0)
    ;
  }
  return (Il2CppObject *)pSVar1;
}

