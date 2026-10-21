// TypeDefIndex 1312
// Namespace: InControl
// public class UnityInputDevice : InputDevice
// Fields:
//   public const int MaxDevices = 10;
//   public const int MaxButtons = 20;
//   public const int MaxAnalogs = 20;
//   private int <JoystickId>k__BackingField; // 0x54
//   private UnityInputDeviceProfile <Profile>k__BackingField; // 0x58

// ===== internal int get_JoystickId()  [RVA 0x3158DB0]
// InControl.UnityInputDevice$$get_JoystickId @ RVA 0x3158DB0

int32_t InControl_UnityInputDevice__get_JoystickId
                  (InControl_UnityInputDevice_o *__this,MethodInfo *method)

{
  return *(int32_t *)&(__this->fields).super.field_0x44;
}


// ===== private void set_JoystickId(int value)  [RVA 0x3158DB8]
// InControl.UnityInputDevice$$set_JoystickId @ RVA 0x3158DB8

void InControl_UnityInputDevice__set_JoystickId
               (InControl_UnityInputDevice_o *__this,int32_t value,MethodInfo *method)

{
  *(int32_t *)&(__this->fields).super.field_0x44 = value;
  return;
}


// ===== public UnityInputDeviceProfile get_Profile()  [RVA 0x3158DC0]
// InControl.UnityInputDevice$$get_Profile @ RVA 0x3158DC0

InControl_UnityInputDeviceProfile_o *
InControl_UnityInputDevice__get_Profile(InControl_UnityInputDevice_o *__this,MethodInfo *method)

{
  return *(InControl_UnityInputDeviceProfile_o **)&(__this->fields)._JoystickId_k__BackingField;
}


// ===== protected void set_Profile(UnityInputDeviceProfile value)  [RVA 0x3158DC8]
// InControl.UnityInputDevice$$set_Profile @ RVA 0x3158DC8

void InControl_UnityInputDevice__set_Profile
               (InControl_UnityInputDevice_o *__this,InControl_UnityInputDeviceProfile_o *value,
               MethodInfo *method)

{
  *(InControl_UnityInputDeviceProfile_o **)&(__this->fields)._JoystickId_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(UnityInputDeviceProfile profile, int joystickId)  [RVA 0x3158DD0]
// InControl.UnityInputDevice$$.ctor @ RVA 0x3158DD0

void InControl_UnityInputDevice___ctor
               (InControl_UnityInputDevice_o *__this,InControl_UnityInputDeviceProfile_o *profile,
               int32_t joystickId,MethodInfo *method)

{
  System_String_o *name;
  
                    /* try { // try from 03258dd8 to 03358ddb has its CatchHandler @ 03258e78 */
                    /* try { // try from 03258ddc to 03358deb has its CatchHandler @ 03258e84 */
  if ((DAT_04566855 & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    DAT_04566855 = 1;
  }
  if (profile != (InControl_UnityInputDeviceProfile_o *)0x0) {
                    /* try { // try from 03258e10 to 03358e13 has its CatchHandler @ 03258e7c */
                    /* try { // try from 03258e14 to 03358e23 has its CatchHandler @ 03258e8c */
    name = (profile->fields)._Name_k__BackingField;
    if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    InControl_InputDevice___ctor((InControl_InputDevice_o *)__this,name,(MethodInfo *)0x0);
                    /* try { // try from 03258e38 to 03358e3f has its CatchHandler @ 03258fb4 */
                    /* try { // try from 03258e48 to 03358e4b has its CatchHandler @ 03258ea0 */
                    /* try { // try from 03258e50 to 03358e53 has its CatchHandler @ 03258e9c */
    InControl_UnityInputDevice__Initialize(__this,profile,joystickId,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(UnityInputDeviceProfile profile)  [RVA 0x3159050]
// InControl.UnityInputDevice$$.ctor @ RVA 0x3159050

void InControl_UnityInputDevice___ctor
               (InControl_UnityInputDevice_o *__this,InControl_UnityInputDeviceProfile_o *profile,
               MethodInfo *method)

{
  MethodInfo *in_x3;
  System_String_o *name;
  
  if ((DAT_04566856 & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    DAT_04566856 = 1;
  }
  if (profile != (InControl_UnityInputDeviceProfile_o *)0x0) {
    name = (profile->fields)._Name_k__BackingField;
    if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    InControl_InputDevice___ctor((InControl_InputDevice_o *)__this,name,(MethodInfo *)0x0);
    InControl_UnityInputDevice__Initialize(__this,profile,0,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Initialize(UnityInputDeviceProfile profile, int joystickId)  [RVA 0x3158E58]
// InControl.UnityInputDevice$$Initialize @ RVA 0x3158E58

void InControl_UnityInputDevice__Initialize
               (InControl_UnityInputDevice_o *__this,InControl_UnityInputDeviceProfile_o *profile,
               int32_t joystickId,MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  uint uVar3;
  InControl_UnityInputDeviceProfile_o *pIVar4;
  InControl_InputControlMapping_o *pIVar5;
  System_String_o *pSVar6;
  InControl_InputControl_o *pIVar7;
  InControl_InputControlMapping_array *pIVar8;
  long lVar9;
  System_String_o **ppSVar10;
  int32_t *piVar11;
  System_String_o *str0;
  uint uVar12;
  int32_t local_44;
  
                    /* try { // try from 03258e58 to 03358e5b has its CatchHandler @ 03258e94 */
                    /* try { // try from 03258e60 to 03358e63 has its CatchHandler @ 03258e90 */
                    /* try { // try from 03258e68 to 03358e6b has its CatchHandler @ 03258e88 */
                    /* try { // try from 03258e70 to 03358e73 has its CatchHandler @ 03258e80 */
                    /* try { // try from 03258e74 to 03358ec3 has its CatchHandler @ 03258bc4 */
                    /* catch() { ... } // from try @ 03258dd8 with catch @ 03258e78 */
                    /* catch() { ... } // from try @ 03258e10 with catch @ 03258e7c */
                    /* catch() { ... } // from try @ 03258e70 with catch @ 03258e80 */
                    /* catch() { ... } // from try @ 03258ddc with catch @ 03258e84 */
  local_44 = joystickId;
  if ((DAT_04566857 & 1) == 0) {
                    /* catch() { ... } // from try @ 03258e68 with catch @ 03258e88 */
                    /* catch() { ... } // from try @ 03258e14 with catch @ 03258e8c */
                    /* catch() { ... } // from try @ 03258e60 with catch @ 03258e90 */
    FUN_01bab630(&StringLiteral_334/*" [id: "*/);
                    /* catch() { ... } // from try @ 03258e58 with catch @ 03258e94 */
                    /* catch() { ... } // from try @ 03258d88 with catch @ 03258e98 */
                    /* catch() { ... } // from try @ 03258e50 with catch @ 03258e9c */
    FUN_01bab630(&StringLiteral_15775/*"]"*/);
                    /* catch() { ... } // from try @ 03258e48 with catch @ 03258ea0 */
                    /* catch() { ... } // from try @ 03258d9c with catch @ 03258ea4 */
    DAT_04566857 = 1;
  }
                    /* catch() { ... } // from try @ 03258d74 with catch @ 03258ea8 */
  piVar11 = &(__this->fields)._JoystickId_k__BackingField;
  *(InControl_UnityInputDeviceProfile_o **)piVar11 = profile;
  thunk_FUN_01c20e04(piVar11,profile);
  if (*(long *)piVar11 != 0) {
                    /* try { // try from 03258ec4 to 03358ec7 has its CatchHandler @ 03258fa0 */
    ppSVar10 = &(__this->fields).super._Meta_k__BackingField;
                    /* try { // try from 03258ec8 to 03358f7f has its CatchHandler @ 03258bc4 */
    *ppSVar10 = *(System_String_o **)(*(long *)piVar11 + 0x18);
    thunk_FUN_01c20e04(ppSVar10);
    pIVar4 = *(InControl_UnityInputDeviceProfile_o **)&(__this->fields)._JoystickId_k__BackingField;
    if (pIVar4 != (InControl_UnityInputDeviceProfile_o *)0x0) {
      uVar3 = InControl_UnityInputDeviceProfile__get_AnalogCount(pIVar4,(MethodInfo *)0x0);
      pIVar4 = *(InControl_UnityInputDeviceProfile_o **)piVar11;
      if (pIVar4 != (InControl_UnityInputDeviceProfile_o *)0x0) {
        if (0 < (int)uVar3) {
          uVar12 = 0;
          do {
            pIVar8 = (pIVar4->fields)._AnalogMappings_k__BackingField;
            if (pIVar8 == (InControl_InputControlMapping_array *)0x0) goto LAB_03259048;
            if ((uint)pIVar8->max_length <= uVar12) goto LAB_0325904c;
            pIVar5 = pIVar8->m_Items[(int)uVar12];
            if (pIVar5 == (InControl_InputControlMapping_o *)0x0) goto LAB_03259048;
            iVar1 = (pIVar5->fields).Target;
            pSVar6 = InControl_InputControlMapping__get_Handle(pIVar5,(MethodInfo *)0x0);
            pIVar7 = InControl_InputDevice__AddControl
                               ((InControl_InputDevice_o *)__this,iVar1,pSVar6,(MethodInfo *)0x0);
            pIVar4 = *(InControl_UnityInputDeviceProfile_o **)
                      &(__this->fields)._JoystickId_k__BackingField;
            if ((pIVar4 == (InControl_UnityInputDeviceProfile_o *)0x0) ||
               (pIVar7 == (InControl_InputControl_o *)0x0)) goto LAB_03259048;
            uVar12 = uVar12 + 1;
            (pIVar7->fields).UpperDeadZone = (pIVar4->fields).upperDeadZone;
            fVar2 = (pIVar4->fields).lowerDeadZone;
            (pIVar7->fields).Sensitivity = (pIVar4->fields).sensitivity;
            (pIVar7->fields).LowerDeadZone = fVar2;
          } while (uVar3 != uVar12);
        }
        uVar3 = InControl_UnityInputDeviceProfile__get_ButtonCount(pIVar4,(MethodInfo *)0x0);
        if (0 < (int)uVar3) {
                    /* try { // try from 03258f80 to 03358f93 has its CatchHandler @ 03259020 */
          uVar12 = 0;
          do {
            if ((*(long *)piVar11 == 0) || (lVar9 = *(long *)(*(long *)piVar11 + 0x28), lVar9 == 0))
            goto LAB_03259048;
                    /* try { // try from 03258f94 to 03358f97 has its CatchHandler @ 03258fb8 */
                    /* try { // try from 03258f98 to 03358f9f has its CatchHandler @ 03258fb0 */
            if (*(uint *)(lVar9 + 0x18) <= uVar12) {
LAB_0325904c:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
                    /* catch() { ... } // from try @ 03258ec4 with catch @ 03258fa0
                       try { // try from 03258fa0 to 03358fd7 has its CatchHandler @ 03258bc4 */
            pIVar5 = *(InControl_InputControlMapping_o **)(lVar9 + (long)(int)uVar12 * 8 + 0x20);
            if (pIVar5 == (InControl_InputControlMapping_o *)0x0) goto LAB_03259048;
                    /* catch() { ... } // from try @ 03258d48 with catch @ 03258fac */
            iVar1 = (pIVar5->fields).Target;
                    /* catch() { ... } // from try @ 03258f98 with catch @ 03258fb0 */
                    /* catch() { ... } // from try @ 03258e38 with catch @ 03258fb4 */
            pSVar6 = InControl_InputControlMapping__get_Handle(pIVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03258f94 with catch @ 03258fb8 */
                    /* catch() { ... } // from try @ 03258d10 with catch @ 03258fbc */
            InControl_InputDevice__AddControl
                      ((InControl_InputDevice_o *)__this,iVar1,pSVar6,(MethodInfo *)0x0);
            uVar12 = uVar12 + 1;
          } while (uVar3 != uVar12);
        }
                    /* try { // try from 03258fd8 to 03358fdb has its CatchHandler @ 03258ffc */
        *(int32_t *)&(__this->fields).super.field_0x44 = joystickId;
                    /* try { // try from 03258fdc to 03359003 has its CatchHandler @ 03258bc4 */
        if (joystickId != 0) {
          str0 = (__this->fields).super._Meta_k__BackingField;
                    /* catch() { ... } // from try @ 03258fd8 with catch @ 03258ffc */
          (__this->fields).super.SortOrder = joystickId + -1;
                    /* try { // try from 03259004 to 0335900b has its CatchHandler @ 03259020 */
          pSVar6 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
                    /* try { // try from 0325900c to 03359017 has its CatchHandler @ 03258bc4 */
                    /* try { // try from 03259018 to 0335901f has its CatchHandler @ 03259020 */
          pSVar6 = System_String__Concat
                             (str0,StringLiteral_334/*" [id: "*/,pSVar6,StringLiteral_15775/*"]"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03258f80 with catch @ 03259020
                       catch() { ... } // from try @ 03259004 with catch @ 03259020
                       catch() { ... } // from try @ 03259018 with catch @ 03259020 */
          (__this->fields).super._Meta_k__BackingField = pSVar6;
          thunk_FUN_01c20e04(ppSVar10,pSVar6);
        }
        return;
      }
    }
  }
LAB_03259048:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Update(ulong updateTick, float deltaTime)  [RVA 0x31590CC]
// InControl.UnityInputDevice$$Update @ RVA 0x31590CC

void InControl_UnityInputDevice__Update
               (InControl_UnityInputDevice_o *__this,uint64_t updateTick,float deltaTime,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  InControl_UnityInputDeviceProfile_o *pIVar5;
  InControl_InputControl_o *__this_00;
  Il2CppMethodPointer *ppIVar6;
  InControl_UnityInputDevice_o *extraout_x0;
  InControl_UnityInputDevice_o *extraout_x0_00;
  InControl_UnityInputDevice_o *__this_01;
  undefined8 *puVar7;
  MethodInfo *method_00;
  InControl_InputControlMapping_array *pIVar8;
  InControl_InputControlSource_c *pIVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  InControl_InputControlMapping_o *__this_02;
  long *plVar15;
  InControl_InputControlSource_o *pIVar16;
  uint uVar17;
  float fVar18;
  undefined4 in_register_00005004;
  System_Nullable_float__Fields local_68;
  
  if ((DAT_04566858 & 1) == 0) {
    FUN_01bab630(CONCAT44(in_register_00005004,deltaTime),&InControl_InputControlSource_TypeInfo);
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    DAT_04566858 = 1;
  }
  pIVar5 = *(InControl_UnityInputDeviceProfile_o **)&(__this->fields)._JoystickId_k__BackingField;
  if (pIVar5 == (InControl_UnityInputDeviceProfile_o *)0x0) {
    return;
  }
  uVar4 = InControl_UnityInputDeviceProfile__get_AnalogCount(pIVar5,(MethodInfo *)0x0);
  pIVar5 = *(InControl_UnityInputDeviceProfile_o **)&(__this->fields)._JoystickId_k__BackingField;
  if (pIVar5 != (InControl_UnityInputDeviceProfile_o *)0x0) {
    uVar17 = 0;
    do {
      if (uVar17 == (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU))) {
        uVar4 = InControl_UnityInputDeviceProfile__get_ButtonCount(pIVar5,(MethodInfo *)0x0);
        if ((int)uVar4 < 1) {
          return;
        }
        uVar17 = 0;
        goto LAB_032592e4;
      }
      pIVar8 = (pIVar5->fields)._AnalogMappings_k__BackingField;
      if (pIVar8 == (InControl_InputControlMapping_array *)0x0) break;
      if ((uint)pIVar8->max_length <= uVar17) goto LAB_032593bc;
      __this_02 = pIVar8->m_Items[(int)uVar17];
      if (__this_02 == (InControl_InputControlMapping_o *)0x0) break;
      __this_00 = InControl_InputDevice__GetControl
                            ((InControl_InputDevice_o *)__this,(__this_02->fields).Target,
                             (MethodInfo *)0x0);
      pIVar16 = (__this_02->fields).Source;
      if (pIVar16 == (InControl_InputControlSource_o *)0x0) break;
      pIVar9 = pIVar16->klass;
      uVar1._0_1_ = (pIVar9->_2).rank;
      uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)InControl_InputControlSource_TypeInfo) {
            ppIVar6 = &pIVar9->vtable[*piVar13].methodPtr;
            goto LAB_032591f4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      ppIVar6 = (Il2CppMethodPointer *)FUN_01b81914(pIVar16,InControl_InputControlSource_TypeInfo,0)
      ;
LAB_032591f4:
      method_00 = (MethodInfo *)ppIVar6[1];
      fVar18 = (float)(**ppIVar6)(pIVar16,__this);
      if ((__this_02->fields).IgnoreInitialZeroValue == false) {
        fVar18 = InControl_InputControlMapping__MapValue(__this_02,fVar18,(MethodInfo *)0x0);
        __this_01 = extraout_x0_00;
        if (__this_00 == (InControl_InputControl_o *)0x0) break;
LAB_0325926c:
        if ((__this_02->fields).Raw == false) {
          fVar18 = InControl_UnityInputDevice__Combine
                             (__this_01,
                              (System_Nullable_float__o)(__this_00->fields).PreValue.fields,fVar18,
                              method_00);
          local_68.hasValue = false;
          local_68._1_3_ = 0;
          local_68.value = 0.0;
          System_Nullable<float>___ctor
                    ((System_Nullable_float__o)&local_68,fVar18,
                     Method_System_Nullable<float>__ctor__);
          (__this_00->fields).PreValue.fields = local_68;
        }
        else {
          fVar18 = InControl_UnityInputDevice__Combine
                             (__this_01,
                              (System_Nullable_float__o)(__this_00->fields).RawValue.fields,fVar18,
                              method_00);
          local_68.hasValue = false;
          local_68._1_3_ = 0;
          local_68.value = 0.0;
          System_Nullable<float>___ctor
                    ((System_Nullable_float__o)&local_68,fVar18,
                     Method_System_Nullable<float>__ctor__);
          (__this_00->fields).RawValue.fields = local_68;
        }
      }
      else {
        if (__this_00 == (InControl_InputControl_o *)0x0) break;
        bVar2 = InControl_InputControl__get_IsOnZeroTick(__this_00,(MethodInfo *)0x0);
        if ((!bVar2) || (UnityEngine_Mathf_TypeInfo->static_fields->Epsilon <= ABS(fVar18))) {
          fVar18 = InControl_InputControlMapping__MapValue(__this_02,fVar18,(MethodInfo *)0x0);
          __this_01 = extraout_x0;
          goto LAB_0325926c;
        }
        (__this_00->fields).RawValue.fields = (System_Nullable_float__Fields)0x0;
        (__this_00->fields).PreValue.fields = (System_Nullable_float__Fields)0x0;
      }
      pIVar5 = *(InControl_UnityInputDeviceProfile_o **)
                &(__this->fields)._JoystickId_k__BackingField;
      uVar17 = uVar17 + 1;
    } while (pIVar5 != (InControl_UnityInputDeviceProfile_o *)0x0);
  }
LAB_032592c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_032592e4:
  lVar10 = *(long *)&(__this->fields)._JoystickId_k__BackingField;
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x28), lVar10 == 0)) goto LAB_032592c4;
  if (*(uint *)(lVar10 + 0x18) <= uVar17) {
LAB_032593bc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  lVar10 = *(long *)(lVar10 + (long)(int)uVar17 * 8 + 0x20);
  if ((lVar10 == 0) || (plVar15 = *(long **)(lVar10 + 0x10), plVar15 == (long *)0x0))
  goto LAB_032592c4;
  lVar11 = *plVar15;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(InControl_InputControlSource_c **)(piVar14 + -2) ==
          InControl_InputControlSource_TypeInfo) {
        puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_03259364;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_01b81914(plVar15,InControl_InputControlSource_TypeInfo,1);
LAB_03259364:
  bVar3 = (*(code *)*puVar7)(plVar15,__this,puVar7[1]);
  InControl_InputDevice__UpdateWithState
            ((InControl_InputDevice_o *)__this,*(int32_t *)(lVar10 + 0x18),(bool)(bVar3 & 1),
             updateTick,(MethodInfo *)0x0);
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar4) {
    return;
  }
  goto LAB_032592e4;
}


// ===== private float Combine(Nullable<float> value1, float value2)  [RVA 0x31593C0]
// InControl.UnityInputDevice$$Combine @ RVA 0x31593C0

float InControl_UnityInputDevice__Combine
                (InControl_UnityInputDevice_o *__this,System_Nullable_float__o value1,float value2,
                MethodInfo *method)

{
  float fVar1;
  System_Nullable_float__Fields local_28;
  
  local_28 = value1.fields;
  if ((DAT_04566859 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    DAT_04566859 = 1;
  }
  if ((((ulong)value1.fields & 0xff) != 0) &&
     (fVar1 = System_Nullable<float>__get_Value
                        ((System_Nullable_float__o)&local_28,
                         Method_System_Nullable<float>_get_Value__), ABS(value2) < ABS(fVar1))) {
    value2 = System_Nullable<float>__get_Value
                       ((System_Nullable_float__o)&local_28,
                        Method_System_Nullable<float>_get_Value__);
  }
  return value2;
}


// ===== public bool IsConfiguredWith(UnityInputDeviceProfile deviceProfile, int joystickId)  [RVA 0x315945C]
// InControl.UnityInputDevice$$IsConfiguredWith @ RVA 0x315945C

bool InControl_UnityInputDevice__IsConfiguredWith
               (InControl_UnityInputDevice_o *__this,
               InControl_UnityInputDeviceProfile_o *deviceProfile,int32_t joystickId,
               MethodInfo *method)

{
  if (*(InControl_UnityInputDeviceProfile_o **)&(__this->fields)._JoystickId_k__BackingField !=
      deviceProfile) {
    return false;
  }
  return *(int *)&(__this->fields).super.field_0x44 == joystickId;
}


// ===== public override bool get_IsSupportedOnThisPlatform()  [RVA 0x3159480]
// InControl.UnityInputDevice$$get_IsSupportedOnThisPlatform @ RVA 0x3159480

bool InControl_UnityInputDevice__get_IsSupportedOnThisPlatform
               (InControl_UnityInputDevice_o *__this,MethodInfo *method)

{
  bool bVar1;
  InControl_UnityInputDeviceProfile_o *__this_00;
  
  __this_00 = *(InControl_UnityInputDeviceProfile_o **)&(__this->fields)._JoystickId_k__BackingField
  ;
  if (__this_00 != (InControl_UnityInputDeviceProfile_o *)0x0) {
    bVar1 = InControl_UnityInputDeviceProfile__get_IsSupportedOnThisPlatform
                      (__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool get_IsKnown()  [RVA 0x315949C]
// InControl.UnityInputDevice$$get_IsKnown @ RVA 0x315949C

bool InControl_UnityInputDevice__get_IsKnown
               (InControl_UnityInputDevice_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)&(__this->fields)._JoystickId_k__BackingField;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032594b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

