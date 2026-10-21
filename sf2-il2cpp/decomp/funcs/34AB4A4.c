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
    FUN_01bab630(&StringLiteral_5337);
    FUN_01bab630(&StringLiteral_14475);
    FUN_01bab630(&StringLiteral_5336);
    FUN_01bab630(&StringLiteral_326);
    FUN_01bab630(&StringLiteral_472);
    FUN_01bab630(&StringLiteral_600);
    FUN_01bab630(&StringLiteral_22004);
    FUN_01bab630(&StringLiteral_603);
    FUN_01bab630(&StringLiteral_1111);
    FUN_01bab630(&StringLiteral_1100);
    FUN_01bab630(&StringLiteral_565);
    FUN_01bab630(&StringLiteral_471);
    FUN_01bab630(&StringLiteral_14843);
    FUN_01bab630(&StringLiteral_220);
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
                    ((System_String_o *)pIVar8->klass,StringLiteral_14843,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  bVar5 = System_String__op_Equality
                    ((System_String_o *)pIVar8->klass,StringLiteral_326,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if (pIVar8->klass == (Il2CppClass *)0x0) goto LAB_035ab948;
  iVar7 = System_String__IndexOf
                    ((System_String_o *)pIVar8->klass,StringLiteral_22004,5,(MethodInfo *)0x0);
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
                      ((System_String_o *)pIVar8->klass,StringLiteral_14475,(MethodInfo *)0x0);
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
              pSVar11->m_Items[0] = StringLiteral_5336;
              thunk_FUN_01c20e04(pSVar11->m_Items);
              pSVar12 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
              if (1 < (uint)pSVar11->max_length) {
                pSVar11->m_Items[1] = pSVar12;
                thunk_FUN_01c20e04(pSVar11->m_Items + 1,pSVar12);
                if (2 < (uint)pSVar11->max_length) {
                  pSVar11->m_Items[2] = StringLiteral_565;
                  thunk_FUN_01c20e04(pSVar11->m_Items + 2);
                  if (3 < (uint)pSVar11->max_length) {
                    pSVar11->m_Items[3] = (System_String_o *)pIVar8->klass;
                    thunk_FUN_01c20e04(pSVar11->m_Items + 3);
                    if (4 < (uint)pSVar11->max_length) {
                      pSVar11->m_Items[4] = StringLiteral_600;
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
              pSVar11->m_Items[0] = StringLiteral_5336;
              thunk_FUN_01c20e04(pSVar11->m_Items);
              pSVar12 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
              if (1 < (uint)pSVar11->max_length) {
                pSVar11->m_Items[1] = pSVar12;
                thunk_FUN_01c20e04(pSVar11->m_Items + 1,pSVar12);
                if (2 < (uint)pSVar11->max_length) {
                  pSVar11->m_Items[2] = StringLiteral_471;
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
                      pSVar11->m_Items[4] = StringLiteral_220;
                      thunk_FUN_01c20e04(pSVar11->m_Items + 4);
                      if (5 < (uint)pSVar11->max_length) {
                        pSVar11->m_Items[5] = (deviceProfile->fields)._Name_k__BackingField;
                        thunk_FUN_01c20e04(pSVar11->m_Items + 5);
                        if (6 < (uint)pSVar11->max_length) {
                          puVar14 = &StringLiteral_1100;
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
            pSVar11->m_Items[0] = StringLiteral_5336;
            thunk_FUN_01c20e04(pSVar11->m_Items);
            pSVar12 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
            if (1 < (uint)pSVar11->max_length) {
              pSVar11->m_Items[1] = pSVar12;
              thunk_FUN_01c20e04(pSVar11->m_Items + 1,pSVar12);
              if (2 < (uint)pSVar11->max_length) {
                pSVar11->m_Items[2] = StringLiteral_472;
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
                    pSVar11->m_Items[4] = StringLiteral_220;
                    thunk_FUN_01c20e04(pSVar11->m_Items + 4);
                    if (5 < (uint)pSVar11->max_length) {
                      pSVar11->m_Items[5] = (deviceProfile->fields)._Name_k__BackingField;
                      thunk_FUN_01c20e04(pSVar11->m_Items + 5);
                      if (6 < (uint)pSVar11->max_length) {
                        puVar14 = &StringLiteral_1111;
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
                                  (StringLiteral_5337,(System_String_o *)pIVar8->klass,
                                   StringLiteral_603,(deviceProfile->fields)._Name_k__BackingField,
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

