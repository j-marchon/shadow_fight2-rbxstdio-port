// TypeDefIndex 2040
// Namespace: InControl
// public class UnityKeyCodeComboSource : InputControlSource
// Fields:
//   private KeyCode[] keyCodeList; // 0x10

// ===== public void .ctor(KeyCode[] keyCodeList)  [RVA 0x32A9560]
// InControl.UnityKeyCodeComboSource$$.ctor @ RVA 0x32A9560

void InControl_UnityKeyCodeComboSource___ctor
               (InControl_UnityKeyCodeComboSource_o *__this,UnityEngine_KeyCode_array *keyCodeList,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).keyCodeList = keyCodeList;
  thunk_FUN_01c20e04(&__this->fields,keyCodeList);
  return;
}


// ===== public float GetValue(InputDevice inputDevice)  [RVA 0x32A9590]
// InControl.UnityKeyCodeComboSource$$GetValue @ RVA 0x32A9590

float InControl_UnityKeyCodeComboSource__GetValue
                (InControl_UnityKeyCodeComboSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = InControl_UnityKeyCodeComboSource__GetState(__this,inputDevice,method);
  fVar2 = 1.0;
  if (!bVar1) {
    fVar2 = 0.0;
  }
  return fVar2;
}


// ===== public bool GetState(InputDevice inputDevice)  [RVA 0x32A95B0]
// InControl.UnityKeyCodeComboSource$$GetState @ RVA 0x32A95B0

bool InControl_UnityKeyCodeComboSource__GetState
               (InControl_UnityKeyCodeComboSource_o *__this,InControl_InputDevice_o *inputDevice,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_KeyCode_array *pUVar3;
  ulong uVar4;
  
  pUVar3 = (__this->fields).keyCodeList;
  if (pUVar3 != (UnityEngine_KeyCode_array *)0x0) {
    uVar4 = 0;
    do {
      uVar1 = (uint)pUVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar4) {
LAB_033a9600:
        return (long)(int)uVar1 <= (long)uVar4;
      }
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      bVar2 = UnityEngine_Input__GetKey(pUVar3->m_Items[uVar4],(MethodInfo *)0x0);
      if (!bVar2) goto LAB_033a9600;
      pUVar3 = (__this->fields).keyCodeList;
      uVar4 = uVar4 + 1;
    } while (pUVar3 != (UnityEngine_KeyCode_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

