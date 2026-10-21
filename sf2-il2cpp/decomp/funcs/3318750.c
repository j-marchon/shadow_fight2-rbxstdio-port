// MKFAKELPPAC$$JOABOHIMBCH @ RVA 0x3318750

void MKFAKELPPAC__JOABOHIMBCH(MKFAKELPPAC_o *__this,FCMAKNBEJDA_o *FLFEMGCMBOL,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  long lVar2;
  System_Action_MPAKDCNMLEG__o **ppSVar3;
  System_Action_MPAKDCNMLEG__o *pSVar4;
  System_Action_MPAKDCNMLEG__c *pSVar5;
  
  if ((DAT_045677f3 & 1) == 0) {
                    /* try { // try from 03418774 to 03518777 has its CatchHandler @ 03418ae4 */
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&Method_MKFAKELPPAC_LNNLILAODBJ__);
                    /* try { // try from 0341878c to 03518793 has its CatchHandler @ 03418b4c */
    DAT_045677f3 = 1;
  }
  MKFAKELPPAC__BJHOEDBDAJP(__this,FLFEMGCMBOL,method);
                    /* try { // try from 0341879c to 035187a7 has its CatchHandler @ 03418b30 */
  if (FLFEMGCMBOL == (FCMAKNBEJDA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppSVar3 = &(FLFEMGCMBOL->fields).MNEPPPPEJKF;
  pSVar4 = *ppSVar3;
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
                    /* try { // try from 034187c4 to 035187c7 has its CatchHandler @ 03418adc */
  System_Action<Int32Enum>___ctor();
                    /* try { // try from 034187d4 to 035187db has its CatchHandler @ 03418b34 */
  pSVar1 = System_Delegate__Combine((System_Delegate_o *)pSVar4,pSVar1,(MethodInfo *)0x0);
  pSVar5 = System_Action<MPAKDCNMLEG>_TypeInfo;
  if (pSVar1 != (System_Delegate_o *)0x0) {
                    /* try { // try from 034187e4 to 035187e7 has its CatchHandler @ 03418b24 */
    pSVar4 = (System_Action_MPAKDCNMLEG__o *)
             thunk_FUN_01bda71c(pSVar1,System_Action<MPAKDCNMLEG>_TypeInfo);
                    /* try { // try from 034187f4 to 0351880b has its CatchHandler @ 03418b38 */
    if (pSVar4 != (System_Action_MPAKDCNMLEG__o *)0x0) {
      *ppSVar3 = pSVar4;
      pSVar5 = System_Action<MPAKDCNMLEG>_TypeInfo;
      lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<MPAKDCNMLEG>_TypeInfo);
                    /* try { // try from 0341880c to 03518817 has its CatchHandler @ 03418b28 */
      if (lVar2 != 0) goto LAB_03418828;
    }
                    /* try { // try from 03418818 to 0351885f has its CatchHandler @ 03418358 */
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(pSVar1,pSVar5);
  }
  lVar2 = 0;
  *ppSVar3 = (System_Action_MPAKDCNMLEG__o *)0x0;
LAB_03418828:
  thunk_FUN_01c20e04(ppSVar3,lVar2);
  return;
}

