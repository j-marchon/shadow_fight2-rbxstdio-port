// AAENCHDNFKC$$JAHDGCDLKMD @ RVA 0x339E280

bool AAENCHDNFKC__JAHDGCDLKMD
               (InControl_InputDevice_o *GIDJIIFPHJK,int32_t IHCDJFOBOEI,MethodInfo *method)

{
  bool bVar1;
  InControl_OneAxisInputControl_o *pIVar2;
  InControl_InputControl_o *__this;
  InControl_TwoAxisInputControl_o *pIVar3;
  
  switch(IHCDJFOBOEI) {
  case 0:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e3c8;
    __this = InControl_InputDevice__get_LeftStickX(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 1:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e3c8;
    __this = InControl_InputDevice__get_LeftStickY(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 2:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e3c8;
    __this = InControl_InputDevice__get_RightStickX(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 3:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e3c8;
    __this = InControl_InputDevice__get_RightStickY(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 4:
    if (((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
        (pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField,
        pIVar3 == (InControl_TwoAxisInputControl_o *)0x0)) ||
       (pIVar2 = (pIVar3->fields)._Left_k__BackingField,
       pIVar2 == (InControl_OneAxisInputControl_o *)0x0)) goto LAB_0349e3c8;
    bVar1 = InControl_OneAxisInputControl__get_WasReleased(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349e3c8;
    pIVar2 = (pIVar3->fields)._Right_k__BackingField;
    goto joined_r0x0349e3b8;
  case 5:
    if (((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
        (pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField,
        pIVar3 == (InControl_TwoAxisInputControl_o *)0x0)) ||
       (pIVar2 = (pIVar3->fields)._Up_k__BackingField,
       pIVar2 == (InControl_OneAxisInputControl_o *)0x0)) goto LAB_0349e3c8;
    bVar1 = InControl_OneAxisInputControl__get_WasReleased(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349e3c8;
    pIVar2 = (pIVar3->fields)._Down_k__BackingField;
joined_r0x0349e3b8:
    if (pIVar2 != (InControl_OneAxisInputControl_o *)0x0) {
      bVar1 = InControl_OneAxisInputControl__get_WasReleased(pIVar2,(MethodInfo *)0x0);
      return bVar1;
    }
    goto LAB_0349e3c8;
  case 6:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e3c8;
    __this = InControl_InputDevice__get_RightTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 7:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e3c8;
    __this = InControl_InputDevice__get_LeftTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  default:
    return false;
  }
  if (__this != (InControl_InputControl_o *)0x0) {
    bVar1 = InControl_InputControl__get_WasReleased(__this,(MethodInfo *)0x0);
    return bVar1;
  }
LAB_0349e3c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

