// EEOMEMBBGNA$$MECHLOOCDCI @ RVA 0x32F856C

void EEOMEMBBGNA__MECHLOOCDCI(EEOMEMBBGNA_o *__this,bool LHDIIECKMPH,MethodInfo *method)

{
  EEGDOGKBLNG_o *pEVar1;
  int64_t iVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  System_Action_long__o *pSVar3;
  System_Action_o *pSVar4;
  
  method_00 = (MethodInfo *)(ulong)LHDIIECKMPH;
  if ((DAT_045676a8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045676a8 = 1;
    method_00 = extraout_x1;
  }
  EEOMEMBBGNA__DLINOLNBJOL(__this,method_00);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
    EEGDOGKBLNG__AGCALOAKJEK(pEVar1,(MethodInfo *)0x0);
    pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
      EEGDOGKBLNG__FACPGEOBOAJ(pEVar1,(MethodInfo *)0x0);
      pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
        iVar2 = EEGDOGKBLNG__APCMGOCHMGC(pEVar1,(MethodInfo *)0x0);
        if (LHDIIECKMPH) {
          pSVar3 = (__this->fields).KBBECJNEHBM;
        }
        else {
          pSVar3 = (__this->fields).HAHLDGJHODG;
        }
        if (pSVar3 != (System_Action_long__o *)0x0) {
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,iVar2,
                     (pSVar3->fields).super.super.method);
          pSVar4 = (__this->fields).HGPMBNOIMIM;
          if (pSVar4 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f8648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar4->fields).super.super.invoke_impl)
                      ((pSVar4->fields).super.super.method_code,(pSVar4->fields).super.super.method)
            ;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

