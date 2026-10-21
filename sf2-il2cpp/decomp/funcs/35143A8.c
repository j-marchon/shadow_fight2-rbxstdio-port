// Core.Configs.Models.LocalDailyConfigExtension$$GetLocalDailyQuestInfoById @ RVA 0x35143A8

Core_Configs_Models_LocalDailyQuestInfo_o *
Core_Configs_Models_LocalDailyConfigExtension__GetLocalDailyQuestInfoById
          (Core_Configs_Models_LocalDailyConfig_o *config,int32_t id,MethodInfo *method)

{
  Core_Configs_Models_LocalDailyQuestInfo_o *pCVar1;
  
  if ((DAT_04568912 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<int,_LocalDailyQuestInfo>__
                );
    DAT_04568912 = 1;
  }
  if (config != (Core_Configs_Models_LocalDailyConfig_o *)0x0) {
    pCVar1 = (Core_Configs_Models_LocalDailyQuestInfo_o *)
             System_Collections_Generic_CollectionExtensions__GetValueOrDefault<int,_object>
                       ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                        (config->fields)._LocalDailyQuestsInfoById_k__BackingField,id,
                        Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<int,_LocalDailyQuestInfo>__
                       );
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

