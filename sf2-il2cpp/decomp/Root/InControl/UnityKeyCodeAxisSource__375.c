// TypeDefIndex 375
// Namespace: InControl
// public class UnityKeyCodeAxisSource : InputControlSource
// Fields:
//   private KeyCode negativeKeyCode; // 0x10
//   private KeyCode positiveKeyCode; // 0x14

// ===== public void .ctor(KeyCode negativeKeyCode, KeyCode positiveKeyCode)  [RVA 0x347AE30]
// InControl.UnityKeyCodeAxisSource$$.ctor @ RVA 0x347AE30

void InControl_UnityKeyCodeAxisSource___ctor
               (InControl_UnityKeyCodeAxisSource_o *__this,int32_t negativeKeyCode,
               int32_t positiveKeyCode,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).negativeKeyCode = negativeKeyCode;
  (__this->fields).positiveKeyCode = positiveKeyCode;
  return;
}


// ===== public float GetValue(InputDevice inputDevice)  [RVA 0x347AE5C]
// InControl.UnityKeyCodeAxisSource$$GetValue @ RVA 0x347AE5C

float InControl_UnityKeyCodeAxisSource__GetValue
                (InControl_UnityKeyCodeAxisSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = UnityEngine_Input__GetKey((__this->fields).negativeKeyCode,(MethodInfo *)0x0);
  bVar3 = UnityEngine_Input__GetKey((__this->fields).positiveKeyCode,(MethodInfo *)0x0);
  uVar1 = ~(uint)bVar2 & 1;
  if (!bVar3) {
    uVar1 = -(uint)bVar2;
  }
  return (float)(int)uVar1;
}


// ===== public bool GetState(InputDevice inputDevice)  [RVA 0x347AEAC]
// InControl.UnityKeyCodeAxisSource$$GetState @ RVA 0x347AEAC

bool InControl_UnityKeyCodeAxisSource__GetState
               (InControl_UnityKeyCodeAxisSource_o *__this,InControl_InputDevice_o *inputDevice,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar2 = UnityEngine_Input__GetKey((__this->fields).negativeKeyCode,(MethodInfo *)0x0);
  bVar3 = UnityEngine_Input__GetKey((__this->fields).positiveKeyCode,(MethodInfo *)0x0);
  uVar1 = ~(uint)bVar2 & 1;
  if (!bVar3) {
    uVar1 = -(uint)bVar2;
  }
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_045602fa = '\x01';
  }
  fVar5 = ABS((float)(int)uVar1);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar6 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar4 = fVar5 * 1e-06;
  if (fVar5 * 1e-06 <= fVar6) {
    fVar4 = fVar6;
  }
  return fVar4 <= ABS(0.0 - (float)(int)uVar1);
}

