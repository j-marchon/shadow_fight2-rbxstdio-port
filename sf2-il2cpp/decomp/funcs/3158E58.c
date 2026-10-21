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
    FUN_01bab630(&StringLiteral_334);
                    /* catch() { ... } // from try @ 03258e58 with catch @ 03258e94 */
                    /* catch() { ... } // from try @ 03258d88 with catch @ 03258e98 */
                    /* catch() { ... } // from try @ 03258e50 with catch @ 03258e9c */
    FUN_01bab630(&StringLiteral_15775);
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
                             (str0,StringLiteral_334,pSVar6,StringLiteral_15775,(MethodInfo *)0x0);
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

