// EEOMEMBBGNA$$DCFBDLHNGJP @ RVA 0x32F7994

void EEOMEMBBGNA__DCFBDLHNGJP(EEOMEMBBGNA_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  CJFBGEEIPBA_o *__this_00;
  System_Action_LFELBGMCDHD__o *CPECAEHDDDB;
  MethodInfo *method_00;
  int64_t iVar1;
  System_Action_o *pSVar2;
  OJEHKJHEBID_o **ppOVar3;
  
  if ((DAT_045676c6 & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_CBPJBDDLNFI__);
    DAT_045676c6 = 1;
  }
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
                    /* try { // try from 033f7a64 to 034f7b47 has its CatchHandler @ 033f7a64
                       catch() { ... } // from try @ 033f7a64 with catch @ 033f7a64
                       catch() { ... } // from try @ 033f7b6c with catch @ 033f7a64
                       catch() { ... } // from try @ 033f7b98 with catch @ 033f7a64
                       catch() { ... } // from try @ 033f7bc4 with catch @ 033f7a64
                       catch() { ... } // from try @ 033f7bf4 with catch @ 033f7a64 */
    return;
  }
  iVar1 = (PBNPKBJKFHE->fields).ADEIKPGDIPM;
  ppOVar3 = &(__this->fields).MICFEIBNOLM;
  *ppOVar3 = PBNPKBJKFHE;
  (__this->fields).NGOFLMHNOGM = iVar1;
  thunk_FUN_01c20e04(ppOVar3,PBNPKBJKFHE);
  __this_00 = (__this->fields).GMNJEBCECDA;
  if (__this_00 != (CJFBGEEIPBA_o *)0x0) {
    CJFBGEEIPBA__EHENAJFMBBA(__this_00,*ppOVar3,(MethodInfo *)0x0);
  }
  CPECAEHDDDB = (System_Action_LFELBGMCDHD__o *)
                thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
  method_00 = Method_EEOMEMBBGNA_CBPJBDDLNFI__;
  System_Action<object>___ctor();
  EEOMEMBBGNA__HNGLOPNCACI(__this,CPECAEHDDDB,method_00);
  pSVar2 = (__this->fields).GHOPCFLDCPK;
  if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f7a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

