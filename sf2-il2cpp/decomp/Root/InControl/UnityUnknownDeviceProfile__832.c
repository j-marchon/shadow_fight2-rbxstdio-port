// TypeDefIndex 832
// Namespace: InControl
// public class UnityUnknownDeviceProfile : UnityInputDeviceProfile
// Fields:

// ===== public void .ctor(string joystickName)  [RVA 0x308065C]
// InControl.UnityUnknownDeviceProfile$$.ctor @ RVA 0x308065C

void InControl_UnityUnknownDeviceProfile___ctor
               (InControl_UnityUnknownDeviceProfile_o *__this,System_String_o *joystickName,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_array **ppSVar4;
  System_String_array *pSVar5;
  InControl_InputControlMapping_array *pIVar6;
  InControl_InputControlMapping_o *pIVar7;
  InControl_InputControlSource_o *pIVar8;
  long lVar9;
  undefined8 uVar10;
  InControl_InputControlMapping_array **ppIVar11;
  InControl_UnityUnknownDeviceProfile_Fields *pIVar12;
  uint local_68;
  uint uStack_64;
  
  if ((DAT_04565fee & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_3607/*"Button "*/);
    FUN_01bab630(&StringLiteral_14462/*"Unknown Device"*/);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    FUN_01bab630(&StringLiteral_220/*" ("*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_2937/*"Analog "*/);
    DAT_04565fee = 1;
  }
  local_68 = 0;
  uStack_64 = 0;
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  pIVar12 = &__this->fields;
  (pIVar12->super)._Name_k__BackingField = StringLiteral_14462/*"Unknown Device"*/;
  thunk_FUN_01c20e04(pIVar12);
  bVar2 = System_String__op_Inequality(joystickName,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  if (bVar2) {
    if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = System_String__Concat
                       ((pIVar12->super)._Name_k__BackingField,StringLiteral_220/*" ("*/,joystickName,
                        StringLiteral_1100/*")"*/,(MethodInfo *)0x0);
    (pIVar12->super)._Name_k__BackingField = pSVar3;
    thunk_FUN_01c20e04(pIVar12,pSVar3);
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (__this->fields).super._Meta_k__BackingField = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  InControl_UnityInputDeviceProfile__set_Sensitivity
            ((InControl_UnityInputDeviceProfile_o *)__this,1.0,(MethodInfo *)0x0);
  InControl_UnityInputDeviceProfile__set_LowerDeadZone
            ((InControl_UnityInputDeviceProfile_o *)__this,0.2,(MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).super.SupportedPlatforms;
  *ppSVar4 = (System_String_array *)0x0;
  thunk_FUN_01c20e04(ppSVar4,0);
  pSVar5 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar5 != (System_String_array *)0x0) {
    if ((int)pSVar5->max_length == 0) {
LAB_03180a9c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar5->m_Items[0] = joystickName;
    thunk_FUN_01c20e04(pSVar5->m_Items,joystickName);
    ppSVar4 = &(__this->fields).super.JoystickNames;
    *ppSVar4 = pSVar5;
    thunk_FUN_01c20e04(ppSVar4,pSVar5);
    pIVar6 = (InControl_InputControlMapping_array *)
             FUN_01bab718(InControl_InputControlMapping___TypeInfo,0x14);
    ppIVar11 = &(__this->fields).super._AnalogMappings_k__BackingField;
    *ppIVar11 = pIVar6;
    thunk_FUN_01c20e04(ppIVar11);
    uStack_64 = 0;
    do {
      if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      uVar1 = uStack_64;
      pIVar6 = *ppIVar11;
      pIVar7 = (InControl_InputControlMapping_o *)
               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
      InControl_InputControlMapping___ctor(pIVar7,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)&uStack_64,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(StringLiteral_2937/*"Analog "*/,pSVar3,(MethodInfo *)0x0);
      if (pIVar7 == (InControl_InputControlMapping_o *)0x0) goto LAB_03180a98;
      (pIVar7->fields).handle = pSVar3;
      thunk_FUN_01c20e04();
      pIVar8 = InControl_UnityInputDeviceProfile__Analog(uStack_64,(MethodInfo *)0x0);
      (pIVar7->fields).Source = pIVar8;
      thunk_FUN_01c20e04(&pIVar7->fields,pIVar8);
      (pIVar7->fields).Target = uStack_64 + 0x23;
      if (pIVar6 == (InControl_InputControlMapping_array *)0x0) goto LAB_03180a98;
      lVar9 = thunk_FUN_01bda71c(pIVar7,(((pIVar6->obj).klass)->_1).element_class);
      if (lVar9 == 0) goto LAB_03180aa0;
      if ((uint)pIVar6->max_length <= uVar1) goto LAB_03180a9c;
      pIVar6->m_Items[(int)uVar1] = pIVar7;
      thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar1,pIVar7);
      uStack_64 = uStack_64 + 1;
    } while ((int)uStack_64 < 0x14);
    pIVar6 = (InControl_InputControlMapping_array *)
             FUN_01bab718(InControl_InputControlMapping___TypeInfo,0x14);
    if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo);
    }
    ppIVar11 = &(__this->fields).super._ButtonMappings_k__BackingField;
    *ppIVar11 = pIVar6;
    thunk_FUN_01c20e04(ppIVar11,pIVar6);
    local_68 = 0;
    while( true ) {
      if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      uVar1 = local_68;
      pIVar6 = *ppIVar11;
      pIVar7 = (InControl_InputControlMapping_o *)
               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
      InControl_InputControlMapping___ctor(pIVar7,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(StringLiteral_3607/*"Button "*/,pSVar3,(MethodInfo *)0x0);
      if (pIVar7 == (InControl_InputControlMapping_o *)0x0) break;
      (pIVar7->fields).handle = pSVar3;
      thunk_FUN_01c20e04();
      pIVar8 = InControl_UnityInputDeviceProfile__Button(local_68,(MethodInfo *)0x0);
      (pIVar7->fields).Source = pIVar8;
      thunk_FUN_01c20e04(&pIVar7->fields,pIVar8);
      (pIVar7->fields).Target = local_68 + 0x37;
      if (pIVar6 == (InControl_InputControlMapping_array *)0x0) break;
      lVar9 = thunk_FUN_01bda71c(pIVar7,(((pIVar6->obj).klass)->_1).element_class);
      if (lVar9 == 0) {
LAB_03180aa0:
        uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar10,0);
      }
      if ((uint)pIVar6->max_length <= uVar1) goto LAB_03180a9c;
      pIVar6->m_Items[(int)uVar1] = pIVar7;
      thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar1,pIVar7);
      local_68 = local_68 + 1;
      if (0x13 < (int)local_68) {
        return;
      }
    }
  }
LAB_03180a98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool get_IsKnown()  [RVA 0x3080AAC]
// InControl.UnityUnknownDeviceProfile$$get_IsKnown @ RVA 0x3080AAC

bool InControl_UnityUnknownDeviceProfile__get_IsKnown
               (InControl_UnityUnknownDeviceProfile_o *__this,MethodInfo *method)

{
  return false;
}

