// OLKKAIFGGAK$$AHNAGGGOLBK @ RVA 0x34F3FEC

void OLKKAIFGGAK__AHNAGGGOLBK(OLKKAIFGGAK_o *__this,AKBKIMDNKGA_o *CPECAEHDDDB,MethodInfo *method)

{
  OLKKAIFGGAK_o *pOVar1;
  MethodInfo *method_00;
  System_Action_OLKKAIFGGAK__o *pSVar2;
  
  if (CPECAEHDDDB != (AKBKIMDNKGA_o *)0x0) {
    pOVar1 = OLKKAIFGGAK__GMBBOANEBJJ(__this,(CPECAEHDDDB->fields).super.LOAFPIOGJAF,method);
    OLKKAIFGGAK__KFJJOIHBPEF(__this,method_00);
    pSVar2 = (__this->fields).EOBODCMALHN;
    if (pSVar2 != (System_Action_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035f4030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,pOVar1,(pSVar2->fields).super.super.method
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

