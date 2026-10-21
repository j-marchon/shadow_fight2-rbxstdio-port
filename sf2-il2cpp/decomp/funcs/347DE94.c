// KPLJFEEMAOH$$LCFBGIPIKBB @ RVA 0x347DE94

System_IDisposable_o *
KPLJFEEMAOH__LCFBGIPIKBB
          (KPLJFEEMAOH_o *__this,System_IObserver_bool__o *ENHLEPICPGK,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_IEnumerable_string___bool__o *CJNHFNHJHPE;
  System_Action_o *disposeAction;
  System_IDisposable_o *pSVar1;
  GEJEGHKMPJM_o *__this_01;
  
  if ((DAT_0456836a & 1) == 0) {
    FUN_01bab630(&System_Action<IEnumerable<string>,_bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&Method_KPLJFEEMAOH_GCJCGBFLHEE_EMLHAINFJCL__);
    FUN_01bab630(&Method_KPLJFEEMAOH_GCJCGBFLHEE_MOGKIIFFLCH__);
    FUN_01bab630(&KPLJFEEMAOH_GCJCGBFLHEE_TypeInfo);
    DAT_0456836a = 1;
  }
                    /* try { // try from 0357df14 to 0367df3b has its CatchHandler @ 0357e100 */
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KPLJFEEMAOH_GCJCGBFLHEE_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = __this;
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
    __this_00[1].klass = (Il2CppClass *)ENHLEPICPGK;
    thunk_FUN_01c20e04(__this_00 + 1,ENHLEPICPGK);
    __this_01 = (__this->fields).PEEHIKFEJAJ;
    CJNHFNHJHPE = (System_Action_IEnumerable_string___bool__o *)
                  thunk_FUN_01bda818(System_Action<IEnumerable<string>,_bool>_TypeInfo);
                    /* try { // try from 0357df70 to 0367df97 has its CatchHandler @ 0357e0fc */
    System_Action<object,_bool>___ctor();
    if (__this_01 != (GEJEGHKMPJM_o *)0x0) {
      GEJEGHKMPJM__LLJKLJJLJPA(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 0357dfa8 to 0367dfab has its CatchHandler @ 0357e0e8 */
      disposeAction = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0357dfac to 0367dfb3 has its CatchHandler @ 0357e0f4 */
      System_Action___ctor();
                    /* try { // try from 0357dfc8 to 0367dfcb has its CatchHandler @ 0357e0ec */
      if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0357dfcc to 0367dfdb has its CatchHandler @ 0357e0f8 */
        thunk_FUN_01ba7564();
      }
      pSVar1 = UniRx_Disposable__Create(disposeAction,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0357dfec to 0367dfef has its CatchHandler @ 0357e0e4 */
  FUN_01bab8c8();
}

