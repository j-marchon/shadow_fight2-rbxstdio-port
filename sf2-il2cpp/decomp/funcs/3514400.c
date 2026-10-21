// Core.Configs.Models.LocalDailyConfigExtension$$GetLocalDailyQuestInfos @ RVA 0x3514400

System_Collections_Generic_IReadOnlyList_LocalDailyQuestInfo__o *
Core_Configs_Models_LocalDailyConfigExtension__GetLocalDailyQuestInfos
          (Core_Configs_Models_LocalDailyConfig_o *config,int32_t sequenceId,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if ((DAT_04568913 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<int,_List<LocalDailyQuestInfo>>__
                );
    DAT_04568913 = 1;
  }
  if (config != (Core_Configs_Models_LocalDailyConfig_o *)0x0) {
    pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<int,_object>
                       ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                        (config->fields)._LocalDailyQuestsInfoBySequence_k__BackingField,sequenceId,
                        Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<int,_List<LocalDailyQuestInfo>>__
                       );
    return (System_Collections_Generic_IReadOnlyList_LocalDailyQuestInfo__o *)pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

