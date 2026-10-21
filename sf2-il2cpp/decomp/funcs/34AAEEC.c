// InControl.UnityInputDeviceManager$$get_JoystickHash @ RVA 0x34AAEEC

System_String_o * InControl_UnityInputDeviceManager__get_JoystickHash(MethodInfo *method)

{
  System_String_array *value;
  System_String_o *pSVar1;
  System_String_o *str2;
  undefined4 local_24;
  
  if ((DAT_04568532 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2088);
    FUN_01bab630(&StringLiteral_1155);
    DAT_04568532 = 1;
  }
  value = UnityEngine_Input__GetJoystickNames((MethodInfo *)0x0);
  if (value != (System_String_array *)0x0) {
    local_24 = (undefined4)value->max_length;
    pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    str2 = System_String__Join(StringLiteral_1155,value,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1,StringLiteral_2088,str2,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

