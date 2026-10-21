// AAENCHDNFKC$$AJDGKKOPLIM @ RVA 0x339E7E4

/* WARNING: Type propagation algorithm not settling */

bool AAENCHDNFKC__AJDGKKOPLIM
               (InControl_InputDevice_o *GIDJIIFPHJK,int32_t IKKKILCDMMB,MethodInfo *method)

{
  bool bVar1;
  InControl_OneAxisInputControl_o *__this;
  InControl_InputControl_o *pIVar2;
  int32_t inputControlType;
  InControl_TwoAxisInputControl_o *pIVar3;
  
  switch(IKKKILCDMMB) {
  case 0:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar2 = InControl_InputDevice__get_Action1(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 1:
    if ((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
       (pIVar2 = InControl_InputDevice__get_Action2(GIDJIIFPHJK,(MethodInfo *)0x0),
       pIVar2 == (InControl_InputControl_o *)0x0)) goto LAB_0349eaac;
    goto LAB_0349eaa0;
  case 2:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar2 = InControl_InputDevice__get_Action3(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 3:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar2 = InControl_InputDevice__get_Action4(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 4:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349e930;
  case 5:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349e948;
  case 6:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349e960;
  case 7:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349e978;
  case 8:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar2 = InControl_InputDevice__get_LeftStickButton(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 9:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349e930;
  case 10:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349e948;
  case 0xb:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349e960;
  case 0xc:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349e978;
  case 0xd:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar2 = InControl_InputDevice__get_RightStickButton(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0xe:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349e930:
    if (pIVar3 != (InControl_TwoAxisInputControl_o *)0x0) {
      __this = *(InControl_OneAxisInputControl_o **)((long)pIVar3 + 0x28);
joined_r0x0349e950:
      if (__this != (InControl_OneAxisInputControl_o *)0x0) {
LAB_0349e984:
        bVar1 = InControl_OneAxisInputControl__get_IsPressed(__this,(MethodInfo *)0x0);
        return bVar1;
      }
    }
    goto LAB_0349eaac;
  case 0xf:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349e948:
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349eaac;
    __this = (pIVar3->fields)._Down_k__BackingField;
    goto joined_r0x0349e950;
  case 0x10:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349e960:
    if (pIVar3 != (InControl_TwoAxisInputControl_o *)0x0) {
      __this = (pIVar3->fields)._Left_k__BackingField;
joined_r0x0349e980:
      if (__this == (InControl_OneAxisInputControl_o *)0x0) goto LAB_0349eaac;
      goto LAB_0349e984;
    }
    goto LAB_0349eaac;
  case 0x11:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349e978:
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349eaac;
    __this = (pIVar3->fields)._Right_k__BackingField;
    goto joined_r0x0349e980;
  case 0x12:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar2 = InControl_InputDevice__get_LeftBumper(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x13:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar2 = InControl_InputDevice__get_RightBumper(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x14:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar2 = InControl_InputDevice__get_LeftTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x15:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349eaac;
    pIVar2 = InControl_InputDevice__get_RightTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x16:
    if ((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
       (pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x14,(MethodInfo *)0x0),
       pIVar2 == (InControl_InputControl_o *)0x0)) goto LAB_0349eaac;
    bVar1 = InControl_InputControl__get_IsPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    inputControlType = 0x1b;
    goto LAB_0349ea90;
  case 0x17:
    if ((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
       (pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x13,(MethodInfo *)0x0),
       pIVar2 == (InControl_InputControl_o *)0x0)) goto LAB_0349eaac;
    bVar1 = InControl_InputControl__get_IsPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x15,(MethodInfo *)0x0);
    if (pIVar2 == (InControl_InputControl_o *)0x0) goto LAB_0349eaac;
    bVar1 = InControl_InputControl__get_IsPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x19,(MethodInfo *)0x0);
    if (pIVar2 == (InControl_InputControl_o *)0x0) goto LAB_0349eaac;
    bVar1 = InControl_InputControl__get_IsPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    inputControlType = 0x1a;
LAB_0349ea90:
    pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,inputControlType,(MethodInfo *)0x0);
    break;
  default:
    return false;
  }
  if (pIVar2 != (InControl_InputControl_o *)0x0) {
LAB_0349eaa0:
    bVar1 = InControl_InputControl__get_IsPressed(pIVar2,(MethodInfo *)0x0);
    return bVar1;
  }
LAB_0349eaac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

