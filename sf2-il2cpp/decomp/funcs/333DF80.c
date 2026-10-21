// Nekki.SF2.GUI.DebugModules.FPSMeter$$NCENBOMEPBN @ RVA 0x333DF80

void Nekki_SF2_GUI_DebugModules_FPSMeter__NCENBOMEPBN
               (Nekki_SF2_GUI_DebugModules_FPSMeter_o *__this,float NACILJPLKBG,MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  
  (__this->fields).BGHKLPJMCPC = NACILJPLKBG;
  iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  (__this->fields).ECHBLKHJOLH = iVar1;
  fVar2 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this->fields).HMLKMGIMLCH = fVar2;
  return;
}

