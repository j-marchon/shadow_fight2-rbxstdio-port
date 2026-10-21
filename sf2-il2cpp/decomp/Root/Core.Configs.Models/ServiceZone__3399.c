// TypeDefIndex 3399
// Namespace: Core.Configs.Models
// [Serializable]
// public class ServiceZone
// Fields:
//   private int <Id>k__BackingField; // 0x10
//   private IReadOnlyDictionary<string, string> <Hosts>k__BackingField; // 0x18

// ===== public int get_Id()  [RVA 0x3552F30]
// Core.Configs.Models.ServiceZone$$get_Id @ RVA 0x3552F30

int32_t Core_Configs_Models_ServiceZone__get_Id
                  (Core_Configs_Models_ServiceZone_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// ===== public void set_Id(int value)  [RVA 0x3552F38]
// Core.Configs.Models.ServiceZone$$set_Id @ RVA 0x3552F38

void Core_Configs_Models_ServiceZone__set_Id
               (Core_Configs_Models_ServiceZone_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._Id_k__BackingField = value;
  return;
}


// ===== public IReadOnlyDictionary<string, string> get_Hosts()  [RVA 0x3552F40]
// Core.Configs.Models.ServiceZone$$get_Hosts @ RVA 0x3552F40

System_Collections_Generic_IReadOnlyDictionary_string__string__o *
Core_Configs_Models_ServiceZone__get_Hosts
          (Core_Configs_Models_ServiceZone_o *__this,MethodInfo *method)

{
  return (__this->fields)._Hosts_k__BackingField;
}


// ===== public void set_Hosts(IReadOnlyDictionary<string, string> value)  [RVA 0x3552F48]
// Core.Configs.Models.ServiceZone$$set_Hosts @ RVA 0x3552F48

void Core_Configs_Models_ServiceZone__set_Hosts
               (Core_Configs_Models_ServiceZone_o *__this,
               System_Collections_Generic_IReadOnlyDictionary_string__string__o *value,
               MethodInfo *method)

{
  (__this->fields)._Hosts_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x3552F50]
// Core.Configs.Models.ServiceZone$$.ctor @ RVA 0x3552F50

void Core_Configs_Models_ServiceZone___ctor
               (Core_Configs_Models_ServiceZone_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

