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

