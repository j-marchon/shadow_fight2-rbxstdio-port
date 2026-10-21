// InControl.UnityInputDevice$$get_IsSupportedOnThisPlatform @ RVA 0x3159480

bool InControl_UnityInputDevice__get_IsSupportedOnThisPlatform
               (InControl_UnityInputDevice_o *__this,MethodInfo *method)

{
  bool bVar1;
  InControl_UnityInputDeviceProfile_o *__this_00;
  
  __this_00 = *(InControl_UnityInputDeviceProfile_o **)&(__this->fields)._JoystickId_k__BackingField
  ;
  if (__this_00 != (InControl_UnityInputDeviceProfile_o *)0x0) {
    bVar1 = InControl_UnityInputDeviceProfile__get_IsSupportedOnThisPlatform
                      (__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

