// Core.Configs.Models.LogRulesSettings$$.ctor @ RVA 0x33A11D4

void Core_Configs_Models_LogRulesSettings___ctor
               (Core_Configs_Models_LogRulesSettings_o *__this,MethodInfo *method)

{
  Core_Configs_Models_QuestsLogRulesSettings_o *__this_00;
  Core_Configs_Models_QuestsLogRulesSettings_o **ppCVar1;
  Core_Configs_Models_AnimationsLogRulesSettings_o *__this_01;
  Core_Configs_Models_AnimationsLogRulesSettings_o **ppCVar2;
  Core_Configs_Models_HitsLogRulesSettings_o *__this_02;
  Core_Configs_Models_HitsLogRulesSettings_o **ppCVar3;
  Core_Configs_Models_TacticsLogRulesSettings_o *__this_03;
  Core_Configs_Models_TacticsLogRulesSettings_o **ppCVar4;
  Core_Configs_Models_PerksLogRulesSettings_o *__this_04;
  Core_Configs_Models_PerksLogRulesSettings_o **ppCVar5;
  Core_Configs_Models_ModelAILogRulesSettings_o *__this_05;
  Core_Configs_Models_ModelAILogRulesSettings_o **ppCVar6;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034a11d8 to 035a11e3 has its CatchHandler @ 034a0a68 */
                    /* try { // try from 034a11e4 to 035a11eb has its CatchHandler @ 034a11ec */
                    /* catch() { ... } // from try @ 034a11d0 with catch @ 034a11ec
                       catch() { ... } // from try @ 034a11e4 with catch @ 034a11ec */
  if ((DAT_04567cb8 & 1) == 0) {
    FUN_01bab630(&Core_Configs_Models_AnimationsLogRulesSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_HitsLogRulesSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_ModelAILogRulesSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_PerksLogRulesSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_QuestsLogRulesSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_TacticsLogRulesSettings_TypeInfo);
    DAT_04567cb8 = 1;
    method = extraout_x1;
  }
  __this_00 = (Core_Configs_Models_QuestsLogRulesSettings_o *)
              thunk_FUN_01bda818(Core_Configs_Models_QuestsLogRulesSettings_TypeInfo,method);
  Core_Configs_Models_QuestsLogRulesSettings___ctor(__this_00,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields)._Quests_k__BackingField;
  *ppCVar1 = __this_00;
  thunk_FUN_01c20e04(ppCVar1,__this_00);
  __this_01 = (Core_Configs_Models_AnimationsLogRulesSettings_o *)
              thunk_FUN_01bda818(Core_Configs_Models_AnimationsLogRulesSettings_TypeInfo);
  Core_Configs_Models_AnimationsLogRulesSettings___ctor(__this_01,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields)._Animations_k__BackingField;
  *ppCVar2 = __this_01;
  thunk_FUN_01c20e04(ppCVar2,__this_01);
  __this_02 = (Core_Configs_Models_HitsLogRulesSettings_o *)
              thunk_FUN_01bda818(Core_Configs_Models_HitsLogRulesSettings_TypeInfo);
  Core_Configs_Models_HitsLogRulesSettings___ctor(__this_02,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields)._Hits_k__BackingField;
  *ppCVar3 = __this_02;
  thunk_FUN_01c20e04(ppCVar3,__this_02);
  __this_03 = (Core_Configs_Models_TacticsLogRulesSettings_o *)
              thunk_FUN_01bda818(Core_Configs_Models_TacticsLogRulesSettings_TypeInfo);
  Core_Configs_Models_TacticsLogRulesSettings___ctor(__this_03,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields)._Tactics_k__BackingField;
  *ppCVar4 = __this_03;
  thunk_FUN_01c20e04(ppCVar4,__this_03);
  __this_04 = (Core_Configs_Models_PerksLogRulesSettings_o *)
              thunk_FUN_01bda818(Core_Configs_Models_PerksLogRulesSettings_TypeInfo);
  Core_Configs_Models_PerksLogRulesSettings___ctor(__this_04,(MethodInfo *)0x0);
  ppCVar5 = &(__this->fields)._Perks_k__BackingField;
  *ppCVar5 = __this_04;
  thunk_FUN_01c20e04(ppCVar5,__this_04);
  __this_05 = (Core_Configs_Models_ModelAILogRulesSettings_o *)
              thunk_FUN_01bda818(Core_Configs_Models_ModelAILogRulesSettings_TypeInfo);
  Core_Configs_Models_ModelAILogRulesSettings___ctor(__this_05,(MethodInfo *)0x0);
  ppCVar6 = &(__this->fields)._ModelAI_k__BackingField;
  *ppCVar6 = __this_05;
  thunk_FUN_01c20e04(ppCVar6,__this_05);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

