// TypeDefIndex 3029
// Namespace: 
// public class HJCAIFICDMO : JGEJMOKEDLF<BuildSettingsConfig>
// Fields:

// ===== internal static LogRulesSettings POJOKOLAOGA(LogRulesSettings MDDPJDKGMGH)  [RVA 0x34B4654]
// HJCAIFICDMO$$POJOKOLAOGA @ RVA 0x34B4654

Core_Configs_Models_LogRulesSettings_o *
HJCAIFICDMO__POJOKOLAOGA(Core_Configs_Models_LogRulesSettings_o *MDDPJDKGMGH,MethodInfo *method)

{
  Core_Configs_Models_QuestsLogRulesSettings_o *__this;
  Core_Configs_Models_AnimationsLogRulesSettings_o *__this_00;
  Core_Configs_Models_HitsLogRulesSettings_o *__this_01;
  Core_Configs_Models_TacticsLogRulesSettings_o *__this_02;
  Core_Configs_Models_PerksLogRulesSettings_o *__this_03;
  Core_Configs_Models_ModelAILogRulesSettings_o *__this_04;
  Core_Configs_Models_LogRulesSettings_o *__this_05;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  Core_Configs_Models_QuestsLogRulesSettings_o **ppCVar1;
  Core_Configs_Models_AnimationsLogRulesSettings_o **ppCVar2;
  Core_Configs_Models_HitsLogRulesSettings_o **ppCVar3;
  Core_Configs_Models_TacticsLogRulesSettings_o **ppCVar4;
  Core_Configs_Models_PerksLogRulesSettings_o **ppCVar5;
  Core_Configs_Models_ModelAILogRulesSettings_o **ppCVar6;
  
  if ((DAT_04568576 & 1) == 0) {
    FUN_01bab630(&Core_Configs_Models_AnimationsLogRulesSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_HitsLogRulesSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_LogRulesSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_ModelAILogRulesSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_PerksLogRulesSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_QuestsLogRulesSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_TacticsLogRulesSettings_TypeInfo);
    DAT_04568576 = 1;
    method = extraout_x1;
  }
  if (MDDPJDKGMGH != (Core_Configs_Models_LogRulesSettings_o *)0x0) {
    if ((MDDPJDKGMGH->fields)._WriteAll_k__BackingField == false) {
      __this_05 = (Core_Configs_Models_LogRulesSettings_o *)
                  thunk_FUN_01bda818(Core_Configs_Models_LogRulesSettings_TypeInfo,method);
      Core_Configs_Models_LogRulesSettings___ctor(__this_05,(MethodInfo *)0x0);
      return __this_05;
    }
    ppCVar1 = &(MDDPJDKGMGH->fields)._Quests_k__BackingField;
    if (*ppCVar1 != (Core_Configs_Models_QuestsLogRulesSettings_o *)0x0) {
      if (((*ppCVar1)->fields)._WriteAll_k__BackingField == false) {
        __this = (Core_Configs_Models_QuestsLogRulesSettings_o *)
                 thunk_FUN_01bda818(Core_Configs_Models_QuestsLogRulesSettings_TypeInfo,method);
        Core_Configs_Models_QuestsLogRulesSettings___ctor(__this,(MethodInfo *)0x0);
        *ppCVar1 = __this;
        thunk_FUN_01c20e04(ppCVar1,__this);
        method = extraout_x1_00;
      }
      ppCVar2 = &(MDDPJDKGMGH->fields)._Animations_k__BackingField;
      if (*ppCVar2 != (Core_Configs_Models_AnimationsLogRulesSettings_o *)0x0) {
        if (((*ppCVar2)->fields)._WriteAll_k__BackingField == false) {
          __this_00 = (Core_Configs_Models_AnimationsLogRulesSettings_o *)
                      thunk_FUN_01bda818(Core_Configs_Models_AnimationsLogRulesSettings_TypeInfo,
                                         method);
          Core_Configs_Models_AnimationsLogRulesSettings___ctor(__this_00,(MethodInfo *)0x0);
          *ppCVar2 = __this_00;
          thunk_FUN_01c20e04(ppCVar2,__this_00);
          method = extraout_x1_01;
        }
        ppCVar3 = &(MDDPJDKGMGH->fields)._Hits_k__BackingField;
        if (*ppCVar3 != (Core_Configs_Models_HitsLogRulesSettings_o *)0x0) {
          if (((*ppCVar3)->fields)._WriteAll_k__BackingField == false) {
            __this_01 = (Core_Configs_Models_HitsLogRulesSettings_o *)
                        thunk_FUN_01bda818(Core_Configs_Models_HitsLogRulesSettings_TypeInfo,method)
            ;
            Core_Configs_Models_HitsLogRulesSettings___ctor(__this_01,(MethodInfo *)0x0);
            *ppCVar3 = __this_01;
            thunk_FUN_01c20e04(ppCVar3,__this_01);
            method = extraout_x1_02;
          }
          ppCVar4 = &(MDDPJDKGMGH->fields)._Tactics_k__BackingField;
          if (*ppCVar4 != (Core_Configs_Models_TacticsLogRulesSettings_o *)0x0) {
            if (((*ppCVar4)->fields)._WriteAll_k__BackingField == false) {
              __this_02 = (Core_Configs_Models_TacticsLogRulesSettings_o *)
                          thunk_FUN_01bda818(Core_Configs_Models_TacticsLogRulesSettings_TypeInfo,
                                             method);
              Core_Configs_Models_TacticsLogRulesSettings___ctor(__this_02,(MethodInfo *)0x0);
              *ppCVar4 = __this_02;
              thunk_FUN_01c20e04(ppCVar4,__this_02);
            }
            ppCVar5 = &(MDDPJDKGMGH->fields)._Perks_k__BackingField;
            if (*ppCVar5 != (Core_Configs_Models_PerksLogRulesSettings_o *)0x0) {
              if (((*ppCVar5)->fields)._WriteAll_k__BackingField == false) {
                __this_03 = (Core_Configs_Models_PerksLogRulesSettings_o *)
                            thunk_FUN_01bda818(Core_Configs_Models_PerksLogRulesSettings_TypeInfo);
                Core_Configs_Models_PerksLogRulesSettings___ctor(__this_03,(MethodInfo *)0x0);
                *ppCVar5 = __this_03;
                thunk_FUN_01c20e04(ppCVar5,__this_03);
              }
              ppCVar6 = &(MDDPJDKGMGH->fields)._ModelAI_k__BackingField;
              if (*ppCVar6 != (Core_Configs_Models_ModelAILogRulesSettings_o *)0x0) {
                if (((*ppCVar6)->fields)._WriteAll_k__BackingField != false) {
                  return MDDPJDKGMGH;
                }
                __this_04 = (Core_Configs_Models_ModelAILogRulesSettings_o *)
                            thunk_FUN_01bda818(Core_Configs_Models_ModelAILogRulesSettings_TypeInfo)
                ;
                Core_Configs_Models_ModelAILogRulesSettings___ctor(__this_04,(MethodInfo *)0x0);
                *ppCVar6 = __this_04;
                thunk_FUN_01c20e04(ppCVar6,__this_04);
                return MDDPJDKGMGH;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void AADPHALJNLL(BuildSettingsConfig PCMFDDODKED)  [RVA 0x34B4888]
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


// ===== public void .ctor(string AAIHDEKMIJG, MPNLOEAPLNP NLLKBIJIFNI = 1, Action<BuildSettingsConfig> OKJAPLOKACL)  [RVA 0x34B4940]
// HJCAIFICDMO$$.ctor @ RVA 0x34B4940

void HJCAIFICDMO___ctor(HJCAIFICDMO_o *__this,System_String_o *AAIHDEKMIJG,int32_t NLLKBIJIFNI,
                       System_Action_BuildSettingsConfig__o *OKJAPLOKACL,MethodInfo *method)

{
  if ((DAT_04568578 & 1) == 0) {
    FUN_01bab630(&Method_JGEJMOKEDLF<BuildSettingsConfig>__ctor__);
    DAT_04568578 = 1;
  }
  JGEJMOKEDLF<object>___ctor
            ((JGEJMOKEDLF_T__o *)__this,AAIHDEKMIJG,NLLKBIJIFNI,(System_Action_T__o *)OKJAPLOKACL,
             Method_JGEJMOKEDLF<BuildSettingsConfig>__ctor__);
  return;
}

