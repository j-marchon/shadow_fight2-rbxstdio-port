// AFIJIPMBKHP$$AMCLDIOFBOD @ RVA 0x313EFBC

System_IObservable_Unit__o * AFIJIPMBKHP__AMCLDIOFBOD(ODEIOKOJGDM_o *CMKMIAJKFCG,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  System_IObservable_Unit__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 0323eed4 with catch @ 0323efbc */
                    /* catch() { ... } // from try @ 0323eadc with catch @ 0323efc0 */
                    /* catch() { ... } // from try @ 0323e9f8 with catch @ 0323efc4 */
                    /* try { // try from 0323efc8 to 0333f0a3 has its CatchHandler @ 0323efc8
                       catch() { ... } // from try @ 0323efc8 with catch @ 0323efc8
                       catch() { ... } // from try @ 0323f0f8 with catch @ 0323efc8
                       catch() { ... } // from try @ 0323f12c with catch @ 0323efc8
                       catch() { ... } // from try @ 0323f15c with catch @ 0323efc8
                       catch() { ... } // from try @ 0323f18c with catch @ 0323efc8 */
  if ((DAT_04566748 & 1) == 0) {
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_AFIJIPMBKHP_HJDKIHEOLFO_DOMGGGEMDNH__);
    FUN_01bab630(&Method_AFIJIPMBKHP_HJDKIHEOLFO_MJMNHGGFKJN__);
    FUN_01bab630(&AFIJIPMBKHP_HJDKIHEOLFO_TypeInfo);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04566748 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(AFIJIPMBKHP_HJDKIHEOLFO_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)CMKMIAJKFCG;
    thunk_FUN_01c20e04(__this + 1,CMKMIAJKFCG);
    addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
                    /* try { // try from 0323f0a4 to 0333f0ab has its CatchHandler @ 0323f134 */
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0323f0c8 to 0333f0d3 has its CatchHandler @ 0323f140 */
    pSVar1 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0323f0d8 to 0333f0e3 has its CatchHandler @ 0323f13c */
  FUN_01bab8c8();
}

