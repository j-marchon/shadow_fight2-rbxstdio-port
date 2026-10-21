// TypeDefIndex 2565
// Namespace: 
// [Extension]
// public static class AAENCHDNFKC
// Fields:

// ===== public static float GGPFDMBNLOD(InputDevice GIDJIIFPHJK, HKHJKMFOPFJ IHCDJFOBOEI)  [RVA 0x339DD88]
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


// ===== public static bool OCEACOIOMLI(InputDevice GIDJIIFPHJK, LGMNENGMMOF IKKKILCDMMB)  [RVA 0x339DE68]
// AAENCHDNFKC$$OCEACOIOMLI @ RVA 0x339DE68

/* WARNING: Type propagation algorithm not settling */

bool AAENCHDNFKC__OCEACOIOMLI
               (InControl_InputDevice_o *GIDJIIFPHJK,int32_t IKKKILCDMMB,MethodInfo *method)

{
  bool bVar1;
  InControl_OneAxisInputControl_o *__this;
  InControl_InputControl_o *pIVar2;
  int32_t inputControlType;
  InControl_TwoAxisInputControl_o *pIVar3;
  
  switch(IKKKILCDMMB) {
  case 0:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar2 = InControl_InputDevice__get_Action1(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 1:
    if ((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
       (pIVar2 = InControl_InputDevice__get_Action2(GIDJIIFPHJK,(MethodInfo *)0x0),
       pIVar2 == (InControl_InputControl_o *)0x0)) goto LAB_0349e130;
    goto LAB_0349e124;
  case 2:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar2 = InControl_InputDevice__get_Action3(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 3:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar2 = InControl_InputDevice__get_Action4(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 4:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349dfb4;
  case 5:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349dfcc;
  case 6:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349dfe4;
  case 7:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349dffc;
  case 8:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar2 = InControl_InputDevice__get_LeftStickButton(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 9:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349dfb4;
  case 10:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349dfcc;
  case 0xb:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349dfe4;
  case 0xc:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349dffc;
  case 0xd:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar2 = InControl_InputDevice__get_RightStickButton(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0xe:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349dfb4:
    if (pIVar3 != (InControl_TwoAxisInputControl_o *)0x0) {
      __this = *(InControl_OneAxisInputControl_o **)((long)pIVar3 + 0x28);
joined_r0x0349dfd4:
      if (__this != (InControl_OneAxisInputControl_o *)0x0) {
LAB_0349e008:
        bVar1 = InControl_OneAxisInputControl__get_WasPressed(__this,(MethodInfo *)0x0);
        return bVar1;
      }
    }
    goto LAB_0349e130;
  case 0xf:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349dfcc:
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349e130;
    __this = (pIVar3->fields)._Down_k__BackingField;
    goto joined_r0x0349dfd4;
  case 0x10:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349dfe4:
    if (pIVar3 != (InControl_TwoAxisInputControl_o *)0x0) {
      __this = (pIVar3->fields)._Left_k__BackingField;
joined_r0x0349e004:
      if (__this == (InControl_OneAxisInputControl_o *)0x0) goto LAB_0349e130;
      goto LAB_0349e008;
    }
    goto LAB_0349e130;
  case 0x11:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349dffc:
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349e130;
    __this = (pIVar3->fields)._Right_k__BackingField;
    goto joined_r0x0349e004;
  case 0x12:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar2 = InControl_InputDevice__get_LeftBumper(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x13:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar2 = InControl_InputDevice__get_RightBumper(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x14:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar2 = InControl_InputDevice__get_LeftTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x15:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e130;
    pIVar2 = InControl_InputDevice__get_RightTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x16:
    if ((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
       (pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x14,(MethodInfo *)0x0),
       pIVar2 == (InControl_InputControl_o *)0x0)) goto LAB_0349e130;
    bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    inputControlType = 0x1b;
    goto LAB_0349e114;
  case 0x17:
    if ((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
       (pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x13,(MethodInfo *)0x0),
       pIVar2 == (InControl_InputControl_o *)0x0)) goto LAB_0349e130;
    bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x15,(MethodInfo *)0x0);
    if (pIVar2 == (InControl_InputControl_o *)0x0) goto LAB_0349e130;
    bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x19,(MethodInfo *)0x0);
    if (pIVar2 == (InControl_InputControl_o *)0x0) goto LAB_0349e130;
    bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    inputControlType = 0x1a;
LAB_0349e114:
    pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,inputControlType,(MethodInfo *)0x0);
    break;
  default:
    return false;
  }
  if (pIVar2 != (InControl_InputControl_o *)0x0) {
LAB_0349e124:
    bVar1 = InControl_InputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
    return bVar1;
  }
LAB_0349e130:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool LENJKMAHDKP(InputDevice GIDJIIFPHJK, HKHJKMFOPFJ IHCDJFOBOEI)  [RVA 0x339E134]
// AAENCHDNFKC$$LENJKMAHDKP @ RVA 0x339E134

bool AAENCHDNFKC__LENJKMAHDKP
               (InControl_InputDevice_o *GIDJIIFPHJK,int32_t IHCDJFOBOEI,MethodInfo *method)

{
  bool bVar1;
  InControl_OneAxisInputControl_o *pIVar2;
  InControl_InputControl_o *__this;
  InControl_TwoAxisInputControl_o *pIVar3;
  
  switch(IHCDJFOBOEI) {
  case 0:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e27c;
    __this = InControl_InputDevice__get_LeftStickX(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 1:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e27c;
    __this = InControl_InputDevice__get_LeftStickY(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 2:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e27c;
    __this = InControl_InputDevice__get_RightStickX(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 3:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e27c;
    __this = InControl_InputDevice__get_RightStickY(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 4:
    if (((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
        (pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField,
        pIVar3 == (InControl_TwoAxisInputControl_o *)0x0)) ||
       (pIVar2 = (pIVar3->fields)._Left_k__BackingField,
       pIVar2 == (InControl_OneAxisInputControl_o *)0x0)) goto LAB_0349e27c;
    bVar1 = InControl_OneAxisInputControl__get_IsPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349e27c;
    pIVar2 = (pIVar3->fields)._Right_k__BackingField;
    goto joined_r0x0349e26c;
  case 5:
    if (((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
        (pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField,
        pIVar3 == (InControl_TwoAxisInputControl_o *)0x0)) ||
       (pIVar2 = (pIVar3->fields)._Up_k__BackingField,
       pIVar2 == (InControl_OneAxisInputControl_o *)0x0)) goto LAB_0349e27c;
    bVar1 = InControl_OneAxisInputControl__get_IsPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349e27c;
    pIVar2 = (pIVar3->fields)._Down_k__BackingField;
joined_r0x0349e26c:
    if (pIVar2 != (InControl_OneAxisInputControl_o *)0x0) {
      bVar1 = InControl_OneAxisInputControl__get_IsPressed(pIVar2,(MethodInfo *)0x0);
      return bVar1;
    }
    goto LAB_0349e27c;
  case 6:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e27c;
    __this = InControl_InputDevice__get_RightTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 7:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e27c;
    __this = InControl_InputDevice__get_LeftTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  default:
    return false;
  }
  if (__this != (InControl_InputControl_o *)0x0) {
    bVar1 = InControl_InputControl__get_IsPressed(__this,(MethodInfo *)0x0);
    return bVar1;
  }
LAB_0349e27c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool JAHDGCDLKMD(InputDevice GIDJIIFPHJK, HKHJKMFOPFJ IHCDJFOBOEI)  [RVA 0x339E280]
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


// ===== public static bool GCILEELAMGM(InputDevice GIDJIIFPHJK, LGMNENGMMOF IKKKILCDMMB)  [RVA 0x339E3CC]
// AAENCHDNFKC$$GCILEELAMGM @ RVA 0x339E3CC

/* WARNING: Type propagation algorithm not settling */

bool AAENCHDNFKC__GCILEELAMGM
               (InControl_InputDevice_o *GIDJIIFPHJK,int32_t IKKKILCDMMB,MethodInfo *method)

{
  bool bVar1;
  InControl_OneAxisInputControl_o *__this;
  InControl_InputControl_o *pIVar2;
  int32_t inputControlType;
  InControl_TwoAxisInputControl_o *pIVar3;
  
  switch(IKKKILCDMMB) {
  case 0:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar2 = InControl_InputDevice__get_Action1(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 1:
    if ((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
       (pIVar2 = InControl_InputDevice__get_Action2(GIDJIIFPHJK,(MethodInfo *)0x0),
       pIVar2 == (InControl_InputControl_o *)0x0)) goto LAB_0349e694;
    goto LAB_0349e688;
  case 2:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar2 = InControl_InputDevice__get_Action3(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 3:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar2 = InControl_InputDevice__get_Action4(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 4:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349e518;
  case 5:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349e530;
  case 6:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349e548;
  case 7:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    goto joined_r0x0349e560;
  case 8:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar2 = InControl_InputDevice__get_LeftStickButton(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 9:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349e518;
  case 10:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349e530;
  case 0xb:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349e548;
  case 0xc:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._LeftStick_k__BackingField;
    goto joined_r0x0349e560;
  case 0xd:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar2 = InControl_InputDevice__get_RightStickButton(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0xe:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349e518:
    if (pIVar3 != (InControl_TwoAxisInputControl_o *)0x0) {
      __this = *(InControl_OneAxisInputControl_o **)((long)pIVar3 + 0x28);
joined_r0x0349e538:
      if (__this != (InControl_OneAxisInputControl_o *)0x0) {
LAB_0349e56c:
        bVar1 = InControl_OneAxisInputControl__get_WasReleased(__this,(MethodInfo *)0x0);
        return bVar1;
      }
    }
    goto LAB_0349e694;
  case 0xf:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349e530:
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349e694;
    __this = (pIVar3->fields)._Down_k__BackingField;
    goto joined_r0x0349e538;
  case 0x10:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349e548:
    if (pIVar3 != (InControl_TwoAxisInputControl_o *)0x0) {
      __this = (pIVar3->fields)._Left_k__BackingField;
joined_r0x0349e568:
      if (__this == (InControl_OneAxisInputControl_o *)0x0) goto LAB_0349e694;
      goto LAB_0349e56c;
    }
    goto LAB_0349e694;
  case 0x11:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar3 = (GIDJIIFPHJK->fields)._RightStick_k__BackingField;
joined_r0x0349e560:
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349e694;
    __this = (pIVar3->fields)._Right_k__BackingField;
    goto joined_r0x0349e568;
  case 0x12:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar2 = InControl_InputDevice__get_LeftBumper(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x13:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar2 = InControl_InputDevice__get_RightBumper(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x14:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar2 = InControl_InputDevice__get_LeftTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x15:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e694;
    pIVar2 = InControl_InputDevice__get_RightTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 0x16:
    if ((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
       (pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x14,(MethodInfo *)0x0),
       pIVar2 == (InControl_InputControl_o *)0x0)) goto LAB_0349e694;
    bVar1 = InControl_InputControl__get_WasReleased(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    inputControlType = 0x1b;
    goto LAB_0349e678;
  case 0x17:
    if ((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
       (pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x13,(MethodInfo *)0x0),
       pIVar2 == (InControl_InputControl_o *)0x0)) goto LAB_0349e694;
    bVar1 = InControl_InputControl__get_WasReleased(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x15,(MethodInfo *)0x0);
    if (pIVar2 == (InControl_InputControl_o *)0x0) goto LAB_0349e694;
    bVar1 = InControl_InputControl__get_WasReleased(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,0x19,(MethodInfo *)0x0);
    if (pIVar2 == (InControl_InputControl_o *)0x0) goto LAB_0349e694;
    bVar1 = InControl_InputControl__get_WasReleased(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    inputControlType = 0x1a;
LAB_0349e678:
    pIVar2 = InControl_InputDevice__GetControl(GIDJIIFPHJK,inputControlType,(MethodInfo *)0x0);
    break;
  default:
    return false;
  }
  if (pIVar2 != (InControl_InputControl_o *)0x0) {
LAB_0349e688:
    bVar1 = InControl_InputControl__get_WasReleased(pIVar2,(MethodInfo *)0x0);
    return bVar1;
  }
LAB_0349e694:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool BKGGPNFFCHN(InputDevice GIDJIIFPHJK, HKHJKMFOPFJ IHCDJFOBOEI)  [RVA 0x339E698]
// AAENCHDNFKC$$BKGGPNFFCHN @ RVA 0x339E698

bool AAENCHDNFKC__BKGGPNFFCHN
               (InControl_InputDevice_o *GIDJIIFPHJK,int32_t IHCDJFOBOEI,MethodInfo *method)

{
  bool bVar1;
  InControl_OneAxisInputControl_o *pIVar2;
  InControl_InputControl_o *__this;
  InControl_TwoAxisInputControl_o *pIVar3;
  
  switch(IHCDJFOBOEI) {
  case 0:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e7e0;
    __this = InControl_InputDevice__get_LeftStickX(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 1:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e7e0;
    __this = InControl_InputDevice__get_LeftStickY(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 2:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e7e0;
    __this = InControl_InputDevice__get_RightStickX(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 3:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e7e0;
    __this = InControl_InputDevice__get_RightStickY(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 4:
    if (((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
        (pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField,
        pIVar3 == (InControl_TwoAxisInputControl_o *)0x0)) ||
       (pIVar2 = (pIVar3->fields)._Left_k__BackingField,
       pIVar2 == (InControl_OneAxisInputControl_o *)0x0)) goto LAB_0349e7e0;
    bVar1 = InControl_OneAxisInputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349e7e0;
    pIVar2 = (pIVar3->fields)._Right_k__BackingField;
    goto joined_r0x0349e7d0;
  case 5:
    if (((GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) ||
        (pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField,
        pIVar3 == (InControl_TwoAxisInputControl_o *)0x0)) ||
       (pIVar2 = (pIVar3->fields)._Up_k__BackingField,
       pIVar2 == (InControl_OneAxisInputControl_o *)0x0)) goto LAB_0349e7e0;
    bVar1 = InControl_OneAxisInputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pIVar3 = (GIDJIIFPHJK->fields)._DPad_k__BackingField;
    if (pIVar3 == (InControl_TwoAxisInputControl_o *)0x0) goto LAB_0349e7e0;
    pIVar2 = (pIVar3->fields)._Down_k__BackingField;
joined_r0x0349e7d0:
    if (pIVar2 != (InControl_OneAxisInputControl_o *)0x0) {
      bVar1 = InControl_OneAxisInputControl__get_WasPressed(pIVar2,(MethodInfo *)0x0);
      return bVar1;
    }
    goto LAB_0349e7e0;
  case 6:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e7e0;
    __this = InControl_InputDevice__get_RightTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  case 7:
    if (GIDJIIFPHJK == (InControl_InputDevice_o *)0x0) goto LAB_0349e7e0;
    __this = InControl_InputDevice__get_LeftTrigger(GIDJIIFPHJK,(MethodInfo *)0x0);
    break;
  default:
    return false;
  }
  if (__this != (InControl_InputControl_o *)0x0) {
    bVar1 = InControl_InputControl__get_WasPressed(__this,(MethodInfo *)0x0);
    return bVar1;
  }
LAB_0349e7e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool AJDGKKOPLIM(InputDevice GIDJIIFPHJK, LGMNENGMMOF IKKKILCDMMB)  [RVA 0x339E7E4]
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

