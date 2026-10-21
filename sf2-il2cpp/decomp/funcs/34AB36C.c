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

