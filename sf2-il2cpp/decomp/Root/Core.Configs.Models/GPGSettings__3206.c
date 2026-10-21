// TypeDefIndex 3206
// Namespace: Core.Configs.Models
// public class GPGSettings
// Fields:
//   private uint <CloudSavesCount>k__BackingField; // 0x10
//   private int <TokenUpdatePeriodInSeconds>k__BackingField; // 0x14

// ===== public uint get_CloudSavesCount()  [RVA 0x34FAAE4]
// Core.Configs.Models.GPGSettings$$get_CloudSavesCount @ RVA 0x34FAAE4

uint32_t Core_Configs_Models_GPGSettings__get_CloudSavesCount
                   (Core_Configs_Models_GPGSettings_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 035faac4 with catch @ 035faae4 */
                    /* catch() { ... } // from try @ 035faa58 with catch @ 035faae8 */
  return (__this->fields)._CloudSavesCount_k__BackingField;
}


// ===== public void set_CloudSavesCount(uint value)  [RVA 0x34FAAEC]
// Core.Configs.Models.GPGSettings$$set_CloudSavesCount @ RVA 0x34FAAEC

void Core_Configs_Models_GPGSettings__set_CloudSavesCount
               (Core_Configs_Models_GPGSettings_o *__this,uint32_t value,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 035fa5f8 with catch @ 035faaec */
  (__this->fields)._CloudSavesCount_k__BackingField = value;
                    /* catch() { ... } // from try @ 035faa6c with catch @ 035faaf0 */
  return;
}


// ===== public int get_TokenUpdatePeriodInSeconds()  [RVA 0x34FAAF4]
// Core.Configs.Models.GPGSettings$$get_TokenUpdatePeriodInSeconds @ RVA 0x34FAAF4

int32_t Core_Configs_Models_GPGSettings__get_TokenUpdatePeriodInSeconds
                  (Core_Configs_Models_GPGSettings_o *__this,MethodInfo *method)

{
  return (__this->fields)._TokenUpdatePeriodInSeconds_k__BackingField;
}


// ===== public void set_TokenUpdatePeriodInSeconds(int value)  [RVA 0x34FAAFC]
// Core.Configs.Models.GPGSettings$$set_TokenUpdatePeriodInSeconds @ RVA 0x34FAAFC

void Core_Configs_Models_GPGSettings__set_TokenUpdatePeriodInSeconds
               (Core_Configs_Models_GPGSettings_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._TokenUpdatePeriodInSeconds_k__BackingField = value;
  return;
}


// ===== public void .ctor()  [RVA 0x34FAB04]
// Core.Configs.Models.GPGSettings$$.ctor @ RVA 0x34FAB04

void Core_Configs_Models_GPGSettings___ctor
               (Core_Configs_Models_GPGSettings_o *__this,MethodInfo *method)

{
                    /* try { // try from 035fab08 to 036fab0b has its CatchHandler @ 035fab2c */
                    /* try { // try from 035fab0c to 036fab33 has its CatchHandler @ 035fa4c0 */
  (__this->fields)._TokenUpdatePeriodInSeconds_k__BackingField = 0x708;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

