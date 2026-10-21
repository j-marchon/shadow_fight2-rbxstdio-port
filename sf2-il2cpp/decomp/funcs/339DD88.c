// AAENCHDNFKC$$GGPFDMBNLOD @ RVA 0x339DD88

float AAENCHDNFKC__GGPFDMBNLOD
                (InControl_InputDevice_o *GIDJIIFPHJK,int32_t IHCDJFOBOEI,MethodInfo *method)

{
  InControl_InputControl_o *__this;
  InControl_TwoAxisInputControl_o *pIVar1;
  float fVar2;
  
  switch(IHCDJFOBOEI) {
  case 0:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349de64;
    __this = InControl_InputDevice__get_LeftStickX(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 1:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349de64;
    __this = InControl_InputDevice__get_LeftStickY(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 2:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349de64;
    __this = InControl_InputDevice__get_RightStickX(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 3:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349de64;
    __this = InControl_InputDevice__get_RightStickY(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 4:
    if ((GIDJIIFPHJK != (InControl_InputDevice_o *)0x0) &&
       (pIVar1 = (GIDJIIFPHJK->fields)._DPad_k__BackingField,
       pIVar1 != (InControl_TwoAxisInputControl_o *)0x0)) {
      return (pIVar1->fields)._X_k__BackingField;
    }
    goto LAB_0349de64;
  case 5:
    if ((GIDJIIFPHJK != (InControl_InputDevice_o *)0x0) &&
       (pIVar1 = (GIDJIIFPHJK->fields)._DPad_k__BackingField,
       pIVar1 != (InControl_TwoAxisInputControl_o *)0x0)) {
      return (pIVar1->fields)._Y_k__BackingField;
    }
    goto LAB_0349de64;
  case 6:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349de64;
    __this = InControl_InputDevice__get_RightTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 7:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349de64;
    __this = InControl_InputDevice__get_LeftTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  default:
    return 0.0;
  }
  if (__this != (InControl_InputControl_o *)0x0) {
    fVar2 = InControl_InputControl__get_Value(__this,(MethodInfo *)0x0);
    return fVar2;
  }
LAB_0349de64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

