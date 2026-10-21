// OAKJDLHHIAB$$JOLMOAGFIBP @ RVA 0x33ADCE4

System_IObservable_Unit__o * OAKJDLHHIAB__JOLMOAGFIBP(ICHIDBGJOEC_o *KCPFFLHCCIN,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  System_IObservable_Unit__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034adcfc to 035add03 has its CatchHandler @ 034ae198 */
                    /* try { // try from 034add08 to 035add0f has its CatchHandler @ 034ae19c */
  if ((DAT_04567d28 & 1) == 0) {
    FUN_01bab630(&System_Action<Action>_TypeInfo);
                    /* try { // try from 034add20 to 035add2f has its CatchHandler @ 034ae194 */
    FUN_01bab630(&Method_OAKJDLHHIAB_FCBKBCABNHK_DOIOLELGDFA__);
    FUN_01bab630(&Method_OAKJDLHHIAB_FCBKBCABNHK_IDCLIMCKBGN__);
    FUN_01bab630(&OAKJDLHHIAB_FCBKBCABNHK_TypeInfo);
                    /* try { // try from 034add3c to 035add43 has its CatchHandler @ 034ae178 */
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04567d28 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034add54 to 035add5b has its CatchHandler @ 034ae18c */
  __this = (Il2CppObject *)thunk_FUN_01bda818(OAKJDLHHIAB_FCBKBCABNHK_TypeInfo,method);
                    /* try { // try from 034add5c to 035add67 has its CatchHandler @ 034ae158 */
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
                    /* try { // try from 034add7c to 035add83 has its CatchHandler @ 034ae184 */
                    /* try { // try from 034add8c to 035add93 has its CatchHandler @ 034ae188 */
    __this[1].klass = (Il2CppClass *)KCPFFLHCCIN;
                    /* try { // try from 034add94 to 035addaf has its CatchHandler @ 034ae190 */
    thunk_FUN_01c20e04(__this + 1,KCPFFLHCCIN);
    addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
                    /* try { // try from 034addbc to 035addc3 has its CatchHandler @ 034ae15c */
                    /* try { // try from 034addcc to 035addd3 has its CatchHandler @ 034ae174 */
    System_Action<object>___ctor();
                    /* try { // try from 034addd4 to 035adddf has its CatchHandler @ 034ae160 */
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034addf8 to 035addff has its CatchHandler @ 034ae164 */
    pSVar1 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ade00 to 035ae127 has its CatchHandler @ 034ad8dc */
  FUN_01bab8c8();
}

