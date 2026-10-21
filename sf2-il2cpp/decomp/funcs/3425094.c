// PEEIMHCMDND$$JDONKPBCNLL @ RVA 0x3425094

void PEEIMHCMDND__JDONKPBCNLL(PEEIMHCMDND_o *__this,int64_t JBFDEJOPCDC,MethodInfo *method)

{
  System_Action_EOLFEKNCPLM__o *BLMFLPJJMPF;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  int64_t local_28;
  
  local_28 = JBFDEJOPCDC;
  if ((DAT_045680fe & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_PEEIMHCMDND_BGMMPCKGDGI__);
    FUN_01bab630(&StringLiteral_10950);
    DAT_045680fe = 1;
  }
  if (0 < JBFDEJOPCDC) {
    BLMFLPJJMPF = (System_Action_EOLFEKNCPLM__o *)
                  thunk_FUN_01bda818(System_Action<EOLFEKNCPLM>_TypeInfo);
    method_00 = (MethodInfo *)0x0;
    System_Action<object>___ctor();
    PEEIMHCMDND__ELHLAJNJAKD(__this,JBFDEJOPCDC,BLMFLPJJMPF,method_00);
    return;
  }
  pSVar1 = System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_10950,pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}

