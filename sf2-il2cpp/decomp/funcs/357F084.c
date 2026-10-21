// Core.Network.ServerProvider.EDGKACBPFOA$$OJGNNIJINII @ RVA 0x357F084

void Core_Network_ServerProvider_EDGKACBPFOA__OJGNNIJINII
               (Core_Network_ServerProvider_EDGKACBPFOA_o *__this,DMKKAPNMDKJ_o *response,
               MethodInfo *method)

{
  System_Action_bool__string__object__o *pSVar1;
  
  pSVar1 = (__this->fields).handler;
  if (pSVar1 == (System_Action_bool__string__object__o *)0x0) {
    return;
  }
  if (response != (DMKKAPNMDKJ_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0367f0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(response->fields).PEKGJKIHHKJ,
               (response->fields).BEIPGOKBAEI,(response->fields).OGFMJIABHHI,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

