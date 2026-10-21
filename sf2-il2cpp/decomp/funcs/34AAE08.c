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

