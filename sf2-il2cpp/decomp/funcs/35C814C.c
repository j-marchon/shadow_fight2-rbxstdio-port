// Core.Appsflyer.BanzaiAppsFlyer$$PHDNKLHEHLB @ RVA 0x35C814C

void Core_Appsflyer_BanzaiAppsFlyer__PHDNKLHEHLB
               (Core_Appsflyer_BanzaiAppsFlyer_o *__this,HKIFKIPAKPD_o *OPAEPDIIOEB,
               MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *FEPLAGOGJNL;
  UniRx_ReactiveProperty_string__o *__this_00;
  Il2CppObject *arg0;
  MethodInfo *pMVar3;
  undefined8 *puVar4;
  int32_t local_34;
  
  if ((DAT_04568f78 & 1) == 0) {
    FUN_01bab630(&KMJOGOLBCGM_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string>_set_Value__);
    FUN_01bab630(&StringLiteral_7529);
    FUN_01bab630(&StringLiteral_5244);
    FUN_01bab630(&StringLiteral_9612);
    FUN_01bab630(&StringLiteral_9861);
    FUN_01bab630(&StringLiteral_17755);
    FUN_01bab630(&StringLiteral_5239);
    DAT_04568f78 = 1;
  }
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(StringLiteral_9861,StringLiteral_7529,method);
  if (OPAEPDIIOEB == (HKIFKIPAKPD_o *)0x0) {
    puVar4 = &StringLiteral_5244;
  }
  else {
    iVar1 = (OPAEPDIIOEB->fields)._LJLAFDKAGDO_k__BackingField;
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        local_34 = (OPAEPDIIOEB->fields)._MOJCLOIDJFG_k__BackingField;
        arg0 = (Il2CppObject *)thunk_FUN_01bda448(KMJOGOLBCGM_TypeInfo,&local_34);
        pMVar3 = (MethodInfo *)0x0;
        pSVar2 = System_String__Format(StringLiteral_5239,arg0,(MethodInfo *)0x0);
        Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(pSVar2,StringLiteral_7529,pMVar3);
        return;
      }
      pSVar2 = HKIFKIPAKPD__FGIBCKHKLMN(OPAEPDIIOEB,(MethodInfo *)0x0);
      pMVar3 = (MethodInfo *)0x0;
      FEPLAGOGJNL = System_String__Concat(StringLiteral_17755,pSVar2,(MethodInfo *)0x0);
      Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB(FEPLAGOGJNL,StringLiteral_7529,pMVar3);
      __this_00 = (__this->fields).ABBACAKGAAF;
      if (__this_00 != (UniRx_ReactiveProperty_string__o *)0x0) {
        UniRx_ReactiveProperty<object>__set_Value
                  ((UniRx_ReactiveProperty_T__o *)__this_00,(Il2CppObject *)pSVar2,
                   Method_UniRx_ReactiveProperty<string>_set_Value__);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    puVar4 = &StringLiteral_9612;
  }
  Core_Appsflyer_BanzaiAppsFlyer__JHEIGLGFONB((System_String_o *)*puVar4,StringLiteral_7529,method);
  return;
}

