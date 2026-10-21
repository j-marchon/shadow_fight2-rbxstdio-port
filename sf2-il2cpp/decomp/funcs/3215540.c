// InControl.InputManager$$SetupInternal @ RVA 0x3215540

void InControl_InputManager__SetupInternal(MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  System_String_o **ppSVar3;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o **ppSVar4;
  System_Action_o **ppSVar5;
  System_Action_InputDevice__o *value;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  InControl_InputManager_StaticFields *pIVar6;
  System_Action_o *pSVar7;
  System_Collections_Generic_List_InputDeviceManager__o *pSVar8;
  System_Collections_Generic_List_InputDevice__o *pSVar9;
  
  if ((DAT_04566ec3 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&Method_InControl_InputManager_AddDeviceManager<UnityInputDeviceManager>__);
    FUN_01bab630(&Method_InControl_InputManager_InputManager_OnActiveDeviceChanged__);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Clear__);
    FUN_01bab630(&Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>__ctor__);
    FUN_01bab630(&System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_TypeInfo);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<SetupInternal>b__48_0__);
    FUN_01bab630(&InControl_InputManager_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    DAT_04566ec3 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (InControl_InputManager_TypeInfo->static_fields->isSetup != false) {
    return;
  }
  pSVar2 = UnityEngine_SystemInfo__get_operatingSystem((MethodInfo *)0x0);
  str2 = UnityEngine_SystemInfo__get_deviceModel((MethodInfo *)0x0);
  pSVar2 = System_String__Concat(pSVar2,StringLiteral_167,str2,(MethodInfo *)0x0);
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar2 = System_String__ToUpper(pSVar2,(MethodInfo *)0x0);
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(InControl_InputManager_TypeInfo);
    }
    if (DAT_04566f53 == '\0') {
      FUN_01bab630(&InControl_InputManager_TypeInfo);
      DAT_04566f53 = '\x01';
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar3 = &InControl_InputManager_TypeInfo->static_fields->_Platform_k__BackingField;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    pIVar6 = InControl_InputManager_TypeInfo->static_fields;
    pSVar8 = pIVar6->inputDeviceManagers;
    pIVar6->initialTime = 0.0;
    pIVar6->currentTime = 0.0;
    pIVar6->lastUpdateTime = 0.0;
    pIVar6->currentTick = 0;
    if (pSVar8 != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
      iVar1 = (pSVar8->fields)._size;
      (pSVar8->fields)._size = 0;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar1,(MethodInfo *)0x0);
        pIVar6 = InControl_InputManager_TypeInfo->static_fields;
      }
      pSVar9 = pIVar6->devices;
      if (pSVar9 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
        iVar1 = (pSVar9->fields)._size;
        (pSVar9->fields)._size = 0;
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0);
          pIVar6 = InControl_InputManager_TypeInfo->static_fields;
        }
        pSVar9 = pIVar6->devices;
        __this = (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)
                 thunk_FUN_01bda818(
                                   System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_TypeInfo
                                   );
        System_Collections_ObjectModel_ReadOnlyCollection<object>___ctor
                  ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this,
                   (System_Collections_Generic_IList_T__o *)pSVar9,
                   Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>__ctor__);
        ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->Devices;
        *ppSVar4 = __this;
        thunk_FUN_01c20e04(ppSVar4,__this);
        if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        InControl_InputManager_TypeInfo->static_fields->activeDevice =
             InControl_InputDevice_TypeInfo->static_fields->Null;
        thunk_FUN_01c20e04();
        pSVar7 = InControl_InputManager_TypeInfo->static_fields->OnSetup;
        InControl_InputManager_TypeInfo->static_fields->isSetup = true;
        if (pSVar7 != (System_Action_o *)0x0) {
          (*(code *)(pSVar7->fields).super.super.invoke_impl)
                    ((pSVar7->fields).super.super.method_code,(pSVar7->fields).super.super.method);
          if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar7 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__48_0;
          if (pSVar7 == (System_Action_o *)0x0) {
            if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar7 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            ppSVar5 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__48_0;
            *ppSVar5 = pSVar7;
            thunk_FUN_01c20e04(ppSVar5,pSVar7);
          }
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          ppSVar5 = &InControl_InputManager_TypeInfo->static_fields->OnSetup;
          *ppSVar5 = pSVar7;
          thunk_FUN_01c20e04(ppSVar5,pSVar7);
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          InControl_InputManager__AddDeviceManager<object>
                    (Method_InControl_InputManager_AddDeviceManager<UnityInputDeviceManager>__);
          value = (System_Action_InputDevice__o *)
                  thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
          System_Action<object>___ctor();
          method_01 = extraout_x1;
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            method_01 = extraout_x1_00;
          }
          InControl_InputManager__add_OnActiveDeviceChanged(value,method_01);
          InControl_InputManager__UpdateDeviceManagersDualMode(method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

