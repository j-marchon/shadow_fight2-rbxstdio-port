// TypeDefIndex 458
// Namespace: 
// [CompilerGenerated]
// private sealed class ServerProvider.BFHAADMCPEM
// Fields:
//   public Action<bool, string, object> callback; // 0x10

// ===== internal void DOAIODHJNBC(DMKKAPNMDKJ response)  [RVA 0x357E128]
// Core.Network.ServerProvider.BFHAADMCPEM$$DOAIODHJNBC @ RVA 0x357E128

void Core_Network_ServerProvider_BFHAADMCPEM__DOAIODHJNBC
               (Core_Network_ServerProvider_BFHAADMCPEM_o *__this,DMKKAPNMDKJ_o *response,
               MethodInfo *method)

{
  System_Action_bool__string__object__o *pSVar1;
  
  pSVar1 = (__this->fields).callback;
  if (pSVar1 == (System_Action_bool__string__object__o *)0x0) {
    return;
  }
  if (response != (DMKKAPNMDKJ_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0367e154. Too many branches */
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


// ===== public void .ctor()  [RVA 0x3578740]
// Core.Network.ServerProvider.BFHAADMCPEM$$.ctor @ RVA 0x3578740

void Core_Network_ServerProvider_BFHAADMCPEM___ctor
               (Core_Network_ServerProvider_BFHAADMCPEM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

