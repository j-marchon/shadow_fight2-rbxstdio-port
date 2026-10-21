// InControl.InputManager$$.cctor @ RVA 0x3217A94

void InControl_InputManager___cctor(MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Action_o **ppSVar2;
  System_Action_ulong__float__o *pSVar3;
  System_Action_ulong__float__o **ppSVar4;
  System_Action_InputDevice__o *pSVar5;
  System_Action_InputDevice__o **ppSVar6;
  System_Collections_Generic_List_InputDeviceManager__o *__this;
  System_Collections_Generic_List_InputDeviceManager__o **ppSVar7;
  System_Collections_Generic_List_InputDevice__o *__this_00;
  System_Collections_Generic_List_InputDevice__o **ppSVar8;
  InControl_VersionInfo_Fields IVar9;
  
  if ((DAT_04566ee1 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Action<ulong,_float>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<InputDeviceManager>_TypeInfo);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_0__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_1__);
                    /* try { // try from 03317b4c to 03417bd7 has its CatchHandler @ 03317b4c
                       catch() { ... } // from try @ 03317b4c with catch @ 03317b4c
                       catch() { ... } // from try @ 03317bf8 with catch @ 03317b4c
                       catch() { ... } // from try @ 03317c1c with catch @ 03317b4c
                       catch() { ... } // from try @ 03317c44 with catch @ 03317b4c
                       catch() { ... } // from try @ 03317c84 with catch @ 03317b4c */
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_2__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_3__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_4__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_5__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_6__);
    FUN_01bab630(&InControl_InputManager_<>c_TypeInfo);
    DAT_04566ee1 = 1;
  }
                    /* try { // try from 03317bd8 to 03417bdf has its CatchHandler @ 03317c28 */
  IVar9 = (InControl_VersionInfo_Fields)InControl_VersionInfo__InControlVersion((MethodInfo *)0x0);
  (InControl_InputManager_TypeInfo->static_fields->Version).fields = IVar9;
                    /* try { // try from 03317bf4 to 03417bf7 has its CatchHandler @ 03317c24 */
                    /* try { // try from 03317bf8 to 03417c17 has its CatchHandler @ 03317b4c */
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03317c18 to 03417c1b has its CatchHandler @ 03317c20 */
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 03317c1c to 03417c3f has its CatchHandler @ 03317b4c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317c18 with catch @ 03317c20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317bf4 with catch @ 03317c24
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317bd8 with catch @ 03317c28
                        */
  System_Action___ctor();
  ppSVar2 = &InControl_InputManager_TypeInfo->static_fields->OnSetup;
  *ppSVar2 = pSVar1;
                    /* try { // try from 03317c40 to 03417c43 has its CatchHandler @ 03317c6c */
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* try { // try from 03317c44 to 03417c7b has its CatchHandler @ 03317b4c */
  pSVar3 = (System_Action_ulong__float__o *)thunk_FUN_01bda818(System_Action<ulong,_float>_TypeInfo)
  ;
  System_Action<ulong,_float>___ctor();
                    /* catch() { ... } // from try @ 03317c40 with catch @ 03317c6c */
  ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->OnUpdate;
  *ppSVar4 = pSVar3;
                    /* try { // try from 03317c7c to 03417c83 has its CatchHandler @ 03317c98 */
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
                    /* try { // try from 03317c84 to 03417c8f has its CatchHandler @ 03317b4c */
                    /* try { // try from 03317c90 to 03417c97 has its CatchHandler @ 03317c98 */
  pSVar5 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03317c7c with catch @ 03317c98
                       catch(type#2 @ 00000000) { ... } // from try @ 03317c90 with catch @ 03317c98
                        */
  System_Action<object>___ctor();
  ppSVar6 = &InControl_InputManager_TypeInfo->static_fields->OnDeviceAttached;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &InControl_InputManager_TypeInfo->static_fields->OnDeviceDetached;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  __this = (System_Collections_Generic_List_InputDeviceManager__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InputDeviceManager>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<InputDeviceManager>__ctor__);
  ppSVar7 = &InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  *ppSVar7 = __this;
  thunk_FUN_01c20e04(ppSVar7,__this);
  if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager_TypeInfo->static_fields->activeDevice =
       InControl_InputDevice_TypeInfo->static_fields->Null;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_InputDevice__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InputDevice>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<InputDevice>__ctor__);
  ppSVar8 = &InControl_InputManager_TypeInfo->static_fields->devices;
  *ppSVar8 = __this_00;
  thunk_FUN_01c20e04(ppSVar8,__this_00);
  InControl_InputManager_TypeInfo->static_fields->isDualMode = false;
  return;
}

