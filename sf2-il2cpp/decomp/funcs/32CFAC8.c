// Core.Configs.Models.PackSettingsExtension$$CheckDownloadConditions @ RVA 0x32CFAC8

bool Core_Configs_Models_PackSettingsExtension__CheckDownloadConditions
               (Core_Configs_Models_PackSettings_o *pack,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  System_Func_TSource__bool__o *predicate;
  MethodInfo *extraout_x1;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  
  if ((DAT_04567542 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_All<LEGDPJHPEOB>__);
    FUN_01bab630(&System_Func<LEGDPJHPEOB,_bool>_TypeInfo);
    FUN_01bab630(&
                 Method_Core_Configs_Models_PackSettingsExtension_<>c__DisplayClass1_0_<CheckDownloadConditions>b__0__
                );
    FUN_01bab630(&Core_Configs_Models_PackSettingsExtension_<>c__DisplayClass1_0_TypeInfo);
    DAT_04567542 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)
           thunk_FUN_01bda818(Core_Configs_Models_PackSettingsExtension_<>c__DisplayClass1_0_TypeInfo
                              ,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) && (__this != (Il2CppObject *)0x0)) {
    __this[1].klass = (Il2CppClass *)(pNVar2->fields).QuestParameters;
    thunk_FUN_01c20e04();
    if (pack != (Core_Configs_Models_PackSettings_o *)0x0) {
      source = (System_Collections_Generic_IEnumerable_TSource__o *)
               (pack->fields)._DownloadConditions_k__BackingField;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<LEGDPJHPEOB,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      bVar1 = System_Linq_Enumerable__All<object>
                        (source,predicate,Method_System_Linq_Enumerable_All<LEGDPJHPEOB>__);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

