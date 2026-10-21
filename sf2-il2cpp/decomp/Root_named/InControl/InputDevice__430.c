// TypeDefIndex 430
// Namespace: InControl
// public class InputDevice
// Fields:
//   public static readonly InputDevice Null; // 0x0
//   public int SortOrder; // 0x10
//   private string <Name>k__BackingField; // 0x18
//   private string <Meta>k__BackingField; // 0x20
//   private ulong <LastChangeTick>k__BackingField; // 0x28
//   private InputControl[] <Controls>k__BackingField; // 0x30
//   private TwoAxisInputControl <LeftStick>k__BackingField; // 0x38
//   private TwoAxisInputControl <RightStick>k__BackingField; // 0x40
//   private TwoAxisInputControl <DPad>k__BackingField; // 0x48
//   private float <VibrationFrequency>k__BackingField; // 0x50

// ===== public string get_Name()  [RVA 0x348B320]
// InControl.InputDevice$$get_Name @ RVA 0x348B320

System_String_o *
InControl_InputDevice__get_Name(InControl_InputDevice_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// ===== protected void set_Name(string value)  [RVA 0x348B328]
// InControl.InputDevice$$set_Name @ RVA 0x348B328

void InControl_InputDevice__set_Name
               (InControl_InputDevice_o *__this,System_String_o *value,MethodInfo *method)

{
                    /* try { // try from 0358b328 to 0368b333 has its CatchHandler @ 0358b390 */
  (__this->fields)._Name_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string get_Meta()  [RVA 0x348B330]
// InControl.InputDevice$$get_Meta @ RVA 0x348B330

System_String_o *
InControl_InputDevice__get_Meta(InControl_InputDevice_o *__this,MethodInfo *method)

{
                    /* try { // try from 0358b334 to 0368b377 has its CatchHandler @ 0358b1c4 */
  return (__this->fields)._Meta_k__BackingField;
}


// ===== protected void set_Meta(string value)  [RVA 0x348B338]
// InControl.InputDevice$$set_Meta @ RVA 0x348B338

void InControl_InputDevice__set_Meta
               (InControl_InputDevice_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Meta_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public ulong get_LastChangeTick()  [RVA 0x348B340]
// InControl.InputDevice$$get_LastChangeTick @ RVA 0x348B340

uint64_t InControl_InputDevice__get_LastChangeTick
                   (InControl_InputDevice_o *__this,MethodInfo *method)

{
  return (__this->fields)._LastChangeTick_k__BackingField;
}


// ===== protected void set_LastChangeTick(ulong value)  [RVA 0x348B348]
// InControl.InputDevice$$set_LastChangeTick @ RVA 0x348B348

void InControl_InputDevice__set_LastChangeTick
               (InControl_InputDevice_o *__this,uint64_t value,MethodInfo *method)

{
  (__this->fields)._LastChangeTick_k__BackingField = value;
  return;
}


// ===== public InputControl[] get_Controls()  [RVA 0x348B350]
// InControl.InputDevice$$get_Controls @ RVA 0x348B350

InControl_InputControl_array *
InControl_InputDevice__get_Controls(InControl_InputDevice_o *__this,MethodInfo *method)

{
  return (__this->fields)._Controls_k__BackingField;
}


// ===== protected void set_Controls(InputControl[] value)  [RVA 0x348B358]
// InControl.InputDevice$$set_Controls @ RVA 0x348B358

void InControl_InputDevice__set_Controls
               (InControl_InputDevice_o *__this,InControl_InputControl_array *value,
               MethodInfo *method)

{
  (__this->fields)._Controls_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public TwoAxisInputControl get_LeftStick()  [RVA 0x348B360]
// InControl.InputDevice$$get_LeftStick @ RVA 0x348B360

InControl_TwoAxisInputControl_o *
InControl_InputDevice__get_LeftStick(InControl_InputDevice_o *__this,MethodInfo *method)

{
  return (__this->fields)._LeftStick_k__BackingField;
}


// ===== protected void set_LeftStick(TwoAxisInputControl value)  [RVA 0x348B368]
// InControl.InputDevice$$set_LeftStick @ RVA 0x348B368

void InControl_InputDevice__set_LeftStick
               (InControl_InputDevice_o *__this,InControl_TwoAxisInputControl_o *value,
               MethodInfo *method)

{
  (__this->fields)._LeftStick_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public TwoAxisInputControl get_RightStick()  [RVA 0x348B370]
// InControl.InputDevice$$get_RightStick @ RVA 0x348B370

InControl_TwoAxisInputControl_o *
InControl_InputDevice__get_RightStick(InControl_InputDevice_o *__this,MethodInfo *method)

{
  return (__this->fields)._RightStick_k__BackingField;
}


// ===== protected void set_RightStick(TwoAxisInputControl value)  [RVA 0x348B378]
// InControl.InputDevice$$set_RightStick @ RVA 0x348B378

void InControl_InputDevice__set_RightStick
               (InControl_InputDevice_o *__this,InControl_TwoAxisInputControl_o *value,
               MethodInfo *method)

{
                    /* try { // try from 0358b378 to 0368b37b has its CatchHandler @ 0358b394 */
  (__this->fields)._RightStick_k__BackingField = value;
                    /* try { // try from 0358b37c to 0368b37f has its CatchHandler @ 0358b38c */
  thunk_FUN_01c20e04();
  return;
}


// ===== public TwoAxisInputControl get_DPad()  [RVA 0x348B380]
// InControl.InputDevice$$get_DPad @ RVA 0x348B380

InControl_TwoAxisInputControl_o *
InControl_InputDevice__get_DPad(InControl_InputDevice_o *__this,MethodInfo *method)

{
                    /* try { // try from 0358b380 to 0368b383 has its CatchHandler @ 0358b388 */
                    /* try { // try from 0358b384 to 0368b3bb has its CatchHandler @ 0358b1c4 */
  return (__this->fields)._DPad_k__BackingField;
}


// ===== protected void set_DPad(TwoAxisInputControl value)  [RVA 0x348B388]
// InControl.InputDevice$$set_DPad @ RVA 0x348B388

void InControl_InputDevice__set_DPad
               (InControl_InputDevice_o *__this,InControl_TwoAxisInputControl_o *value,
               MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358b380 with catch @ 0358b388
                        */
  (__this->fields)._DPad_k__BackingField = value;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358b37c with catch @ 0358b38c
                        */
  thunk_FUN_01c20e04();
  return;
}


// ===== public float get_VibrationFrequency()  [RVA 0x348B390]
// InControl.InputDevice$$get_VibrationFrequency @ RVA 0x348B390

float InControl_InputDevice__get_VibrationFrequency
                (InControl_InputDevice_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358b328 with catch @ 0358b390
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358b378 with catch @ 0358b394
                        */
  return (__this->fields)._VibrationFrequency_k__BackingField;
}


// ===== public void set_VibrationFrequency(float value)  [RVA 0x348B398]
// InControl.InputDevice$$set_VibrationFrequency @ RVA 0x348B398

void InControl_InputDevice__set_VibrationFrequency
               (InControl_InputDevice_o *__this,float value,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358b310 with catch @ 0358b398
                        */
  (__this->fields)._VibrationFrequency_k__BackingField = value;
  return;
}


// ===== public void .ctor(string name)  [RVA 0x348B3A0]
// InControl.InputDevice$$.ctor @ RVA 0x348B3A0

void InControl_InputDevice___ctor
               (InControl_InputDevice_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o **ppSVar1;
  InControl_InputControl_array *pIVar2;
  InControl_TwoAxisInputControl_o *pIVar3;
  InControl_TwoAxisInputControl_o **ppIVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358b2e4 with catch @ 0358b3a4
                        */
                    /* try { // try from 0358b3bc to 0368b3bf has its CatchHandler @ 0358b3e0 */
                    /* try { // try from 0358b3c0 to 0368b3e7 has its CatchHandler @ 0358b1c4 */
  if ((DAT_045683db & 1) == 0) {
                    /* catch() { ... } // from try @ 0358b3bc with catch @ 0358b3e0 */
    FUN_01bab630(&InControl_InputControl___TypeInfo);
                    /* try { // try from 0358b3e8 to 0368b3ef has its CatchHandler @ 0358b404 */
                    /* try { // try from 0358b3f0 to 0368b3fb has its CatchHandler @ 0358b1c4 */
    FUN_01bab630(&InControl_TwoAxisInputControl_TypeInfo);
                    /* try { // try from 0358b3fc to 0368b403 has its CatchHandler @ 0358b404 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0358b3e8 with catch @ 0358b404
                       catch(type#2 @ 00000000) { ... } // from try @ 0358b3fc with catch @ 0358b404
                        */
    DAT_045683db = 1;
  }
  (__this->fields).SortOrder = 0x7fffffff;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields)._Name_k__BackingField;
  *ppSVar1 = name;
  thunk_FUN_01c20e04(ppSVar1,name);
  (__this->fields)._Meta_k__BackingField = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields)._LastChangeTick_k__BackingField = 0;
  pIVar2 = (InControl_InputControl_array *)FUN_01bab718(InControl_InputControl___TypeInfo,0x4c);
  (__this->fields)._Controls_k__BackingField = pIVar2;
  thunk_FUN_01c20e04();
  pIVar3 = (InControl_TwoAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_TwoAxisInputControl_TypeInfo);
  InControl_TwoAxisInputControl___ctor(pIVar3,(MethodInfo *)0x0);
  ppIVar4 = &(__this->fields)._LeftStick_k__BackingField;
  *ppIVar4 = pIVar3;
  thunk_FUN_01c20e04(ppIVar4,pIVar3);
  pIVar3 = (InControl_TwoAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_TwoAxisInputControl_TypeInfo);
  InControl_TwoAxisInputControl___ctor(pIVar3,(MethodInfo *)0x0);
  ppIVar4 = &(__this->fields)._RightStick_k__BackingField;
  *ppIVar4 = pIVar3;
  thunk_FUN_01c20e04(ppIVar4,pIVar3);
  pIVar3 = (InControl_TwoAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_TwoAxisInputControl_TypeInfo);
  InControl_TwoAxisInputControl___ctor(pIVar3,(MethodInfo *)0x0);
  ppIVar4 = &(__this->fields)._DPad_k__BackingField;
  *ppIVar4 = pIVar3;
  thunk_FUN_01c20e04(ppIVar4,pIVar3);
  return;
}


// ===== public InputControl GetControl(InputControlType inputControlType)  [RVA 0x348B4D8]
// InControl.InputDevice$$GetControl @ RVA 0x348B4D8

InControl_InputControl_o *
InControl_InputDevice__GetControl
          (InControl_InputDevice_o *__this,int32_t inputControlType,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  InControl_InputControl_array *pIVar2;
  
  if ((DAT_045683dc & 1) == 0) {
    FUN_01bab630(&InControl_InputControl_TypeInfo);
    DAT_045683dc = 1;
  }
  pIVar2 = (__this->fields)._Controls_k__BackingField;
  if (pIVar2 != (InControl_InputControl_array *)0x0) {
    if ((uint)inputControlType < (uint)pIVar2->max_length) {
      pIVar1 = pIVar2->m_Items[inputControlType];
      if (pIVar1 == (InControl_InputControl_o *)0x0) {
        if ((InControl_InputControl_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pIVar1 = InControl_InputControl_TypeInfo->static_fields->Null;
      }
      return pIVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static InputControlType GetInputControlTypeByName(string inputControlName)  [RVA 0x348B560]
// InControl.InputDevice$$GetInputControlTypeByName @ RVA 0x348B560

int32_t InControl_InputDevice__GetInputControlTypeByName
                  (System_String_o *inputControlName,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *enumType;
  Il2CppObject *pIVar1;
  int32_t *piVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045683dd & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&InControl_InputControlType_var);
    FUN_01bab630(&InControl_InputControlType_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_045683dd = 1;
    method = extraout_x1;
  }
  handle = InControl_InputControlType_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo,method);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  pIVar1 = System_Enum__Parse(enumType,inputControlName,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    if ((pIVar1->klass->_1).element_class == (InControl_InputControlType_TypeInfo->_1).element_class
       ) {
      piVar2 = (int32_t *)thunk_FUN_01bda96c();
      return *piVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public InputControl GetControlByName(string inputControlName)  [RVA 0x348B658]
// InControl.InputDevice$$GetControlByName @ RVA 0x348B658

InControl_InputControl_o *
InControl_InputDevice__GetControlByName
          (InControl_InputDevice_o *__this,System_String_o *inputControlName,MethodInfo *method)

{
  int32_t inputControlType;
  InControl_InputControl_o *pIVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)inputControlName;
  if ((DAT_045683de & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    DAT_045683de = 1;
    method_00 = extraout_x1;
  }
  if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  inputControlType = InControl_InputDevice__GetInputControlTypeByName(inputControlName,method_00);
  pIVar1 = InControl_InputDevice__GetControl(__this,inputControlType,method);
  return pIVar1;
}


// ===== public InputControl AddControl(InputControlType inputControlType, string handle)  [RVA 0x348B6C4]
// InControl.InputDevice$$AddControl @ RVA 0x348B6C4

InControl_InputControl_o *
InControl_InputDevice__AddControl
          (InControl_InputDevice_o *__this,int32_t inputControlType,System_String_o *handle,
          MethodInfo *method)

{
  InControl_InputControl_o *__this_00;
  long lVar1;
  undefined8 uVar2;
  InControl_InputControl_array *pIVar3;
  
  if ((DAT_045683df & 1) == 0) {
    FUN_01bab630(&InControl_InputControl_TypeInfo);
    DAT_045683df = 1;
  }
  __this_00 = (InControl_InputControl_o *)thunk_FUN_01bda818(InControl_InputControl_TypeInfo);
  InControl_InputControl___ctor(__this_00,handle,inputControlType,(MethodInfo *)0x0);
  pIVar3 = (__this->fields)._Controls_k__BackingField;
  if (pIVar3 != (InControl_InputControl_array *)0x0) {
    if ((__this_00 != (InControl_InputControl_o *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(__this_00,(((pIVar3->obj).klass)->_1).element_class), lVar1 == 0)
       ) {
      uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar2,0);
    }
    if ((uint)inputControlType < (uint)pIVar3->max_length) {
      pIVar3->m_Items[inputControlType] = __this_00;
      thunk_FUN_01c20e04(pIVar3->m_Items + inputControlType,__this_00);
      return __this_00;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateWithState(InputControlType inputControlType, bool state, ulong updateTick)  [RVA 0x348B784]
// InControl.InputDevice$$UpdateWithState @ RVA 0x348B784

void InControl_InputDevice__UpdateWithState
               (InControl_InputDevice_o *__this,int32_t inputControlType,bool state,
               uint64_t updateTick,MethodInfo *method)

{
  InControl_InputControl_o *__this_00;
  
  __this_00 = InControl_InputDevice__GetControl(__this,inputControlType,(MethodInfo *)(ulong)state);
  if (__this_00 != (InControl_InputControl_o *)0x0) {
    InControl_InputControl__UpdateWithState(__this_00,state,updateTick,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateWithValue(InputControlType inputControlType, float value, ulong updateTick)  [RVA 0x348B7B8]
// InControl.InputDevice$$UpdateWithValue @ RVA 0x348B7B8

void InControl_InputDevice__UpdateWithValue
               (InControl_InputDevice_o *__this,int32_t inputControlType,float value,
               uint64_t updateTick,MethodInfo *method)

{
  InControl_InputControl_o *__this_00;
  
  __this_00 = InControl_InputDevice__GetControl(__this,inputControlType,(MethodInfo *)updateTick);
  if (__this_00 != (InControl_InputControl_o *)0x0) {
    InControl_InputControl__UpdateWithValue(__this_00,value,updateTick,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PreUpdate(ulong updateTick, float deltaTime)  [RVA 0x348B7EC]
// InControl.InputDevice$$PreUpdate @ RVA 0x348B7EC

void InControl_InputDevice__PreUpdate
               (InControl_InputDevice_o *__this,uint64_t updateTick,float deltaTime,
               MethodInfo *method)

{
  uint uVar1;
  InControl_InputControl_array *pIVar2;
  ulong uVar3;
  
  pIVar2 = (__this->fields)._Controls_k__BackingField;
  if (pIVar2 != (InControl_InputControl_array *)0x0) {
    uVar1 = System_Array__GetLength((System_Array_o *)pIVar2,0,(MethodInfo *)0x0);
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        pIVar2 = (__this->fields)._Controls_k__BackingField;
        if (pIVar2 == (InControl_InputControl_array *)0x0) goto LAB_0358b86c;
        if ((uint)pIVar2->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (pIVar2->m_Items[uVar3] != (InControl_InputControl_o *)0x0) {
          InControl_InputControl__PreUpdate(pIVar2->m_Items[uVar3],updateTick,(MethodInfo *)0x0);
        }
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
    return;
  }
LAB_0358b86c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void Update(ulong updateTick, float deltaTime)  [RVA 0x348B874]
// InControl.InputDevice$$Update @ RVA 0x348B874

void InControl_InputDevice__Update
               (InControl_InputDevice_o *__this,uint64_t updateTick,float deltaTime,
               MethodInfo *method)

{
  return;
}


// ===== public void PostUpdate(ulong updateTick, float deltaTime)  [RVA 0x348B878]
// InControl.InputDevice$$PostUpdate @ RVA 0x348B878

void InControl_InputDevice__PostUpdate
               (InControl_InputDevice_o *__this,uint64_t updateTick,float deltaTime,
               MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  InControl_InputControl_array *pIVar3;
  System_Nullable_float__o *__this_00;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  InControl_InputControl_o *pIVar5;
  InControl_TwoAxisInputControl_o *pIVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector2_o UVar10;
  
  if ((DAT_045683e0 & 1) == 0) {
    FUN_01bab630(&InControl_InputControl_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    DAT_045683e0 = 1;
  }
  pIVar3 = (__this->fields)._Controls_k__BackingField;
  if (pIVar3 != (InControl_InputControl_array *)0x0) {
    pMVar4 = (MethodInfo *)0x0;
    uVar2 = System_Array__GetLength((System_Array_o *)pIVar3,0,(MethodInfo *)0x0);
    if (0 < (int)uVar2) {
      uVar7 = 0;
      do {
        pIVar3 = (__this->fields)._Controls_k__BackingField;
        if (pIVar3 == (InControl_InputControl_array *)0x0) goto LAB_0358ba78;
        if ((uint)pIVar3->max_length <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pIVar5 = pIVar3->m_Items[uVar7];
        if (pIVar5 != (InControl_InputControl_o *)0x0) {
          __this_00 = &(pIVar5->fields).RawValue;
          if ((__this_00->fields).hasValue == false) {
            if ((pIVar5->fields).PreValue.fields.hasValue != false) {
              fVar8 = InControl_InputDevice__ProcessAnalogControlValue
                                (__this,pIVar5,deltaTime,pMVar4);
              goto LAB_0358b94c;
            }
          }
          else {
            fVar8 = System_Nullable<float>__get_Value
                              ((System_Nullable_float__o)__this_00,
                               Method_System_Nullable<float>_get_Value__);
LAB_0358b94c:
            InControl_InputControl__UpdateWithValue(pIVar5,fVar8,updateTick,(MethodInfo *)0x0);
          }
          pMVar4 = (MethodInfo *)0x0;
          InControl_InputControl__PostUpdate(pIVar5,updateTick,(MethodInfo *)0x0);
          bVar1 = InControl_InputControl__get_HasChanged(pIVar5,(MethodInfo *)0x0);
          if (bVar1) {
            (__this->fields)._LastChangeTick_k__BackingField = updateTick;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    pIVar6 = (__this->fields)._LeftStick_k__BackingField;
    pIVar5 = InControl_InputDevice__GetControl(__this,1,pMVar4);
    if ((InControl_InputControl_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(InControl_InputControl_TypeInfo);
    }
    fVar8 = InControl_InputControl__op_Implicit(pIVar5,(MethodInfo *)0x0);
    pIVar5 = InControl_InputDevice__GetControl(__this,2,pMVar4);
    fVar9 = InControl_InputControl__op_Implicit(pIVar5,(MethodInfo *)0x0);
    if (pIVar6 != (InControl_TwoAxisInputControl_o *)0x0) {
      pMVar4 = (MethodInfo *)0x0;
      InControl_TwoAxisInputControl__Update(pIVar6,fVar8,fVar9,updateTick,(MethodInfo *)0x0);
      pIVar6 = (__this->fields)._RightStick_k__BackingField;
      pIVar5 = InControl_InputDevice__GetControl(__this,4,pMVar4);
      fVar8 = InControl_InputControl__op_Implicit(pIVar5,(MethodInfo *)0x0);
      pIVar5 = InControl_InputDevice__GetControl(__this,5,pMVar4);
      fVar9 = InControl_InputControl__op_Implicit(pIVar5,(MethodInfo *)0x0);
      if (pIVar6 != (InControl_TwoAxisInputControl_o *)0x0) {
        InControl_TwoAxisInputControl__Update(pIVar6,fVar8,fVar9,updateTick,(MethodInfo *)0x0);
        UVar10 = InControl_InputDevice__get_DPadVector(__this,method_00);
        pIVar6 = (__this->fields)._DPad_k__BackingField;
        if (pIVar6 != (InControl_TwoAxisInputControl_o *)0x0) {
          InControl_TwoAxisInputControl__Update
                    (pIVar6,UVar10.fields.x,UVar10.fields.y,updateTick,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0358ba78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private float ProcessAnalogControlValue(InputControl control, float deltaTime)  [RVA 0x348BA80]
// InControl.InputDevice$$ProcessAnalogControlValue @ RVA 0x348BA80

/* WARNING: Removing unreachable block (ram,0x0358bb8c) */

float InControl_InputDevice__ProcessAnalogControlValue
                (InControl_InputDevice_o *__this,InControl_InputControl_o *control,float deltaTime,
                MethodInfo *method)

{
  int32_t inputControlType;
  InControl_InputControl_o *pIVar1;
  System_Nullable_float__o *__this_00;
  InControl_InputDevice_o *__this_01;
  InControl_InputDevice_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  System_Nullable_InputControlType__Fields local_38;
  
  if ((DAT_045683e1 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<InputControlType>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<InputControlType>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    DAT_045683e1 = 1;
  }
  if (control == (InControl_InputControl_o *)0x0) {
LAB_0358bbd0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  fVar2 = System_Nullable<float>__get_Value
                    ((System_Nullable_float__o)&(control->fields).PreValue,
                     Method_System_Nullable<float>_get_Value__);
  local_38 = (System_Nullable_InputControlType__Fields)
             InControl_InputControl__get_Obverse(control,(MethodInfo *)0x0);
  if (((ulong)local_38 & 0xff) != 0) {
    inputControlType =
         System_Nullable<Int32Enum>__get_Value
                   ((System_Nullable_Int32Enum__o)&local_38,
                    Method_System_Nullable<InputControlType>_get_Value__);
    pIVar1 = InControl_InputDevice__GetControl(__this,inputControlType,method);
    if (pIVar1 == (InControl_InputControl_o *)0x0) goto LAB_0358bbd0;
    __this_00 = &(pIVar1->fields).PreValue;
    if ((__this_00->fields).hasValue != false) {
      fVar3 = System_Nullable<float>__get_Value
                        ((System_Nullable_float__o)__this_00,
                         Method_System_Nullable<float>_get_Value__);
      fVar3 = InControl_InputDevice__ApplyCircularDeadZone
                        (__this_01,fVar2,fVar3,(control->fields).LowerDeadZone,
                         (control->fields).UpperDeadZone,method_00);
      goto LAB_0358bb9c;
    }
  }
  fVar4 = (control->fields).LowerDeadZone;
  fVar5 = (control->fields).UpperDeadZone;
  fVar3 = 0.0;
  if ((fVar4 != fVar5) &&
     (fVar4 = (ABS(fVar2) - fVar4) / (fVar5 - fVar4), fVar3 = 0.0, 0.0 <= fVar4)) {
    fVar3 = fVar4;
  }
  if (fVar2 < 0.0) {
    fVar3 = -fVar3;
  }
LAB_0358bb9c:
  fVar2 = InControl_InputControl__get_LastValue(control,(MethodInfo *)0x0);
  fVar2 = InControl_InputDevice__ApplySmoothing
                    (__this_02,fVar3,fVar2,deltaTime,(control->fields).Sensitivity,method_01);
  return fVar2;
}


// ===== private float ApplyDeadZone(float value, float lowerDeadZone, float upperDeadZone)  [RVA 0x348BED8]
// InControl.InputDevice$$ApplyDeadZone @ RVA 0x348BED8

float InControl_InputDevice__ApplyDeadZone
                (InControl_InputDevice_o *__this,float value,float lowerDeadZone,float upperDeadZone
                ,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (((lowerDeadZone != upperDeadZone) &&
      (fVar1 = (ABS(value) - lowerDeadZone) / (upperDeadZone - lowerDeadZone), 0.0 <= fVar1)) &&
     (fVar2 = fVar1, 1.0 < fVar1)) {
    fVar2 = 1.0;
  }
  if (value < 0.0) {
    fVar2 = -fVar2;
  }
  return fVar2;
}


// ===== private float ApplyCircularDeadZone(float axisValue1, float axisValue2, float lowerDeadZone, float upperDeadZone)  [RVA 0x348BDB0]
// InControl.InputDevice$$ApplyCircularDeadZone @ RVA 0x348BDB0

float InControl_InputDevice__ApplyCircularDeadZone
                (InControl_InputDevice_o *__this,float axisValue1,float axisValue2,
                float lowerDeadZone,float upperDeadZone,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (DAT_045602fb == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045602fb = '\x01';
    method = extraout_x1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
    method = extraout_x1_00;
  }
  fVar3 = SQRT(axisValue1 * axisValue1 + axisValue2 * axisValue2);
  fVar2 = 0.0;
  if (((lowerDeadZone != upperDeadZone) &&
      (fVar1 = (fVar3 - lowerDeadZone) / (upperDeadZone - lowerDeadZone), fVar2 = 0.0, 0.0 <= fVar1)
      ) && (fVar2 = fVar1, 1.0 < fVar1)) {
    fVar2 = 1.0;
  }
  if (DAT_045602fb == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045602fb = '\x01';
    method = extraout_x1_01;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  if (fVar3 <= 1e-05) {
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
  }
  else {
    fVar3 = axisValue1 / fVar3;
  }
  return fVar2 * fVar3;
}


// ===== private float ApplySmoothing(float thisValue, float lastValue, float deltaTime, float sensitivity)  [RVA 0x348BF14]
// InControl.InputDevice$$ApplySmoothing @ RVA 0x348BF14

float InControl_InputDevice__ApplySmoothing
                (InControl_InputDevice_o *__this,float thisValue,float lastValue,float deltaTime,
                float sensitivity,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_045602fa = '\x01';
  }
  fVar2 = ABS(sensitivity);
  fVar1 = 1.0;
  fVar4 = 1.0;
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  fVar3 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar5 = fVar2 * 1e-06;
  if (fVar2 * 1e-06 <= fVar3) {
    fVar5 = fVar3;
  }
  fVar2 = thisValue;
  if (fVar5 <= ABS(1.0 - sensitivity)) {
    fVar5 = deltaTime * sensitivity * 100.0;
    if (lastValue < 0.0) {
      fVar4 = -1.0;
    }
    if (thisValue < 0.0) {
      fVar1 = -1.0;
    }
    if (fVar4 != fVar1) {
      lastValue = 0.0;
    }
    fVar4 = fVar5;
    if (thisValue - lastValue < 0.0) {
      fVar4 = -(deltaTime * sensitivity * 100.0);
    }
    fVar2 = lastValue + fVar4;
    if (ABS(thisValue - lastValue) <= fVar5) {
      fVar2 = thisValue;
    }
  }
  return fVar2;
}


// ===== private Vector2 get_DPadVector()  [RVA 0x348BBF4]
// InControl.InputDevice$$get_DPadVector @ RVA 0x348BBF4

UnityEngine_Vector2_o
InControl_InputDevice__get_DPadVector(InControl_InputDevice_o *__this,MethodInfo *method)

{
  bool bVar1;
  InControl_InputControl_o *pIVar2;
  MethodInfo *in_x2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector2_o UVar6;
  
  if ((DAT_045683e2 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045683e2 = 1;
  }
  pIVar2 = InControl_InputDevice__GetControl(__this,9,in_x2);
  if (pIVar2 != (InControl_InputControl_o *)0x0) {
    bVar1 = InControl_InputControl__get_State(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = InControl_InputDevice__GetControl(__this,9,in_x2);
      if (pIVar2 == (InControl_InputControl_o *)0x0) goto LAB_0358bdac;
      fVar3 = InControl_InputControl__get_Value(pIVar2,(MethodInfo *)0x0);
      fVar3 = -fVar3;
    }
    else {
      pIVar2 = InControl_InputDevice__GetControl(__this,10,in_x2);
      if (pIVar2 == (InControl_InputControl_o *)0x0) goto LAB_0358bdac;
      fVar3 = InControl_InputControl__get_Value(pIVar2,(MethodInfo *)0x0);
    }
    pIVar2 = InControl_InputDevice__GetControl(__this,7,in_x2);
    if (pIVar2 != (InControl_InputControl_o *)0x0) {
      bVar1 = InControl_InputControl__get_State(pIVar2,(MethodInfo *)0x0);
      if (bVar1) {
        pIVar2 = InControl_InputDevice__GetControl(__this,7,in_x2);
        if (pIVar2 != (InControl_InputControl_o *)0x0) {
          fVar4 = InControl_InputControl__get_Value(pIVar2,(MethodInfo *)0x0);
LAB_0358bcd4:
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (InControl_InputManager_TypeInfo->static_fields->InvertYAxis != false) {
            fVar4 = -fVar4;
          }
          if (DAT_045602fb == '\0') {
            FUN_01bab630(&System_Math_TypeInfo);
            DAT_045602fb = '\x01';
          }
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          fVar5 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
          if (fVar5 <= 1e-05) {
            if (DAT_0455fa75 == '\0') {
              FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
              DAT_0455fa75 = '\x01';
            }
            fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
            fVar4 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
          }
          else {
            fVar3 = fVar3 / fVar5;
            fVar4 = fVar4 / fVar5;
          }
          UVar6.fields.y = fVar4;
          UVar6.fields.x = fVar3;
          return (UnityEngine_Vector2_o)UVar6.fields;
        }
      }
      else {
        pIVar2 = InControl_InputDevice__GetControl(__this,8,in_x2);
        if (pIVar2 != (InControl_InputControl_o *)0x0) {
          fVar4 = InControl_InputControl__get_Value(pIVar2,(MethodInfo *)0x0);
          fVar4 = -fVar4;
          goto LAB_0358bcd4;
        }
      }
    }
  }
LAB_0358bdac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool LastChangedAfter(InputDevice otherDevice)  [RVA 0x348C01C]
// InControl.InputDevice$$LastChangedAfter @ RVA 0x348C01C

bool InControl_InputDevice__LastChangedAfter
               (InControl_InputDevice_o *__this,InControl_InputDevice_o *otherDevice,
               MethodInfo *method)

{
  if (otherDevice != (InControl_InputDevice_o *)0x0) {
    return (otherDevice->fields)._LastChangeTick_k__BackingField <
           (__this->fields)._LastChangeTick_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void Vibrate(float leftMotor, float rightMotor)  [RVA 0x348C040]
// InControl.InputDevice$$Vibrate @ RVA 0x348C040

void InControl_InputDevice__Vibrate
               (InControl_InputDevice_o *__this,float leftMotor,float rightMotor,MethodInfo *method)

{
  return;
}


// ===== public void Vibrate(float intensity)  [RVA 0x348C044]
// InControl.InputDevice$$Vibrate @ RVA 0x348C044

void InControl_InputDevice__Vibrate
               (InControl_InputDevice_o *__this,float intensity,MethodInfo *method)

{
  undefined4 in_register_00005004;
  
                    /* WARNING: Could not recover jumptable at 0x0358c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_Vibrate.methodPtr)
            (intensity,CONCAT44(in_register_00005004,intensity),__this,
             (__this->klass->vtable)._5_Vibrate.method);
  return;
}


// ===== public virtual bool get_IsSupportedOnThisPlatform()  [RVA 0x348C054]
// InControl.InputDevice$$get_IsSupportedOnThisPlatform @ RVA 0x348C054

bool InControl_InputDevice__get_IsSupportedOnThisPlatform
               (InControl_InputDevice_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public virtual bool get_IsKnown()  [RVA 0x348C05C]
// InControl.InputDevice$$get_IsKnown @ RVA 0x348C05C

bool InControl_InputDevice__get_IsKnown(InControl_InputDevice_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public bool get_MenuWasPressed()  [RVA 0x348C064]
// InControl.InputDevice$$get_MenuWasPressed @ RVA 0x348C064

bool InControl_InputDevice__get_MenuWasPressed(InControl_InputDevice_o *__this,MethodInfo *method)

{
  bool bVar1;
  InControl_InputControl_o *pIVar2;
  MethodInfo *in_x2;
  
  pIVar2 = InControl_InputDevice__GetControl(__this,0x13,in_x2);
  if (pIVar2 != (InControl_InputControl_o *)0x0) {
    bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar2 = InControl_InputDevice__GetControl(__this,0x14,in_x2);
    if (pIVar2 != (InControl_InputControl_o *)0x0) {
      bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
      pIVar2 = InControl_InputDevice__GetControl(__this,0x15,in_x2);
      if (pIVar2 != (InControl_InputControl_o *)0x0) {
        bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
        if (bVar1) {
          return true;
        }
        pIVar2 = InControl_InputDevice__GetControl(__this,0x16,in_x2);
        if (pIVar2 != (InControl_InputControl_o *)0x0) {
          bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
          if (bVar1) {
            return true;
          }
          pIVar2 = InControl_InputDevice__GetControl(__this,0x17,in_x2);
          if (pIVar2 != (InControl_InputControl_o *)0x0) {
            bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
            if (bVar1) {
              return true;
            }
            pIVar2 = InControl_InputDevice__GetControl(__this,0x18,in_x2);
            if (pIVar2 != (InControl_InputControl_o *)0x0) {
              bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
              return bVar1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public InputControl get_AnyButton()  [RVA 0x348C120]
// InControl.InputDevice$$get_AnyButton @ RVA 0x348C120

InControl_InputControl_o *
InControl_InputDevice__get_AnyButton(InControl_InputDevice_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  InControl_InputControl_array *pIVar3;
  InControl_InputControl_o *__this_00;
  ulong uVar4;
  
  if ((DAT_045683e3 & 1) == 0) {
    FUN_01bab630(&InControl_InputControl_TypeInfo);
    DAT_045683e3 = 1;
  }
  pIVar3 = (__this->fields)._Controls_k__BackingField;
  if (pIVar3 == (InControl_InputControl_array *)0x0) {
LAB_0358c1f0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = System_Array__GetLength((System_Array_o *)pIVar3,0,(MethodInfo *)0x0);
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      pIVar3 = (__this->fields)._Controls_k__BackingField;
      if (pIVar3 == (InControl_InputControl_array *)0x0) goto LAB_0358c1f0;
      if ((uint)pIVar3->max_length <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      __this_00 = pIVar3->m_Items[uVar4];
      if (((__this_00 != (InControl_InputControl_o *)0x0) &&
          ((__this_00->fields)._IsButton_k__BackingField != false)) &&
         (bVar1 = InControl_InputControl__get_IsPressed(__this_00,(MethodInfo *)0x0), bVar1)) {
        return __this_00;
      }
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  if ((InControl_InputControl_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return InControl_InputControl_TypeInfo->static_fields->Null;
}


// ===== public InputControl get_LeftStickX()  [RVA 0x348BBD4]
// InControl.InputDevice$$get_LeftStickX @ RVA 0x348BBD4

InControl_InputControl_o *
InControl_InputDevice__get_LeftStickX(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,1,in_x2);
  return pIVar1;
}


// ===== public InputControl get_LeftStickY()  [RVA 0x348BBDC]
// InControl.InputDevice$$get_LeftStickY @ RVA 0x348BBDC

InControl_InputControl_o *
InControl_InputDevice__get_LeftStickY(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,2,in_x2);
  return pIVar1;
}


// ===== public InputControl get_RightStickX()  [RVA 0x348BBE4]
// InControl.InputDevice$$get_RightStickX @ RVA 0x348BBE4

InControl_InputControl_o *
InControl_InputDevice__get_RightStickX(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,4,in_x2);
  return pIVar1;
}


// ===== public InputControl get_RightStickY()  [RVA 0x348BBEC]
// InControl.InputDevice$$get_RightStickY @ RVA 0x348BBEC

InControl_InputControl_o *
InControl_InputDevice__get_RightStickY(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,5,in_x2);
  return pIVar1;
}


// ===== public InputControl get_DPadUp()  [RVA 0x348C00C]
// InControl.InputDevice$$get_DPadUp @ RVA 0x348C00C

InControl_InputControl_o *
InControl_InputDevice__get_DPadUp(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,7,in_x2);
  return pIVar1;
}


// ===== public InputControl get_DPadDown()  [RVA 0x348C014]
// InControl.InputDevice$$get_DPadDown @ RVA 0x348C014

InControl_InputControl_o *
InControl_InputDevice__get_DPadDown(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,8,in_x2);
  return pIVar1;
}


// ===== public InputControl get_DPadLeft()  [RVA 0x348BFFC]
// InControl.InputDevice$$get_DPadLeft @ RVA 0x348BFFC

InControl_InputControl_o *
InControl_InputDevice__get_DPadLeft(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,9,in_x2);
  return pIVar1;
}


// ===== public InputControl get_DPadRight()  [RVA 0x348C004]
// InControl.InputDevice$$get_DPadRight @ RVA 0x348C004

InControl_InputControl_o *
InControl_InputDevice__get_DPadRight(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,10,in_x2);
  return pIVar1;
}


// ===== public InputControl get_Action1()  [RVA 0x348C1F8]
// InControl.InputDevice$$get_Action1 @ RVA 0x348C1F8

InControl_InputControl_o *
InControl_InputDevice__get_Action1(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,0xb,in_x2);
  return pIVar1;
}


// ===== public InputControl get_Action2()  [RVA 0x348C200]
// InControl.InputDevice$$get_Action2 @ RVA 0x348C200

InControl_InputControl_o *
InControl_InputDevice__get_Action2(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,0xc,in_x2);
  return pIVar1;
}


// ===== public InputControl get_Action3()  [RVA 0x348C208]
// InControl.InputDevice$$get_Action3 @ RVA 0x348C208

InControl_InputControl_o *
InControl_InputDevice__get_Action3(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,0xd,in_x2);
  return pIVar1;
}


// ===== public InputControl get_Action4()  [RVA 0x348C210]
// InControl.InputDevice$$get_Action4 @ RVA 0x348C210

InControl_InputControl_o *
InControl_InputDevice__get_Action4(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,0xe,in_x2);
  return pIVar1;
}


// ===== public InputControl get_LeftTrigger()  [RVA 0x348C218]
// InControl.InputDevice$$get_LeftTrigger @ RVA 0x348C218

InControl_InputControl_o *
InControl_InputDevice__get_LeftTrigger(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,0xf,in_x2);
  return pIVar1;
}


// ===== public InputControl get_RightTrigger()  [RVA 0x348C220]
// InControl.InputDevice$$get_RightTrigger @ RVA 0x348C220

InControl_InputControl_o *
InControl_InputDevice__get_RightTrigger(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,0x10,in_x2);
  return pIVar1;
}


// ===== public InputControl get_LeftBumper()  [RVA 0x348C228]
// InControl.InputDevice$$get_LeftBumper @ RVA 0x348C228

InControl_InputControl_o *
InControl_InputDevice__get_LeftBumper(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,0x11,in_x2);
  return pIVar1;
}


// ===== public InputControl get_RightBumper()  [RVA 0x348C230]
// InControl.InputDevice$$get_RightBumper @ RVA 0x348C230

InControl_InputControl_o *
InControl_InputDevice__get_RightBumper(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,0x12,in_x2);
  return pIVar1;
}


// ===== public InputControl get_LeftStickButton()  [RVA 0x348C238]
// InControl.InputDevice$$get_LeftStickButton @ RVA 0x348C238

InControl_InputControl_o *
InControl_InputDevice__get_LeftStickButton(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,3,in_x2);
  return pIVar1;
}


// ===== public InputControl get_RightStickButton()  [RVA 0x348C240]
// InControl.InputDevice$$get_RightStickButton @ RVA 0x348C240

InControl_InputControl_o *
InControl_InputDevice__get_RightStickButton(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,6,in_x2);
  return pIVar1;
}


// ===== public float get_DPadX()  [RVA 0x348C248]
// InControl.InputDevice$$get_DPadX @ RVA 0x348C248

float InControl_InputDevice__get_DPadX(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_TwoAxisInputControl_o *pIVar1;
  
  pIVar1 = (__this->fields)._DPad_k__BackingField;
  if (pIVar1 != (InControl_TwoAxisInputControl_o *)0x0) {
    return (pIVar1->fields)._X_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float get_DPadY()  [RVA 0x348C264]
// InControl.InputDevice$$get_DPadY @ RVA 0x348C264

float InControl_InputDevice__get_DPadY(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_TwoAxisInputControl_o *pIVar1;
  
  pIVar1 = (__this->fields)._DPad_k__BackingField;
  if (pIVar1 != (InControl_TwoAxisInputControl_o *)0x0) {
    return (pIVar1->fields)._Y_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public TwoAxisInputControl get_Direction()  [RVA 0x348C280]
// InControl.InputDevice$$get_Direction @ RVA 0x348C280

InControl_TwoAxisInputControl_o *
InControl_InputDevice__get_Direction(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_TwoAxisInputControl_o *pIVar1;
  InControl_TwoAxisInputControl_o *pIVar2;
  
  pIVar1 = (__this->fields)._DPad_k__BackingField;
  if ((pIVar1 != (InControl_TwoAxisInputControl_o *)0x0) &&
     (pIVar2 = (__this->fields)._LeftStick_k__BackingField,
     pIVar2 != (InControl_TwoAxisInputControl_o *)0x0)) {
    if ((pIVar1->fields)._UpdateTick_k__BackingField <= (pIVar2->fields)._UpdateTick_k__BackingField
       ) {
      pIVar1 = pIVar2;
    }
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x348C2B0]
// InControl.InputDevice$$.cctor @ RVA 0x348C2B0

void InControl_InputDevice___cctor(MethodInfo *method)

{
  InControl_InputDevice_o *__this;
  MethodInfo *in_x2;
  
  if ((DAT_045683e4 & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&StringLiteral_9649/*"NullInputDevice"*/);
    DAT_045683e4 = 1;
  }
  __this = (InControl_InputDevice_o *)thunk_FUN_01bda818(InControl_InputDevice_TypeInfo);
  InControl_InputDevice___ctor(__this,StringLiteral_9649/*"NullInputDevice"*/,in_x2);
  InControl_InputDevice_TypeInfo->static_fields->Null = __this;
  thunk_FUN_01c20e04(InControl_InputDevice_TypeInfo->static_fields,__this);
  return;
}

