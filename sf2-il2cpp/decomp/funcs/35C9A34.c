// Core.Appsflyer.BanzaiAppsFlyer.INLHHNGGBNB$$AMEMEBIEJGB @ RVA 0x35C9A34

void Core_Appsflyer_BanzaiAppsFlyer_INLHHNGGBNB__AMEMEBIEJGB
               (Core_Appsflyer_BanzaiAppsFlyer_INLHHNGGBNB_o *__this,Il2CppObject *sender,
               System_EventArgs_o *args,MethodInfo *method)

{
  byte bVar1;
  System_Action_HKIFKIPAKPD__o *pSVar2;
  
  if ((DAT_04568f8c & 1) == 0) {
    FUN_01bab630(&HKIFKIPAKPD_TypeInfo);
    DAT_04568f8c = 1;
  }
  pSVar2 = (__this->fields).h;
  if (pSVar2 == (System_Action_HKIFKIPAKPD__o *)0x0) {
    return;
  }
  if (args != (System_EventArgs_o *)0x0) {
    bVar1 = (HKIFKIPAKPD_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (args->klass->_2).naturalAligment) {
      if ((args->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)HKIFKIPAKPD_TypeInfo)
      {
        args = (System_EventArgs_o *)0x0;
      }
      goto LAB_036c9ab8;
    }
  }
  args = (System_EventArgs_o *)0x0;
LAB_036c9ab8:
                    /* WARNING: Could not recover jumptable at 0x036c9acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(pSVar2->fields).super.super.invoke_impl)
            ((pSVar2->fields).super.super.method_code,args,(pSVar2->fields).super.super.method);
  return;
}

