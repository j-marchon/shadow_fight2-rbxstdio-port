// CJFBGEEIPBA$$MCEGNHLCNGO @ RVA 0x3363F9C

void CJFBGEEIPBA__MCEGNHLCNGO(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if ((DAT_04567aa3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<Int64Value>__);
    FUN_01bab630(&StringLiteral_17043);
    DAT_04567aa3 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<Int64Value>__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      CJFBGEEIPBA__MDGNOGCEMDN(__this,(int64_t)pIVar1[1].monitor,method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17043,(MethodInfo *)0x0);
  return;
}

