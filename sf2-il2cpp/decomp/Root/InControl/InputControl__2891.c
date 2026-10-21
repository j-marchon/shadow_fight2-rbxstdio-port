// TypeDefIndex 2891
// Namespace: InControl
// public class InputControl
// Fields:
//   public static readonly InputControl Null; // 0x0
//   private string <Handle>k__BackingField; // 0x10
//   private InputControlType <Target>k__BackingField; // 0x18
//   private ulong <UpdateTick>k__BackingField; // 0x20
//   public float Sensitivity; // 0x28
//   public float LowerDeadZone; // 0x2C
//   public float UpperDeadZone; // 0x30
//   private bool <IsButton>k__BackingField; // 0x34
//   private InputControlState thisState; // 0x38
//   private InputControlState lastState; // 0x40
//   private InputControlState tempState; // 0x48
//   private ulong zeroTick; // 0x50
//   internal Nullable<float> RawValue; // 0x58
//   internal Nullable<float> PreValue; // 0x60

// ===== public string get_Handle()  [RVA 0x3440878]
// InControl.InputControl$$get_Handle @ RVA 0x3440878

System_String_o *
InControl_InputControl__get_Handle(InControl_InputControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._Handle_k__BackingField;
}


// ===== protected void set_Handle(string value)  [RVA 0x3440880]
// InControl.InputControl$$set_Handle @ RVA 0x3440880

void InControl_InputControl__set_Handle
               (InControl_InputControl_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Handle_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public InputControlType get_Target()  [RVA 0x3440888]
// InControl.InputControl$$get_Target @ RVA 0x3440888

int32_t InControl_InputControl__get_Target(InControl_InputControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._Target_k__BackingField;
}


// ===== protected void set_Target(InputControlType value)  [RVA 0x3440890]
// InControl.InputControl$$set_Target @ RVA 0x3440890

void InControl_InputControl__set_Target
               (InControl_InputControl_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._Target_k__BackingField = value;
  return;
}


// ===== public ulong get_UpdateTick()  [RVA 0x3440898]
// InControl.InputControl$$get_UpdateTick @ RVA 0x3440898

uint64_t InControl_InputControl__get_UpdateTick(InControl_InputControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._UpdateTick_k__BackingField;
}


// ===== protected void set_UpdateTick(ulong value)  [RVA 0x34408A0]
// InControl.InputControl$$set_UpdateTick @ RVA 0x34408A0

void InControl_InputControl__set_UpdateTick
               (InControl_InputControl_o *__this,uint64_t value,MethodInfo *method)

{
  (__this->fields)._UpdateTick_k__BackingField = value;
  return;
}


// ===== public bool get_IsButton()  [RVA 0x34408A8]
// InControl.InputControl$$get_IsButton @ RVA 0x34408A8

bool InControl_InputControl__get_IsButton(InControl_InputControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsButton_k__BackingField;
}


// ===== protected void set_IsButton(bool value)  [RVA 0x34408B0]
// InControl.InputControl$$set_IsButton @ RVA 0x34408B0

void InControl_InputControl__set_IsButton
               (InControl_InputControl_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._IsButton_k__BackingField = value;
  return;
}


// ===== private void .ctor(string handle)  [RVA 0x34408BC]
// InControl.InputControl$$.ctor @ RVA 0x34408BC

void InControl_InputControl___ctor
               (InControl_InputControl_o *__this,System_String_o *handle,MethodInfo *method)

{
  (__this->fields).Sensitivity = 1.0;
  (__this->fields).UpperDeadZone = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Handle_k__BackingField = handle;
  thunk_FUN_01c20e04(&__this->fields,handle);
  return;
}


// ===== public void .ctor(string handle, InputControlType target)  [RVA 0x34408F8]
// InControl.InputControl$$.ctor @ RVA 0x34408F8

void InControl_InputControl___ctor
               (InControl_InputControl_o *__this,System_String_o *handle,int32_t target,
               MethodInfo *method)

{
  (__this->fields).Sensitivity = 1.0;
  (__this->fields).UpperDeadZone = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Handle_k__BackingField = handle;
  thunk_FUN_01c20e04(&__this->fields,handle);
                    /* try { // try from 03540930 to 036409c3 has its CatchHandler @ 03540930
                       catch() { ... } // from try @ 03540930 with catch @ 03540930
                       catch() { ... } // from try @ 03540a00 with catch @ 03540930
                       catch() { ... } // from try @ 03540a34 with catch @ 03540930
                       catch() { ... } // from try @ 03540a64 with catch @ 03540930
                       catch() { ... } // from try @ 03540a94 with catch @ 03540930 */
  (__this->fields)._Target_k__BackingField = target;
  (__this->fields)._IsButton_k__BackingField = target - 0xbU < 4 || target - 0x37U < 0x14;
  return;
}


// ===== public void UpdateWithState(bool state, ulong updateTick)  [RVA 0x3440960]
// InControl.InputControl$$UpdateWithState @ RVA 0x3440960

void InControl_InputControl__UpdateWithState
               (InControl_InputControl_o *__this,bool state,uint64_t updateTick,MethodInfo *method)

{
  InControl_InputControlState_o *__this_00;
  bool bVar1;
  System_InvalidOperationException_o *__this_01;
  undefined *puVar2;
  System_String_o *message;
  undefined8 uVar3;
  
  bVar1 = InControl_InputControl__get_IsNull(__this,(MethodInfo *)(ulong)state);
  if (bVar1) {
    thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
    __this_01 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
                    /* try { // try from 035409c4 to 036409cb has its CatchHandler @ 03540a48 */
    puVar2 = &StringLiteral_2582/*"A null control cannot be updated."*/;
  }
  else {
    if ((__this->fields)._UpdateTick_k__BackingField <= updateTick) {
      __this_00 = &(__this->fields).tempState;
      if (state) {
        bVar1 = true;
      }
      else {
        bVar1 = (__this_00->fields).State != false;
      }
      InControl_InputControlState__Set
                ((InControl_InputControlState_o)__this_00,bVar1,(MethodInfo *)0x0);
      return;
    }
                    /* try { // try from 035409d8 to 036409e3 has its CatchHandler @ 03540a40 */
    thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
    __this_01 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
                    /* try { // try from 035409e8 to 036409f3 has its CatchHandler @ 03540a38 */
    puVar2 = &StringLiteral_2559/*"A control cannot be updated with an earlier tick."*/;
  }
  message = (System_String_o *)thunk_FUN_01bb9178(puVar2);
                    /* try { // try from 035409f8 to 036409ff has its CatchHandler @ 03540a3c */
                    /* try { // try from 03540a00 to 03640a2f has its CatchHandler @ 03540930 */
  System_InvalidOperationException___ctor(__this_01,message,(MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bb9178(&Method_InControl_InputControl_UpdateWithState__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_01,uVar3);
}


// ===== public void UpdateWithValue(float value, ulong updateTick)  [RVA 0x3440A80]
// InControl.InputControl$$UpdateWithValue @ RVA 0x3440A80

void InControl_InputControl__UpdateWithValue
               (InControl_InputControl_o *__this,float value,uint64_t updateTick,MethodInfo *method)

{
  bool bVar1;
  System_InvalidOperationException_o *__this_00;
  undefined *puVar2;
  System_String_o *message;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 03540a60 with catch @ 03540a84 */
                    /* try { // try from 03540a8c to 03640a93 has its CatchHandler @ 03540aa8 */
                    /* try { // try from 03540a94 to 03640a9f has its CatchHandler @ 03540930 */
  bVar1 = InControl_InputControl__get_IsNull(__this,(MethodInfo *)updateTick);
  if (bVar1) {
    thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
    __this_00 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
    puVar2 = &StringLiteral_2582/*"A null control cannot be updated."*/;
  }
  else {
                    /* try { // try from 03540aa0 to 03640aa7 has its CatchHandler @ 03540aa8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03540a8c with catch @ 03540aa8
                       catch(type#2 @ 00000000) { ... } // from try @ 03540aa0 with catch @ 03540aa8
                        */
    if ((__this->fields)._UpdateTick_k__BackingField <= updateTick) {
                    /* try { // try from 03540aac to 03640b83 has its CatchHandler @ 03540aac
                       catch() { ... } // from try @ 03540aac with catch @ 03540aac
                       catch() { ... } // from try @ 03540c1c with catch @ 03540aac
                       catch() { ... } // from try @ 03540c50 with catch @ 03540aac
                       catch() { ... } // from try @ 03540c98 with catch @ 03540aac
                       catch() { ... } // from try @ 03540cc8 with catch @ 03540aac */
      if (ABS((__this->fields).tempState.fields.Value) < ABS(value)) {
        InControl_InputControlState__Set
                  ((InControl_InputControlState_o)&(__this->fields).tempState,value,
                   (MethodInfo *)0x0);
        return;
      }
      return;
    }
    thunk_FUN_01bb9178(&System_InvalidOperationException_TypeInfo);
    __this_00 = (System_InvalidOperationException_o *)thunk_FUN_01bda818();
    puVar2 = &StringLiteral_2559/*"A control cannot be updated with an earlier tick."*/;
  }
  message = (System_String_o *)thunk_FUN_01bb9178(puVar2);
  System_InvalidOperationException___ctor(__this_00,message,(MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bb9178(&Method_InControl_InputControl_UpdateWithValue__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar3);
}


// ===== internal void PreUpdate(ulong updateTick)  [RVA 0x3440B54]
// InControl.InputControl$$PreUpdate @ RVA 0x3440B54

void InControl_InputControl__PreUpdate
               (InControl_InputControl_o *__this,uint64_t updateTick,MethodInfo *method)

{
  (__this->fields).RawValue.fields = (System_Nullable_float__Fields)0x0;
  (__this->fields).PreValue.fields = (System_Nullable_float__Fields)0x0;
  (__this->fields).lastState.fields = (__this->fields).thisState.fields;
  InControl_InputControlState__Reset
            ((InControl_InputControlState_o)&(__this->fields).tempState,(MethodInfo *)0x0);
  return;
}


// ===== internal void PostUpdate(ulong updateTick)  [RVA 0x3440B70]
// InControl.InputControl$$PostUpdate @ RVA 0x3440B70

void InControl_InputControl__PostUpdate
               (InControl_InputControl_o *__this,uint64_t updateTick,MethodInfo *method)

{
  bool bVar1;
  InControl_InputControlState_Fields a;
  
  a = (__this->fields).tempState.fields;
                    /* try { // try from 03540b84 to 03640b8b has its CatchHandler @ 03540c7c */
  (__this->fields).thisState.fields = a;
  bVar1 = InControl_InputControlState__op_Inequality
                    ((InControl_InputControlState_o)a,
                     (InControl_InputControlState_o)(__this->fields).lastState.fields,
                     (MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 03540b98 to 03640ba3 has its CatchHandler @ 03540c78 */
    (__this->fields)._UpdateTick_k__BackingField = updateTick;
  }
  return;
}


// ===== internal void SetZeroTick()  [RVA 0x3440BA8]
// InControl.InputControl$$SetZeroTick @ RVA 0x3440BA8

void InControl_InputControl__SetZeroTick(InControl_InputControl_o *__this,MethodInfo *method)

{
                    /* try { // try from 03540ba8 to 03640bb3 has its CatchHandler @ 03540c70 */
  (__this->fields).zeroTick = (__this->fields)._UpdateTick_k__BackingField;
  return;
}


// ===== internal bool get_IsOnZeroTick()  [RVA 0x3440BB4]
// InControl.InputControl$$get_IsOnZeroTick @ RVA 0x3440BB4

bool InControl_InputControl__get_IsOnZeroTick(InControl_InputControl_o *__this,MethodInfo *method)

{
                    /* try { // try from 03540bb8 to 03640bbf has its CatchHandler @ 03540c6c */
  return (__this->fields)._UpdateTick_k__BackingField == (__this->fields).zeroTick;
}


// ===== public bool get_State()  [RVA 0x3440BC8]
// InControl.InputControl$$get_State @ RVA 0x3440BC8

bool InControl_InputControl__get_State(InControl_InputControl_o *__this,MethodInfo *method)

{
                    /* try { // try from 03540bc8 to 03640bd7 has its CatchHandler @ 03540c68 */
  return (__this->fields).thisState.fields.State;
}


// ===== public bool get_LastState()  [RVA 0x3440BD0]
// InControl.InputControl$$get_LastState @ RVA 0x3440BD0

bool InControl_InputControl__get_LastState(InControl_InputControl_o *__this,MethodInfo *method)

{
  return (__this->fields).lastState.fields.State;
}


// ===== public float get_Value()  [RVA 0x3440BD8]
// InControl.InputControl$$get_Value @ RVA 0x3440BD8

float InControl_InputControl__get_Value(InControl_InputControl_o *__this,MethodInfo *method)

{
                    /* try { // try from 03540bdc to 03640be7 has its CatchHandler @ 03540c58 */
  return (__this->fields).thisState.fields.Value;
}


// ===== public float get_LastValue()  [RVA 0x3440BE0]
// InControl.InputControl$$get_LastValue @ RVA 0x3440BE0

float InControl_InputControl__get_LastValue(InControl_InputControl_o *__this,MethodInfo *method)

{
  return (__this->fields).lastState.fields.Value;
}


// ===== public bool get_HasChanged()  [RVA 0x3440BE8]
// InControl.InputControl$$get_HasChanged @ RVA 0x3440BE8

bool InControl_InputControl__get_HasChanged(InControl_InputControl_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = InControl_InputControlState__op_Inequality
                    ((InControl_InputControlState_o)(__this->fields).thisState.fields,
                     (InControl_InputControlState_o)(__this->fields).lastState.fields,
                     (MethodInfo *)0x0);
  return bVar1;
}


// ===== public bool get_IsPressed()  [RVA 0x3440BF8]
// InControl.InputControl$$get_IsPressed @ RVA 0x3440BF8

bool InControl_InputControl__get_IsPressed(InControl_InputControl_o *__this,MethodInfo *method)

{
                    /* try { // try from 03540bf8 to 03640c03 has its CatchHandler @ 03540c54 */
  return (__this->fields).thisState.fields.State;
}


// ===== public bool get_WasPressed()  [RVA 0x3440C00]
// InControl.InputControl$$get_WasPressed @ RVA 0x3440C00

bool InControl_InputControl__get_WasPressed(InControl_InputControl_o *__this,MethodInfo *method)

{
  if (((__this->fields).thisState.fields.State & 1U) == 0) {
                    /* try { // try from 03540c08 to 03640c1b has its CatchHandler @ 03540c5c */
    return false;
  }
                    /* try { // try from 03540c1c to 03640c4b has its CatchHandler @ 03540aac */
  return ((__this->fields).lastState.fields.State & 1U) == 0;
}


// ===== public bool get_WasReleased()  [RVA 0x3440C20]
// InControl.InputControl$$get_WasReleased @ RVA 0x3440C20

bool InControl_InputControl__get_WasReleased(InControl_InputControl_o *__this,MethodInfo *method)

{
  if (((__this->fields).thisState.fields.State & 1U) == 0) {
    return (bool)((__this->fields).lastState.fields.State & 1);
  }
  return false;
}


// ===== public bool get_IsNull()  [RVA 0x3440A1C]
// InControl.InputControl$$get_IsNull @ RVA 0x3440A1C

bool InControl_InputControl__get_IsNull(InControl_InputControl_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03540a30 to 03640a33 has its CatchHandler @ 03540a44 */
                    /* try { // try from 03540a34 to 03640a5f has its CatchHandler @ 03540930 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035409e8 with catch @ 03540a38
                        */
  if ((DAT_0456821a & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035409f8 with catch @ 03540a3c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035409d8 with catch @ 03540a40
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540a30 with catch @ 03540a44
                        */
    FUN_01bab630(&InControl_InputControl_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035409c4 with catch @ 03540a48
                        */
    DAT_0456821a = 1;
    method = extraout_x1;
  }
  if ((InControl_InputControl_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputControl_TypeInfo,method);
                    /* try { // try from 03540a60 to 03640a63 has its CatchHandler @ 03540a84 */
  }
                    /* try { // try from 03540a64 to 03640a8b has its CatchHandler @ 03540930 */
  return __this == InControl_InputControl_TypeInfo->static_fields->Null;
}


// ===== public bool get_IsNotNull()  [RVA 0x3440C3C]
// InControl.InputControl$$get_IsNotNull @ RVA 0x3440C3C

bool InControl_InputControl__get_IsNotNull(InControl_InputControl_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03540c4c to 03640c4f has its CatchHandler @ 03540c74 */
                    /* try { // try from 03540c50 to 03640c93 has its CatchHandler @ 03540aac */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540bf8 with catch @ 03540c54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540bdc with catch @ 03540c58
                        */
  if ((DAT_0456821b & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540c08 with catch @ 03540c5c
                        */
    FUN_01bab630(&InControl_InputControl_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540bc8 with catch @ 03540c68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540bb8 with catch @ 03540c6c
                        */
    DAT_0456821b = 1;
    method = extraout_x1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540ba8 with catch @ 03540c70
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540c4c with catch @ 03540c74
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540b98 with catch @ 03540c78
                        */
  if ((InControl_InputControl_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540b84 with catch @ 03540c7c
                        */
    thunk_FUN_01ba7564(InControl_InputControl_TypeInfo,method);
  }
                    /* try { // try from 03540c94 to 03640c97 has its CatchHandler @ 03540cb8 */
                    /* try { // try from 03540c98 to 03640cbf has its CatchHandler @ 03540aac */
  return __this != InControl_InputControl_TypeInfo->static_fields->Null;
}


// ===== public override string ToString()  [RVA 0x3440CA0]
// InControl.InputControl$$ToString @ RVA 0x3440CA0

System_String_o *
InControl_InputControl__ToString(InControl_InputControl_o *__this,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  float local_24;
  
                    /* catch() { ... } // from try @ 03540c94 with catch @ 03540cb8 */
                    /* try { // try from 03540cc0 to 03640cc7 has its CatchHandler @ 03540cdc */
                    /* try { // try from 03540cc8 to 03640cd3 has its CatchHandler @ 03540aac */
  if ((DAT_0456821c & 1) == 0) {
                    /* try { // try from 03540cd4 to 03640cdb has its CatchHandler @ 03540cdc */
    FUN_01bab630(&float_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03540cc0 with catch @ 03540cdc
                       catch(type#2 @ 00000000) { ... } // from try @ 03540cd4 with catch @ 03540cdc
                        */
    FUN_01bab630(&StringLiteral_15491/*"[InputControl: Handle={0}, Value={1}]"*/);
                    /* try { // try from 03540ce8 to 03640eb3 has its CatchHandler @ 03540ce8
                       catch() { ... } // from try @ 03540ce8 with catch @ 03540ce8
                       catch() { ... } // from try @ 03540f20 with catch @ 03540ce8
                       catch() { ... } // from try @ 03540f40 with catch @ 03540ce8
                       catch() { ... } // from try @ 0354112c with catch @ 03540ce8
                       catch() { ... } // from try @ 035411fc with catch @ 03540ce8
                       catch() { ... } // from try @ 03541204 with catch @ 03540ce8
                       catch() { ... } // from try @ 03541288 with catch @ 03540ce8
                       catch() { ... } // from try @ 035412d8 with catch @ 03540ce8
                       catch() { ... } // from try @ 035412ec with catch @ 03540ce8
                       catch() { ... } // from try @ 03541320 with catch @ 03540ce8 */
    DAT_0456821c = 1;
  }
  local_24 = (__this->fields).thisState.fields.Value;
  pSVar1 = (__this->fields)._Handle_k__BackingField;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_24);
  pSVar1 = System_String__Format(StringLiteral_15491/*"[InputControl: Handle={0}, Value={1}]"*/,(Il2CppObject *)pSVar1,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static bool op_Implicit(InputControl control)  [RVA 0x3440D2C]
// InControl.InputControl$$op_Implicit @ RVA 0x3440D2C

bool InControl_InputControl__op_Implicit(InControl_InputControl_o *control,MethodInfo *method)

{
  if (control != (InControl_InputControl_o *)0x0) {
    return (control->fields).thisState.fields.State;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float op_Implicit(InputControl control)  [RVA 0x3440D44]
// InControl.InputControl$$op_Implicit @ RVA 0x3440D44

float InControl_InputControl__op_Implicit(InControl_InputControl_o *control,MethodInfo *method)

{
  if (control != (InControl_InputControl_o *)0x0) {
    return (control->fields).thisState.fields.Value;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Nullable<InputControlType> get_Obverse()  [RVA 0x3440D5C]
// InControl.InputControl$$get_Obverse @ RVA 0x3440D5C

System_Nullable_InputControlType__o
InControl_InputControl__get_Obverse(InControl_InputControl_o *__this,MethodInfo *method)

{
  System_Nullable_InputControlType__Fields SVar1;
  int32_t value;
  System_Nullable_InputControlType__Fields local_18;
  
  if ((DAT_0456821d & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<InputControlType>__ctor__);
    DAT_0456821d = 1;
  }
  switch((__this->fields)._Target_k__BackingField) {
  case 1:
    value = 2;
    break;
  case 2:
    value = 1;
    break;
  default:
    SVar1.hasValue = false;
    SVar1._1_3_ = 0;
    SVar1.value = 0;
    return (System_Nullable_InputControlType__o)SVar1;
  case 4:
    value = 5;
    break;
  case 5:
    value = 4;
  }
  local_18.hasValue = false;
  local_18._1_3_ = 0;
  local_18.value = 0;
  System_Nullable<Int32Enum>___ctor
            ((System_Nullable_Int32Enum__o)&local_18,value,
             Method_System_Nullable<InputControlType>__ctor__);
  return (System_Nullable_InputControlType__o)local_18;
}


// ===== private static void .cctor()  [RVA 0x3440E20]
// InControl.InputControl$$.cctor @ RVA 0x3440E20

void InControl_InputControl___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  InControl_InputControl_o *__this;
  
  if ((DAT_0456821e & 1) == 0) {
    FUN_01bab630(&InControl_InputControl_TypeInfo);
    FUN_01bab630(&StringLiteral_9648/*"NullInputControl"*/);
    DAT_0456821e = 1;
  }
  __this = (InControl_InputControl_o *)thunk_FUN_01bda818(InControl_InputControl_TypeInfo);
  pSVar1 = StringLiteral_9648/*"NullInputControl"*/;
  (__this->fields).Sensitivity = 1.0;
  (__this->fields).UpperDeadZone = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Handle_k__BackingField = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  InControl_InputControl_TypeInfo->static_fields->Null = __this;
                    /* try { // try from 03540eb4 to 03640ebb has its CatchHandler @ 035412d8 */
  thunk_FUN_01c20e04(InControl_InputControl_TypeInfo->static_fields,__this);
  return;
}

