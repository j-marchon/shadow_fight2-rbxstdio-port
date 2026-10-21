// Core.Network.ServerProvider$$Create @ RVA 0x3579774

void Core_Network_ServerProvider__Create(MethodInfo *method)

{
  bool bVar1;
  Core_Network_ServerProvider_o *pCVar2;
  
  if ((DAT_04568ca5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_ServerProviderBase_GIENGNEGHPJ<ServerProvider>__);
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
    DAT_04568ca5 = 1;
  }
  pCVar2 = Core_Network_ServerProvider_TypeInfo->static_fields->KNOHKIKFEBL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pCVar2 = (Core_Network_ServerProvider_o *)
             ServerProviderBase__GIENGNEGHPJ<object>
                       (Method_ServerProviderBase_GIENGNEGHPJ<ServerProvider>__);
    Core_Network_ServerProvider_TypeInfo->static_fields->KNOHKIKFEBL = pCVar2;
    thunk_FUN_01c20e04(Core_Network_ServerProvider_TypeInfo->static_fields,pCVar2);
    pCVar2 = Core_Network_ServerProvider_TypeInfo->static_fields->KNOHKIKFEBL;
    if (pCVar2 != (Core_Network_ServerProvider_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03679840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pCVar2->klass->vtable)._8_GIENGNEGHPJ.methodPtr)
                (pCVar2,(pCVar2->klass->vtable)._8_GIENGNEGHPJ.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

