// NHOILKKCIMI.<>c$$OAIAFKMMCFB @ RVA 0x33D04DC

UnityEngine_Application_LogCallback_o *
NHOILKKCIMI_<>c__OAIAFKMMCFB
          (NHOILKKCIMI___c_o *__this,System_Action_NHOILKKCIMI_BGFGPENCLEA__o *h,MethodInfo *method)

{
  Il2CppObject *__this_00;
  UnityEngine_Application_LogCallback_o *pUVar1;
  
  if ((DAT_04567e5a & 1) == 0) {
    FUN_01bab630(&Method_NHOILKKCIMI_FFJIPJCGLNG_ECHAGFGBPAL__);
    FUN_01bab630(&NHOILKKCIMI_FFJIPJCGLNG_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_LogCallback_TypeInfo);
    DAT_04567e5a = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(NHOILKKCIMI_FFJIPJCGLNG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)h;
    thunk_FUN_01c20e04(__this_00 + 1,h);
    pUVar1 = (UnityEngine_Application_LogCallback_o *)
             thunk_FUN_01bda818(UnityEngine_Application_LogCallback_TypeInfo);
    UnityEngine_Application_LogCallback___ctor();
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

