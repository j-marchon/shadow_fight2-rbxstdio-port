// Nekki.SF2.GUI.DebugModules.FPSMeter$$FixedUpdate @ RVA 0x333DFB4

void Nekki_SF2_GUI_DebugModules_FPSMeter__FixedUpdate
               (Nekki_SF2_GUI_DebugModules_FPSMeter_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  if ((DAT_0456797a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_0456797a = 1;
  }
  fVar2 = (__this->fields).BGHKLPJMCPC;
  fVar1 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields).BGHKLPJMCPC = fVar2;
  if (fVar2 < UnityEngine_Mathf_TypeInfo->static_fields->Epsilon) {
    Nekki_SF2_GUI_DebugModules_FPSMeter__PIHLOHKHHMB(__this,method_00);
    return;
  }
  return;
}

