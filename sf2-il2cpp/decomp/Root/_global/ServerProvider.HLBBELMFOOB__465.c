// TypeDefIndex 465
// Namespace: 
// [CompilerGenerated]
// private sealed class ServerProvider.HLBBELMFOOB
// Fields:
//   public Action<bool, string, object> handler; // 0x10

// ===== internal void NKKAFLIOFGO(DMKKAPNMDKJ response)  [RVA 0x357F0FC]
// Core.Network.ServerProvider.HLBBELMFOOB$$NKKAFLIOFGO @ RVA 0x357F0FC

void Core_Network_ServerProvider_HLBBELMFOOB__NKKAFLIOFGO
               (Core_Network_ServerProvider_HLBBELMFOOB_o *__this,DMKKAPNMDKJ_o *response,
               MethodInfo *method)

{
  System_Action_bool__string__object__o *pSVar1;
  
  pSVar1 = (__this->fields).handler;
  if (pSVar1 == (System_Action_bool__string__object__o *)0x0) {
    return;
  }
  if (response != (DMKKAPNMDKJ_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0367f128. Too many branches */
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


// ===== public void .ctor()  [RVA 0x357725C]
// Core.Network.ServerProvider.HLBBELMFOOB$$.ctor @ RVA 0x357725C

void Core_Network_ServerProvider_HLBBELMFOOB___ctor
               (Core_Network_ServerProvider_HLBBELMFOOB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

