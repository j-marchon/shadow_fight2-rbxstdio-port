// Nekki.SF2.GUI.DebugModules.FPSMeter$$GIENGNEGHPJ @ RVA 0x333E094

void Nekki_SF2_GUI_DebugModules_FPSMeter__GIENGNEGHPJ
               (Nekki_SF2_GUI_DebugModules_FPSMeter_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_DebugModules_FPSMeter_StaticFields *pNVar2;
  float fVar3;
  
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if (DAT_045679c4 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c4 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
  pNVar2->_HOAGAALGFNP_k__BackingField = 3.4028235e+38;
  if (DAT_045679c6 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c6 = '\x01';
    pNVar2 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
  }
  pNVar2->_DCHILBEKFMP_k__BackingField = -3.4028235e+38;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this->fields).OADGFNKPMIO = fVar3;
  iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  (__this->fields).KLILALOJBCJ = iVar1;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this->fields).HFAEDJEOAFP = fVar3;
  (__this->fields).BGHKLPJMCPC = (__this->fields)._StartTimeGap;
  iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  (__this->fields).ECHBLKHJOLH = iVar1;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this->fields).HMLKMGIMLCH = fVar3;
  return;
}

