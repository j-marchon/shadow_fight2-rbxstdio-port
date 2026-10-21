// CJFBGEEIPBA$$JHIPOMKMGHN @ RVA 0x3364FD4

void CJFBGEEIPBA__JHIPOMKMGHN(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  NLFLMJPNOLF_o *AOMBONOOJFP;
  
  if ((DAT_04567ab0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    FUN_01bab630(&StringLiteral_17053);
    DAT_04567ab0 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    AOMBONOOJFP = (NLFLMJPNOLF_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    CJFBGEEIPBA__KMEMLHDKKFN(__this,AOMBONOOJFP,method);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17053,(MethodInfo *)0x0);
  return;
}

