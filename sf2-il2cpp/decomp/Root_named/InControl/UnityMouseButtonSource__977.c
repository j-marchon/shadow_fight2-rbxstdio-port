// TypeDefIndex 977
// Namespace: InControl
// public class UnityMouseButtonSource : InputControlSource
// Fields:
//   private int buttonId; // 0x10

// ===== public void .ctor(int buttonId)  [RVA 0x30B43C0]
// InControl.UnityMouseButtonSource$$.ctor @ RVA 0x30B43C0

void InControl_UnityMouseButtonSource___ctor
               (InControl_UnityMouseButtonSource_o *__this,int32_t buttonId,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).buttonId = buttonId;
  return;
}


// ===== public float GetValue(InputDevice inputDevice)  [RVA 0x30B43E8]
// InControl.UnityMouseButtonSource$$GetValue @ RVA 0x30B43E8

float InControl_UnityMouseButtonSource__GetValue
                (InControl_UnityMouseButtonSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = UnityEngine_Input__GetMouseButton((__this->fields).buttonId,(MethodInfo *)0x0);
  fVar2 = 1.0;
  if (!bVar1) {
    fVar2 = 0.0;
  }
  return fVar2;
}


// ===== public bool GetState(InputDevice inputDevice)  [RVA 0x30B4410]
// InControl.UnityMouseButtonSource$$GetState @ RVA 0x30B4410

bool InControl_UnityMouseButtonSource__GetState
               (InControl_UnityMouseButtonSource_o *__this,InControl_InputDevice_o *inputDevice,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetMouseButton((__this->fields).buttonId,(MethodInfo *)0x0);
  return bVar1;
}

