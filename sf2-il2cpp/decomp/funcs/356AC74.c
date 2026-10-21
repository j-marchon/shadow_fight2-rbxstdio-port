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

