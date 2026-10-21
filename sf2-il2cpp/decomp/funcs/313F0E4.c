// AFIJIPMBKHP$$DFKGJOOBNPB @ RVA 0x313F0E4

System_IObservable_Unit__o * AFIJIPMBKHP__DFKGJOOBNPB(ODEIOKOJGDM_o *CMKMIAJKFCG,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  System_IObservable_Unit__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0323f0ec to 0333f0f7 has its CatchHandler @ 0323f138 */
                    /* try { // try from 0323f0f8 to 0333f127 has its CatchHandler @ 0323efc8 */
  if ((DAT_04566749 & 1) == 0) {
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_AFIJIPMBKHP_DDJFIFOEDOJ_JABHFMDEOLD__);
                    /* try { // try from 0323f128 to 0333f12b has its CatchHandler @ 0323f130 */
                    /* try { // try from 0323f12c to 0333f157 has its CatchHandler @ 0323efc8 */
    FUN_01bab630(&Method_AFIJIPMBKHP_DDJFIFOEDOJ_MIFGEJLOFBC__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f128 with catch @ 0323f130
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f0a4 with catch @ 0323f134
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f0ec with catch @ 0323f138
                        */
    FUN_01bab630(&AFIJIPMBKHP_DDJFIFOEDOJ_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f0d8 with catch @ 0323f13c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f0c8 with catch @ 0323f140
                        */
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04566749 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(AFIJIPMBKHP_DDJFIFOEDOJ_TypeInfo,method);
                    /* try { // try from 0323f158 to 0333f15b has its CatchHandler @ 0323f17c */
                    /* try { // try from 0323f15c to 0333f183 has its CatchHandler @ 0323efc8 */
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 0323f158 with catch @ 0323f17c */
                    /* try { // try from 0323f184 to 0333f18b has its CatchHandler @ 0323f1a0 */
                    /* try { // try from 0323f18c to 0333f197 has its CatchHandler @ 0323efc8 */
    __this[1].klass = (Il2CppClass *)CMKMIAJKFCG;
    thunk_FUN_01c20e04(__this + 1,CMKMIAJKFCG);
                    /* try { // try from 0323f198 to 0333f19f has its CatchHandler @ 0323f1a0 */
    addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0323f184 with catch @ 0323f1a0
                       catch(type#2 @ 00000000) { ... } // from try @ 0323f198 with catch @ 0323f1a0
                        */
    System_Action<object>___ctor();
    removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

