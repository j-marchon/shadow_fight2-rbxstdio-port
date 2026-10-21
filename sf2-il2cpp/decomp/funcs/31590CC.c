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

