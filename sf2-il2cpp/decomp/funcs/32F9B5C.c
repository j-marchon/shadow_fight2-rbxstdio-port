// EEOMEMBBGNA$$OAKAJKGEAKK @ RVA 0x32F9B5C

void EEOMEMBBGNA__OAKAJKGEAKK(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  EPCCNLNOALL_o *ADHJMIOENHG;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  System_Action_o *pSVar3;
  
  if ((DAT_045676bd & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EPCCNLNOALL>__);
    FUN_01bab630(&StringLiteral_17019);
    DAT_045676bd = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* try { // try from 033f9c44 to 034f9c4b has its CatchHandler @ 033f9ec0 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033f9c60 to 034f9cd3 has its CatchHandler @ 033fa084 */
    UnityEngine_Debug__LogError(StringLiteral_17019,(MethodInfo *)0x0);
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar1) {
    ADHJMIOENHG = (EPCCNLNOALL_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EPCCNLNOALL>__);
    EEOMEMBBGNA__OGBNPDLJNBG(__this,ADHJMIOENHG,method);
    lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                               System_Action<KEFHDOHHHML>_TypeInfo);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    }
    pSVar3 = (__this->fields).GHOPCFLDCPK;
    if (pSVar3 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f9c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
      return;
    }
  }
  else {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

