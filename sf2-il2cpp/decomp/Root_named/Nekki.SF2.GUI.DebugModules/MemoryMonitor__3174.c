// TypeDefIndex 3174
// Namespace: Nekki.SF2.GUI.DebugModules
// public class MemoryMonitor : DebugUIModule
// Fields:
//   public Text TotalMemoryLabel; // 0x28
//   public Text MonoMemoryLabel; // 0x30
//   public float UpdateInterval; // 0x38
//   private float BGHKLPJMCPC; // 0x3C

// ===== private void Update()  [RVA 0x34E286C]
// Nekki.SF2.GUI.DebugModules.MemoryMonitor$$Update @ RVA 0x34E286C

void Nekki_SF2_GUI_DebugModules_MemoryMonitor__Update
               (Nekki_SF2_GUI_DebugModules_MemoryMonitor_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  UnityEngine_UI_Text_o *pUVar4;
  float fVar5;
  float fVar6;
  float local_38;
  float local_34;
  
  if ((DAT_04568746 & 1) == 0) {
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_13892/*"TotalMemory: {0:F3}"*/);
    FUN_01bab630(&StringLiteral_9197/*"Mono: {0:F3}"*/);
    DAT_04568746 = 1;
  }
  fVar6 = (__this->fields).BGHKLPJMCPC;
  fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar6 = fVar6 - fVar5;
  (__this->fields).BGHKLPJMCPC = fVar6;
  if (0.0 < fVar6) {
    return;
  }
  pUVar4 = (__this->fields).TotalMemoryLabel;
  (__this->fields).BGHKLPJMCPC = (__this->fields).UpdateInterval;
  iVar1 = UnityEngine_Profiling_Profiler__GetTotalAllocatedMemoryLong((MethodInfo *)0x0);
  local_34 = (float)iVar1 * 1e-06;
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_34);
  pSVar3 = System_String__Format(StringLiteral_13892/*"TotalMemory: {0:F3}"*/,pIVar2,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
              (pUVar4,pSVar3,(pUVar4->klass->vtable)._75_set_text.method);
    pUVar4 = (__this->fields).MonoMemoryLabel;
    iVar1 = UnityEngine_Profiling_Profiler__GetMonoUsedSizeLong((MethodInfo *)0x0);
    local_38 = (float)iVar1 * 1e-06;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_38);
    pSVar3 = System_String__Format(StringLiteral_9197/*"Mono: {0:F3}"*/,pIVar2,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                (pUVar4,pSVar3,(pUVar4->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override bool ACBLFBAIHPN()  [RVA 0x34E29CC]
// Nekki.SF2.GUI.DebugModules.MemoryMonitor$$ACBLFBAIHPN @ RVA 0x34E29CC

bool Nekki_SF2_GUI_DebugModules_MemoryMonitor__ACBLFBAIHPN
               (Nekki_SF2_GUI_DebugModules_MemoryMonitor_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Nekki_SF2_GUI_DebugUIModule__ACBLFBAIHPN
                    ((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x34E29D4]
// Nekki.SF2.GUI.DebugModules.MemoryMonitor$$.ctor @ RVA 0x34E29D4

void Nekki_SF2_GUI_DebugModules_MemoryMonitor___ctor
               (Nekki_SF2_GUI_DebugModules_MemoryMonitor_o *__this,MethodInfo *method)

{
  (__this->fields).UpdateInterval = 0.25;
  Nekki_SF2_GUI_DebugUIModule___ctor((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

