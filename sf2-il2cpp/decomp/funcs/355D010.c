// InControl.UnityInputDeviceProfile$$get_ButtonCount @ RVA 0x355D010

int32_t InControl_UnityInputDeviceProfile__get_ButtonCount
                  (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  InControl_InputControlMapping_array *pIVar1;
  
  pIVar1 = (__this->fields)._ButtonMappings_k__BackingField;
  if (pIVar1 != (InControl_InputControlMapping_array *)0x0) {
    return (int32_t)pIVar1->max_length;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

