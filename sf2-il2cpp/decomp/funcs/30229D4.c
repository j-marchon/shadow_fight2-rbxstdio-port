// InControl.UnityButtonSource$$GetState @ RVA 0x30229D4

bool InControl_UnityButtonSource__GetState
               (InControl_UnityButtonSource_o *__this,InControl_InputDevice_o *inputDevice,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *name;
  
  if ((DAT_04565c63 & 1) == 0) {
    FUN_01bab630(&InControl_UnityInputDevice_TypeInfo);
    DAT_04565c63 = 1;
  }
  if (inputDevice != (InControl_InputDevice_o *)0x0) {
    bVar1 = (InControl_UnityInputDevice_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (inputDevice->klass->_2).naturalAligment) &&
       ((inputDevice->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)InControl_UnityInputDevice_TypeInfo)) {
      name = InControl_UnityButtonSource__GetButtonKey
                       (*(int32_t *)&(inputDevice->fields).field_0x44,(__this->fields).buttonId,
                        method);
      bVar2 = UnityEngine_Input__GetKey(name,(MethodInfo *)0x0);
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

