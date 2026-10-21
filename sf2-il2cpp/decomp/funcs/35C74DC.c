// Core.Appsflyer.BanzaiAppsFlyer$$DFLDGIMKFDO @ RVA 0x35C74DC

void Core_Appsflyer_BanzaiAppsFlyer__DFLDGIMKFDO
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,System_String_o *ACBDKJMJMNJ,
               MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *FEPLAGOGJNL;
  System_Byte_array *ACBDKJMJMNJ_00;
  MethodInfo *method_00;
  HMEJGGGPIPL_o *pHVar2;
  
  if ((DAT_04568f6b & 1) == 0) {
    FUN_01bab630(&AppsFlyerSDK_AppsFlyer_TypeInfo);
    FUN_01bab630(&LJHJJHEFBDD_TypeInfo);
    FUN_01bab630(&StringLiteral_11161);
    FUN_01bab630(&StringLiteral_802);
    FUN_01bab630(&StringLiteral_11164);
    DAT_04568f6b = 1;
  }
  method_00 = StringLiteral_802;
  FEPLAGOGJNL = System_String__Concat
                          (StringLiteral_11161,ACBDKJMJMNJ,(System_String_o *)StringLiteral_802,
                           (MethodInfo *)0x0);
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(FEPLAGOGJNL,StringLiteral_11164,method_00);
  pHVar2 = (__this->fields).KAPMLAAGDAI;
  if (pHVar2 != (HMEJGGGPIPL_o *)0x0) {
    bVar1 = (pHVar2->fields).KGIDNENGGEO;
    if ((AppsFlyerSDK_AppsFlyer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AppsFlyerSDK_AppsFlyer__setUseUninstallSandbox(bVar1 != false,(MethodInfo *)0x0);
    if ((LJHJJHEFBDD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ACBDKJMJMNJ_00 = LJHJJHEFBDD__HPBCENEFAMD(ACBDKJMJMNJ,(MethodInfo *)0x0);
    AppsFlyerSDK_AppsFlyer__registerUninstall(ACBDKJMJMNJ_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

