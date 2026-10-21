// TypeDefIndex 464
// Namespace: 
// [CompilerGenerated]
// private sealed class ServerProvider.OKCOFKOBFBM
// Fields:
//   public Action<bool, string, object> handler; // 0x10

// ===== public void .ctor()  [RVA 0x357683C]
// Core.Network.ServerProvider.OKCOFKOBFBM$$.ctor @ RVA 0x357683C

void Core_Network_ServerProvider_OKCOFKOBFBM___ctor
               (Core_Network_ServerProvider_OKCOFKOBFBM_o *__this,MethodInfo *method)

{
                    /* try { // try from 0367683c to 03776843 has its CatchHandler @ 03676bbc */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void DOLLEDCCGBH(DMKKAPNMDKJ response)  [RVA 0x357F0C0]
// Core.Network.ServerProvider.OKCOFKOBFBM$$DOLLEDCCGBH @ RVA 0x357F0C0

void Core_Network_ServerProvider_OKCOFKOBFBM__DOLLEDCCGBH
               (Core_Network_ServerProvider_OKCOFKOBFBM_o *__this,DMKKAPNMDKJ_o *response,
               MethodInfo *method)

{
  System_Action_bool__string__object__o *pSVar1;
  
  pSVar1 = (__this->fields).handler;
  if (pSVar1 == (System_Action_bool__string__object__o *)0x0) {
    return;
  }
  if (response != (DMKKAPNMDKJ_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0367f0ec. Too many branches */
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

