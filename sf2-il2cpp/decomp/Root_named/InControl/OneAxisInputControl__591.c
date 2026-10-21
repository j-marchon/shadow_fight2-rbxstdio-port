// TypeDefIndex 591
// Namespace: InControl
// public class OneAxisInputControl
// Fields:
//   private ulong <UpdateTick>k__BackingField; // 0x10
//   private InputControlState thisState; // 0x18
//   private InputControlState lastState; // 0x20

// ===== public ulong get_UpdateTick()  [RVA 0x35B9A64]
// InControl.OneAxisInputControl$$get_UpdateTick @ RVA 0x35B9A64

uint64_t InControl_OneAxisInputControl__get_UpdateTick
                   (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._UpdateTick_k__BackingField;
}


// ===== private void set_UpdateTick(ulong value)  [RVA 0x35B9A6C]
// InControl.OneAxisInputControl$$set_UpdateTick @ RVA 0x35B9A6C

void InControl_OneAxisInputControl__set_UpdateTick
               (InControl_OneAxisInputControl_o *__this,uint64_t value,MethodInfo *method)

{
  (__this->fields)._UpdateTick_k__BackingField = value;
  return;
}


// ===== public void UpdateWithValue(float value, ulong updateTick, float stateThreshold)  [RVA 0x35B9A74]
// InControl.OneAxisInputControl$$UpdateWithValue @ RVA 0x35B9A74

void InControl_OneAxisInputControl__UpdateWithValue
               (InControl_OneAxisInputControl_o *__this,float value,uint64_t updateTick,
               float stateThreshold,MethodInfo *method)

{
  bool bVar1;
  System_InvalidOperationException_o *__this_00;
  System_String_o *message;
  undefined8 uVar2;
  InControl_InputControlState_o *__this_01;
  
  if ((__this->fields)._UpdateTick_k__BackingField <= updateTick) {
    __this_01 = &(__this->fields).thisState;
    (__this->fields).lastState.fields = __this_01->fields;
    InControl_InputControlState__Set
              ((InControl_InputControlState_o)__this_01,value,stateThreshold,(MethodInfo *)0x0);
    bVar1 = InControl_InputControlState__op_Inequality
                      ((InControl_InputControlState_o)__this_01->fields,
                       (InControl_InputControlState_o)(__this->fields).lastState.fields,
                       (MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields)._UpdateTick_k__BackingField = updateTick;
    }
    return;
  }
  thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
  __this_00 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_2559/*"A control cannot be updated with an earlier tick."*/);
  System_InvalidOperationException___ctor(__this_00,message,(MethodInfo *)0x0);
  uVar2 = thunk_FUN_01bb9178(&Method_InControl_OneAxisInputControl_UpdateWithValue__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar2);
}


// ===== public bool get_State()  [RVA 0x35B9B10]
// InControl.OneAxisInputControl$$get_State @ RVA 0x35B9B10

bool InControl_OneAxisInputControl__get_State
               (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields).thisState.fields.State;
}


// ===== public bool get_LastState()  [RVA 0x35B9B18]
// InControl.OneAxisInputControl$$get_LastState @ RVA 0x35B9B18

bool InControl_OneAxisInputControl__get_LastState
               (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields).lastState.fields.State;
}


// ===== public float get_Value()  [RVA 0x35B9B20]
// InControl.OneAxisInputControl$$get_Value @ RVA 0x35B9B20

float InControl_OneAxisInputControl__get_Value
                (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields).thisState.fields.Value;
}


// ===== public float get_LastValue()  [RVA 0x35B9B28]
// InControl.OneAxisInputControl$$get_LastValue @ RVA 0x35B9B28

float InControl_OneAxisInputControl__get_LastValue
                (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields).lastState.fields.Value;
}


// ===== public bool get_HasChanged()  [RVA 0x35B9B30]
// InControl.OneAxisInputControl$$get_HasChanged @ RVA 0x35B9B30

bool InControl_OneAxisInputControl__get_HasChanged
               (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = InControl_InputControlState__op_Inequality
                    ((InControl_InputControlState_o)(__this->fields).thisState.fields,
                     (InControl_InputControlState_o)(__this->fields).lastState.fields,
                     (MethodInfo *)0x0);
  return bVar1;
}


// ===== public bool get_IsPressed()  [RVA 0x35B9B40]
// InControl.OneAxisInputControl$$get_IsPressed @ RVA 0x35B9B40

bool InControl_OneAxisInputControl__get_IsPressed
               (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields).thisState.fields.State;
}


// ===== public bool get_WasPressed()  [RVA 0x35B9B48]
// InControl.OneAxisInputControl$$get_WasPressed @ RVA 0x35B9B48

bool InControl_OneAxisInputControl__get_WasPressed
               (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  if (((__this->fields).thisState.fields.State & 1U) == 0) {
    return false;
  }
  return ((__this->fields).lastState.fields.State & 1U) == 0;
}


// ===== public bool get_WasReleased()  [RVA 0x35B9B68]
// InControl.OneAxisInputControl$$get_WasReleased @ RVA 0x35B9B68

bool InControl_OneAxisInputControl__get_WasReleased
               (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  if (((__this->fields).thisState.fields.State & 1U) == 0) {
    return (bool)((__this->fields).lastState.fields.State & 1);
  }
  return false;
}


// ===== public static bool op_Implicit(OneAxisInputControl control)  [RVA 0x35B9B84]
// InControl.OneAxisInputControl$$op_Implicit @ RVA 0x35B9B84

bool InControl_OneAxisInputControl__op_Implicit
               (InControl_OneAxisInputControl_o *control,MethodInfo *method)

{
  if (control != (InControl_OneAxisInputControl_o *)0x0) {
    return (control->fields).thisState.fields.State;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float op_Implicit(OneAxisInputControl control)  [RVA 0x35B9B9C]
// InControl.OneAxisInputControl$$op_Implicit @ RVA 0x35B9B9C

float InControl_OneAxisInputControl__op_Implicit
                (InControl_OneAxisInputControl_o *control,MethodInfo *method)

{
  if (control != (InControl_OneAxisInputControl_o *)0x0) {
    return (control->fields).thisState.fields.Value;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35B9BB4]
// InControl.OneAxisInputControl$$.ctor @ RVA 0x35B9BB4

void InControl_OneAxisInputControl___ctor
               (InControl_OneAxisInputControl_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

