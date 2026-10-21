// HJCAIFICDMO$$AADPHALJNLL @ RVA 0x34B4888

/* WARNING: Removing unreachable block (ram,0x035b48f4) */
/* WARNING: Removing unreachable block (ram,0x035b4908) */

void HJCAIFICDMO__AADPHALJNLL
               (HJCAIFICDMO_o *__this,Core_Configs_Models_BuildSettingsConfig_o *PCMFDDODKED,
               MethodInfo *method)

{
  Core_Configs_Models_LogRulesSettings_o *pCVar1;
  MethodInfo *method_00;
  Core_Configs_Models_LogRulesSettings_o **ppCVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04568577 & 1) == 0) {
    FUN_01bab630(&Method_JGEJMOKEDLF<BuildSettingsConfig>_AADPHALJNLL__);
    DAT_04568577 = 1;
  }
  JGEJMOKEDLF<object>__AADPHALJNLL
            ((JGEJMOKEDLF_T__o *)__this,(Il2CppObject *)PCMFDDODKED,
             Method_JGEJMOKEDLF<BuildSettingsConfig>_AADPHALJNLL__);
  if (PCMFDDODKED == (Core_Configs_Models_BuildSettingsConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppCVar2 = &(PCMFDDODKED->fields)._LogRules_k__BackingField;
  fVar3 = (PCMFDDODKED->fields)._ControllerPrimaryAngle_k__BackingField;
  fVar4 = (PCMFDDODKED->fields)._ControllerTouchZoneExtensionFactor_k__BackingField;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  if (fVar4 < 0.9) {
    fVar4 = 0.9;
  }
  (PCMFDDODKED->fields)._ControllerPrimaryAngle_k__BackingField = fVar3;
  (PCMFDDODKED->fields)._ControllerTouchZoneExtensionFactor_k__BackingField = fVar4;
  pCVar1 = HJCAIFICDMO__POJOKOLAOGA(*ppCVar2,method_00);
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  return;
}

