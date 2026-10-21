// TypeDefIndex 3271
// Namespace: Core.Configs.Models
// [Serializable]
// public class ServiceZonesConfig
// Fields:
//   private float <AdaptiveTimeoutMultiplier>k__BackingField; // 0x10
//   private IReadOnlyDictionary<int, ServiceZone> <Zones>k__BackingField; // 0x18

// ===== public float get_AdaptiveTimeoutMultiplier()  [RVA 0x3519EB0]
// Core.Configs.Models.ServiceZonesConfig$$get_AdaptiveTimeoutMultiplier @ RVA 0x3519EB0

float Core_Configs_Models_ServiceZonesConfig__get_AdaptiveTimeoutMultiplier
                (Core_Configs_Models_ServiceZonesConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._AdaptiveTimeoutMultiplier_k__BackingField;
}


// ===== public void set_AdaptiveTimeoutMultiplier(float value)  [RVA 0x3519EB8]
// Core.Configs.Models.ServiceZonesConfig$$set_AdaptiveTimeoutMultiplier @ RVA 0x3519EB8

void Core_Configs_Models_ServiceZonesConfig__set_AdaptiveTimeoutMultiplier
               (Core_Configs_Models_ServiceZonesConfig_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._AdaptiveTimeoutMultiplier_k__BackingField = value;
  return;
}


// ===== public IReadOnlyDictionary<int, ServiceZone> get_Zones()  [RVA 0x3519EC0]
// Core.Configs.Models.ServiceZonesConfig$$get_Zones @ RVA 0x3519EC0

System_Collections_Generic_IReadOnlyDictionary_int__ServiceZone__o *
Core_Configs_Models_ServiceZonesConfig__get_Zones
          (Core_Configs_Models_ServiceZonesConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._Zones_k__BackingField;
}


// ===== public void set_Zones(IReadOnlyDictionary<int, ServiceZone> value)  [RVA 0x3519EC8]
// Core.Configs.Models.ServiceZonesConfig$$set_Zones @ RVA 0x3519EC8

void Core_Configs_Models_ServiceZonesConfig__set_Zones
               (Core_Configs_Models_ServiceZonesConfig_o *__this,
               System_Collections_Generic_IReadOnlyDictionary_int__ServiceZone__o *value,
               MethodInfo *method)

{
  (__this->fields)._Zones_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x3519ED0]
// Core.Configs.Models.ServiceZonesConfig$$.ctor @ RVA 0x3519ED0

void Core_Configs_Models_ServiceZonesConfig___ctor
               (Core_Configs_Models_ServiceZonesConfig_o *__this,MethodInfo *method)

{
  (__this->fields)._AdaptiveTimeoutMultiplier_k__BackingField = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

