// OCMLPCKBHPN$$GBNKDCDOECL @ RVA 0x327FF04

bool OCMLPCKBHPN__GBNKDCDOECL(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  Core_Configs_Models_BuildSettingsConfig_o *config;
  
  if ((DAT_04567281 & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04567281 = 1;
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (OCMLPCKBHPN_TypeInfo->static_fields->OOAOJIHCHDB == false) {
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    config = (Core_Configs_Models_BuildSettingsConfig_o *)
             IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__)
    ;
    bVar1 = false;
    if (config != (Core_Configs_Models_BuildSettingsConfig_o *)0x0) {
      iVar2 = Core_Configs_Models_BuildSettingsExtension__GetTacticsCaching
                        (config,-1,(MethodInfo *)0x0);
      if (iVar2 < 1) {
        bVar1 = false;
      }
      else {
        iVar3 = UnityEngine_SystemInfo__get_systemMemorySize((MethodInfo *)0x0);
        bVar1 = iVar2 <= iVar3;
      }
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

