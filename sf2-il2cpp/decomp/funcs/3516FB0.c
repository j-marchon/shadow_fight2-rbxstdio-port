// PLIIGOCLJDL$$GABBJPGLCLK @ RVA 0x3516FB0

void PLIIGOCLJDL__GABBJPGLCLK(PLIIGOCLJDL_o *__this,MethodInfo *method)

{
  int32_t IOENJHOKBOE;
  EEGDOGKBLNG_o *pEVar1;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  PLIIGOCLJDL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  System_Action_JCFJFJCKLKG__o *pSVar2;
  
  if ((DAT_04568938 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_PLIIGOCLJDL_MCNOLIHJCHD__);
                    /* try { // try from 03616ff8 to 03716ffb has its CatchHandler @ 0361701c */
    DAT_04568938 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03616ffc to 03716fff has its CatchHandler @ 03617018 */
                    /* try { // try from 03617000 to 03717007 has its CatchHandler @ 036170d0 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03617008 to 0371700b has its CatchHandler @ 03617010 */
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
                    /* catch() { ... } // from try @ 03616f6c with catch @ 0361700c
                       try { // try from 0361700c to 0371703b has its CatchHandler @ 03616e2c */
                    /* catch() { ... } // from try @ 03617008 with catch @ 03617010 */
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03616ed4 with catch @ 03617014 */
  if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
                    /* catch() { ... } // from try @ 03616ef4 with catch @ 03617018
                       catch() { ... } // from try @ 03616ffc with catch @ 03617018 */
    IOENJHOKBOE = (pEVar1->fields)._DHPJJLCDAJD_k__BackingField;
                    /* catch() { ... } // from try @ 03616ec4 with catch @ 0361701c
                       catch() { ... } // from try @ 03616ff8 with catch @ 0361701c */
    if (0 < IOENJHOKBOE) {
      IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 0361703c to 0371703f has its CatchHandler @ 036170bc */
      System_Action<object>___ctor();
      PLIIGOCLJDL__GPCPNCGBFOM(__this_00,IOENJHOKBOE,2,IELDNEAAPBE,in_x4);
      return;
    }
    pSVar2 = (__this->fields).JIHFBPIOMLM;
    if (pSVar2 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* try { // try from 03617084 to 037170bb has its CatchHandler @ 03617178 */
                    /* WARNING: Could not recover jumptable at 0x03617088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,0,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

