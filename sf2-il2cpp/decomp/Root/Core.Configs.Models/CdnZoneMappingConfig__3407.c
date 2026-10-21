// TypeDefIndex 3407
// Namespace: Core.Configs.Models
// [Serializable]
// public class CdnZoneMappingConfig
// Fields:
//   private IReadOnlyDictionary<string, int> <CdnMirrorToZone>k__BackingField; // 0x10
//   private IReadOnlyDictionary<int, string> <ZoneToCdnMirror>k__BackingField; // 0x18

// ===== public IReadOnlyDictionary<string, int> get_CdnMirrorToZone()  [RVA 0x3554CE4]
// Core.Configs.Models.CdnZoneMappingConfig$$get_CdnMirrorToZone @ RVA 0x3554CE4

System_Collections_Generic_IReadOnlyDictionary_string__int__o *
Core_Configs_Models_CdnZoneMappingConfig__get_CdnMirrorToZone
          (Core_Configs_Models_CdnZoneMappingConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._CdnMirrorToZone_k__BackingField;
}


// ===== public void set_CdnMirrorToZone(IReadOnlyDictionary<string, int> value)  [RVA 0x3554CEC]
// Core.Configs.Models.CdnZoneMappingConfig$$set_CdnMirrorToZone @ RVA 0x3554CEC

void Core_Configs_Models_CdnZoneMappingConfig__set_CdnMirrorToZone
               (Core_Configs_Models_CdnZoneMappingConfig_o *__this,
               System_Collections_Generic_IReadOnlyDictionary_string__int__o *value,
               MethodInfo *method)

{
  (__this->fields)._CdnMirrorToZone_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public IReadOnlyDictionary<int, string> get_ZoneToCdnMirror()  [RVA 0x3554CF4]
// Core.Configs.Models.CdnZoneMappingConfig$$get_ZoneToCdnMirror @ RVA 0x3554CF4

System_Collections_Generic_IReadOnlyDictionary_int__string__o *
Core_Configs_Models_CdnZoneMappingConfig__get_ZoneToCdnMirror
          (Core_Configs_Models_CdnZoneMappingConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._ZoneToCdnMirror_k__BackingField;
}


// ===== public void set_ZoneToCdnMirror(IReadOnlyDictionary<int, string> value)  [RVA 0x3554CFC]
// Core.Configs.Models.CdnZoneMappingConfig$$set_ZoneToCdnMirror @ RVA 0x3554CFC

void Core_Configs_Models_CdnZoneMappingConfig__set_ZoneToCdnMirror
               (Core_Configs_Models_CdnZoneMappingConfig_o *__this,
               System_Collections_Generic_IReadOnlyDictionary_int__string__o *value,
               MethodInfo *method)

{
  (__this->fields)._ZoneToCdnMirror_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x3554D04]
// Core.Configs.Models.CdnZoneMappingConfig$$.ctor @ RVA 0x3554D04

void Core_Configs_Models_CdnZoneMappingConfig___ctor
               (Core_Configs_Models_CdnZoneMappingConfig_o *__this,MethodInfo *method)

{
                    /* try { // try from 03654d08 to 03754d0f has its CatchHandler @ 03654dd0 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

