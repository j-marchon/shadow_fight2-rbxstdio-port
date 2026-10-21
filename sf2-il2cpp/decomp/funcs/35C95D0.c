// Core.Appsflyer.BanzaiAppsFlyer.<>c$$JJOFPPIABIN @ RVA 0x35C95D0

System_EventHandler_o *
Core_Appsflyer_BanzaiAppsFlyer_<>c__JJOFPPIABIN
          (Core_Appsflyer_BanzaiAppsFlyer___c_o *__this,System_Action_HKIFKIPAKPD__o *h,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_EventHandler_o *pSVar1;
  
  if ((DAT_04568f86 & 1) == 0) {
    FUN_01bab630(&System_EventHandler_TypeInfo);
    FUN_01bab630(&Method_Core_Appsflyer_BanzaiAppsFlyer_INLHHNGGBNB_AMEMEBIEJGB__);
    FUN_01bab630(&Core_Appsflyer_BanzaiAppsFlyer_INLHHNGGBNB_TypeInfo);
    DAT_04568f86 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Core_Appsflyer_BanzaiAppsFlyer_INLHHNGGBNB_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)h;
    thunk_FUN_01c20e04(__this_00 + 1,h);
    pSVar1 = (System_EventHandler_o *)thunk_FUN_01bda818(System_EventHandler_TypeInfo);
    System_EventHandler___ctor();
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

