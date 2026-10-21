// InControl.UnityInputDevice$$.ctor @ RVA 0x3159050

void InControl_UnityInputDevice___ctor
               (InControl_UnityInputDevice_o *__this,InControl_UnityInputDeviceProfile_o *profile,
               MethodInfo *method)

{
  MethodInfo *in_x3;
  System_String_o *name;
  
  if ((DAT_04566856 & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    DAT_04566856 = 1;
  }
  if (profile != (InControl_UnityInputDeviceProfile_o *)0x0) {
    name = (profile->fields)._Name_k__BackingField;
    if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    InControl_InputDevice___ctor((InControl_InputDevice_o *)__this,name,(MethodInfo *)0x0);
    InControl_UnityInputDevice__Initialize(__this,profile,0,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

