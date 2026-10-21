// TypeDefIndex 2533
// Namespace: 
// [Extension]
// public static class IJCEPJPIDON
// Fields:

// ===== public static IObservable<bool> IFJDHHGCGHE(FGOGONIFJFD KAACIENAJEA)  [RVA 0x3391EA0]
// IJCEPJPIDON$$IFJDHHGCGHE @ RVA 0x3391EA0

System_IObservable_bool__o * IJCEPJPIDON__IFJDHHGCGHE(FGOGONIFJFD_o *KAACIENAJEA,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03491eac to 03591eaf has its CatchHandler @ 03491ee0 */
                    /* try { // try from 03491eb0 to 03591eef has its CatchHandler @ 03491da0 */
  if ((DAT_04567c27 & 1) == 0) {
    FUN_01bab630(&System_Action<Action<bool>>_TypeInfo);
    FUN_01bab630(&Method_IJCEPJPIDON_JDPMDINMGKK_GLHEEOFNBKI__);
                    /* catch() { ... } // from try @ 03491eac with catch @ 03491ee0 */
    FUN_01bab630(&Method_IJCEPJPIDON_JDPMDINMGKK_JKFACJJAFMF__);
                    /* try { // try from 03491ef0 to 03591ef7 has its CatchHandler @ 03491f0c */
    FUN_01bab630(&IJCEPJPIDON_JDPMDINMGKK_TypeInfo);
                    /* try { // try from 03491ef8 to 03591f03 has its CatchHandler @ 03491da0 */
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<bool>__);
                    /* try { // try from 03491f04 to 03591f0b has its CatchHandler @ 03491f0c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03491ef0 with catch @ 03491f0c
                       catch(type#2 @ 00000000) { ... } // from try @ 03491f04 with catch @ 03491f0c
                        */
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04567c27 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(IJCEPJPIDON_JDPMDINMGKK_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)KAACIENAJEA;
    thunk_FUN_01c20e04(__this + 1,KAACIENAJEA);
    addHandler = (System_Action_Action_T___o *)
                 thunk_FUN_01bda818(System_Action<Action<bool>>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler =
         (System_Action_Action_T___o *)thunk_FUN_01bda818(System_Action<Action<bool>>_TypeInfo);
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = UniRx_Observable__FromEvent<bool>
                       (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<bool>__);
    return (System_IObservable_bool__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

