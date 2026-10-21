// Core.Network.ServerProvider.JLNOFMIBAJN$$JGHICGFCIAO @ RVA 0x357D1CC

void Core_Network_ServerProvider_JLNOFMIBAJN__JGHICGFCIAO
               (Core_Network_ServerProvider_JLNOFMIBAJN_o *__this,DMKKAPNMDKJ_o *response,
               MethodInfo *method)

{
  System_Action_bool__string__object__o *pSVar1;
  
  pSVar1 = (__this->fields).p_delegate;
  if (pSVar1 == (System_Action_bool__string__object__o *)0x0) {
                    /* try { // try from 0367d1fc to 0377d1ff has its CatchHandler @ 0367d220 */
                    /* try { // try from 0367d200 to 0377d203 has its CatchHandler @ 0367cdc8 */
    return;
  }
  if (response != (DMKKAPNMDKJ_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0367d1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 0367d1f8 to 0377d1fb has its CatchHandler @ 0367d224 */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(response->fields).PEKGJKIHHKJ,
               (response->fields).BEIPGOKBAEI,(response->fields).OGFMJIABHHI,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0367d204 to 0377d207 has its CatchHandler @ 0367d210 */
  FUN_01bab8c8();
}

