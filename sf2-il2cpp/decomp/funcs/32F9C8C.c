// EEOMEMBBGNA$$MCCFMEACAPI @ RVA 0x32F9C8C

void EEOMEMBBGNA__MCCFMEACAPI(EEOMEMBBGNA_o *__this,int64_t KNPEFJLKLAL,MethodInfo *method)

{
  System_Action_KEFHDOHHHML__o *HFHIAKJDOGK;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar1;
  
  pMVar1 = (MethodInfo *)KNPEFJLKLAL;
  if ((DAT_045676bf & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_AEDKILJCAHD__);
    DAT_045676bf = 1;
    pMVar1 = extraout_x1;
  }
  (__this->fields).MGMAHFNADPA = true;
                    /* try { // try from 033f9cd4 to 034f9d43 has its CatchHandler @ 033f950c */
  if (0 < KNPEFJLKLAL) {
    (__this->fields).NGOFLMHNOGM = KNPEFJLKLAL;
    HFHIAKJDOGK = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    pMVar1 = (MethodInfo *)0x0;
    System_Action<object>___ctor();
    EEOMEMBBGNA__BGDACMBMPJP(__this,KNPEFJLKLAL,HFHIAKJDOGK,pMVar1);
    return;
  }
  EEOMEMBBGNA__DLINOLNBJOL(__this,pMVar1);
  (__this->fields).MGMAHFNADPA = false;
  return;
}

