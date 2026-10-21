// Core.Appsflyer.BanzaiAppsFlyer.GILFIGCLMIG$$LIIIFLALKNA @ RVA 0x35C99A0

void Core_Appsflyer_BanzaiAppsFlyer_GILFIGCLMIG__LIIIFLALKNA
               (Core_Appsflyer_BanzaiAppsFlyer_GILFIGCLMIG_o *__this,Il2CppObject *sender,
               System_EventArgs_o *args,MethodInfo *method)

{
  byte bVar1;
  System_Action_GAHKDMDKMBP__o *pSVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = sender;
  auVar3._0_8_ = __this;
  if ((DAT_04568f8b & 1) == 0) {
    auVar3 = FUN_01bab630(&GAHKDMDKMBP_TypeInfo);
    DAT_04568f8b = 1;
  }
  pSVar2 = (__this->fields).handler;
  if (pSVar2 == (System_Action_GAHKDMDKMBP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
  }
  if (args != (System_EventArgs_o *)0x0) {
    bVar1 = (GAHKDMDKMBP_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (args->klass->_2).naturalAligment) {
      if ((args->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)GAHKDMDKMBP_TypeInfo)
      {
        args = (System_EventArgs_o *)0x0;
      }
      goto LAB_036c9a18;
    }
  }
  args = (System_EventArgs_o *)0x0;
LAB_036c9a18:
                    /* WARNING: Could not recover jumptable at 0x036c9a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(pSVar2->fields).super.super.invoke_impl)
            ((pSVar2->fields).super.super.method_code,args,(pSVar2->fields).super.super.method);
  return;
}

