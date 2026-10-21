// InControl.UnityInputDeviceManager$$DetectAttachedJoystickDevices @ RVA 0x34AAF98

void InControl_UnityInputDeviceManager__DetectAttachedJoystickDevices
               (InControl_UnityInputDeviceManager_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *in_x3;
  ulong uVar4;
  
  pSVar3 = UnityEngine_Input__GetJoystickNames((MethodInfo *)0x0);
  if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar4 = 0;
  while( true ) {
    uVar2 = (uint)pSVar3->max_length;
    if ((long)(int)uVar2 <= (long)uVar4) {
      return;
    }
    if (uVar2 <= uVar4) break;
    ppSVar1 = pSVar3->m_Items + uVar4;
    uVar4 = uVar4 + 1;
    InControl_UnityInputDeviceManager__DetectAttachedJoystickDevice
              (__this,(int32_t)uVar4,*ppSVar1,in_x3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

