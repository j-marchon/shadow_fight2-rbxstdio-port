// InControl.InputManager$$ResetInternal @ RVA 0x3215A64

void InControl_InputManager__ResetInternal(MethodInfo *method)

{
  int32_t iVar1;
  System_Action_o **ppSVar2;
  System_Action_ulong__float__o **ppSVar3;
  System_Action_InputDevice__o **ppSVar4;
  InControl_InputManager_StaticFields *pIVar5;
  System_Collections_Generic_List_InputDevice__o *pSVar6;
  System_Collections_Generic_List_InputDeviceManager__o *pSVar7;
  System_Action_o *pSVar8;
  System_Action_ulong__float__o *pSVar9;
  System_Action_InputDevice__o *pSVar10;
  
                    /* try { // try from 03315a68 to 03415a6f has its CatchHandler @ 03315a70 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03315a54 with catch @ 03315a70
                       catch(type#2 @ 00000000) { ... } // from try @ 03315a68 with catch @ 03315a70
                        */
  if ((DAT_04566ec6 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Action<ulong,_float>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Clear__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_0__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_1__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_2__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_3__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_4__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_5__);
    FUN_01bab630(&InControl_InputManager_<>c_TypeInfo);
    DAT_04566ec6 = 1;
  }
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_0;
  if (pSVar8 == (System_Action_o *)0x0) {
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar2 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_0;
    *ppSVar2 = pSVar8;
    thunk_FUN_01c20e04(ppSVar2,pSVar8);
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar2 = &InControl_InputManager_TypeInfo->static_fields->OnSetup;
  *ppSVar2 = pSVar8;
  thunk_FUN_01c20e04(ppSVar2,pSVar8);
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar9 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_1;
  if (pSVar9 == (System_Action_ulong__float__o *)0x0) {
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar9 = (System_Action_ulong__float__o *)
             thunk_FUN_01bda818(System_Action<ulong,_float>_TypeInfo);
    System_Action<ulong,_float>___ctor();
    ppSVar3 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_1;
    *ppSVar3 = pSVar9;
    thunk_FUN_01c20e04(ppSVar3,pSVar9);
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar3 = &InControl_InputManager_TypeInfo->static_fields->OnUpdate;
  *ppSVar3 = pSVar9;
  thunk_FUN_01c20e04(ppSVar3,pSVar9);
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar10 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_2;
  if (pSVar10 == (System_Action_InputDevice__o *)0x0) {
                    /* try { // try from 03315c94 to 03415d9f has its CatchHandler @ 03315c94
                       catch() { ... } // from try @ 03315c94 with catch @ 03315c94
                       catch() { ... } // from try @ 03315e30 with catch @ 03315c94
                       catch() { ... } // from try @ 03315e68 with catch @ 03315c94
                       catch() { ... } // from try @ 03315e90 with catch @ 03315c94
                       catch() { ... } // from try @ 03315ec0 with catch @ 03315c94 */
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = (System_Action_InputDevice__o *)
              thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar4 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_2;
    *ppSVar4 = pSVar10;
    thunk_FUN_01c20e04(ppSVar4,pSVar10);
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged;
  *ppSVar4 = pSVar10;
  thunk_FUN_01c20e04(ppSVar4,pSVar10);
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar10 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_3;
  if (pSVar10 == (System_Action_InputDevice__o *)0x0) {
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = (System_Action_InputDevice__o *)
              thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar4 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_3;
    *ppSVar4 = pSVar10;
    thunk_FUN_01c20e04(ppSVar4,pSVar10);
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->OnDeviceAttached;
                    /* try { // try from 03315da0 to 03415da7 has its CatchHandler @ 03315e6c */
  *ppSVar4 = pSVar10;
  thunk_FUN_01c20e04(ppSVar4,pSVar10);
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03315db8 to 03415e2f has its CatchHandler @ 03315e74 */
    thunk_FUN_01ba7564();
  }
  pSVar10 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_4;
  if (pSVar10 == (System_Action_InputDevice__o *)0x0) {
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = (System_Action_InputDevice__o *)
              thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar4 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_4;
    *ppSVar4 = pSVar10;
    thunk_FUN_01c20e04(ppSVar4,pSVar10);
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03315e30 to 03415e5f has its CatchHandler @ 03315c94 */
    thunk_FUN_01ba7564();
  }
  ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->OnDeviceDetached;
  *ppSVar4 = pSVar10;
  thunk_FUN_01c20e04(ppSVar4,pSVar10);
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03315e60 to 03415e67 has its CatchHandler @ 03315e70 */
  pSVar10 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_5;
  if (pSVar10 == (System_Action_InputDevice__o *)0x0) {
                    /* try { // try from 03315e68 to 03415e8b has its CatchHandler @ 03315c94 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03315da0 with catch @ 03315e6c
                        */
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03315e60 with catch @ 03315e70
                        */
      thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03315db8 with catch @ 03315e74
                        */
    }
                    /* try { // try from 03315e8c to 03415e8f has its CatchHandler @ 03315eb0 */
    pSVar10 = (System_Action_InputDevice__o *)
              thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
                    /* try { // try from 03315e90 to 03415eb7 has its CatchHandler @ 03315c94 */
    System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 03315e8c with catch @ 03315eb0 */
    ppSVar4 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_5;
                    /* try { // try from 03315eb8 to 03415ebf has its CatchHandler @ 03315ed4 */
    *ppSVar4 = pSVar10;
    thunk_FUN_01c20e04(ppSVar4,pSVar10);
  }
                    /* try { // try from 03315ec0 to 03415ecb has its CatchHandler @ 03315c94 */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03315ecc to 03415ed3 has its CatchHandler @ 03315ed4 */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03315eb8 with catch @ 03315ed4
                       catch(type#2 @ 00000000) { ... } // from try @ 03315ecc with catch @ 03315ed4
                        */
  ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  *ppSVar4 = pSVar10;
  thunk_FUN_01c20e04(ppSVar4,pSVar10);
  pIVar5 = InControl_InputManager_TypeInfo->static_fields;
  pSVar7 = pIVar5->inputDeviceManagers;
  if (pSVar7 != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
    iVar1 = (pSVar7->fields)._size;
    (pSVar7->fields)._size = 0;
    (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar1,(MethodInfo *)0x0);
      pIVar5 = InControl_InputManager_TypeInfo->static_fields;
    }
    pSVar6 = pIVar5->devices;
    if (pSVar6 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
      iVar1 = (pSVar6->fields)._size;
      (pSVar6->fields)._size = 0;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      InControl_InputManager_TypeInfo->static_fields->activeDevice =
           InControl_InputDevice_TypeInfo->static_fields->Null;
      thunk_FUN_01c20e04();
      InControl_InputManager_TypeInfo->static_fields->isSetup = false;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

