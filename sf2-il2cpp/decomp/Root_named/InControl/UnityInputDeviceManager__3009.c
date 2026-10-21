// TypeDefIndex 3009
// Namespace: InControl
// public class UnityInputDeviceManager : InputDeviceManager
// Fields:
//   private float deviceRefreshTimer; // 0x18
//   private const float deviceRefreshInterval = 1;
//   private List<UnityInputDeviceProfile> deviceProfiles; // 0x20
//   private bool keyboardDevicesAttached; // 0x28
//   private string joystickHash; // 0x30

// ===== public void .ctor()  [RVA 0x34AAB54]
// InControl.UnityInputDeviceManager$$.ctor @ RVA 0x34AAB54

void InControl_UnityInputDeviceManager___ctor
               (InControl_UnityInputDeviceManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UnityInputDeviceProfile__o *__this_00;
  System_Collections_Generic_List_UnityInputDeviceProfile__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_0456852a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityInputDeviceProfile>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UnityInputDeviceProfile>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456852a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_UnityInputDeviceProfile__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<UnityInputDeviceProfile>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<UnityInputDeviceProfile>__ctor__);
  ppSVar1 = &(__this->fields).deviceProfiles;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).joystickHash = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  InControl_InputDeviceManager___ctor((InControl_InputDeviceManager_o *)__this,(MethodInfo *)0x0);
  InControl_UnityInputDeviceManager__AutoDiscoverDeviceProfiles(__this,method_00);
  InControl_UnityInputDeviceManager__RefreshDevices(__this,method_01);
  return;
}


// ===== public override void Update(ulong updateTick, float deltaTime)  [RVA 0x34AAE34]
// InControl.UnityInputDeviceManager$$Update @ RVA 0x34AAE34

void InControl_UnityInputDeviceManager__Update
               (InControl_UnityInputDeviceManager_o *__this,uint64_t updateTick,float deltaTime,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  MethodInfo *method_00;
  System_String_o *a;
  
  if ((DAT_0456852b & 1) == 0) {
    FUN_01bab630(&StringLiteral_4250/*"Change in Unity attached joysticks detected; refreshing device list."*/);
    DAT_0456852b = 1;
  }
  (__this->fields).deviceRefreshTimer = (__this->fields).deviceRefreshTimer + deltaTime;
  bVar1 = System_String__IsNullOrEmpty((__this->fields).joystickHash,(MethodInfo *)0x0);
  if ((bVar1) || (1.0 <= (__this->fields).deviceRefreshTimer)) {
    a = (__this->fields).joystickHash;
    (__this->fields).deviceRefreshTimer = 0.0;
    b = InControl_UnityInputDeviceManager__get_JoystickHash((MethodInfo *)(ulong)bVar1);
    bVar1 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
    if (bVar1) {
      InControl_Logger__LogInfo(StringLiteral_4250/*"Change in Unity attached joysticks detected; refreshing device list."*/,(MethodInfo *)0x0);
      InControl_UnityInputDeviceManager__RefreshDevices(__this,method_00);
      return;
    }
  }
  return;
}


// ===== private void RefreshDevices()  [RVA 0x34AAE08]
// InControl.UnityInputDeviceManager$$RefreshDevices @ RVA 0x34AAE08

void InControl_UnityInputDeviceManager__RefreshDevices
               (InControl_UnityInputDeviceManager_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  System_String_o *pSVar1;
  MethodInfo *method_01;
  System_String_o **ppSVar2;
  
  InControl_UnityInputDeviceManager__DetectAttachedJoystickDevices(__this,method);
  InControl_UnityInputDeviceManager__DetectDetachedJoystickDevices(__this,method_01);
  pSVar1 = InControl_UnityInputDeviceManager__get_JoystickHash(method_00);
  ppSVar2 = &(__this->fields).joystickHash;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== private void AttachDevice(UnityInputDevice device)  [RVA 0x34AB294]
// InControl.UnityInputDeviceManager$$AttachDevice @ RVA 0x34AB294

void InControl_UnityInputDeviceManager__AttachDevice
               (InControl_UnityInputDeviceManager_o *__this,InControl_UnityInputDevice_o *device,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_InputDevice__o *__this_00;
  InControl_InputDevice_array *pIVar3;
  
  if ((DAT_0456852c & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Add__);
    DAT_0456852c = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<InputDevice>_Add__;
  __this_00 = (__this->fields).super.devices;
  if (__this_00 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    pIVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pIVar3 != (InControl_InputDevice_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pIVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pIVar3->m_Items[(int)uVar1] = (InControl_InputDevice_o *)device;
        thunk_FUN_01c20e04(pIVar3->m_Items + (int)uVar1,device);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)device,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      InControl_InputManager__AttachDevice((InControl_InputDevice_o *)device,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AttachKeyboardDevices()  [RVA 0x34AB36C]
// InControl.UnityInputDeviceManager$$AttachKeyboardDevices @ RVA 0x34AB36C

void InControl_UnityInputDeviceManager__AttachKeyboardDevices
               (InControl_UnityInputDeviceManager_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_UnityInputDeviceProfile__o *__this_00;
  InControl_UnityInputDeviceProfile_o *__this_01;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_0456852d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityInputDeviceProfile>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityInputDeviceProfile>_get_Item__);
    DAT_0456852d = 1;
  }
  __this_00 = (__this->fields).deviceProfiles;
  if (__this_00 != (System_Collections_Generic_List_UnityInputDeviceProfile__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      method_00 = Method_System_Collections_Generic_List<UnityInputDeviceProfile>_get_Item__;
      __this_01 = (InControl_UnityInputDeviceProfile_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             (MethodInfo_26E4ADC *)
                             Method_System_Collections_Generic_List<UnityInputDeviceProfile>_get_Item__
                            );
      if (__this_01 == (InControl_UnityInputDeviceProfile_o *)0x0) break;
      bVar2 = InControl_UnityInputDeviceProfile__get_IsNotJoystick(__this_01,(MethodInfo *)0x0);
      if ((bVar2) &&
         (bVar2 = InControl_UnityInputDeviceProfile__get_IsSupportedOnThisPlatform
                            (__this_01,(MethodInfo *)0x0), bVar2)) {
        InControl_UnityInputDeviceManager__AttachKeyboardDeviceWithConfig
                  (__this,__this_01,method_00);
      }
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      __this_00 = (__this->fields).deviceProfiles;
    } while (__this_00 != (System_Collections_Generic_List_UnityInputDeviceProfile__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AttachKeyboardDeviceWithConfig(UnityInputDeviceProfile config)  [RVA 0x34AB42C]
// InControl.UnityInputDeviceManager$$AttachKeyboardDeviceWithConfig @ RVA 0x34AB42C

void InControl_UnityInputDeviceManager__AttachKeyboardDeviceWithConfig
               (InControl_UnityInputDeviceManager_o *__this,
               InControl_UnityInputDeviceProfile_o *config,MethodInfo *method)

{
  InControl_UnityInputDevice_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_0456852e & 1) == 0) {
    FUN_01bab630(&InControl_UnityInputDevice_TypeInfo);
    DAT_0456852e = 1;
  }
  if ((__this->fields).keyboardDevicesAttached == false) {
    __this_00 = (InControl_UnityInputDevice_o *)
                thunk_FUN_01bda818(InControl_UnityInputDevice_TypeInfo);
    method_00 = (MethodInfo *)0x0;
    InControl_UnityInputDevice___ctor(__this_00,config,(MethodInfo *)0x0);
    InControl_UnityInputDeviceManager__AttachDevice(__this,__this_00,method_00);
    (__this->fields).keyboardDevicesAttached = true;
  }
  return;
}


// ===== private void DetectAttachedJoystickDevices()  [RVA 0x34AAF98]
// InControl.UnityInputDeviceManager$$DetectAttachedJoystickDevices @ RVA 0x34AAF98

void InControl_UnityInputDeviceManager__DetectAttachedJoystickDevices
               (InControl_UnityInputDeviceManager_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *in_x3;
  ulong uVar4;
  
  pSVar3 = UnityEngine_Input__GetJoystickNames((MethodInfo *)0x0);
  if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar4 = 0;
  while( true ) {
    uVar2 = (uint)pSVar3->max_length;
    if ((long)(int)uVar2 <= (long)uVar4) {
      return;
    }
    if (uVar2 <= uVar4) break;
    ppSVar1 = pSVar3->m_Items + uVar4;
    uVar4 = uVar4 + 1;
    InControl_UnityInputDeviceManager__DetectAttachedJoystickDevice
              (__this,(int32_t)uVar4,*ppSVar1,in_x3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private void DetectAttachedJoystickDevice(int unityJoystickId, string unityJoystickName)  [RVA 0x34AB4A4]
// InControl.UnityInputDeviceManager$$DetectAttachedJoystickDevice @ RVA 0x34AB4A4

void InControl_UnityInputDeviceManager__DetectAttachedJoystickDevice
               (InControl_UnityInputDeviceManager_o *__this,int32_t unityJoystickId,
               System_String_o *unityJoystickName,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int32_t iVar7;
  Il2CppObject *pIVar8;
  System_Predicate_T__o *pSVar9;
  InControl_UnityInputDeviceProfile_o *deviceProfile;
  System_Collections_Generic_List_InputDevice__o *__this_00;
  InControl_UnityInputDevice_o *pIVar10;
  System_String_array *pSVar11;
  System_String_o *pSVar12;
  System_Type_o *pSVar13;
  MethodInfo *method_00;
  MethodInfo *in_x6;
  undefined8 *puVar14;
  InControl_UnityInputDeviceProfile_array *pIVar15;
  System_Collections_Generic_List_UnityInputDeviceProfile__o *pSVar16;
  int index;
  Il2CppClass *joystickName;
  InControl_VersionInfo_o IVar17;
  InControl_VersionInfo_o __this_01;
  InControl_VersionInfo_o IVar18;
  InControl_VersionInfo_o __this_02;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_44;
  
  local_44 = unityJoystickId;
  if ((DAT_0456852f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityInputDeviceProfile>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityInputDeviceProfile>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    FUN_01bab630(&System_Predicate<UnityInputDeviceProfile>_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&
                 Method_InControl_UnityInputDeviceManager_<>c__DisplayClass12_0_<DetectAttachedJoystickDevice>b__0__
                );
    FUN_01bab630(&
                 Method_InControl_UnityInputDeviceManager_<>c__DisplayClass12_0_<DetectAttachedJoystickDevice>b__1__
                );
    FUN_01bab630(&InControl_UnityInputDeviceManager_<>c__DisplayClass12_0_TypeInfo);
    FUN_01bab630(&InControl_UnityInputDevice_TypeInfo);
    FUN_01bab630(&InControl_UnityUnknownDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_5337/*"Device ""*/);
    FUN_01bab630(&StringLiteral_14475/*"Unknown Wireless Controller"*/);
    FUN_01bab630(&StringLiteral_5336/*"Device "*/);
    FUN_01bab630(&StringLiteral_326/*" WIRED CONTROLLER"*/);
    FUN_01bab630(&StringLiteral_472/*" matching profile "*/);
    FUN_01bab630(&StringLiteral_600/*"" does not match any known profiles."*/);
    FUN_01bab630(&StringLiteral_22004/*"webcam"*/);
    FUN_01bab630(&StringLiteral_603/*"" is already configured with "*/);
    FUN_01bab630(&StringLiteral_1111/*") is hidden and will not be attached."*/);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    FUN_01bab630(&StringLiteral_565/*" with name ""*/);
    FUN_01bab630(&StringLiteral_471/*" matched profile "*/);
    FUN_01bab630(&StringLiteral_14843/*"WIRED CONTROLLER"*/);
    FUN_01bab630(&StringLiteral_220/*" ("*/);
    DAT_0456852f = 1;
  }
  pIVar8 = (Il2CppObject *)
           thunk_FUN_01bda818(InControl_UnityInputDeviceManager_<>c__DisplayClass12_0_TypeInfo);
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  if (pIVar8 == (Il2CppObject *)0x0) goto LAB_035ab948;
  pIVar8 = pIVar8 + 1;
  pIVar8->klass = (Il2CppClass *)unityJoystickName;
  thunk_FUN_01c20e04(pIVar8,unityJoystickName);
  bVar5 = System_String__op_Equality
                    ((System_String_o *)pIVar8->klass,StringLiteral_14843/*"WIRED CONTROLLER"*/,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  bVar5 = System_String__op_Equality
                    ((System_String_o *)pIVar8->klass,StringLiteral_326/*" WIRED CONTROLLER"*/,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if (pIVar8->klass == (Il2CppClass *)0x0) goto LAB_035ab948;
  iVar7 = System_String__IndexOf
                    ((System_String_o *)pIVar8->klass,StringLiteral_22004/*"webcam"*/,5,(MethodInfo *)0x0);
  if (iVar7 != -1) {
    return;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  IVar17 = InControl_InputManager__get_UnityVersion((MethodInfo *)0x0);
  local_60 = 0;
  uStack_58 = 0;
  __this_01.fields.Patch = 4;
  __this_01.fields.Build = 0;
  __this_01.fields._0_8_ = &local_60;
  InControl_VersionInfo___ctor(__this_01,5,0,0,0,in_x6);
  IVar18.fields.Patch = (undefined4)uStack_58;
  IVar18.fields.Build = uStack_58._4_4_;
  IVar18.fields.Major = (undefined4)local_60;
  IVar18.fields.Minor = local_60._4_4_;
  bVar5 = InControl_VersionInfo__op_LessThanOrEqual(IVar17,IVar18,(MethodInfo *)0x0);
  if (bVar5) {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar7 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar7 != 0) {
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar7 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      if (iVar7 != 1) goto LAB_035ab774;
    }
    bVar5 = System_String__op_Equality
                      ((System_String_o *)pIVar8->klass,StringLiteral_14475/*"Unknown Wireless Controller"*/,(MethodInfo *)0x0);
    if (bVar5) {
      return;
    }
  }
LAB_035ab774:
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  IVar18 = InControl_InputManager__get_UnityVersion((MethodInfo *)0x0);
  local_60 = 0;
  uStack_58 = 0;
  __this_02.fields.Patch = 4;
  __this_02.fields.Build = 0;
  __this_02.fields._0_8_ = &local_60;
  InControl_VersionInfo___ctor(__this_02,6,3,0,0,in_x6);
  IVar17.fields.Patch = (undefined4)uStack_58;
  IVar17.fields.Build = uStack_58._4_4_;
  IVar17.fields.Major = (undefined4)local_60;
  IVar17.fields.Minor = local_60._4_4_;
  bVar5 = InControl_VersionInfo__op_GreaterThanOrEqual(IVar18,IVar17,(MethodInfo *)0x0);
  if (bVar5) {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar7 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar7 != 7) {
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar7 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      if (iVar7 != 2) goto LAB_035ab824;
    }
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)pIVar8->klass,(MethodInfo *)0x0);
    if (bVar5) {
      return;
    }
  }
LAB_035ab824:
  pSVar16 = (__this->fields).deviceProfiles;
  pSVar9 = (System_Predicate_T__o *)
           thunk_FUN_01bda818(System_Predicate<UnityInputDeviceProfile>_TypeInfo);
  System_Predicate<object>___ctor();
  if (pSVar16 == (System_Collections_Generic_List_UnityInputDeviceProfile__o *)0x0)
  goto LAB_035ab948;
  deviceProfile =
       (InControl_UnityInputDeviceProfile_o *)
       System_Collections_Generic_List<object>__Find
                 ((System_Collections_Generic_List_object__o *)pSVar16,pSVar9,
                  Method_System_Collections_Generic_List<UnityInputDeviceProfile>_Find__);
  if (deviceProfile == (InControl_UnityInputDeviceProfile_o *)0x0) {
    pSVar16 = (__this->fields).deviceProfiles;
    pSVar9 = (System_Predicate_T__o *)
             thunk_FUN_01bda818(System_Predicate<UnityInputDeviceProfile>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar16 == (System_Collections_Generic_List_UnityInputDeviceProfile__o *)0x0)
    goto LAB_035ab948;
    deviceProfile =
         (InControl_UnityInputDeviceProfile_o *)
         System_Collections_Generic_List<object>__Find
                   ((System_Collections_Generic_List_object__o *)pSVar16,pSVar9,
                    Method_System_Collections_Generic_List<UnityInputDeviceProfile>_Find__);
    if (deviceProfile != (InControl_UnityInputDeviceProfile_o *)0x0) goto LAB_035ab8b4;
    joystickName = pIVar8->klass;
    deviceProfile =
         (InControl_UnityInputDeviceProfile_o *)
         thunk_FUN_01bda818(InControl_UnityUnknownDeviceProfile_TypeInfo);
    InControl_UnityUnknownDeviceProfile___ctor
              ((InControl_UnityUnknownDeviceProfile_o *)deviceProfile,
               (System_String_o *)joystickName,(MethodInfo *)0x0);
    lVar4 = Method_System_Collections_Generic_List<UnityInputDeviceProfile>_Add__;
    pSVar16 = (__this->fields).deviceProfiles;
    if (pSVar16 == (System_Collections_Generic_List_UnityInputDeviceProfile__o *)0x0)
    goto LAB_035ab948;
    pIVar15 = (pSVar16->fields)._items;
    (pSVar16->fields)._version = (pSVar16->fields)._version + 1;
    if (pIVar15 == (InControl_UnityInputDeviceProfile_array *)0x0) goto LAB_035ab948;
    uVar3 = (pSVar16->fields)._size;
    if (uVar3 < (uint)pIVar15->max_length) {
      (pSVar16->fields)._size = uVar3 + 1;
      pIVar15->m_Items[(int)uVar3] = deviceProfile;
      thunk_FUN_01c20e04(pIVar15->m_Items + (int)uVar3,deviceProfile);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar16,(Il2CppObject *)deviceProfile,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    bVar5 = true;
  }
  else {
LAB_035ab8b4:
    bVar5 = false;
  }
  __this_00 = (__this->fields).super.devices;
  if (__this_00 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
LAB_035ab94c:
      if (deviceProfile != (InControl_UnityInputDeviceProfile_o *)0x0) {
        bVar6 = InControl_UnityInputDeviceProfile__get_IsHidden(deviceProfile,(MethodInfo *)0x0);
        uVar3 = local_44;
        if (!bVar6) {
          pIVar10 = (InControl_UnityInputDevice_o *)
                    thunk_FUN_01bda818(InControl_UnityInputDevice_TypeInfo);
          method_00 = (MethodInfo *)(ulong)uVar3;
          InControl_UnityInputDevice___ctor(pIVar10,deviceProfile,uVar3,(MethodInfo *)0x0);
          InControl_UnityInputDeviceManager__AttachDevice(__this,pIVar10,method_00);
          if (bVar5) {
            pSVar11 = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
            if (pSVar11 == (System_String_array *)0x0) goto LAB_035ab948;
            if ((int)pSVar11->max_length != 0) {
              pSVar11->m_Items[0] = StringLiteral_5336/*"Device "*/;
              thunk_FUN_01c20e04(pSVar11->m_Items);
              pSVar12 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
              if (1 < (uint)pSVar11->max_length) {
                pSVar11->m_Items[1] = pSVar12;
                thunk_FUN_01c20e04(pSVar11->m_Items + 1,pSVar12);
                if (2 < (uint)pSVar11->max_length) {
                  pSVar11->m_Items[2] = StringLiteral_565/*" with name ""*/;
                  thunk_FUN_01c20e04(pSVar11->m_Items + 2);
                  if (3 < (uint)pSVar11->max_length) {
                    pSVar11->m_Items[3] = (System_String_o *)pIVar8->klass;
                    thunk_FUN_01c20e04(pSVar11->m_Items + 3);
                    if (4 < (uint)pSVar11->max_length) {
                      pSVar11->m_Items[4] = StringLiteral_600/*"" does not match any known profiles."*/;
                      thunk_FUN_01c20e04();
                      pSVar12 = System_String__Concat(pSVar11,(MethodInfo *)0x0);
                      InControl_Logger__LogWarning(pSVar12,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
          else {
            pSVar11 = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
            if (pSVar11 == (System_String_array *)0x0) goto LAB_035ab948;
            if ((int)pSVar11->max_length != 0) {
              pSVar11->m_Items[0] = StringLiteral_5336/*"Device "*/;
              thunk_FUN_01c20e04(pSVar11->m_Items);
              pSVar12 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
              if (1 < (uint)pSVar11->max_length) {
                pSVar11->m_Items[1] = pSVar12;
                thunk_FUN_01c20e04(pSVar11->m_Items + 1,pSVar12);
                if (2 < (uint)pSVar11->max_length) {
                  pSVar11->m_Items[2] = StringLiteral_471/*" matched profile "*/;
                  thunk_FUN_01c20e04();
                  pSVar13 = System_Object__GetType((Il2CppObject *)deviceProfile,(MethodInfo *)0x0);
                  if (pSVar13 == (System_Type_o *)0x0) goto LAB_035ab948;
                  pSVar12 = (System_String_o *)
                            (*(pSVar13->klass->vtable)._8_unknown.methodPtr)
                                      (pSVar13,(pSVar13->klass->vtable)._8_unknown.method);
                  if (3 < (uint)pSVar11->max_length) {
                    pSVar11->m_Items[3] = pSVar12;
                    thunk_FUN_01c20e04(pSVar11->m_Items + 3,pSVar12);
                    if (4 < (uint)pSVar11->max_length) {
                      pSVar11->m_Items[4] = StringLiteral_220/*" ("*/;
                      thunk_FUN_01c20e04(pSVar11->m_Items + 4);
                      if (5 < (uint)pSVar11->max_length) {
                        pSVar11->m_Items[5] = (deviceProfile->fields)._Name_k__BackingField;
                        thunk_FUN_01c20e04(pSVar11->m_Items + 5);
                        if (6 < (uint)pSVar11->max_length) {
                          puVar14 = &StringLiteral_1100/*")"*/;
                          goto LAB_035abcd0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_035abdd8:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar11 = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
        if (pSVar11 != (System_String_array *)0x0) {
          if ((int)pSVar11->max_length != 0) {
            pSVar11->m_Items[0] = StringLiteral_5336/*"Device "*/;
            thunk_FUN_01c20e04(pSVar11->m_Items);
            pSVar12 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
            if (1 < (uint)pSVar11->max_length) {
              pSVar11->m_Items[1] = pSVar12;
              thunk_FUN_01c20e04(pSVar11->m_Items + 1,pSVar12);
              if (2 < (uint)pSVar11->max_length) {
                pSVar11->m_Items[2] = StringLiteral_472/*" matching profile "*/;
                thunk_FUN_01c20e04();
                pSVar13 = System_Object__GetType((Il2CppObject *)deviceProfile,(MethodInfo *)0x0);
                if (pSVar13 == (System_Type_o *)0x0) goto LAB_035ab948;
                pSVar12 = (System_String_o *)
                          (*(pSVar13->klass->vtable)._8_unknown.methodPtr)
                                    (pSVar13,(pSVar13->klass->vtable)._8_unknown.method);
                if (3 < (uint)pSVar11->max_length) {
                  pSVar11->m_Items[3] = pSVar12;
                  thunk_FUN_01c20e04(pSVar11->m_Items + 3,pSVar12);
                  if (4 < (uint)pSVar11->max_length) {
                    pSVar11->m_Items[4] = StringLiteral_220/*" ("*/;
                    thunk_FUN_01c20e04(pSVar11->m_Items + 4);
                    if (5 < (uint)pSVar11->max_length) {
                      pSVar11->m_Items[5] = (deviceProfile->fields)._Name_k__BackingField;
                      thunk_FUN_01c20e04(pSVar11->m_Items + 5);
                      if (6 < (uint)pSVar11->max_length) {
                        puVar14 = &StringLiteral_1111/*") is hidden and will not be attached."*/;
LAB_035abcd0:
                        pSVar11->m_Items[6] = (System_String_o *)*puVar14;
                        thunk_FUN_01c20e04();
                        pSVar12 = System_String__Concat(pSVar11,(MethodInfo *)0x0);
LAB_035abcec:
                        InControl_Logger__LogInfo(pSVar12,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_035abdd8;
        }
      }
    }
    else {
      index = 0;
      do {
        pIVar10 = (InControl_UnityInputDevice_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<InputDevice>_get_Item__);
        if (pIVar10 != (InControl_UnityInputDevice_o *)0x0) {
          bVar2 = (InControl_UnityInputDevice_TypeInfo->_2).naturalAligment;
          if (((bVar2 <= (pIVar10->klass->_2).naturalAligment) &&
              ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
               (Il2CppClass *)InControl_UnityInputDevice_TypeInfo)) &&
             (bVar6 = InControl_UnityInputDevice__IsConfiguredWith
                                (pIVar10,deviceProfile,local_44,(MethodInfo *)0x0), bVar6)) {
            if (deviceProfile != (InControl_UnityInputDeviceProfile_o *)0x0) {
              pSVar12 = System_String__Concat
                                  (StringLiteral_5337/*"Device ""*/,(System_String_o *)pIVar8->klass,
                                   StringLiteral_603/*"" is already configured with "*/,(deviceProfile->fields)._Name_k__BackingField,
                                   (MethodInfo *)0x0);
              goto LAB_035abcec;
            }
            break;
          }
        }
        index = index + 1;
        if (iVar1 == index) goto LAB_035ab94c;
        __this_00 = (__this->fields).super.devices;
      } while (__this_00 != (System_Collections_Generic_List_InputDevice__o *)0x0);
    }
  }
LAB_035ab948:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DetectDetachedJoystickDevices()  [RVA 0x34AB0C4]
// InControl.UnityInputDeviceManager$$DetectDetachedJoystickDevices @ RVA 0x34AB0C4

void InControl_UnityInputDeviceManager__DetectDetachedJoystickDevices
               (InControl_UnityInputDeviceManager_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  System_String_array *pSVar6;
  InControl_InputDevice_o *inputDevice;
  System_String_o *text;
  System_Collections_Generic_List_InputDevice__o *pSVar7;
  int index;
  
  if ((DAT_04568530 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    FUN_01bab630(&InControl_UnityInputDevice_TypeInfo);
    FUN_01bab630(&StringLiteral_5323/*"Detached device: "*/);
    DAT_04568530 = 1;
  }
  pSVar6 = UnityEngine_Input__GetJoystickNames((MethodInfo *)0x0);
  pSVar7 = (__this->fields).super.devices;
  if (pSVar7 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    index = (pSVar7->fields)._size + -1;
    if (index < 0) {
      return;
    }
    do {
      inputDevice = (InControl_InputDevice_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar7,index,
                               Method_System_Collections_Generic_List<InputDevice>_get_Item__);
      if (inputDevice == (InControl_InputDevice_o *)0x0) break;
      bVar3 = (InControl_UnityInputDevice_TypeInfo->_2).naturalAligment;
      if ((((inputDevice->klass->_2).naturalAligment < bVar3) ||
          ((inputDevice->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
           (Il2CppClass *)InControl_UnityInputDevice_TypeInfo)) ||
         (inputDevice[1].klass == (InControl_InputDevice_c *)0x0)) break;
      bVar5 = InControl_UnityInputDeviceProfile__get_IsNotJoystick
                        ((InControl_UnityInputDeviceProfile_o *)inputDevice[1].klass,
                         (MethodInfo *)0x0);
      if (!bVar5) {
        if (pSVar6 == (System_String_array *)0x0) break;
        iVar1 = *(int *)&(inputDevice->fields).field_0x44;
        uVar2 = (uint)pSVar6->max_length;
        if (iVar1 <= (int)uVar2) {
          uVar4 = iVar1 - 1;
          if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (inputDevice[1].klass == (InControl_InputDevice_c *)0x0) break;
          bVar5 = InControl_UnityInputDeviceProfile__HasJoystickOrRegexName
                            ((InControl_UnityInputDeviceProfile_o *)inputDevice[1].klass,
                             pSVar6->m_Items[(int)uVar4],(MethodInfo *)0x0);
          if (bVar5) goto LAB_035ab264;
        }
        pSVar7 = (__this->fields).super.devices;
        if (pSVar7 == (System_Collections_Generic_List_InputDevice__o *)0x0) break;
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)inputDevice,
                   Method_System_Collections_Generic_List<InputDevice>_Remove__);
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        InControl_InputManager__DetachDevice(inputDevice,(MethodInfo *)0x0);
        if (inputDevice[1].klass == (InControl_InputDevice_c *)0x0) break;
        text = System_String__Concat
                         (StringLiteral_5323/*"Detached device: "*/,(System_String_o *)((inputDevice[1].klass)->_1).name,
                          (MethodInfo *)0x0);
        InControl_Logger__LogInfo(text,(MethodInfo *)0x0);
      }
LAB_035ab264:
      index = index + -1;
      if (index < 0) {
        return;
      }
      pSVar7 = (__this->fields).super.devices;
    } while (pSVar7 != (System_Collections_Generic_List_InputDevice__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AutoDiscoverDeviceProfiles()  [RVA 0x34AAC10]
// InControl.UnityInputDeviceManager$$AutoDiscoverDeviceProfiles @ RVA 0x34AAC10

void InControl_UnityInputDeviceManager__AutoDiscoverDeviceProfiles
               (InControl_UnityInputDeviceManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Type_o *type;
  InControl_UnityInputDeviceProfile_o *__this_00;
  System_Collections_Generic_List_UnityInputDeviceProfile__o *__this_01;
  MethodInfo *extraout_x1;
  ulong uVar5;
  InControl_UnityInputDeviceProfile_array *pIVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  ulong uVar9;
  
  if ((DAT_04568531 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityInputDeviceProfile>_Add__);
    FUN_01bab630(&Method_System_Type_GetType__);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&Method_InControl_UnityInputDeviceManager_AutoDiscoverDeviceProfiles__);
    FUN_01bab630(&InControl_UnityInputDeviceProfileList_TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    DAT_04568531 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfileList_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfileList_TypeInfo,method);
  }
  pSVar8 = InControl_UnityInputDeviceProfileList_TypeInfo->static_fields->Profiles;
  if (pSVar8 != (System_String_array *)0x0) {
    if (0 < (int)pSVar8->max_length) {
      uVar9 = 0;
      uVar5 = pSVar8->max_length & 0xffffffff;
      do {
        if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar7 = pSVar8->m_Items[uVar9];
        if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        type = (System_Type_o *)
               FUN_01babac0(pSVar7,Method_System_Type_GetType__,
                            Method_InControl_UnityInputDeviceManager_AutoDiscoverDeviceProfiles__);
        __this_00 = (InControl_UnityInputDeviceProfile_o *)
                    System_Activator__CreateInstance(type,(MethodInfo *)0x0);
        if (__this_00 == (InControl_UnityInputDeviceProfile_o *)0x0) goto LAB_035aae00;
        bVar1 = (InControl_UnityInputDeviceProfile_TypeInfo->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)InControl_UnityInputDeviceProfile_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this_00);
        }
        bVar4 = InControl_UnityInputDeviceProfile__get_IsSupportedOnThisPlatform
                          (__this_00,(MethodInfo *)0x0);
        lVar3 = Method_System_Collections_Generic_List<UnityInputDeviceProfile>_Add__;
        if (bVar4) {
          __this_01 = (__this->fields).deviceProfiles;
          if (__this_01 == (System_Collections_Generic_List_UnityInputDeviceProfile__o *)0x0)
          goto LAB_035aae00;
          pIVar6 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pIVar6 == (InControl_UnityInputDeviceProfile_array *)0x0) goto LAB_035aae00;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pIVar6->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pIVar6->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar2 = (uint)pSVar8->max_length;
        uVar5 = (ulong)uVar2;
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)uVar2);
    }
    return;
  }
LAB_035aae00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string get_JoystickHash()  [RVA 0x34AAEEC]
// InControl.UnityInputDeviceManager$$get_JoystickHash @ RVA 0x34AAEEC

System_String_o * InControl_UnityInputDeviceManager__get_JoystickHash(MethodInfo *method)

{
  System_String_array *value;
  System_String_o *pSVar1;
  System_String_o *str2;
  undefined4 local_24;
  
  if ((DAT_04568532 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2088/*": "*/);
    FUN_01bab630(&StringLiteral_1155/*", "*/);
    DAT_04568532 = 1;
  }
  value = UnityEngine_Input__GetJoystickNames((MethodInfo *)0x0);
  if (value != (System_String_array *)0x0) {
    local_24 = (undefined4)value->max_length;
    pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    str2 = System_String__Join(StringLiteral_1155/*", "*/,value,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1,StringLiteral_2088/*": "*/,str2,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

