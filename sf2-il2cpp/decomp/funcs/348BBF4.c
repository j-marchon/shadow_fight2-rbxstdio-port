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

