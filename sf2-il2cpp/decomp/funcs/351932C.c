// PLIIGOCLJDL$$FLCFHCNPFLF @ RVA 0x351932C

void PLIIGOCLJDL__FLCFHCNPFLF(PLIIGOCLJDL_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  JCFJFJCKLKG_o *DKMMBMBMJBO;
  PLIIGOCLJDL_o *__this_00;
  MethodInfo *in_x3;
  System_Action_JCFJFJCKLKG__o *pSVar1;
  
  if ((DAT_0456895b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    FUN_01bab630(&StringLiteral_10899);
    FUN_01bab630(&StringLiteral_10895);
    DAT_0456895b = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    DKMMBMBMJBO = (JCFJFJCKLKG_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    if (DKMMBMBMJBO == (JCFJFJCKLKG_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10899,(MethodInfo *)0x0);
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      if (__this_00 == (PLIIGOCLJDL_o *)0x0) goto LAB_03619430;
      PLIIGOCLJDL__LHBOEIOKNJI(__this_00,DKMMBMBMJBO,1,in_x3);
    }
    pSVar1 = (__this->fields).MNAFCHADIDC;
    if (pSVar1 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0361942c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,DKMMBMBMJBO,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
LAB_03619430:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

