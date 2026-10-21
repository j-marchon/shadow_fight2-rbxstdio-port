// TypeDefIndex 155
// Namespace: InControl
// public class UnityButtonSource : InputControlSource
// Fields:
//   private int buttonId; // 0x10
//   private static string[,] buttonQueries; // 0x0

// ===== public void .ctor(int buttonId)  [RVA 0x30227F0]
// InControl.UnityButtonSource$$.ctor @ RVA 0x30227F0

void InControl_UnityButtonSource___ctor
               (InControl_UnityButtonSource_o *__this,int32_t buttonId,MethodInfo *method)

{
  MethodInfo *method_00;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).buttonId = buttonId;
  InControl_UnityButtonSource__SetupButtonQueries(method_00);
  return;
}


// ===== public float GetValue(InputDevice inputDevice)  [RVA 0x30229B4]
// InControl.UnityButtonSource$$GetValue @ RVA 0x30229B4

float InControl_UnityButtonSource__GetValue
                (InControl_UnityButtonSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = InControl_UnityButtonSource__GetState(__this,inputDevice,method);
  fVar2 = 1.0;
  if (!bVar1) {
    fVar2 = 0.0;
  }
  return fVar2;
}


// ===== public bool GetState(InputDevice inputDevice)  [RVA 0x30229D4]
// InControl.UnityButtonSource$$GetState @ RVA 0x30229D4

bool InControl_UnityButtonSource__GetState
               (InControl_UnityButtonSource_o *__this,InControl_InputDevice_o *inputDevice,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *name;
  
  if ((DAT_04565c63 & 1) == 0) {
    FUN_01bab630(&InControl_UnityInputDevice_TypeInfo);
    DAT_04565c63 = 1;
  }
  if (inputDevice != (InControl_InputDevice_o *)0x0) {
    bVar1 = (InControl_UnityInputDevice_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (inputDevice->klass->_2).naturalAligment) &&
       ((inputDevice->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)InControl_UnityInputDevice_TypeInfo)) {
      name = InControl_UnityButtonSource__GetButtonKey
                       (*(int32_t *)&(inputDevice->fields).field_0x44,(__this->fields).buttonId,
                        method);
      bVar2 = UnityEngine_Input__GetKey(name,(MethodInfo *)0x0);
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void SetupButtonQueries()  [RVA 0x3022818]
// InControl.UnityButtonSource$$SetupButtonQueries @ RVA 0x3022818

void InControl_UnityButtonSource__SetupButtonQueries(MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str3;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if ((DAT_04565c64 & 1) == 0) {
    FUN_01bab630(&string____TypeInfo);
    FUN_01bab630(&InControl_UnityButtonSource_TypeInfo);
    FUN_01bab630(&StringLiteral_19268/*"joystick "*/);
    FUN_01bab630(&StringLiteral_357/*" button "*/);
    DAT_04565c64 = 1;
  }
  local_48 = 0;
  if (InControl_UnityButtonSource_TypeInfo->static_fields->buttonQueries ==
      (System_String_array *)0x0) {
    uStack_58 = 0x14;
    local_60 = 10;
    pSVar3 = (System_String_array *)FUN_01bab720(string____TypeInfo,&local_60);
    InControl_UnityButtonSource_TypeInfo->static_fields->buttonQueries = pSVar3;
    thunk_FUN_01c20e04(InControl_UnityButtonSource_TypeInfo->static_fields,pSVar3);
    local_48._4_4_ = 1;
    do {
      local_48._0_4_ = 0;
      do {
        iVar2 = local_48._4_4_;
        uVar1 = (uint)local_48;
        pSVar3 = InControl_UnityButtonSource_TypeInfo->static_fields->buttonQueries;
        pSVar4 = System_Int32__ToString((int)&local_48 + 4,(MethodInfo *)0x0);
        str3 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat
                           (StringLiteral_19268/*"joystick "*/,pSVar4,StringLiteral_357/*" button "*/,str3,(MethodInfo *)0x0);
        if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (((uint)pSVar3->bounds->length <= iVar2 - 1U) ||
           (lVar5 = pSVar3->bounds[1].length, (uint)lVar5 <= uVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar3->m_Items[(long)(int)uVar1 + lVar5 * (int)(iVar2 - 1U)] = pSVar4;
        thunk_FUN_01c20e04();
        local_48._0_4_ = (uint)local_48 + 1;
      } while ((int)(uint)local_48 < 0x14);
      local_48._4_4_ = local_48._4_4_ + 1;
    } while (local_48._4_4_ < 0xb);
  }
  return;
}


// ===== private static string GetButtonKey(int joystickId, int buttonId)  [RVA 0x3022A5C]
// InControl.UnityButtonSource$$GetButtonKey @ RVA 0x3022A5C

System_String_o *
InControl_UnityButtonSource__GetButtonKey(int32_t joystickId,int32_t buttonId,MethodInfo *method)

{
  System_String_array *pSVar1;
  long lVar2;
  
  if ((DAT_04565c65 & 1) == 0) {
    FUN_01bab630(&InControl_UnityButtonSource_TypeInfo);
    DAT_04565c65 = 1;
  }
  pSVar1 = InControl_UnityButtonSource_TypeInfo->static_fields->buttonQueries;
  if (pSVar1 != (System_String_array *)0x0) {
    if ((joystickId - 1U < (uint)pSVar1->bounds->length) &&
       (lVar2 = pSVar1->bounds[1].length, (uint)buttonId < (uint)lVar2)) {
      return pSVar1->m_Items[lVar2 * (int)(joystickId - 1U) + (long)buttonId];
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

