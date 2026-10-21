// Core.Appsflyer.BanzaiAppsFlyer.<>c$$EDOLMADOILP @ RVA 0x35C92D4

System_EventHandler_o *
Core_Appsflyer_BanzaiAppsFlyer_<>c__EDOLMADOILP
          (Core_Appsflyer_BanzaiAppsFlyer___c_o *__this,System_Action_GAHKDMDKMBP__o *handler,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_EventHandler_o *pSVar1;
  
  if ((DAT_04568f80 & 1) == 0) {
    FUN_01bab630(&System_EventHandler_TypeInfo);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_GLGCFOIPHDG_DKHIKHDGJGL__);
    FUN_01bab630(&Core_Appsflyer_BanzaiAppsFlyer_GLGCFOIPHDG_TypeInfo);
    DAT_04568f80 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Core_Appsflyer_BanzaiAppsFlyer_GLGCFOIPHDG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)handler;
    thunk_FUN_01c20e04(__this_00 + 1,handler);
    pSVar1 = (System_EventHandler_o *)thunk_FUN_01bda818(System_EventHandler_TypeInfo);
    System_EventHandler___ctor();
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

