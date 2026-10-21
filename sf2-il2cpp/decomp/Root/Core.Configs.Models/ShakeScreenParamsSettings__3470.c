// TypeDefIndex 3470
// Namespace: Core.Configs.Models
// public class ShakeScreenParamsSettings
// Fields:
//   private Vector2 <AmplitudeFactor>k__BackingField; // 0x10
//   private Vector2 <FrequencyFactor>k__BackingField; // 0x18
//   private Vector2 <Diagonal>k__BackingField; // 0x20

// ===== public Vector2 get_AmplitudeFactor()  [RVA 0x356AC44]
// Core.Configs.Models.ShakeScreenParamsSettings$$get_AmplitudeFactor @ RVA 0x356AC44

UnityEngine_Vector2_o
Core_Configs_Models_ShakeScreenParamsSettings__get_AmplitudeFactor
          (Core_Configs_Models_ShakeScreenParamsSettings_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._AmplitudeFactor_k__BackingField.fields;
}


// ===== public void set_AmplitudeFactor(Vector2 value)  [RVA 0x356AC4C]
// Core.Configs.Models.ShakeScreenParamsSettings$$set_AmplitudeFactor @ RVA 0x356AC4C

void Core_Configs_Models_ShakeScreenParamsSettings__set_AmplitudeFactor
               (Core_Configs_Models_ShakeScreenParamsSettings_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  (__this->fields)._AmplitudeFactor_k__BackingField.fields.x = value.fields.x;
  (__this->fields)._AmplitudeFactor_k__BackingField.fields.y = value.fields.y;
  return;
}


// ===== public Vector2 get_FrequencyFactor()  [RVA 0x356AC54]
// Core.Configs.Models.ShakeScreenParamsSettings$$get_FrequencyFactor @ RVA 0x356AC54

UnityEngine_Vector2_o
Core_Configs_Models_ShakeScreenParamsSettings__get_FrequencyFactor
          (Core_Configs_Models_ShakeScreenParamsSettings_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._FrequencyFactor_k__BackingField.fields;
}


// ===== public void set_FrequencyFactor(Vector2 value)  [RVA 0x356AC5C]
// Core.Configs.Models.ShakeScreenParamsSettings$$set_FrequencyFactor @ RVA 0x356AC5C

void Core_Configs_Models_ShakeScreenParamsSettings__set_FrequencyFactor
               (Core_Configs_Models_ShakeScreenParamsSettings_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  (__this->fields)._FrequencyFactor_k__BackingField.fields.x = value.fields.x;
  (__this->fields)._FrequencyFactor_k__BackingField.fields.y = value.fields.y;
  return;
}


// ===== public Vector2 get_Diagonal()  [RVA 0x356AC64]
// Core.Configs.Models.ShakeScreenParamsSettings$$get_Diagonal @ RVA 0x356AC64

UnityEngine_Vector2_o
Core_Configs_Models_ShakeScreenParamsSettings__get_Diagonal
          (Core_Configs_Models_ShakeScreenParamsSettings_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._Diagonal_k__BackingField.fields;
}


// ===== public void set_Diagonal(Vector2 value)  [RVA 0x356AC6C]
// Core.Configs.Models.ShakeScreenParamsSettings$$set_Diagonal @ RVA 0x356AC6C

void Core_Configs_Models_ShakeScreenParamsSettings__set_Diagonal
               (Core_Configs_Models_ShakeScreenParamsSettings_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  (__this->fields)._Diagonal_k__BackingField.fields.x = value.fields.x;
  (__this->fields)._Diagonal_k__BackingField.fields.y = value.fields.y;
  return;
}


// ===== public void .ctor()  [RVA 0x356AC74]
// Core.Configs.Models.ShakeScreenParamsSettings$$.ctor @ RVA 0x356AC74

void Core_Configs_Models_ShakeScreenParamsSettings___ctor
               (Core_Configs_Models_ShakeScreenParamsSettings_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  (__this->fields)._FrequencyFactor_k__BackingField.fields = auVar1._8_8_;
  (__this->fields)._AmplitudeFactor_k__BackingField.fields = auVar1._0_8_;
  (__this->fields)._Diagonal_k__BackingField.fields = (UnityEngine_Vector2_Fields)0x41f0000041700000
  ;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

