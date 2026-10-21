// TypeDefIndex 416
// Namespace: InControl
// public class UnityMouseAxisSource : InputControlSource
// Fields:
//   private string mouseAxisQuery; // 0x10

// ===== public void .ctor(string axis)  [RVA 0x3487878]
// InControl.UnityMouseAxisSource$$.ctor @ RVA 0x3487878

void InControl_UnityMouseAxisSource___ctor
               (InControl_UnityMouseAxisSource_o *__this,System_String_o *axis,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045683be & 1) == 0) {
    FUN_01bab630(&StringLiteral_19750/*"mouse "*/);
    DAT_045683be = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_19750/*"mouse "*/,axis,(MethodInfo *)0x0);
  (__this->fields).mouseAxisQuery = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  return;
}


// ===== public float GetValue(InputDevice inputDevice)  [RVA 0x34878EC]
// InControl.UnityMouseAxisSource$$GetValue @ RVA 0x34878EC

float InControl_UnityMouseAxisSource__GetValue
                (InControl_UnityMouseAxisSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Input__GetAxisRaw((__this->fields).mouseAxisQuery,(MethodInfo *)0x0);
  return fVar1;
}


// ===== public bool GetState(InputDevice inputDevice)  [RVA 0x34878F8]
// InControl.UnityMouseAxisSource$$GetState @ RVA 0x34878F8

bool InControl_UnityMouseAxisSource__GetState
               (InControl_UnityMouseAxisSource_o *__this,InControl_InputDevice_o *inputDevice,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = UnityEngine_Input__GetAxisRaw((__this->fields).mouseAxisQuery,(MethodInfo *)0x0);
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_045602fa = '\x01';
  }
  fVar3 = ABS(fVar1);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar2 = fVar3 * 1e-06;
  if (fVar3 * 1e-06 <= fVar4) {
    fVar2 = fVar4;
  }
  return fVar2 <= ABS(0.0 - fVar1);
}

