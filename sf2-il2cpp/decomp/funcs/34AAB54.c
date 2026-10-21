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
    FUN_01bab630(&StringLiteral_1);
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
  (__this->fields).joystickHash = StringLiteral_1;
  thunk_FUN_01c20e04();
  InControl_InputDeviceManager___ctor((InControl_InputDeviceManager_o *)__this,(MethodInfo *)0x0);
  InControl_UnityInputDeviceManager__AutoDiscoverDeviceProfiles(__this,method_00);
  InControl_UnityInputDeviceManager__RefreshDevices(__this,method_01);
  return;
}

