// CLFCKIFNGHA.NEPIAMCAOBL$$ODOPJJFCNAD @ RVA 0x34561F8

void CLFCKIFNGHA_NEPIAMCAOBL__ODOPJJFCNAD(CLFCKIFNGHA_NEPIAMCAOBL_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  System_Action_HashSet_string___o *pSVar2;
  
                    /* try { // try from 035561f8 to 036561ff has its CatchHandler @ 035580b8 */
                    /* try { // try from 03556210 to 03656217 has its CatchHandler @ 035580b4 */
  if ((DAT_045682cf & 1) == 0) {
                    /* try { // try from 03556218 to 03656227 has its CatchHandler @ 035580b0 */
    FUN_01bab630(&System_Threading_CancellationToken_TypeInfo);
                    /* try { // try from 0355622c to 03656247 has its CatchHandler @ 035581b8 */
    FUN_01bab630(&UnityMainThreadDispatcher_TypeInfo);
    FUN_01bab630(&StringLiteral_15435);
    DAT_045682cf = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0355624c to 03656253 has its CatchHandler @ 035580ac */
  if ((System_Threading_CancellationToken_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Threading_CancellationToken_TypeInfo,method);
  }
  bVar1 = System_Threading_CancellationToken__get_IsCancellationRequested
                    ((System_Threading_CancellationToken_o)&__this->fields,(MethodInfo *)0x0);
                    /* try { // try from 03556264 to 0365626b has its CatchHandler @ 035580a8 */
  if (bVar1) {
                    /* try { // try from 03556270 to 03656277 has its CatchHandler @ 035580a4 */
    if ((UnityMainThreadDispatcher_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03556288 to 0365628f has its CatchHandler @ 035580a0 */
                    /* try { // try from 03556290 to 0365629f has its CatchHandler @ 0355809c */
    UnityMainThreadDispatcher__LogThreadSafe(StringLiteral_15435,(MethodInfo *)0x0);
    return;
  }
  pSVar2 = (__this->fields).p_onCheckEnd;
  if (pSVar2 != (System_Action_HashSet_string___o *)0x0) {
                    /* try { // try from 035562ac to 036562cf has its CatchHandler @ 0355819c */
                    /* WARNING: Could not recover jumptable at 0x035562bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(__this->fields).corruptedBundles,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

