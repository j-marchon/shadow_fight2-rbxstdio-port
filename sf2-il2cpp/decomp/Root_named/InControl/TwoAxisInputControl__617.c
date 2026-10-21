// TypeDefIndex 617
// Namespace: InControl
// public class TwoAxisInputControl
// Fields:
//   private float <X>k__BackingField; // 0x10
//   private float <Y>k__BackingField; // 0x14
//   private OneAxisInputControl <Left>k__BackingField; // 0x18
//   private OneAxisInputControl <Right>k__BackingField; // 0x20
//   private OneAxisInputControl <Up>k__BackingField; // 0x28
//   private OneAxisInputControl <Down>k__BackingField; // 0x30
//   private ulong <UpdateTick>k__BackingField; // 0x38
//   private bool thisState; // 0x40
//   private bool lastState; // 0x41
//   public static float StateThreshold; // 0x0

// ===== public float get_X()  [RVA 0x35C2E18]
// InControl.TwoAxisInputControl$$get_X @ RVA 0x35C2E18

float InControl_TwoAxisInputControl__get_X
                (InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._X_k__BackingField;
}


// ===== protected void set_X(float value)  [RVA 0x35C2E20]
// InControl.TwoAxisInputControl$$set_X @ RVA 0x35C2E20

void InControl_TwoAxisInputControl__set_X
               (InControl_TwoAxisInputControl_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._X_k__BackingField = value;
  return;
}


// ===== public float get_Y()  [RVA 0x35C2E28]
// InControl.TwoAxisInputControl$$get_Y @ RVA 0x35C2E28

float InControl_TwoAxisInputControl__get_Y
                (InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._Y_k__BackingField;
}


// ===== protected void set_Y(float value)  [RVA 0x35C2E30]
// InControl.TwoAxisInputControl$$set_Y @ RVA 0x35C2E30

void InControl_TwoAxisInputControl__set_Y
               (InControl_TwoAxisInputControl_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._Y_k__BackingField = value;
  return;
}


// ===== public OneAxisInputControl get_Left()  [RVA 0x35C2E38]
// InControl.TwoAxisInputControl$$get_Left @ RVA 0x35C2E38

InControl_OneAxisInputControl_o *
InControl_TwoAxisInputControl__get_Left(InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._Left_k__BackingField;
}


// ===== protected void set_Left(OneAxisInputControl value)  [RVA 0x35C2E40]
// InControl.TwoAxisInputControl$$set_Left @ RVA 0x35C2E40

void InControl_TwoAxisInputControl__set_Left
               (InControl_TwoAxisInputControl_o *__this,InControl_OneAxisInputControl_o *value,
               MethodInfo *method)

{
  (__this->fields)._Left_k__BackingField = value;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2e00 with catch @ 036c2e44
                        */
  thunk_FUN_01c20e04();
  return;
}


// ===== public OneAxisInputControl get_Right()  [RVA 0x35C2E48]
// InControl.TwoAxisInputControl$$get_Right @ RVA 0x35C2E48

InControl_OneAxisInputControl_o *
InControl_TwoAxisInputControl__get_Right(InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2df0 with catch @ 036c2e48
                        */
  return (__this->fields)._Right_k__BackingField;
}


// ===== protected void set_Right(OneAxisInputControl value)  [RVA 0x35C2E50]
// InControl.TwoAxisInputControl$$set_Right @ RVA 0x35C2E50

void InControl_TwoAxisInputControl__set_Right
               (InControl_TwoAxisInputControl_o *__this,InControl_OneAxisInputControl_o *value,
               MethodInfo *method)

{
  (__this->fields)._Right_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public OneAxisInputControl get_Up()  [RVA 0x35C2E58]
// InControl.TwoAxisInputControl$$get_Up @ RVA 0x35C2E58

InControl_OneAxisInputControl_o *
InControl_TwoAxisInputControl__get_Up(InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._Up_k__BackingField;
}


// ===== protected void set_Up(OneAxisInputControl value)  [RVA 0x35C2E60]
// InControl.TwoAxisInputControl$$set_Up @ RVA 0x35C2E60

void InControl_TwoAxisInputControl__set_Up
               (InControl_TwoAxisInputControl_o *__this,InControl_OneAxisInputControl_o *value,
               MethodInfo *method)

{
                    /* try { // try from 036c2e60 to 037c2e63 has its CatchHandler @ 036c2e8c */
  (__this->fields)._Up_k__BackingField = value;
                    /* try { // try from 036c2e64 to 037c2e9b has its CatchHandler @ 036c2d44 */
  thunk_FUN_01c20e04();
  return;
}


// ===== public OneAxisInputControl get_Down()  [RVA 0x35C2E68]
// InControl.TwoAxisInputControl$$get_Down @ RVA 0x35C2E68

InControl_OneAxisInputControl_o *
InControl_TwoAxisInputControl__get_Down(InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._Down_k__BackingField;
}


// ===== protected void set_Down(OneAxisInputControl value)  [RVA 0x35C2E70]
// InControl.TwoAxisInputControl$$set_Down @ RVA 0x35C2E70

void InControl_TwoAxisInputControl__set_Down
               (InControl_TwoAxisInputControl_o *__this,InControl_OneAxisInputControl_o *value,
               MethodInfo *method)

{
  (__this->fields)._Down_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public ulong get_UpdateTick()  [RVA 0x35C2E78]
// InControl.TwoAxisInputControl$$get_UpdateTick @ RVA 0x35C2E78

uint64_t InControl_TwoAxisInputControl__get_UpdateTick
                   (InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._UpdateTick_k__BackingField;
}


// ===== protected void set_UpdateTick(ulong value)  [RVA 0x35C2E80]
// InControl.TwoAxisInputControl$$set_UpdateTick @ RVA 0x35C2E80

void InControl_TwoAxisInputControl__set_UpdateTick
               (InControl_TwoAxisInputControl_o *__this,uint64_t value,MethodInfo *method)

{
  (__this->fields)._UpdateTick_k__BackingField = value;
  return;
}


// ===== internal void .ctor()  [RVA 0x35C2E88]
// InControl.TwoAxisInputControl$$.ctor @ RVA 0x35C2E88

void InControl_TwoAxisInputControl___ctor
               (InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
  InControl_OneAxisInputControl_o *pIVar1;
  InControl_OneAxisInputControl_o **ppIVar2;
  
                    /* catch() { ... } // from try @ 036c2e60 with catch @ 036c2e8c */
                    /* try { // try from 036c2e9c to 037c2ea3 has its CatchHandler @ 036c2eb8 */
                    /* try { // try from 036c2ea4 to 037c2eaf has its CatchHandler @ 036c2d44 */
  if ((DAT_04568f4d & 1) == 0) {
                    /* try { // try from 036c2eb0 to 037c2eb7 has its CatchHandler @ 036c2eb8 */
    FUN_01bab630(&InControl_OneAxisInputControl_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c2e9c with catch @ 036c2eb8
                       catch(type#2 @ 00000000) { ... } // from try @ 036c2eb0 with catch @ 036c2eb8
                        */
    DAT_04568f4d = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pIVar1 = (InControl_OneAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_OneAxisInputControl_TypeInfo);
                    /* try { // try from 036c2ed0 to 037c2f9f has its CatchHandler @ 036c2ed0
                       catch() { ... } // from try @ 036c2ed0 with catch @ 036c2ed0
                       catch() { ... } // from try @ 036c300c with catch @ 036c2ed0
                       catch() { ... } // from try @ 036c3040 with catch @ 036c2ed0
                       catch() { ... } // from try @ 036c306c with catch @ 036c2ed0
                       catch() { ... } // from try @ 036c309c with catch @ 036c2ed0 */
  InControl_OneAxisInputControl___ctor(pIVar1,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields)._Left_k__BackingField;
  *ppIVar2 = pIVar1;
  thunk_FUN_01c20e04(ppIVar2,pIVar1);
  pIVar1 = (InControl_OneAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_OneAxisInputControl_TypeInfo);
  InControl_OneAxisInputControl___ctor(pIVar1,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields)._Right_k__BackingField;
  *ppIVar2 = pIVar1;
  thunk_FUN_01c20e04(ppIVar2,pIVar1);
  pIVar1 = (InControl_OneAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_OneAxisInputControl_TypeInfo);
  InControl_OneAxisInputControl___ctor(pIVar1,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields)._Up_k__BackingField;
  *ppIVar2 = pIVar1;
  thunk_FUN_01c20e04(ppIVar2,pIVar1);
  pIVar1 = (InControl_OneAxisInputControl_o *)
           thunk_FUN_01bda818(InControl_OneAxisInputControl_TypeInfo);
  InControl_OneAxisInputControl___ctor(pIVar1,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields)._Down_k__BackingField;
  *ppIVar2 = pIVar1;
  thunk_FUN_01c20e04(ppIVar2,pIVar1);
  return;
}


// ===== internal void Update(float x, float y, ulong updateTick)  [RVA 0x35C2F60]
// InControl.TwoAxisInputControl$$Update @ RVA 0x35C2F60

void InControl_TwoAxisInputControl__Update
               (InControl_TwoAxisInputControl_o *__this,float x,float y,uint64_t updateTick,
               MethodInfo *method)

{
  bool bVar1;
  InControl_OneAxisInputControl_o *pIVar2;
  float fVar3;
  float fVar4;
  float stateThreshold;
  
  if ((DAT_04568f4e & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 036c2fa0 to 037c2fa7 has its CatchHandler @ 036c3048 */
    FUN_01bab630(&InControl_TwoAxisInputControl_TypeInfo);
    DAT_04568f4e = 1;
  }
  pIVar2 = (__this->fields)._Left_k__BackingField;
  (__this->fields)._X_k__BackingField = x;
  (__this->fields)._Y_k__BackingField = y;
  (__this->fields).lastState = (__this->fields).thisState;
  if (pIVar2 != (InControl_OneAxisInputControl_o *)0x0) {
    fVar3 = -x;
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    if (0.0 < x) {
      fVar3 = 0.0;
    }
                    /* try { // try from 036c2ff0 to 037c300b has its CatchHandler @ 036c3044 */
    InControl_OneAxisInputControl__UpdateWithValue
              (pIVar2,fVar3,updateTick,
               InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold,
               (MethodInfo *)0x0);
    pIVar2 = (__this->fields)._Right_k__BackingField;
    if (pIVar2 != (InControl_OneAxisInputControl_o *)0x0) {
      fVar4 = (__this->fields)._X_k__BackingField;
                    /* try { // try from 036c300c to 037c302f has its CatchHandler @ 036c2ed0 */
      fVar3 = fVar4;
      if (1.0 < fVar4) {
        fVar3 = 1.0;
      }
      if (fVar4 < 0.0) {
        fVar3 = 0.0;
      }
      InControl_OneAxisInputControl__UpdateWithValue
                (pIVar2,fVar3,updateTick,
                 InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold,
                 (MethodInfo *)0x0);
                    /* try { // try from 036c3030 to 037c303f has its CatchHandler @ 036c3050 */
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 036c3040 to 037c3067 has its CatchHandler @ 036c2ed0 */
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2ff0 with catch @ 036c3044
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2fa0 with catch @ 036c3048
                        */
      pIVar2 = (__this->fields)._Up_k__BackingField;
      fVar3 = (__this->fields)._Y_k__BackingField;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3030 with catch @ 036c3050
                        */
      if (InControl_InputManager_TypeInfo->static_fields->InvertYAxis == false) {
        if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
        fVar4 = fVar3;
        if (1.0 < fVar3) {
          fVar4 = 1.0;
        }
                    /* try { // try from 036c30c4 to 037c31cf has its CatchHandler @ 036c30c4
                       catch() { ... } // from try @ 036c30c4 with catch @ 036c30c4
                       catch() { ... } // from try @ 036c324c with catch @ 036c30c4
                       catch() { ... } // from try @ 036c3288 with catch @ 036c30c4
                       catch() { ... } // from try @ 036c32e8 with catch @ 036c30c4
                       catch() { ... } // from try @ 036c3318 with catch @ 036c30c4 */
        if (fVar3 < 0.0) {
          fVar4 = 0.0;
        }
        InControl_OneAxisInputControl__UpdateWithValue
                  (pIVar2,fVar4,updateTick,
                   InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold,
                   (MethodInfo *)0x0);
        pIVar2 = (__this->fields)._Down_k__BackingField;
        if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
        fVar4 = (__this->fields)._Y_k__BackingField;
        fVar3 = -fVar4;
        if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
        stateThreshold = InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold;
        if (0.0 < fVar4) {
          fVar3 = 0.0;
        }
      }
      else {
        if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
        fVar4 = -fVar3;
                    /* try { // try from 036c3068 to 037c306b has its CatchHandler @ 036c308c */
        if (1.0 < fVar4) {
          fVar4 = 1.0;
        }
                    /* try { // try from 036c306c to 037c3093 has its CatchHandler @ 036c2ed0 */
        if (0.0 < fVar3) {
          fVar4 = 0.0;
        }
        InControl_OneAxisInputControl__UpdateWithValue
                  (pIVar2,fVar4,updateTick,
                   InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold,
                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036c3068 with catch @ 036c308c */
        pIVar2 = (__this->fields)._Down_k__BackingField;
        if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
                    /* try { // try from 036c3094 to 037c309b has its CatchHandler @ 036c30b0 */
        fVar4 = (__this->fields)._Y_k__BackingField;
                    /* try { // try from 036c309c to 037c30a7 has its CatchHandler @ 036c2ed0 */
        fVar3 = fVar4;
        if (1.0 < fVar4) {
          fVar3 = 1.0;
        }
                    /* try { // try from 036c30a8 to 037c30af has its CatchHandler @ 036c30b0 */
        if (fVar4 < 0.0) {
          fVar3 = 0.0;
        }
        stateThreshold = InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c3094 with catch @ 036c30b0
                       catch(type#2 @ 00000000) { ... } // from try @ 036c30a8 with catch @ 036c30b0
                        */
      }
      InControl_OneAxisInputControl__UpdateWithValue
                (pIVar2,fVar3,updateTick,stateThreshold,(MethodInfo *)0x0);
      pIVar2 = (__this->fields)._Up_k__BackingField;
      if (pIVar2 != (InControl_OneAxisInputControl_o *)0x0) {
        bVar1 = InControl_OneAxisInputControl__get_State(pIVar2,(MethodInfo *)0x0);
        if (bVar1) {
          bVar1 = true;
LAB_036c3190:
          (__this->fields).thisState = bVar1;
          if ((__this->fields).thisState != (__this->fields).lastState) {
            (__this->fields)._UpdateTick_k__BackingField = updateTick;
          }
          return;
        }
        pIVar2 = (__this->fields)._Down_k__BackingField;
        if (pIVar2 != (InControl_OneAxisInputControl_o *)0x0) {
          bVar1 = InControl_OneAxisInputControl__get_State(pIVar2,(MethodInfo *)0x0);
          if (bVar1) {
            bVar1 = true;
          }
          else {
            pIVar2 = (__this->fields)._Left_k__BackingField;
            if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
            bVar1 = InControl_OneAxisInputControl__get_State(pIVar2,(MethodInfo *)0x0);
            if (bVar1) {
              bVar1 = true;
            }
            else {
              pIVar2 = (__this->fields)._Right_k__BackingField;
              if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
              bVar1 = InControl_OneAxisInputControl__get_State(pIVar2,(MethodInfo *)0x0);
            }
          }
          if (__this != (InControl_TwoAxisInputControl_o *)0x0) goto LAB_036c3190;
        }
      }
    }
  }
LAB_036c31c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_State()  [RVA 0x35C31C4]
// InControl.TwoAxisInputControl$$get_State @ RVA 0x35C31C4

bool InControl_TwoAxisInputControl__get_State
               (InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
  return (__this->fields).thisState;
}


// ===== public bool get_HasChanged()  [RVA 0x35C31CC]
// InControl.TwoAxisInputControl$$get_HasChanged @ RVA 0x35C31CC

bool InControl_TwoAxisInputControl__get_HasChanged
               (InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
                    /* try { // try from 036c31d0 to 037c31d7 has its CatchHandler @ 036c32c4 */
  return (__this->fields).thisState != (__this->fields).lastState;
}


// ===== public Vector2 get_Vector()  [RVA 0x35C31E0]
// InControl.TwoAxisInputControl$$get_Vector @ RVA 0x35C31E0

UnityEngine_Vector2_o
InControl_TwoAxisInputControl__get_Vector
          (InControl_TwoAxisInputControl_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  UVar1.fields.x = (__this->fields)._X_k__BackingField;
  UVar1.fields.y = (__this->fields)._Y_k__BackingField;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// ===== public static bool op_Implicit(TwoAxisInputControl control)  [RVA 0x35C31E8]
// InControl.TwoAxisInputControl$$op_Implicit @ RVA 0x35C31E8

bool InControl_TwoAxisInputControl__op_Implicit
               (InControl_TwoAxisInputControl_o *control,MethodInfo *method)

{
  if (control != (InControl_TwoAxisInputControl_o *)0x0) {
    return (control->fields).thisState;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Vector2 op_Implicit(TwoAxisInputControl control)  [RVA 0x35C3200]
// InControl.TwoAxisInputControl$$op_Implicit @ RVA 0x35C3200

UnityEngine_Vector2_o
InControl_TwoAxisInputControl__op_Implicit
          (InControl_TwoAxisInputControl_o *control,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  if (control != (InControl_TwoAxisInputControl_o *)0x0) {
    UVar1.fields.x = (control->fields)._X_k__BackingField;
    UVar1.fields.y = (control->fields)._Y_k__BackingField;
    return (UnityEngine_Vector2_o)UVar1.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Vector3 op_Implicit(TwoAxisInputControl control)  [RVA 0x35C3218]
// InControl.TwoAxisInputControl$$op_Implicit @ RVA 0x35C3218

UnityEngine_Vector3_o
InControl_TwoAxisInputControl__op_Implicit
          (InControl_TwoAxisInputControl_o *control,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_o UVar3;
  
  if (control != (InControl_TwoAxisInputControl_o *)0x0) {
    uVar1 = (control->fields)._X_k__BackingField;
    uVar2 = (control->fields)._Y_k__BackingField;
    UVar3.fields.y = (float)uVar2;
    UVar3.fields.x = (float)uVar1;
    UVar3.fields.z = 0.0;
    return (UnityEngine_Vector3_o)UVar3.fields;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036c3230 to 037c324b has its CatchHandler @ 036c32bc */
  FUN_01bab8c8();
}

