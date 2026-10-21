// CHDGOFBHAFI$$KAKPCFDHFJM @ RVA 0x3246498

void CHDGOFBHAFI__KAKPCFDHFJM
               (CHDGOFBHAFI_o *__this,int32_t OILECKFDMDB,System_Action_KEFHDOHHHML__o *IELDNEAAPBE,
               MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *pSVar1;
  
                    /* catch() { ... } // from try @ 03346490 with catch @ 033464a8 */
  (__this->fields).KIAJFCGANAH = true;
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__BJNFKIGGKIH(__this_00,IELDNEAAPBE,OILECKFDMDB,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).LMKOLDHCAAK;
    if (pSVar1 != (System_Action_o *)0x0) {
                    /* try { // try from 033464e8 to 0344650f has its CatchHandler @ 03346524 */
                    /* WARNING: Could not recover jumptable at 0x033464ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

