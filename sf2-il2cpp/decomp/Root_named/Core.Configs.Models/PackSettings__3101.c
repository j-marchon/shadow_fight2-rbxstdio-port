// TypeDefIndex 3101
// Namespace: Core.Configs.Models
// public class PackSettings
// Fields:
//   private string <Name>k__BackingField; // 0x10
//   private PackType <Type>k__BackingField; // 0x18
//   private string <ItemsPackLabel>k__BackingField; // 0x20
//   private IReadOnlyList<QuestCondition> <DownloadConditions>k__BackingField; // 0x28

// ===== public string get_Name()  [RVA 0x34CB7B8]
// Core.Configs.Models.PackSettings$$get_Name @ RVA 0x34CB7B8

System_String_o *
Core_Configs_Models_PackSettings__get_Name
          (Core_Configs_Models_PackSettings_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// ===== private void set_Name(string value)  [RVA 0x34CB7C0]
// Core.Configs.Models.PackSettings$$set_Name @ RVA 0x34CB7C0

void Core_Configs_Models_PackSettings__set_Name
               (Core_Configs_Models_PackSettings_o *__this,System_String_o *value,MethodInfo *method
               )

{
  (__this->fields)._Name_k__BackingField = value;
                    /* try { // try from 035cb7c4 to 036cb7eb has its CatchHandler @ 035cbbc4 */
  thunk_FUN_01c20e04();
  return;
}


// ===== public PackType get_Type()  [RVA 0x34CB7C8]
// Core.Configs.Models.PackSettings$$get_Type @ RVA 0x34CB7C8

int32_t Core_Configs_Models_PackSettings__get_Type
                  (Core_Configs_Models_PackSettings_o *__this,MethodInfo *method)

{
  return (__this->fields)._Type_k__BackingField;
}


// ===== private void set_Type(PackType value)  [RVA 0x34CB7D0]
// Core.Configs.Models.PackSettings$$set_Type @ RVA 0x34CB7D0

void Core_Configs_Models_PackSettings__set_Type
               (Core_Configs_Models_PackSettings_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._Type_k__BackingField = value;
  return;
}


// ===== public string get_ItemsPackLabel()  [RVA 0x34CB7D8]
// Core.Configs.Models.PackSettings$$get_ItemsPackLabel @ RVA 0x34CB7D8

System_String_o *
Core_Configs_Models_PackSettings__get_ItemsPackLabel
          (Core_Configs_Models_PackSettings_o *__this,MethodInfo *method)

{
  return (__this->fields)._ItemsPackLabel_k__BackingField;
}


// ===== private void set_ItemsPackLabel(string value)  [RVA 0x34CB7E0]
// Core.Configs.Models.PackSettings$$set_ItemsPackLabel @ RVA 0x34CB7E0

void Core_Configs_Models_PackSettings__set_ItemsPackLabel
               (Core_Configs_Models_PackSettings_o *__this,System_String_o *value,MethodInfo *method
               )

{
  (__this->fields)._ItemsPackLabel_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public IReadOnlyList<QuestCondition> get_DownloadConditions()  [RVA 0x34CB7E8]
// Core.Configs.Models.PackSettings$$get_DownloadConditions @ RVA 0x34CB7E8

System_Collections_Generic_IReadOnlyList_LEGDPJHPEOB__o *
Core_Configs_Models_PackSettings__get_DownloadConditions
          (Core_Configs_Models_PackSettings_o *__this,MethodInfo *method)

{
  return (__this->fields)._DownloadConditions_k__BackingField;
}


// ===== private void set_DownloadConditions(IReadOnlyList<QuestCondition> value)  [RVA 0x34CB7F0]
// Core.Configs.Models.PackSettings$$set_DownloadConditions @ RVA 0x34CB7F0

void Core_Configs_Models_PackSettings__set_DownloadConditions
               (Core_Configs_Models_PackSettings_o *__this,
               System_Collections_Generic_IReadOnlyList_LEGDPJHPEOB__o *value,MethodInfo *method)

{
  (__this->fields)._DownloadConditions_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(string name, PackType packType, string itemsPackLabel, IEnumerable<QuestCondition> conditions)  [RVA 0x34CB7F8]
// Core.Configs.Models.PackSettings$$.ctor @ RVA 0x34CB7F8

void Core_Configs_Models_PackSettings___ctor
               (Core_Configs_Models_PackSettings_o *__this,System_String_o *name,int32_t packType,
               System_String_o *itemsPackLabel,
               System_Collections_Generic_IEnumerable_LEGDPJHPEOB__o *conditions,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_IReadOnlyList_LEGDPJHPEOB__o **ppSVar2;
  
                    /* try { // try from 035cb820 to 036cb84b has its CatchHandler @ 035cbbc0 */
  if ((DAT_04568670 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestCondition>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<QuestCondition>_TypeInfo);
    DAT_04568670 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  thunk_FUN_01c20e04(&__this->fields,name);
  (__this->fields)._Type_k__BackingField = packType;
  ppSVar1 = &(__this->fields)._ItemsPackLabel_k__BackingField;
  *ppSVar1 = itemsPackLabel;
                    /* try { // try from 035cb888 to 036cb88f has its CatchHandler @ 035cbbbc */
  thunk_FUN_01c20e04(ppSVar1,itemsPackLabel);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<QuestCondition>_TypeInfo);
                    /* try { // try from 035cb898 to 036cb89f has its CatchHandler @ 035cbbb8 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)conditions,
             Method_System_Collections_Generic_List<QuestCondition>__ctor__);
  ppSVar2 = &(__this->fields)._DownloadConditions_k__BackingField;
  *ppSVar2 = (System_Collections_Generic_IReadOnlyList_LEGDPJHPEOB__o *)__this_00;
                    /* try { // try from 035cb8a8 to 036cb8b7 has its CatchHandler @ 035cbbac */
                    /* try { // try from 035cb8b8 to 036cb8c7 has its CatchHandler @ 035cbba4 */
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  return;
}

